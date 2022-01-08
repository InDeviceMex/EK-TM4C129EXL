/**
 *
 * @file xTask5_LedGreenLog.c
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
#include <xTask/xHeader/xTask5_LedGreenLog.h>

#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/xDriver_MCU.h>
#include <xDriver_MCU/CRC/Peripheral/CRC_Peripheral.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

#include <xOS/xOS.h>

void Led2ON(void);
void Led2Timeout(void);

#define DATA_ENCRYPT_1 (0xFF2233ABUL)
#define DATA_ENCRYPT_2 (0x12345678UL)

uint32_t u32FreqMotorNew = 0UL;
uint32_t u32FreqMotorNewOver = 0UL;
uint32_t u32FreqMotorOld = 0UL;
uint32_t u32FreqMotor = 0UL;;
uint32_t u32PWMMotor = 0UL;
uint32_t u32TimeoutCounterMotor = 0UL;

void Led2ON(void)
{
    u32FreqMotorNew = GPTM0_TA_TnPS_R;
    u32FreqMotorNew <<= 8UL;
    u32FreqMotorNew |= GPTM0_TA_TnR_R;
    u32FreqMotorNewOver = u32FreqMotorNew;
    u32FreqMotorNewOver += u32TimeoutCounterMotor * 0x1000000UL;
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
void xTask5_LedGreenLog(void* pvParams)
{
    uint32_t u32LastWakeTime = 0UL;
    uint32_t u32PinValue = (uint32_t) pvParams;
    static uint32_t u32CountTask = 4799UL;
    u32LastWakeTime = OS_Task__uxGetTickCount();

    /*Remove and replace by DES APIs*/
    SYSCTL__vEnRunModePeripheral(SYSCTL_enCCM);

    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOF);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enPWM0);


    GPIO__enSetDigitalConfig(GPIO_enM0PWM2, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enM0PWM3, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
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
                                 0xFFFFFFUL, 0UL);

    TIMER__vSetEnable(TIMER_enT0A, TIMER_enENABLE_START);
    TIMER__vSetEnable(TIMER_enT0B, TIMER_enENABLE_START);
    TIMER__vSetSyncronize(TIMER_enSYNC_T0A | TIMER_enSYNC_T0B);

    PWM__vSetClockDivisorNum(PWM_enMODULE_0, 1UL);

    PWM_Generator__vSetDirection(PWM_enMODULE_0, PWM_enGEN_1, PWM_enDIRECTION_DOWN);
    PWM_Generator__vSetStall(PWM_enMODULE_0, PWM_enGEN_1, PWM_enSTALL_CONTINUE);
    PWM_Generator__vSetLoad(PWM_enMODULE_0, PWM_enGEN_1, 4799UL);

    PWM_Generator__vSetCompare(PWM_enMODULE_0, PWM_enOUTPUT_BOTH, PWM_enGEN_1, u32CountTask);
    PWM_Generator__vSetOutputAction(PWM_enMODULE_0, PWM_enGEN_1, PWM_enOUTPUT_BOTH, PWM_enEVENT_ZERO, PWM_enACTION_LOW);
    PWM_Generator__vSetOutputAction(PWM_enMODULE_0, PWM_enGEN_1, PWM_enOUTPUT_BOTH, PWM_enEVENT_LOAD, PWM_enACTION_NOTHING);
    PWM_Generator__vSetOutputAction(PWM_enMODULE_0, PWM_enGEN_1, PWM_enOUTPUT_BOTH, PWM_enEVENT_COMPA_DOWN, PWM_enACTION_HIGH);

    PWM_Output__vSetEnableUpdate(PWM_enMODULE_0, PWM_enGEN_1, PWM_enOUTPUT_BOTH, PWM_enOUTPUT_UPDATE_LOCAL);
    PWM_Output__vSetFaultCondition(PWM_enMODULE_0, PWM_enGEN_1, PWM_enOUTPUT_BOTH, PWM_enOUTPUT_ENABLE_DIS);
    PWM_Output__vSetInvert(PWM_enMODULE_0, PWM_enGEN_1, PWM_enOUTPUT_BOTH, PWM_enOUTPUT_ENABLE_DIS);
    PWM_Generator__vSetEnable(PWM_enMODULE_0, PWM_enGEN_1, PWM_enGENERATOR_ENABLE_ENA);

    PWM_Output__vSetEnable(PWM_enMODULE_0, PWM_enGEN_1, PWM_enOUTPUT_BOTH, PWM_enOUTPUT_ENABLE_ENA);

