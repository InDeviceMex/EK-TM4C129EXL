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

#include <xOS/xOS.h>

#define DATA_ENCRYPT_1 (0xFF2233ABUL)
#define DATA_ENCRYPT_2 (0x12345678UL)

void xTask5_LedGreenLog(void* pvParams)
{
    uint32_t u32LastWakeTime = 0UL;
    uint32_t u32PinValue = (uint32_t) pvParams;
    static uint32_t u32CountTask = 0UL;
    u32LastWakeTime = OS_Task__uxGetTickCount();
    GPIO__enSetDigitalConfig(GPIO_enGPIOF3, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    /*Remove and replace by DES APIs*/
    SYSCTL__vEnRunModePeripheral(SYSCTL_enCCM);


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
        GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, u32PinValue);
        u32PinValue ^= GPIO_enPIN_3;
        OS_Task__vSuspendAll();
        if(0UL == u32PinValue)
        {
            GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 0UL, "LED GREEN: ON  ");
        }
        else
        {
            GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 0UL, "LED GREEN: OFF ");
        }
        OS_Task__boResumeAll();
        u32CountTask++;
        OS_Task__vDelayUntil(&u32LastWakeTime, 1000UL);
    }
}
