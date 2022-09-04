/**
 *
 * @file xTask4_LedBlueLog.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 19 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xTask/xHeader/xTask4_LedBlueLog.h>
#include <xTask/xHeader/xSemaphores.h>

#include <xUtils/Conversion/Conversion_String2Number/Conversion_String2Number.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/xDriver_MCU.h>
#include <xDriver_MCU/CRC/Peripheral/CRC_Peripheral.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

#include <xOS/xOS.h>

void Led2ON(void);
void Led2Timeout(void);
void PwmServoLoadIrq(void);

#define DATA_ENCRYPT_1 (0xFF2233ABUL)
#define DATA_ENCRYPT_2 (0x12345678UL)

uint32_t u32FreqMotorNew = 0UL;
uint32_t u32FreqMotorNewOver = 0UL;
uint32_t u32FreqMotorOld = 0UL;
uint32_t u32FreqMotor = 0UL;;
uint32_t u32PWMMotor = 0UL;
uint32_t u32TimeoutCounterMotor = 0UL;


uint32_t u32CountTaskOld = 7850UL;
uint32_t u32CountTask = 7850UL;
uint64_t u64PWMValue = 0UL;
uint32_t u32ConfigurationDone = 0UL;

void Led2ON(void)
{
    u32FreqMotorNew = GPTM0_TA_TnPS_R;
    u32FreqMotorNew <<= 8UL;
    u32FreqMotorNew |= GPTM0_TA_TnR_R;
    u32FreqMotorNewOver = u32FreqMotorNew;
    u32TimeoutCounterMotor *= 0x1000000UL;
    u32FreqMotorNewOver += u32TimeoutCounterMotor;
    u32FreqMotor = u32FreqMotorNewOver - u32FreqMotorOld;
    u32TimeoutCounterMotor = 0UL;
    u32FreqMotorOld = u32FreqMotorNew;
}

void Led2Timeout(void)
{
    u32TimeoutCounterMotor++;
    if(1UL < u32TimeoutCounterMotor)
    {
        u32FreqMotorNew = 0UL;
        u32FreqMotorNewOver = 0UL;
        u32FreqMotorOld = 0UL;
        u32FreqMotor = 0UL;
        u32TimeoutCounterMotor = 0UL;
    }
}

void PwmServoLoadIrq(void)
{
    if(u32CountTaskOld > u32CountTask)
    {
        u32CountTaskOld -= 157UL;
    }
    else if (u32CountTaskOld < u32CountTask)
    {
        u32CountTaskOld += 157UL;
    }

    PWM0_GEN2_CMPA_R = ((uint32_t) u32CountTaskOld + 7500UL) - 1UL;

    if(u32CountTaskOld == u32CountTask)
    {
        GPTM4_ICR_R = GPTM_ICR_R_TATOCINT_MASK;
        GPTM4_IMR_R &= ~GPTM_IMR_R_TATOIM_MASK;
    }

}

void xTask4_LedBlueLog(void* pvParams)
{
    uint32_t u32LastWakeTime = 0UL;
    boolean_t boSemphoreReceived = FALSE;
    static uint32_t u32Count = 37499UL;
    u32LastWakeTime = OS_Task__uxGetTickCount();
    uint8_t pu8DataTerminal[10UL] = {0UL};
    uint8_t *ppu8DataTerminal = pu8DataTerminal;
    UART_nFIFO_EMPTY enDataAvailable = UART_enFIFO_NO_EMPTY;
    uint32_t u32CountDataTerminal = 0UL;
    uint32_t u32PwmCount = 0UL;

    /*Remove and replace by DES APIs*/
    SYSCTL__vEnRunModePeripheral(SYSCTL_enCCM);

    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOF);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOG);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enPWM0);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enTIMER4);



    GPIO__enSetDigitalConfig(GPIO_enM0PWM2, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enM0PWM3, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enM0PWM4, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enT0CCP0_L4, GPIO_enCONFIG_INPUT_2MA_PUSHPULL);

    TIMER__vRegisterIRQSourceHandler(&Led2ON, TIMER_enT0A, TIMER_enINTERRUPT_CAPTURE_EVENT);
    TIMER__vSetClockSource(TIMER_enT0A, TIMER_enCLOCK_SYSCLK);
    TIMER__vEnInterruptVector(TIMER_enT0A, (TIMER_nPRIORITY) NVIC_enPriority_TIMER0A);
    TIMER__vEnInterruptSource(TIMER_enT0A, TIMER_enINT_CAPTURE_EVENT);
    TIMER__vSetStall(TIMER_enT0A, TIMER_enSTALL_FREEZE);
    TIMER__enSetMode_ReloadMatch(TIMER_enT0A, TIMER_enMODE_EDGE_TIME_POSITIVE_INDIVIDUAL_UP,
                                 0xFFFFFFUL, 0UL);

    TIMER__vRegisterIRQSourceHandler(&Led2Timeout, TIMER_enT0B, TIMER_enINTERRUPT_TIMEOUT);
    TIMER__vSetClockSource(TIMER_enT0B, TIMER_enCLOCK_SYSCLK);
    TIMER__vEnInterruptVector(TIMER_enT0B, (TIMER_nPRIORITY) NVIC_enPriority_TIMER0A);
    TIMER__vEnInterruptSource(TIMER_enT0B, TIMER_enINT_TIMEOUT);
    TIMER__vSetStall(TIMER_enT0B, TIMER_enSTALL_FREEZE);
    TIMER__enSetMode_ReloadMatch(TIMER_enT0B, TIMER_enMODE_PERIODIC_INDIVIDUAL_UP,
                                 0xFFFFFFFUL, 0UL);

    TIMER__vSetEnable(TIMER_enT0A, TIMER_enENABLE_START);
    TIMER__vSetEnable(TIMER_enT0B, TIMER_enENABLE_START);
    TIMER__vSetSyncronize((TIMER_nSYNC) (TIMER_enSYNC_T0A | TIMER_enSYNC_T0B));



    TIMER__vRegisterIRQSourceHandler(&PwmServoLoadIrq, TIMER_enT4W, TIMER_enINTERRUPT_TIMEOUT);
    TIMER__vSetClockSource(TIMER_enT4W, TIMER_enCLOCK_SYSCLK);
    TIMER__vEnInterruptVector(TIMER_enT4W, (TIMER_nPRIORITY) NVIC_enPriority_TIMER4A);
    TIMER__vSetStall(TIMER_enT4W, TIMER_enSTALL_FREEZE);
    TIMER__enSetMode_ReloadMatch(TIMER_enT4W, TIMER_enMODE_PERIODIC_WIDE_UP,
                                 (1200000UL - 1UL), 0UL);

    TIMER__vClearInterruptSource(TIMER_enT4W, TIMER_enINT_TIMEOUT);
    /* TIMER__vSetEnable(TIMER_enT4W, TIMER_enENABLE_START); */




    /*PWM_Generator__vRegisterIRQSourceHandler(&PwmServoLoadIrq, PWM_enMODULE_0, PWM_enGEN_2, PWM_enGEN_INTERRUPT_LOAD);*/

    PWM__vSetClockDivisorNum(PWM_enMODULE_0, 8UL);

    PWM_Generator__vSetDirection(PWM_enMODULE_0, PWM_enGEN_1, PWM_enDIRECTION_DOWN);
    PWM_Generator__vSetDirection(PWM_enMODULE_0, PWM_enGEN_2, PWM_enDIRECTION_DOWN);

    PWM_Generator__vSetStall(PWM_enMODULE_0, PWM_enGEN_1, PWM_enSTALL_CONTINUE);
    PWM_Generator__vSetStall(PWM_enMODULE_0, PWM_enGEN_2, PWM_enSTALL_CONTINUE);
    PWM_Generator__vSetLoad(PWM_enMODULE_0, PWM_enGEN_1, 37499UL);
    PWM_Generator__vSetLoad(PWM_enMODULE_0, PWM_enGEN_2, 37499UL);

    PWM_Generator__vSetCompare(PWM_enMODULE_0,PWM_enGEN_1, PWM_enOUTPUT_BOTH, u32Count);
    PWM_Generator__vSetCompare(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, 1UL);

    PWM_Generator__vSetOutputAction(PWM_enMODULE_0, PWM_enGEN_1, PWM_enOUTPUT_BOTH, PWM_enEVENT_ZERO, PWM_enACTION_HIGH);
    PWM_Generator__vSetOutputAction(PWM_enMODULE_0, PWM_enGEN_1, PWM_enOUTPUT_BOTH, PWM_enEVENT_LOAD, PWM_enACTION_NOTHING);
    PWM_Generator__vSetOutputAction(PWM_enMODULE_0, PWM_enGEN_1, PWM_enOUTPUT_BOTH, PWM_enEVENT_COMPA_DOWN, PWM_enACTION_LOW);

    PWM_Generator__vSetOutputAction(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, PWM_enEVENT_ZERO, PWM_enACTION_LOW);
    PWM_Generator__vSetOutputAction(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, PWM_enEVENT_LOAD, PWM_enACTION_NOTHING);
    PWM_Generator__vSetOutputAction(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, PWM_enEVENT_COMPA_DOWN, PWM_enACTION_HIGH);

    PWM_Output__vSetEnableUpdate(PWM_enMODULE_0, PWM_enGEN_1, PWM_enOUTPUT_BOTH, PWM_enOUTPUT_UPDATE_LOCAL);
    PWM_Generator__vSetLoadUpdate(PWM_enMODULE_0, PWM_enGEN_2, PWM_enGENERATOR_UPDATE_LOCAL);

    PWM_Output__vSetFaultCondition(PWM_enMODULE_0, PWM_enGEN_1, PWM_enOUTPUT_BOTH, PWM_enOUTPUT_ENABLE_DIS);
    PWM_Output__vSetFaultCondition(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, PWM_enOUTPUT_ENABLE_DIS);
    PWM_Output__vSetInvert(PWM_enMODULE_0, PWM_enGEN_1, PWM_enOUTPUT_BOTH, PWM_enOUTPUT_ENABLE_DIS);
    PWM_Output__vSetInvert(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, PWM_enOUTPUT_ENABLE_DIS);

   /*

    PWM_Generator__vEnInterruptVector(PWM_enMODULE_0, PWM_enGEN_2, (PWM_nPRIORITY) NVIC_enPriority_PWM0GEN2);
    PWM_Generator__vEnInterrupt(PWM_enMODULE_0, PWM_enGENMASK_2);
    PWM_Output__vClearInterruptSource(PWM_enMODULE_0, PWM_enGEN_2, PWM_enGEN_INT_SOURCE_LOAD);

    */

    PWM_Generator__vSetEnable(PWM_enMODULE_0, PWM_enGEN_1, PWM_enGENERATOR_ENABLE_ENA);
    PWM_Generator__vSetEnable(PWM_enMODULE_0, PWM_enGEN_2, PWM_enGENERATOR_ENABLE_ENA);

    PWM_Output__vSetEnable(PWM_enMODULE_0, PWM_enGEN_1, PWM_enOUTPUT_BOTH, PWM_enOUTPUT_ENABLE_ENA);
    PWM_Output__vSetEnable(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, PWM_enOUTPUT_ENABLE_ENA);

    u32ConfigurationDone = 1UL;

    while(1UL)
    {

        if(0UL != u32FreqMotor)
        {
            u32PWMMotor = 1200000000UL;
            u32PWMMotor /= u32FreqMotor;
        }
        else
        {
            u32PWMMotor = 0UL;
        }


        if(0UL != UartSemaphoreHandle)
        {
            boSemphoreReceived = OS_Semaphore__boTake(UartSemaphoreHandle, 0UL);
            if(FALSE != boSemphoreReceived)
            {
                enDataAvailable = UART__enIsFifoReceiveEmpty(UART_enMODULE_0);
                GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 7UL,
                                     "RPM percentage: %d.%d%%   ",
                                     (u32PWMMotor/10UL),(u32PWMMotor%10UL)
                                     );
                OS_Semaphore__boGive(UartSemaphoreHandle);
            }
        }

        if( UART_enFIFO_EMPTY != enDataAvailable)
        {

            if(0UL != UartSemaphoreHandle)
            {
                boSemphoreReceived = OS_Semaphore__boTake(UartSemaphoreHandle, 0UL);
                if(FALSE != boSemphoreReceived)
                {
                    pu8DataTerminal[u32CountDataTerminal] = UART__u32GetData(UART_enMODULE_0);
                    OS_Semaphore__boGive(UartSemaphoreHandle);
                }
            }


            if(('9' < (char) pu8DataTerminal[u32CountDataTerminal]) || ('0' > (char) pu8DataTerminal[u32CountDataTerminal]))
            {
                pu8DataTerminal[u32CountDataTerminal] = 0U;
                ppu8DataTerminal = pu8DataTerminal;
                u32PwmCount = Conv__s32String2UInteger((const char**) &ppu8DataTerminal, &u64PWMValue);
                if(0UL != u32PwmCount)
                {
                    if(u64PWMValue > 100UL)
                    {
                        u64PWMValue = 100UL;
                    }

                    if(0UL != UartSemaphoreHandle)
                    {
                        boSemphoreReceived = OS_Semaphore__boTake(UartSemaphoreHandle, 0UL);
                        if(FALSE != boSemphoreReceived)
                        {
                            GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 8UL,
                                                 "Insert new PWM value: %d  \n\r",
                                                 u64PWMValue
                                                 );
                            OS_Semaphore__boGive(UartSemaphoreHandle);
                        }
                    }

                    u32PwmCount = 0UL;
                    u32CountDataTerminal = 0UL;
                    u32Count = 37500UL;
                    u32Count *= (uint32_t) u64PWMValue;
                    u32Count /= 100UL;
                    u32Count--;

                    if(u32Count == 0UL)
                    {
                        PWM0->INVERT |=  PWM_INVERT_R_PWM3INV_MASK | PWM_INVERT_R_PWM2INV_MASK;
                    }
                    else
                    {
                        PWM0->INVERT &= ~(PWM_INVERT_R_PWM3INV_MASK | PWM_INVERT_R_PWM2INV_MASK);
                    }
                    PWM_Generator__vSetCompare(PWM_enMODULE_0,PWM_enGEN_1, PWM_enOUTPUT_BOTH, u32Count);


                    u32CountTask = u64PWMValue;
                    u32CountTask *= 157UL;
                    TIMER__vClearInterruptSource(TIMER_enT4W, TIMER_enINT_TIMEOUT);
                    TIMER__vEnInterruptSource(TIMER_enT4W, TIMER_enINT_TIMEOUT);
                }
            }
            else
            {
                u32CountDataTerminal++;
            }
        }

        OS_Task__vDelayUntil(&u32LastWakeTime, 200UL);
    }
}


