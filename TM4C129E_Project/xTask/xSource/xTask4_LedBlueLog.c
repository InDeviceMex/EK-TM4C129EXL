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

#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/xDriver_MCU.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

#include <xOS/xOS.h>

void xTask4_LedBlueLog(void* pvParams)
{
    uint32_t u32LastWakeTime = 0UL;
    uint32_t u32PinValue = (uint32_t) pvParams;
    static uint32_t u32CountTask = 0UL;
    u32LastWakeTime = OS_Task__uxGetTickCount ();

    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOG);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enPWM0);


    GPIO__enSetDigitalConfig(GPIO_enM0PWM4, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    PWM__vSetClockDivisorNum(PWM_enMODULE_0, 1UL);
    PWM_Generator__vSetDirection(PWM_enMODULE_0, PWM_enGEN_2, PWM_enDIRECTION_DOWN);
    PWM_Generator__vSetStall(PWM_enMODULE_0, PWM_enGEN_2, PWM_enSTALL_CONTINUE);
    PWM_Generator__vSetLoad(PWM_enMODULE_0, PWM_enGEN_2, 4799UL);
    PWM_Generator__vSetCompare(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, u32CountTask);
    PWM_Generator__vSetOutputAction(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, PWM_enEVENT_ZERO, PWM_enACTION_LOW);
    PWM_Generator__vSetOutputAction(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, PWM_enEVENT_LOAD, PWM_enACTION_NOTHING);
    PWM_Generator__vSetOutputAction(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, PWM_enEVENT_COMPA_DOWN, PWM_enACTION_HIGH);

    PWM_Generator__vSetCompareUpdate(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_BOTH, PWM_enGENERATOR_UPDATE_LOCAL);
    PWM_Generator__vSetLoadUpdate(PWM_enMODULE_0, PWM_enGEN_2, PWM_enGENERATOR_UPDATE_LOCAL);

    PWM_Output__vSetEnableUpdate(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, PWM_enOUTPUT_UPDATE_LOCAL);
    PWM_Output__vSetFaultCondition(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, PWM_enOUTPUT_ENABLE_DIS);
    PWM_Output__vSetInvert(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, PWM_enOUTPUT_ENABLE_DIS);
    PWM_Generator__vSetEnable(PWM_enMODULE_0, PWM_enGEN_2, PWM_enGENERATOR_ENABLE_ENA);
    PWM_Output__vSetEnable(PWM_enMODULE_0, PWM_enGEN_2, PWM_enOUTPUT_A, PWM_enOUTPUT_ENABLE_ENA);

    while(1UL)
    {

        if(u32CountTask < 4799UL)
        {
            u32CountTask+=64;
        }
        else
        {

            u32CountTask = 0UL;
        }

        if(u32CountTask >= 4799UL)
        {
            PWM0->INVERT |= PWM_INVERT_R_PWM4INV_MASK;
        }
        else
        {
            PWM0->INVERT &= ~PWM_INVERT_R_PWM4INV_MASK;
        }
        PWM0->GENERATOR[2UL].CMPA = u32CountTask;

        OS_Task__vDelayUntil(&u32LastWakeTime, 200UL);
    }
}