#if 0
    uint32_t u32DataEncript1 = 0UL;
    uint32_t u32DataEncript2 = 0UL;
    uint32_t u32DataDesencript1 = 0UL;
    uint32_t u32DataDesencript2 = 0UL;
    uint32_t u32DataCRC1 = 0UL;
    uint32_t u32DataCRC2 = 0UL;
    char* pcCRCValue = "123456789";
    char* pcCRCValuepointer = pcCRCValue;
    (*((volatile uint32_t*) (0x44038000UL + 0x34))) =  0x2UL;
    while(((*((volatile uint32_t*) (0x44038000UL + 0x38))) & 0x1UL) == 0UL);
    (*((volatile uint32_t*) (0x44038000UL + 0x34))) =  0x0UL;
    (*((volatile uint32_t*) (0x44038000UL + 0x20))) |=  0x4UL;

    (*((volatile uint32_t*) (0x44038000UL + 0x10))) =  0x05734905UL;
    (*((volatile uint32_t*) (0x44038000UL + 0x14))) =  0x78983427UL;

    (*((volatile uint32_t*) (0x44038000UL + 0x28))) =  DATA_ENCRYPT_1;
    (*((volatile uint32_t*) (0x44038000UL + 0x2C))) =  DATA_ENCRYPT_2;
    while(((*((volatile uint32_t*) (0x44038000UL + 0x20))) & 0x1UL) == 0UL);
    u32DataEncript1 = (*((volatile uint32_t*) (0x44038000UL + 0x28)));
    u32DataEncript2 = (*((volatile uint32_t*) (0x44038000UL + 0x2C)));


    (*((volatile uint32_t*) (0x44038000UL + 0x20))) &=  ~0x4UL;
    (*((volatile uint32_t*) (0x44038000UL + 0x28))) =  u32DataEncript1;
    (*((volatile uint32_t*) (0x44038000UL + 0x2C))) =  u32DataEncript2;
    while(((*((volatile uint32_t*) (0x44038000UL + 0x20))) & 0x1UL) == 0UL);
    u32DataDesencript1 = (*((volatile uint32_t*) (0x44038000UL + 0x28)));
    u32DataDesencript2 = (*((volatile uint32_t*) (0x44038000UL + 0x2C)));

    while((u32DataDesencript1 != DATA_ENCRYPT_1) || (u32DataDesencript2 != DATA_ENCRYPT_2));

    /* CRC-16/CCITT-FALSE */
    CRC->SEED = 0UL;
    CRC->CTRL = CRC_CTRL_R_TYPE_POL_1021 | CRC_CTRL_R_ENDIAN_B3_B2_B1_B0 | CRC_CTRL_R_BR_UNCHANGED |
                CRC_CTRL_R_OBR_UNCHANGED | CRC_CTRL_R_RESINV_UNCHANGED | CRC_CTRL_R_SIZE_BYTE |
                CRC_CTRL_R_INIT_1S;

    pcCRCValuepointer = pcCRCValue;
    while(0UL != (uint32_t) *pcCRCValuepointer)
    {
        CRC->DIN = *pcCRCValuepointer;
        pcCRCValuepointer++;
    }
    u32DataCRC2 = CRC->RSLTPP;
    u32DataCRC2 &= 0xFFFF;

    u32DataCRC1 = CRC16__u16Calculate(pcCRCValue, 9U, CRC16_enSubType_CCITT_FALSE);

    while(u32DataCRC2 != u32DataCRC1);


    /* CRC-16/ARC */
    CRC->SEED = 0UL;
    CRC->CTRL = CRC_CTRL_R_TYPE_POL_8005 | CRC_CTRL_R_ENDIAN_B3_B2_B1_B0 | CRC_CTRL_R_BR_REVERSE |
                CRC_CTRL_R_OBR_UNCHANGED | CRC_CTRL_R_RESINV_UNCHANGED | CRC_CTRL_R_SIZE_BYTE |
                CRC_CTRL_R_INIT_0S;
    pcCRCValuepointer = pcCRCValue;
    while(0UL != (uint32_t) *pcCRCValuepointer)
    {
        CRC->DIN = *pcCRCValuepointer;
        pcCRCValuepointer++;
    }
    u32DataCRC2 = CRC->RSLTPP;
    u32DataCRC2 &= 0xFFFF;
    u32DataCRC2 = MCU__u16ReverseHalfWorld(u32DataCRC2);

    u32DataCRC1 = CRC16__u16Calculate(pcCRCValue, 9U, CRC16_enSubType_ARC);

    while(u32DataCRC2 != u32DataCRC1);

    /* CRC-16/AUG-CCITT */
    CRC->SEED = 0x1D0FUL;
    CRC->CTRL = CRC_CTRL_R_TYPE_POL_1021 | CRC_CTRL_R_ENDIAN_B3_B2_B1_B0 | CRC_CTRL_R_BR_UNCHANGED |
                CRC_CTRL_R_OBR_UNCHANGED | CRC_CTRL_R_RESINV_UNCHANGED | CRC_CTRL_R_SIZE_BYTE |
                CRC_CTRL_R_INIT_SEED;
    pcCRCValuepointer = pcCRCValue;
    while(0UL != (uint32_t) *pcCRCValuepointer)
    {
        CRC->DIN = *pcCRCValuepointer;
        pcCRCValuepointer++;
    }
    u32DataCRC2 = CRC->RSLTPP;
    u32DataCRC2 &= 0xFFFF;

    u32DataCRC1 = CRC16__u16Calculate(pcCRCValue, 9U, CRC16_enSubType_AUG_CCITT);

    while(u32DataCRC2 != u32DataCRC1);

    /* CRC-16/BUYPASS */
    CRC->SEED = 0x0UL;
    CRC->CTRL = CRC_CTRL_R_TYPE_POL_8005 | CRC_CTRL_R_ENDIAN_B3_B2_B1_B0 | CRC_CTRL_R_BR_UNCHANGED |
                CRC_CTRL_R_OBR_UNCHANGED | CRC_CTRL_R_RESINV_UNCHANGED | CRC_CTRL_R_SIZE_BYTE |
                CRC_CTRL_R_INIT_0S;
    pcCRCValuepointer = pcCRCValue;
    while(0UL != (uint32_t) *pcCRCValuepointer)
    {
        CRC->DIN = *pcCRCValuepointer;
        pcCRCValuepointer++;
    }
    u32DataCRC2 = CRC->RSLTPP;
    u32DataCRC2 &= 0xFFFF;

    u32DataCRC1 = CRC16__u16Calculate(pcCRCValue, 9U, CRC16_enSubType_BUYPASS);

    while(u32DataCRC2 != u32DataCRC1);

    /* CRC-16/DDS-110 */
    CRC->SEED = 0x800DUL;
    CRC->CTRL = CRC_CTRL_R_TYPE_POL_8005 | CRC_CTRL_R_ENDIAN_B3_B2_B1_B0 | CRC_CTRL_R_BR_UNCHANGED |
                CRC_CTRL_R_OBR_UNCHANGED | CRC_CTRL_R_RESINV_UNCHANGED | CRC_CTRL_R_SIZE_BYTE |
                CRC_CTRL_R_INIT_SEED;
    pcCRCValuepointer = pcCRCValue;
    while(0UL != (uint32_t) *pcCRCValuepointer)
    {
        CRC->DIN = *pcCRCValuepointer;
        pcCRCValuepointer++;
    }
    u32DataCRC2 = CRC->RSLTPP;
    u32DataCRC2 &= 0xFFFF;

    u32DataCRC1 = CRC16__u16Calculate(pcCRCValue, 9U, CRC16_enSubType_DDS_110);

    while(u32DataCRC2 != u32DataCRC1);

    /* CRC-16/GENIBUS */
    CRC->SEED = 0UL;
    CRC->CTRL = CRC_CTRL_R_TYPE_POL_1021 | CRC_CTRL_R_ENDIAN_B3_B2_B1_B0 | CRC_CTRL_R_BR_UNCHANGED |
                CRC_CTRL_R_OBR_UNCHANGED | CRC_CTRL_R_RESINV_INVERT | CRC_CTRL_R_SIZE_BYTE |
                CRC_CTRL_R_INIT_1S;
    pcCRCValuepointer = pcCRCValue;
    while(0UL != (uint32_t) *pcCRCValuepointer)
    {
        CRC->DIN = *pcCRCValuepointer;
        pcCRCValuepointer++;
    }
    u32DataCRC2 = CRC->RSLTPP;
    u32DataCRC2 &= 0xFFFF;

    u32DataCRC1 = CRC16__u16Calculate(pcCRCValue, 9U, CRC16_enSubType_GENIBUS);

    while(u32DataCRC2 != u32DataCRC1);


    /* CRC-16/MAXIM */
    CRC->SEED = 0UL;
    CRC->CTRL = CRC_CTRL_R_TYPE_POL_8005 | CRC_CTRL_R_ENDIAN_B3_B2_B1_B0 | CRC_CTRL_R_BR_REVERSE |
                CRC_CTRL_R_OBR_UNCHANGED | CRC_CTRL_R_RESINV_INVERT | CRC_CTRL_R_SIZE_BYTE |
                CRC_CTRL_R_INIT_0S;
    pcCRCValuepointer = pcCRCValue;
    while(0UL != (uint32_t) *pcCRCValuepointer)
    {
        CRC->DIN = *pcCRCValuepointer;
        pcCRCValuepointer++;
    }
    u32DataCRC2 = CRC->RSLTPP;
    u32DataCRC2 &= 0xFFFF;
    u32DataCRC2 = MCU__u16ReverseHalfWorld(u32DataCRC2);

    u32DataCRC1 = CRC16__u16Calculate(pcCRCValue, 9U, CRC16_enSubType_MAXIM);

    while(u32DataCRC2 != u32DataCRC1);

    /* CRC-16/MCRF4XX */
    CRC->SEED = 0UL;
    CRC->CTRL = CRC_CTRL_R_TYPE_POL_1021 | CRC_CTRL_R_ENDIAN_B3_B2_B1_B0 | CRC_CTRL_R_BR_REVERSE |
                CRC_CTRL_R_OBR_UNCHANGED | CRC_CTRL_R_RESINV_UNCHANGED | CRC_CTRL_R_SIZE_BYTE |
                CRC_CTRL_R_INIT_1S;
    pcCRCValuepointer = pcCRCValue;
    while(0UL != (uint32_t) *pcCRCValuepointer)
    {
        CRC->DIN = *pcCRCValuepointer;
        pcCRCValuepointer++;
    }
    u32DataCRC2 = CRC->RSLTPP;
    u32DataCRC2 &= 0xFFFF;
    u32DataCRC2 = MCU__u16ReverseHalfWorld(u32DataCRC2);

    u32DataCRC1 = CRC16__u16Calculate(pcCRCValue, 9U, CRC16_enSubType_MCRF4XX);

    while(u32DataCRC2 != u32DataCRC1);

    /* CRC-16/RIELLO */
    CRC->SEED = 0xB2AAUL;
    CRC->CTRL = CRC_CTRL_R_TYPE_POL_1021 | CRC_CTRL_R_ENDIAN_B3_B2_B1_B0 | CRC_CTRL_R_BR_REVERSE |
                CRC_CTRL_R_OBR_UNCHANGED | CRC_CTRL_R_RESINV_UNCHANGED | CRC_CTRL_R_SIZE_BYTE |
                CRC_CTRL_R_INIT_SEED;
    pcCRCValuepointer = pcCRCValue;
    while(0UL != (uint32_t) *pcCRCValuepointer)
    {
        CRC->DIN = *pcCRCValuepointer;
        pcCRCValuepointer++;
    }
    u32DataCRC2 = CRC->RSLTPP;
    u32DataCRC2 &= 0xFFFF;
    u32DataCRC2 = MCU__u16ReverseHalfWorld(u32DataCRC2);

    u32DataCRC1 = CRC16__u16Calculate(pcCRCValue, 9U, CRC16_enSubType_RIELLO);

    while(u32DataCRC2 != u32DataCRC1);

    /* CRC-16/TMS37157 */
    CRC->SEED = 0x89ECUL;
    CRC->CTRL = CRC_CTRL_R_TYPE_POL_1021 | CRC_CTRL_R_ENDIAN_B3_B2_B1_B0 | CRC_CTRL_R_BR_REVERSE |
                CRC_CTRL_R_OBR_UNCHANGED | CRC_CTRL_R_RESINV_UNCHANGED | CRC_CTRL_R_SIZE_BYTE |
                CRC_CTRL_R_INIT_SEED;
    pcCRCValuepointer = pcCRCValue;
    while(0UL != (uint32_t) *pcCRCValuepointer)
    {
        CRC->DIN = *pcCRCValuepointer;
        pcCRCValuepointer++;
    }
    u32DataCRC2 = CRC->RSLTPP;
    u32DataCRC2 &= 0xFFFF;
    u32DataCRC2 = MCU__u16ReverseHalfWorld(u32DataCRC2);

    u32DataCRC1 = CRC16__u16Calculate(pcCRCValue, 9U, CRC16_enSubType_TMS37157);

    while(u32DataCRC2 != u32DataCRC1);
#endif
    while(1UL)
    {

        if(u32CountTask >= 64UL)
        {
            u32CountTask-=64;
        }
        else
        {

            u32CountTask = 4799UL;
        }
        PWM0->GENERATOR[1UL].CMPB = u32CountTask;
        PWM0->GENERATOR[1UL].CMPA = u32CountTask;

        OS_Task__vSuspendAll();

        if(0UL != u32FreqMotor)
        {
            u32PWMMotor = 1200000000UL;
            u32PWMMotor /= u32FreqMotor;
        }
        else
        {
            u32PWMMotor = 0UL;
        }
        GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 7UL,
                             "FREC MOTOR: %d.%d            ",
                             (u32PWMMotor/10UL),(u32PWMMotor%10UL)
                             );
        OS_Task__boResumeAll();

        OS_Task__vDelayUntil(&u32LastWakeTime, 100UL);
    }
}
