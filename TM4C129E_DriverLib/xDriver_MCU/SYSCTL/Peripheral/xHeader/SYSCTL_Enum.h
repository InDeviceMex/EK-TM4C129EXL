/**
 *
 * @file SYSCTL_Enum.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 20 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

typedef enum
{
    SYSCTL_enOK = 0UL,
    SYSCTL_enERROR = 1UL,
}SYSCTL_nSTATUS;

typedef enum
{
    SYSCTL_enPRI0 = 0UL,
    SYSCTL_enPRI1 = 1UL,
    SYSCTL_enPRI2 = 2UL,
    SYSCTL_enPRI3 = 3UL,
    SYSCTL_enPRI4 = 4UL,
    SYSCTL_enPRI5 = 5UL,
    SYSCTL_enPRI6 = 6UL,
    SYSCTL_enPRI7 = 7UL,
    SYSCTL_enDEFAULT = 0x7FFFFFFFUL,
}SYSCTL_nPRIORITY;

typedef enum
{
    SYSCTL_enINTERRUPT_SW = 0UL,
    SYSCTL_enINTERRUPT_BOR = 1UL,
    SYSCTL_enINTERRUPT_MOF = 2UL,
    SYSCTL_enINTERRUPT_PLLL = 3UL,
    SYSCTL_enINTERRUPT_MOSCPUP = 4UL,
    SYSCTL_enINTERRUPT_MAX = 5UL,
}SYSCTL_nINTERRUPT;

typedef enum
{
    SYSCTL_enINT_SOURCE_NONE = 0x0UL,
    SYSCTL_enINT_SOURCE_BOR = 0x2UL,
    SYSCTL_enINT_SOURCE_MOF = 0x8UL,
    SYSCTL_enINT_SOURCE_PLLL = 0x40UL,
    SYSCTL_enINT_SOURCE_MOSCPUP = 0x100UL,
    SYSCTL_enINT_SOURCE_ALL = 0x14AUL,
}SYSCTL_nINT_SOURCE;

typedef enum
{
    SYSCTL_enINT_STATUS_INACTIVE = 0UL,
    SYSCTL_enINT_STATUS_ACTIVE = 1UL,
    SYSCTL_enINT_STATUS_UNDEF = 0x7FFFFFFFUL,
} SYSCTL_nINT_STATUS;

typedef enum
{
    SYSCTL_enPLL = 0UL,
    SYSCTL_enOSC = 1UL,
}SYSCTL_nBYPASS;

typedef enum
{
    SYSCTL_enVCO_320MHZ = 0UL,
    SYSCTL_enVCO_480MHZ = 1UL,
}SYSCTL_nVCO;

typedef enum
{
    SYSCTL_enNOPRESENT = 0UL,
    SYSCTL_enPRESENT = 1UL,
}SYSCTL_nPERIPHERAL_PRESENT;

typedef enum
{
    SYSCTL_enNOREADY = 0UL,
    SYSCTL_enREADY = 1UL,
}SYSCTL_nPERIPHERAL_READY;

typedef enum
{
    SYSCTL_enRESET_EXT = 0x00001UL,
    SYSCTL_enRESET_POR = 0x00002UL,
    SYSCTL_enRESET_BOR = 0x00004UL,
    SYSCTL_enRESET_WDT0 = 0x00008UL,
    SYSCTL_enRESET_SW = 0x00010UL,
    SYSCTL_enRESET_WDT1 = 0x00020UL,
    SYSCTL_enRESET_HSSR = 0x01000UL,
    SYSCTL_enRESET_MOSCFAIL = 0x10000UL,
    SYSCTL_enRESET_ALL = 0x1103FUL,
}SYSCTL_nRESET;

typedef enum
{
    SYSCTL_enRESET_BEHAVIOR_SYSRESET = 0x00002UL,
    SYSCTL_enRESET_BEHAVIOR_POR = 0x00003UL,
}SYSCTL_nRESET_BEHAVIOR;

typedef enum
{
    SYSCTL_enALTCLK_PIOSC = 0UL,
    SYSCTL_enALTCLK_RTCOSC = 3UL,
    SYSCTL_enALTCLK_LFIOSC = 4UL,
}SYSCTL_nALTCLK;

typedef enum
{
    SYSCTL_enXTAL_1MHZ = 0UL,
    SYSCTL_enXTAL_1_8432MHZ = 1UL,
    SYSCTL_enXTAL_2MHZ = 2UL,
    SYSCTL_enXTAL_2_4576MHZ = 3UL,
    SYSCTL_enXTAL_3_579545MHZ = 4UL,
    SYSCTL_enXTAL_3_6864MHZ = 5UL,
    SYSCTL_enXTAL_4MHZ = 6UL,
    SYSCTL_enXTAL_4_0960MHZ = 7UL,
    SYSCTL_enXTAL_4_9152MHZ = 8UL,
    SYSCTL_enXTAL_5MHZ = 9UL,
    SYSCTL_enXTAL_5_1200MHZ = 10UL,
    SYSCTL_enXTAL_6MHZ = 11UL,
    SYSCTL_enXTAL_6_1440MHZ = 12UL,
    SYSCTL_enXTAL_7_3728MHZ = 13UL,
    SYSCTL_enXTAL_8MHZ = 14UL,
    SYSCTL_enXTAL_8_1920MHZ = 15UL,
    SYSCTL_enXTAL_10MHZ = 16UL,
    SYSCTL_enXTAL_12MHZ = 17UL,
    SYSCTL_enXTAL_12_2880MHZ = 18UL,
    SYSCTL_enXTAL_13_5600MHZ = 19UL,
    SYSCTL_enXTAL_14_318180MHZ = 20UL,
    SYSCTL_enXTAL_16MHZ = 21UL,
    SYSCTL_enXTAL_16_33840MHZ = 22UL,
    SYSCTL_enXTAL_18MHZ = 23UL,
    SYSCTL_enXTAL_20MHZ = 24UL,
    SYSCTL_enXTAL_24MHZ = 25UL,
    SYSCTL_enXTAL_25MHZ = 26UL,
}SYSCTL_nXTAL;

typedef enum
{
    SYSCTL_enOSC_MOSC = 0UL,
    SYSCTL_enOSC_PIOSC = 1UL,
    SYSCTL_enOSC_30KHZ = 2UL,
    SYSCTL_enOSC_EXT_32KHZ = 3UL,
}SYSCTL_nOSC;

typedef enum
{
    SYSCTL_enOUTCLK_SRC_SYSCLK = 0UL,
    SYSCTL_enOUTCLK_SRC_PIOSC = 1UL,
    SYSCTL_enOUTCLK_SRC_MOSC = 2UL,
}SYSCTL_nOUTCLK_SRC;

typedef enum
{
    SYSCTL_enOUTCLK_DIS = 0UL,
    SYSCTL_enOUTCLK_ENA = 1UL,
}SYSCTL_nOUTCLK;

typedef enum
{
    SYSCTL_enBOR_EVENT_NONE = 0UL,
    SYSCTL_enBOR_EVENT_SYSINT = 1UL,
    SYSCTL_enBOR_EVENT_NMI = 2UL,
    SYSCTL_enBOR_EVENT_RESET = 3UL,
}SYSCTL_nBOR_EVENT;

typedef enum
{
    SYSCTL_enBOR_STATUS_NONE = 0UL,
    SYSCTL_enBOR_STATUS_TRIP = 1UL,
    SYSCTL_enBOR_STATUS_VDD = 1UL,
    SYSCTL_enBOR_STATUS_VDDA = 0x10UL,
}SYSCTL_nBOR_STATUS;

typedef enum
{
    SYSCTL_enLDO_VOTAGE_0_90V = 0x12UL,
    SYSCTL_enLDO_VOTAGE_0_95V = 0x13UL,
    SYSCTL_enLDO_VOTAGE_1_00V = 0x14UL,
    SYSCTL_enLDO_VOTAGE_1_05V = 0x15UL,
    SYSCTL_enLDO_VOTAGE_1_10V = 0x16UL,
    SYSCTL_enLDO_VOTAGE_1_15V = 0x17UL,
    SYSCTL_enLDO_VOTAGE_1_20V = 0x18UL,
}SYSCTL_nLDO_VOTAGE;

typedef enum
{
    SYSCTL_enNMI_EXTERNAL = 0x00000001UL,
    SYSCTL_enNMI_POWER = 0x00000004UL,
    SYSCTL_enNMI_WDT0 = 0x00000008UL,
    SYSCTL_enNMI_WDT1 = 0x00000020UL,
    SYSCTL_enNMI_TAMPER = 0x00000200UL,
    SYSCTL_enNMI_MOSCFAIL = 0x00001000UL,
    SYSCTL_enNMI_ALL = 0x0000122DUL,
}SYSCTL_nNMI;

typedef enum
{
    SYSCTL_enGATING_RUN = 0UL,
    SYSCTL_enGATING_SLEEP = 1UL,
}SYSCTL_nGATING;

typedef enum
{
    SYSCTL_enMOSC_VALIDATION_DIS = 0UL,
    SYSCTL_enMOSC_VALIDATION_ENA = 1UL,
}SYSCTL_nMOSC_VALIDATION;

typedef enum
{
    SYSCTL_enMOSC_FAILURE_RESET = 0UL,
    SYSCTL_enMOSC_FAILURE_INT = 1UL,
}SYSCTL_nMOSC_FAILURE;

typedef enum
{
    SYSCTL_enMOSC_CONNECTED_NO = 0UL,
    SYSCTL_enMOSC_CONNECTED_YES = 1UL,
}SYSCTL_nMOSC_CONNECTED;

typedef enum
{
    SYSCTL_enMOSC_FREQ_LOW = 0UL,
    SYSCTL_enMOSC_FREQ_HIGH = 1UL,
}SYSCTL_nMOSC_FREQ;

typedef enum
{
    SYSCTL_enMOSC_POWER_UP = 0UL,
    SYSCTL_enMOSC_POWER_DOWN = 1UL,
}SYSCTL_nMOSC_POWER;

typedef enum
{
    SYSCTL_enMEM_HIGHTIME_0_5= 0UL,
    SYSCTL_enMEM_HIGHTIME_1_0= 1UL,
    SYSCTL_enMEM_HIGHTIME_1_5= 2UL,
    SYSCTL_enMEM_HIGHTIME_2_0= 3UL,
    SYSCTL_enMEM_HIGHTIME_2_5= 4UL,
    SYSCTL_enMEM_HIGHTIME_3_0= 5UL,
    SYSCTL_enMEM_HIGHTIME_3_5= 6UL,
    SYSCTL_enMEM_HIGHTIME_4_0= 7UL,
    SYSCTL_enMEM_HIGHTIME_4_5= 8UL,
}SYSCTL_nMEM_HIGHTIME;

typedef enum
{
    SYSCTL_enMEM_WAITSTATE_0= 0UL,
    SYSCTL_enMEM_WAITSTATE_1= 1UL,
    SYSCTL_enMEM_WAITSTATE_2= 2UL,
    SYSCTL_enMEM_WAITSTATE_3= 3UL,
    SYSCTL_enMEM_WAITSTATE_4= 4UL,
    SYSCTL_enMEM_WAITSTATE_5= 5UL,
    SYSCTL_enMEM_WAITSTATE_6= 6UL,
    SYSCTL_enMEM_WAITSTATE_7= 7UL,
}SYSCTL_nMEM_WAITSTATE;

typedef enum
{
    SYSCTL_enMEM_CLOCKEDGE_RISING= 0UL,
    SYSCTL_enMEM_CLOCKEDGE_FAILING= 1UL,
}SYSCTL_nMEM_CLOCKEDGE;

typedef enum
{
    SYSCTL_enWDT0 = (uint32_t) (((uint32_t) 0UL << 8UL) | (0UL)),
    SYSCTL_enWDT1 = (uint32_t) (((uint32_t) 0UL << 8UL) | (1UL)),

    SYSCTL_enTIMER0 = (uint32_t) (((uint32_t) 1UL << 8UL) | (0UL)),
    SYSCTL_enTIMER1 = (uint32_t) (((uint32_t) 1UL << 8UL) | (1UL)),
    SYSCTL_enTIMER2 = (uint32_t) (((uint32_t) 1UL << 8UL) | (2UL)),
    SYSCTL_enTIMER3 = (uint32_t) (((uint32_t) 1UL << 8UL) | (3UL)),
    SYSCTL_enTIMER4 = (uint32_t) (((uint32_t) 1UL << 8UL) | (4UL)),
    SYSCTL_enTIMER5 = (uint32_t) (((uint32_t) 1UL << 8UL) | (5UL)),
    SYSCTL_enTIMER6 = (uint32_t) (((uint32_t) 1UL << 8UL) | (6UL)),
    SYSCTL_enTIMER7 = (uint32_t) (((uint32_t) 1UL << 8UL) | (7UL)),

    SYSCTL_enGPIOA = (uint32_t) (((uint32_t) 2UL << 8UL) | (0UL)),
    SYSCTL_enGPIOB = (uint32_t) (((uint32_t) 2UL << 8UL) | (1UL)),
    SYSCTL_enGPIOC = (uint32_t) (((uint32_t) 2UL << 8UL) | (2UL)),
    SYSCTL_enGPIOD = (uint32_t) (((uint32_t) 2UL << 8UL) | (3UL)),
    SYSCTL_enGPIOE = (uint32_t) (((uint32_t) 2UL << 8UL) | (4UL)),
    SYSCTL_enGPIOF = (uint32_t) (((uint32_t) 2UL << 8UL) | (5UL)),
    SYSCTL_enGPIOG = (uint32_t) (((uint32_t) 2UL << 8UL) | (6UL)),
    SYSCTL_enGPIOH = (uint32_t) (((uint32_t) 2UL << 8UL) | (7UL)),
    SYSCTL_enGPIOJ = (uint32_t) (((uint32_t) 2UL << 8UL) | (8UL)),
    SYSCTL_enGPIOK = (uint32_t) (((uint32_t) 2UL << 8UL) | (9UL)),
    SYSCTL_enGPIOL = (uint32_t) (((uint32_t) 2UL << 8UL) | (10UL)),
    SYSCTL_enGPIOM = (uint32_t) (((uint32_t) 2UL << 8UL) | (11UL)),
    SYSCTL_enGPION = (uint32_t) (((uint32_t) 2UL << 8UL) | (12UL)),
    SYSCTL_enGPIOP = (uint32_t) (((uint32_t) 2UL << 8UL) | (13UL)),
    SYSCTL_enGPIOQ = (uint32_t) (((uint32_t) 2UL << 8UL) | (14UL)),

    SYSCTL_enUDMA = (uint32_t) (((uint32_t) 3UL << 8UL) | (0UL)),

    SYSCTL_enEPI = (uint32_t) (((uint32_t) 4UL << 8UL) | (0UL)),

    SYSCTL_enHIB = (uint32_t) (((uint32_t) 5UL << 8UL) | (0UL)),

    SYSCTL_enUART0 = (uint32_t) (((uint32_t) 6UL << 8UL) | (0UL)),
    SYSCTL_enUART1 = (uint32_t) (((uint32_t) 6UL << 8UL) | (1UL)),
    SYSCTL_enUART2 = (uint32_t) (((uint32_t) 6UL << 8UL) | (2UL)),
    SYSCTL_enUART3 = (uint32_t) (((uint32_t) 6UL << 8UL) | (3UL)),
    SYSCTL_enUART4 = (uint32_t) (((uint32_t) 6UL << 8UL) | (4UL)),
    SYSCTL_enUART5 = (uint32_t) (((uint32_t) 6UL << 8UL) | (5UL)),
    SYSCTL_enUART6 = (uint32_t) (((uint32_t) 6UL << 8UL) | (6UL)),
    SYSCTL_enUART7 = (uint32_t) (((uint32_t) 6UL << 8UL) | (7UL)),

    SYSCTL_enSSI0 = (uint32_t) (((uint32_t) 7UL << 8UL) | (0UL)),
    SYSCTL_enSSI1 = (uint32_t) (((uint32_t) 7UL << 8UL) | (1UL)),
    SYSCTL_enSSI2 = (uint32_t) (((uint32_t) 7UL << 8UL) | (2UL)),
    SYSCTL_enSSI3 = (uint32_t) (((uint32_t) 7UL << 8UL) | (3UL)),

    SYSCTL_enI2C0 = (uint32_t) (((uint32_t) 8UL << 8UL) | (0UL)),
    SYSCTL_enI2C1 = (uint32_t) (((uint32_t) 8UL << 8UL) | (1UL)),
    SYSCTL_enI2C2 = (uint32_t) (((uint32_t) 8UL << 8UL) | (2UL)),
    SYSCTL_enI2C3 = (uint32_t) (((uint32_t) 8UL << 8UL) | (3UL)),
    SYSCTL_enI2C4 = (uint32_t) (((uint32_t) 8UL << 8UL) | (4UL)),
    SYSCTL_enI2C5 = (uint32_t) (((uint32_t) 8UL << 8UL) | (5UL)),
    SYSCTL_enI2C6 = (uint32_t) (((uint32_t) 8UL << 8UL) | (6UL)),
    SYSCTL_enI2C7 = (uint32_t) (((uint32_t) 8UL << 8UL) | (7UL)),
    SYSCTL_enI2C8 = (uint32_t) (((uint32_t) 8UL << 8UL) | (8UL)),
    SYSCTL_enI2C9 = (uint32_t) (((uint32_t) 8UL << 8UL) | (9UL)),

    SYSCTL_enUSB = (uint32_t) (((uint32_t) 10UL << 8UL) | (0UL)),

    SYSCTL_enEPHY = (uint32_t) (((uint32_t) 12UL << 8UL) | (0UL)),

    SYSCTL_enCAN0 = (uint32_t) (((uint32_t) 13UL << 8UL) | (0UL)),
    SYSCTL_enCAN1 = (uint32_t) (((uint32_t) 13UL << 8UL) | (1UL)),

    SYSCTL_enADC0 = (uint32_t) (((uint32_t) 14UL << 8UL) | (0UL)),
    SYSCTL_enADC1 = (uint32_t) (((uint32_t) 14UL << 8UL) | (1UL)),

    SYSCTL_enACMP = (uint32_t) (((uint32_t) 15UL << 8UL) | (0UL)),

    SYSCTL_enPWM0 = (uint32_t) (((uint32_t) 16UL << 8UL) | (0UL)),

    SYSCTL_enQEI0 = (uint32_t) (((uint32_t) 17UL << 8UL) | (0UL)),

    SYSCTL_enLPC = (uint32_t) (((uint32_t) 18UL << 8UL) | (0UL)),

    SYSCTL_enPECI = (uint32_t) (((uint32_t) 20UL << 8UL) | (0UL)),

    SYSCTL_enFAN = (uint32_t) (((uint32_t) 21UL << 8UL) | (0UL)),

    SYSCTL_enEEPROM = (uint32_t) (((uint32_t) 22UL << 8UL) | (0UL)),

    SYSCTL_enWTIMER0 = (uint32_t) (((uint32_t) 23UL << 8UL) | (0UL)),

    SYSCTL_enRTS = (uint32_t) (((uint32_t) 28UL << 8UL) | (0UL)),

    SYSCTL_enCCM = (uint32_t) (((uint32_t) 29UL << 8UL) | (0UL)),

    SYSCTL_enLCD = (uint32_t) (((uint32_t) 36UL << 8UL) | (0UL)),

    SYSCTL_enOWIRE = (uint32_t) (((uint32_t) 38UL << 8UL) | (0UL)),

    SYSCTL_enEMAC = (uint32_t) (((uint32_t) 39UL << 8UL) | (0UL)),

    SYSCTL_enPRB = (uint32_t) (((uint32_t) 40UL << 8UL) | (0UL)),

    SYSCTL_enHIM = (uint32_t) (((uint32_t) 41UL << 8UL) | (0UL)),
}SYSCTL_nPERIPHERAL;



typedef struct
{
        SYSCTL_nXTAL enExternalCrystal;
        SYSCTL_nOSC enOscSource;
        SYSCTL_nBYPASS enOscBypass;
        SYSCTL_nVCO enVCORange;
}SYSCTL_CONFIG_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_ENUM_H_ */
