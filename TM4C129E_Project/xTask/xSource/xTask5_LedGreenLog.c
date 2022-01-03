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

#include <xOS/xOS.h>

#define DATA_ENCRYPT_1 (0xFF2233ABUL)
#define DATA_ENCRYPT_2 (0x12345678UL)

void xTask5_LedGreenLog(void* pvParams)
{
    uint32_t u32LastWakeTime = 0UL;
    uint32_t u32PinValue = (uint32_t) pvParams;
    static uint32_t u32CountTask = 0x00FUL;
    u32LastWakeTime = OS_Task__uxGetTickCount();

    /*Remove and replace by DES APIs*/
    SYSCTL__vEnRunModePeripheral(SYSCTL_enCCM);

    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOF);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enPWM0);


    GPIO__enSetDigitalConfig(GPIO_enM0PWM2, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enM0PWM3, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    PWM0->CC = PWM_CC_R_USEPWM_DIVIDER | PWM_CC_R_PWMDIV_64;

    PWM0->GENERATOR[1UL].CTL |= PWM_GEN_CTL_R_MODE_DOWN | PWM_GEN_CTL_R_DEBUG_RUN;
    PWM0->GENERATOR[1UL].LOAD = 0x00FUL;
    PWM0->GENERATOR[1UL].CMPB = u32CountTask;
    PWM0->GENERATOR[1UL].GENB = PWM_GEN_GENB_R_ACTZERO_LOW | PWM_GEN_GENB_R_ACTLOAD_NOTHING | PWM_GEN_GENB_R_ACTCMPBD_HIGH;
    PWM0->GENERATOR[1UL].DBCTL = 0UL;

    PWM0->ENUPD |= PWM_ENUPD_R_ENUPD3_LOCAL_SYNC;
    PWM0->FAULT &= ~PWM_FAULT_R_FAULT3_ENA;
    PWM0->INVERT &= ~PWM_INVERT_R_PWM3INV_ENA;
    PWM0->GENERATOR[1UL].CTL |= PWM_GEN_CTL_R_ENABLE_ENA;
    PWM0->ENABLE |= PWM_ENABLE_R_PWM3EN_ENA;


    PWM0->GENERATOR[1UL].CMPA = u32CountTask;
    PWM0->GENERATOR[1UL].GENA = PWM_GEN_GENA_R_ACTZERO_LOW | PWM_GEN_GENA_R_ACTLOAD_NOTHING | PWM_GEN_GENA_R_ACTCMPAD_HIGH;

    PWM0->ENUPD |= PWM_ENUPD_R_ENUPD2_LOCAL_SYNC;
    PWM0->FAULT &= ~PWM_FAULT_R_FAULT2_ENA;
    PWM0->INVERT &= ~PWM_INVERT_R_PWM2INV_ENA;
    PWM0->ENABLE |= PWM_ENABLE_R_PWM2EN_ENA;

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

        if(u32CountTask > 0x0UL)
        {
            u32CountTask--;
        }
        else
        {

            u32CountTask = 0xFUL;
        }
        PWM0->GENERATOR[1UL].CMPB = u32CountTask;
        PWM0->GENERATOR[1UL].CMPA = u32CountTask;

        OS_Task__vDelayUntil(&u32LastWakeTime, 500UL);
    }
}
