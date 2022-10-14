/**
 *
 * @file DMA_Enum.h
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
 * @verbatim 28 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 28 jul. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

typedef enum
{
    DMA_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    DMA_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    DMA_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    DMA_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    DMA_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    DMA_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}DMA_nERROR;

typedef enum
{
    DMA_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    DMA_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    DMA_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
} DMA_nSTATE;

typedef enum
{
    DMA_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    DMA_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    DMA_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
} DMA_nSTATUS;

typedef enum
{
    DMA_enPRI0 = (UBase_t) MCU_enPRI0,
    DMA_enPRI1 = (UBase_t) MCU_enPRI1,
    DMA_enPRI2 = (UBase_t) MCU_enPRI2,
    DMA_enPRI3 = (UBase_t) MCU_enPRI3,
    DMA_enPRI4 = (UBase_t) MCU_enPRI4,
    DMA_enPRI5 = (UBase_t) MCU_enPRI5,
    DMA_enPRI6 = (UBase_t) MCU_enPRI6,
    DMA_enPRI7 = (UBase_t) MCU_enPRI7,
    DMA_enPRIMAX = (UBase_t) MCU_enPRIMAX,
    DMA_enDEFAULT = (UBase_t) MCU_enDEFAULT,
}DMA_nPRIORITY;

typedef enum
{
    DMA_enFALSE = (UBase_t) FALSE,
    DMA_enTRUE = (UBase_t) TRUE,
    DMA_enPENDSTATE_UNDEF = UNDEF_VALUE,
}DMA_nBOOLEAN;

typedef enum
{
    DMA_enMODULE_0 = 0UL,
    DMA_enMODULE_MAX = 1UL,
}DMA_nMODULE;

typedef enum
{
    DMA_enCH_0 = ((UBase_t) 0UL),
    DMA_enCH_1 = ((UBase_t) 1UL),
    DMA_enCH_2 = ((UBase_t) 2UL),
    DMA_enCH_3 = ((UBase_t) 3UL),
    DMA_enCH_4 = ((UBase_t) 4UL),
    DMA_enCH_5 = ((UBase_t) 5UL),
    DMA_enCH_6 = ((UBase_t) 6UL),
    DMA_enCH_7 = ((UBase_t) 7UL),
    DMA_enCH_8 = ((UBase_t) 8UL),
    DMA_enCH_9 = ((UBase_t) 9UL),
    DMA_enCH_10 = ((UBase_t) 10UL),
    DMA_enCH_11 = ((UBase_t) 11UL),
    DMA_enCH_12 = ((UBase_t) 12UL),
    DMA_enCH_13 = ((UBase_t) 13UL),
    DMA_enCH_14 = ((UBase_t) 14UL),
    DMA_enCH_15 = ((UBase_t) 15UL),
    DMA_enCH_16 = ((UBase_t) 16UL),
    DMA_enCH_17 = ((UBase_t) 17UL),
    DMA_enCH_18 = ((UBase_t) 18UL),
    DMA_enCH_19 = ((UBase_t) 19UL),
    DMA_enCH_20 = ((UBase_t) 20UL),
    DMA_enCH_21 = ((UBase_t) 21UL),
    DMA_enCH_22 = ((UBase_t) 22UL),
    DMA_enCH_23 = ((UBase_t) 23UL),
    DMA_enCH_24 = ((UBase_t) 24UL),
    DMA_enCH_25 = ((UBase_t) 25UL),
    DMA_enCH_26 = ((UBase_t) 26UL),
    DMA_enCH_27 = ((UBase_t) 27UL),
    DMA_enCH_28 = ((UBase_t) 27UL),
    DMA_enCH_29 = ((UBase_t) 29UL),
    DMA_enCH_30 = ((UBase_t) 30UL),
    DMA_enCH_31 = ((UBase_t) 31UL),
    DMA_enCH_SW = ((UBase_t) 32UL),
    DMA_enCH_MAX = ((UBase_t) 32UL),
    DMA_enCH_UNDEF = UNDEF_VALUE,
}DMA_nCH;

typedef enum
{
    DMA_enCHMASK_NONE = 0x00000000UL,
    DMA_enCHMASK_0  = 0x00000001UL,
    DMA_enCHMASK_1  = 0x00000002UL,
    DMA_enCHMASK_2  = 0x00000004UL,
    DMA_enCHMASK_3  = 0x00000008UL,
    DMA_enCHMASK_4  = 0x00000010UL,
    DMA_enCHMASK_5  = 0x00000020UL,
    DMA_enCHMASK_6  = 0x00000040UL,
    DMA_enCHMASK_7  = 0x00000080UL,
    DMA_enCHMASK_8  = 0x00000100UL,
    DMA_enCHMASK_9  = 0x00000200UL,
    DMA_enCHMASK_10 = 0x00000400UL,
    DMA_enCHMASK_11 = 0x00000800UL,
    DMA_enCHMASK_12 = 0x00001000UL,
    DMA_enCHMASK_13 = 0x00002000UL,
    DMA_enCHMASK_14 = 0x00004000UL,
    DMA_enCHMASK_15 = 0x00008000UL,
    DMA_enCHMASK_16 = 0x00010000UL,
    DMA_enCHMASK_17 = 0x00020000UL,
    DMA_enCHMASK_18 = 0x00040000UL,
    DMA_enCHMASK_19 = 0x00080000UL,
    DMA_enCHMASK_20 = 0x00100000UL,
    DMA_enCHMASK_21 = 0x00200000UL,
    DMA_enCHMASK_22 = 0x00400000UL,
    DMA_enCHMASK_23 = 0x00800000UL,
    DMA_enCHMASK_24 = 0x01000000UL,
    DMA_enCHMASK_25 = 0x02000000UL,
    DMA_enCHMASK_26 = 0x04000000UL,
    DMA_enCHMASK_27 = 0x08000000UL,
    DMA_enCHMASK_28 = 0x10000000UL,
    DMA_enCHMASK_29 = 0x20000000UL,
    DMA_enCHMASK_30 = 0x40000000UL,
    DMA_enCHMASK_31 = 0x80000000UL,
    DMA_enCHMASK_ALL = 0xFFFFFFFFUL,
}DMA_nCHMASK;

typedef enum
{
    DMA_enVECTOR_SOFTWARE = 0UL,
    DMA_enVECTOR_ERROR = 1UL,
    DMA_enVECTOR_MAX = 2UL,
}DMA_nVECTOR;

typedef enum
{
    DMA_enINT_ERROR_SW = 0UL,
    DMA_enINT_ERROR_ERROR = 1UL,
    DMA_enINT_ERROR_MAX = 2UL,
}DMA_nINT_ERROR;

typedef enum
{
    DMA_enSTATE_MACHINE_IDLE = 0UL,
    DMA_enSTATE_MACHINE_RD_CTL_DATA = 1UL,
    DMA_enSTATE_MACHINE_RD_SRC_PT = 2UL,
    DMA_enSTATE_MACHINE_RD_DST_PT = 3UL,
    DMA_enSTATE_MACHINE_RD_SRC_DATA = 4UL,
    DMA_enSTATE_MACHINE_WD_DST_DATA = 5UL,
    DMA_enSTATE_MACHINE_WAIT_TO_CLR = 6UL,
    DMA_enSTATE_MACHINE_WD_CTL_DATA = 7UL,
    DMA_enSTATE_MACHINE_WD_STALLED = 8UL,
    DMA_enSTATE_MACHINE_WD_DONE = 9UL,
    DMA_enSTATE_MACHINE_UNDEF = UNDEF_VALUE,
}DMA_nSTATE_MACHINE;

typedef enum
{
    DMA_enCH_PERIPHERAL_ENA = 0UL,
    DMA_enCH_PERIPHERAL_DIS = 1UL,
    DMA_enCH_PERIPHERAL_UNDEF = UNDEF_VALUE,
} DMA_nCH_PERIPHERAL;

typedef enum
{
    DMA_enCH_REQTYPE_BOTH = 0UL,
    DMA_enCH_REQTYPE_BURST = 1UL,
    DMA_enCH_REQTYPE_UNDEF = UNDEF_VALUE,
}DMA_nCH_REQTYPE;

typedef enum
{
    DMA_enCH_CONTROL_PRIMARY = 0UL,
    DMA_enCH_CONTROL_ALTERNATE = 1UL,
    DMA_enCH_CONTROL_UNDEF = UNDEF_VALUE,
}DMA_nCH_CONTROL;

typedef enum
{
    DMA_enCH_ACCESS_NON_PRIVILEGED = 0UL,
    DMA_enCH_ACCESS_PRIVILEGED= 1UL,
    DMA_enCH_ACCESS_UNDEF = UNDEF_VALUE,
}DMA_nCH_ACCESS;

typedef enum
{
    DMA_enCH_PRIORITY_LOW = 0UL,
    DMA_enCH_PRIORITY_HIGH = 1UL,
    DMA_enCH_PRIORITY_UNDEF = UNDEF_VALUE,
}DMA_nCH_PRIORITY;

typedef enum
{
    DMA_enCH_ENCODER_0 = ((UBase_t) 0UL),
    DMA_enCH_ENCODER_1 = ((UBase_t) 1UL),
    DMA_enCH_ENCODER_2 = ((UBase_t) 2UL),
    DMA_enCH_ENCODER_3 = ((UBase_t) 3UL),
    DMA_enCH_ENCODER_4 = ((UBase_t) 4UL),
    DMA_enCH_ENCODER_5 = ((UBase_t) 5UL),
    DMA_enCH_ENCODER_6 = ((UBase_t) 6UL),
    DMA_enCH_ENCODER_7 = ((UBase_t) 7UL),
    DMA_enCH_ENCODER_8 = ((UBase_t) 8UL),
    DMA_enCH_ENCODER_MAX = ((UBase_t) 9UL),
    DMA_enCH_ENCODER_UNDEF = UNDEF_VALUE,
}DMA_nCH_ENCODER;

typedef enum
{
    DMA_enCH_INCREMENT_BYTE = 0UL,
    DMA_enCH_INCREMENT_HALF_WORD = 1UL,
    DMA_enCH_INCREMENT_WORD = 2UL,
    DMA_enCH_INCREMENT_NO = 3UL,
    DMA_enCH_INCREMENT_UNDEF = UNDEF_VALUE,
}DMA_nCH_INCREMENT;

typedef enum
{
    DMA_enCH_DATA_SIZE_BYTE = 0UL,
    DMA_enCH_DATA_SIZE_HALF_WORD = 1UL,
    DMA_enCH_DATA_SIZE_WORD = 2UL,
    DMA_enCH_DATA_SIZE_UNDEF = UNDEF_VALUE,
}DMA_nCH_DATA_SIZE;

typedef enum
{
    DMA_enCH_ARBITRATION_SIZE_1 = 0UL,
    DMA_enCH_ARBITRATION_SIZE_2 = 1UL,
    DMA_enCH_ARBITRATION_SIZE_4 = 2UL,
    DMA_enCH_ARBITRATION_SIZE_8 = 3UL,
    DMA_enCH_ARBITRATION_SIZE_16 = 4UL,
    DMA_enCH_ARBITRATION_SIZE_32 = 5UL,
    DMA_enCH_ARBITRATION_SIZE_64 = 6UL,
    DMA_enCH_ARBITRATION_SIZE_128 = 7UL,
    DMA_enCH_ARBITRATION_SIZE_256 = 8UL,
    DMA_enCH_ARBITRATION_SIZE_512 = 9UL,
    DMA_enCH_ARBITRATION_SIZE_1024 = 10UL,
    DMA_enCH_ARBITRATION_SIZE_UNDEF = UNDEF_VALUE,
}DMA_nCH_ARBITRATION_SIZE;

typedef enum
{
    DMA_enCH_MODE_STOP = 0UL,
    DMA_enCH_MODE_BASIC = 1UL,
    DMA_enCH_MODE_AUTO_REQ = 2UL,
    DMA_enCH_MODE_PING_PONG = 3UL,
    DMA_enCH_MODE_MEM_SG = 4UL,
    DMA_enCH_MODE_ALT_MEM_SG = 5UL,
    DMA_enCH_MODE_PER_SG = 6UL,
    DMA_enCH_MODE_ALT_PER_SG = 7UL,
    DMA_enCH_MODE_UNDEF = UNDEF_VALUE,
}DMA_nCH_MODE;


typedef enum
{
    DMA_enCH_TRIGGER_CH0_RESERVED0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_0,
    DMA_enCH_TRIGGER_CH0_UART2_RX = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_0,
    DMA_enCH_TRIGGER_CH0_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_0,
    DMA_enCH_TRIGGER_CH0_GPTM4A = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_0,
    DMA_enCH_TRIGGER_CH0_RESERVED4 = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_0,
    DMA_enCH_TRIGGER_CH0_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_0,
    DMA_enCH_TRIGGER_CH0_I2C0_RX = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_0,
    DMA_enCH_TRIGGER_CH0_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_0,
    DMA_enCH_TRIGGER_CH0_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_0,

    DMA_enCH_TRIGGER_CH1_RESERVED0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_1,
    DMA_enCH_TRIGGER_CH1_UART2_TX = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_1,
    DMA_enCH_TRIGGER_CH1_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_1,
    DMA_enCH_TRIGGER_CH1_GPTM4B = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_1,
    DMA_enCH_TRIGGER_CH1_RESERVED4 = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_1,
    DMA_enCH_TRIGGER_CH1_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_1,
    DMA_enCH_TRIGGER_CH1_I2C0_TX = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_1,
    DMA_enCH_TRIGGER_CH1_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_1,
    DMA_enCH_TRIGGER_CH1_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_1,

    DMA_enCH_TRIGGER_CH2_RESERVED0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_2,
    DMA_enCH_TRIGGER_CH2_GPTM3A = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_2,
    DMA_enCH_TRIGGER_CH2_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_2,
    DMA_enCH_TRIGGER_CH2_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_2,
    DMA_enCH_TRIGGER_CH2_RESERVED4 = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_2,
    DMA_enCH_TRIGGER_CH2_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_2,
    DMA_enCH_TRIGGER_CH2_I2C1_RX = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_2,
    DMA_enCH_TRIGGER_CH2_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_2,
    DMA_enCH_TRIGGER_CH2_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_2,

    DMA_enCH_TRIGGER_CH3_RESERVED0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_3,
    DMA_enCH_TRIGGER_CH3_GPTM3B = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_3,
    DMA_enCH_TRIGGER_CH3_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_3,
    DMA_enCH_TRIGGER_CH3_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_3,
    DMA_enCH_TRIGGER_CH3_RESERVED4 = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_3,
    DMA_enCH_TRIGGER_CH3_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_3,
    DMA_enCH_TRIGGER_CH3_I2C1_TX = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_3,
    DMA_enCH_TRIGGER_CH3_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_3,
    DMA_enCH_TRIGGER_CH3_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_3,

    DMA_enCH_TRIGGER_CH4_RESERVED0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_4,
    DMA_enCH_TRIGGER_CH4_GPTM2A = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_4,
    DMA_enCH_TRIGGER_CH4_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_4,
    DMA_enCH_TRIGGER_CH4_GPIOA = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_4,
    DMA_enCH_TRIGGER_CH4_RESERVED4 = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_4,
    DMA_enCH_TRIGGER_CH4_SHA_MD5_0_CIN = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_4,
    DMA_enCH_TRIGGER_CH4_I2C2_RX = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_4,
    DMA_enCH_TRIGGER_CH4_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_4,
    DMA_enCH_TRIGGER_CH4_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_4,

    DMA_enCH_TRIGGER_CH5_RESERVED0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_5,
    DMA_enCH_TRIGGER_CH5_GPTM2B = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_5,
    DMA_enCH_TRIGGER_CH5_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_5,
    DMA_enCH_TRIGGER_CH5_GPIOB = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_5,
    DMA_enCH_TRIGGER_CH5_RESERVED4 = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_5,
    DMA_enCH_TRIGGER_CH5_SHA_MD5_0_DIN = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_5,
    DMA_enCH_TRIGGER_CH5_I2C2_TX = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_5,
    DMA_enCH_TRIGGER_CH5_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_5,
    DMA_enCH_TRIGGER_CH5_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_5,

    DMA_enCH_TRIGGER_CH6_RESERVED0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_6,
    DMA_enCH_TRIGGER_CH6_GPTM2A = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_6,
    DMA_enCH_TRIGGER_CH6_UART5_RX = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_6,
    DMA_enCH_TRIGGER_CH6_GPIOC = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_6,
    DMA_enCH_TRIGGER_CH6_I2C0_RX = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_6,
    DMA_enCH_TRIGGER_CH6_SHA_MD5_0_COUT = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_6,
    DMA_enCH_TRIGGER_CH6_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_6,
    DMA_enCH_TRIGGER_CH6_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_6,
    DMA_enCH_TRIGGER_CH6_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_6,

    DMA_enCH_TRIGGER_CH7_RESERVED0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_7,
    DMA_enCH_TRIGGER_CH7_GPTM2B = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_7,
    DMA_enCH_TRIGGER_CH7_UART5_TX = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_7,
    DMA_enCH_TRIGGER_CH7_GPIOD = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_7,
    DMA_enCH_TRIGGER_CH7_I2C0_TX = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_7,
    DMA_enCH_TRIGGER_CH7_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_7,
    DMA_enCH_TRIGGER_CH7_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_7,
    DMA_enCH_TRIGGER_CH7_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_7,
    DMA_enCH_TRIGGER_CH7_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_7,

    DMA_enCH_TRIGGER_CH8_UART0_RX = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_8,
    DMA_enCH_TRIGGER_CH8_UART1_RX = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_8,
    DMA_enCH_TRIGGER_CH8_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_8,
    DMA_enCH_TRIGGER_CH8_GPTM5A = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_8,
    DMA_enCH_TRIGGER_CH8_I2C1_RX = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_8,
    DMA_enCH_TRIGGER_CH8_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_8,
    DMA_enCH_TRIGGER_CH8_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_8,
    DMA_enCH_TRIGGER_CH8_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_8,
    DMA_enCH_TRIGGER_CH8_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_8,

    DMA_enCH_TRIGGER_CH9_UART0_TX = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_9,
    DMA_enCH_TRIGGER_CH9_UART1_TX = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_9,
    DMA_enCH_TRIGGER_CH9_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_9,
    DMA_enCH_TRIGGER_CH9_GPTM5B = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_9,
    DMA_enCH_TRIGGER_CH9_I2C1_TX = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_9,
    DMA_enCH_TRIGGER_CH9_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_9,
    DMA_enCH_TRIGGER_CH9_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_9,
    DMA_enCH_TRIGGER_CH9_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_9,
    DMA_enCH_TRIGGER_CH9_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_9,

    DMA_enCH_TRIGGER_CH10_SSI0_RX = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_10,
    DMA_enCH_TRIGGER_CH10_SSI1_RX = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_10,
    DMA_enCH_TRIGGER_CH10_UART6_RX = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_10,
    DMA_enCH_TRIGGER_CH10_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_10,
    DMA_enCH_TRIGGER_CH10_I2C2_RX = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_10,
    DMA_enCH_TRIGGER_CH10_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_10,
    DMA_enCH_TRIGGER_CH10_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_10,
    DMA_enCH_TRIGGER_CH10_GPTM6A = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_10,
    DMA_enCH_TRIGGER_CH10_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_10,

    DMA_enCH_TRIGGER_CH11_SSI0_TX = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_11,
    DMA_enCH_TRIGGER_CH11_SSI1_TX = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_11,
    DMA_enCH_TRIGGER_CH11_UART6_TX = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_11,
    DMA_enCH_TRIGGER_CH11_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_11,
    DMA_enCH_TRIGGER_CH11_I2C2_TX = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_11,
    DMA_enCH_TRIGGER_CH11_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_11,
    DMA_enCH_TRIGGER_CH11_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_11,
    DMA_enCH_TRIGGER_CH11_GPTM6B = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_11,
    DMA_enCH_TRIGGER_CH11_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_11,

    DMA_enCH_TRIGGER_CH12_RESERVED0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_12,
    DMA_enCH_TRIGGER_CH12_UART2_RX = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_12,
    DMA_enCH_TRIGGER_CH12_SSI2_RX = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_12,
    DMA_enCH_TRIGGER_CH12_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_12,
    DMA_enCH_TRIGGER_CH12_GPIOK = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_12,
    DMA_enCH_TRIGGER_CH12_AES0_CIN = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_12,
    DMA_enCH_TRIGGER_CH12_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_12,
    DMA_enCH_TRIGGER_CH12_GPTM7A = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_12,
    DMA_enCH_TRIGGER_CH12_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_12,

    DMA_enCH_TRIGGER_CH13_RESERVED0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_13,
    DMA_enCH_TRIGGER_CH13_UART2_TX = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_13,
    DMA_enCH_TRIGGER_CH13_SSI2_TX = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_13,
    DMA_enCH_TRIGGER_CH13_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_13,
    DMA_enCH_TRIGGER_CH13_GPIOL = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_13,
    DMA_enCH_TRIGGER_CH13_AES0_COUT = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_13,
    DMA_enCH_TRIGGER_CH13_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_13,
    DMA_enCH_TRIGGER_CH13_GPTM7B = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_13,
    DMA_enCH_TRIGGER_CH13_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_13,

    DMA_enCH_TRIGGER_CH14_ADC0_SS0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_14,
    DMA_enCH_TRIGGER_CH14_GPTM2A = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_14,
    DMA_enCH_TRIGGER_CH14_SSI3_RX = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_14,
    DMA_enCH_TRIGGER_CH14_GPIOE = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_14,
    DMA_enCH_TRIGGER_CH14_GPIOM = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_14,
    DMA_enCH_TRIGGER_CH14_AES0_DIN = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_14,
    DMA_enCH_TRIGGER_CH14_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_14,
    DMA_enCH_TRIGGER_CH14_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_14,
    DMA_enCH_TRIGGER_CH14_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_14,

    DMA_enCH_TRIGGER_CH15_ADC0_SS1 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_15,
    DMA_enCH_TRIGGER_CH15_GPTM2B = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_15,
    DMA_enCH_TRIGGER_CH15_SSI3_TX = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_15,
    DMA_enCH_TRIGGER_CH15_GPIOF = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_15,
    DMA_enCH_TRIGGER_CH15_GPION = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_15,
    DMA_enCH_TRIGGER_CH15_AES0_DOUT = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_15,
    DMA_enCH_TRIGGER_CH15_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_15,
    DMA_enCH_TRIGGER_CH15_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_15,
    DMA_enCH_TRIGGER_CH15_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_15,

    DMA_enCH_TRIGGER_CH16_ADC0_SS2 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_16,
    DMA_enCH_TRIGGER_CH16_RESERVED1 = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_16,
    DMA_enCH_TRIGGER_CH16_UART3_RX = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_16,
    DMA_enCH_TRIGGER_CH16_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_16,
    DMA_enCH_TRIGGER_CH16_GPIOP = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_16,
    DMA_enCH_TRIGGER_CH16_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_16,
    DMA_enCH_TRIGGER_CH16_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_16,
    DMA_enCH_TRIGGER_CH16_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_16,
    DMA_enCH_TRIGGER_CH16_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_16,

    DMA_enCH_TRIGGER_CH17_ADC0_SS3 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_17,
    DMA_enCH_TRIGGER_CH17_RESERVED1 = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_17,
    DMA_enCH_TRIGGER_CH17_UART3_TX = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_17,
    DMA_enCH_TRIGGER_CH17_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_17,
    DMA_enCH_TRIGGER_CH17_RESERVED4 = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_17,
    DMA_enCH_TRIGGER_CH17_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_17,
    DMA_enCH_TRIGGER_CH17_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_17,
    DMA_enCH_TRIGGER_CH17_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_17,
    DMA_enCH_TRIGGER_CH17_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_17,

    DMA_enCH_TRIGGER_CH18_GPTM0A = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_18,
    DMA_enCH_TRIGGER_CH18_GPTM1A = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_18,
    DMA_enCH_TRIGGER_CH18_UART4_RX = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_18,
    DMA_enCH_TRIGGER_CH18_GPIOB = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_18,
    DMA_enCH_TRIGGER_CH18_I2C3_RX = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_18,
    DMA_enCH_TRIGGER_CH18_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_18,
    DMA_enCH_TRIGGER_CH18_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_18,
    DMA_enCH_TRIGGER_CH18_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_18,
    DMA_enCH_TRIGGER_CH18_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_18,

    DMA_enCH_TRIGGER_CH19_GPTM0B = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_19,
    DMA_enCH_TRIGGER_CH19_GPTM1B = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_19,
    DMA_enCH_TRIGGER_CH19_UART4_TX = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_19,
    DMA_enCH_TRIGGER_CH19_GPIOG = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_19,
    DMA_enCH_TRIGGER_CH19_I2C3_TX = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_19,
    DMA_enCH_TRIGGER_CH19_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_19,
    DMA_enCH_TRIGGER_CH19_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_19,
    DMA_enCH_TRIGGER_CH19_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_19,
    DMA_enCH_TRIGGER_CH19_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_19,

    DMA_enCH_TRIGGER_CH20_GPTM1A = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_20,
    DMA_enCH_TRIGGER_CH20_EPI0_RX = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_20,
    DMA_enCH_TRIGGER_CH20_UART7_RX = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_20,
    DMA_enCH_TRIGGER_CH20_GPIOH = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_20,
    DMA_enCH_TRIGGER_CH20_I2C4_RX = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_20,
    DMA_enCH_TRIGGER_CH20_DES0_CIN = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_20,
    DMA_enCH_TRIGGER_CH20_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_20,
    DMA_enCH_TRIGGER_CH20_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_20,
    DMA_enCH_TRIGGER_CH20_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_20,

    DMA_enCH_TRIGGER_CH21_GPTM1B = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_21,
    DMA_enCH_TRIGGER_CH21_EPI0_TX = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_21,
    DMA_enCH_TRIGGER_CH21_UART7_TX = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_21,
    DMA_enCH_TRIGGER_CH21_GPIOJ = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_21,
    DMA_enCH_TRIGGER_CH21_I2C4_TX = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_21,
    DMA_enCH_TRIGGER_CH21_DES0_DIN = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_21,
    DMA_enCH_TRIGGER_CH21_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_21,
    DMA_enCH_TRIGGER_CH21_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_21,
    DMA_enCH_TRIGGER_CH21_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_21,

    DMA_enCH_TRIGGER_CH22_UART1_RX = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_22,
    DMA_enCH_TRIGGER_CH22_SOFTWARE0 = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_22,
    DMA_enCH_TRIGGER_CH22_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_22,
    DMA_enCH_TRIGGER_CH22_SOFTWARE1 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_22,
    DMA_enCH_TRIGGER_CH22_I2C5_RX = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_22,
    DMA_enCH_TRIGGER_CH22_DES0_DOUT = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_22,
    DMA_enCH_TRIGGER_CH22_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_22,
    DMA_enCH_TRIGGER_CH22_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_22,
    DMA_enCH_TRIGGER_CH22_I2C8_RX = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_22,

    DMA_enCH_TRIGGER_CH23_UART1_TX = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_23,
    DMA_enCH_TRIGGER_CH23_SOFTWARE0 = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_23,
    DMA_enCH_TRIGGER_CH23_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_23,
    DMA_enCH_TRIGGER_CH23_SOFTWARE1 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_23,
    DMA_enCH_TRIGGER_CH23_I2C5_TX = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_23,
    DMA_enCH_TRIGGER_CH23_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_23,
    DMA_enCH_TRIGGER_CH23_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_23,
    DMA_enCH_TRIGGER_CH23_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_23,
    DMA_enCH_TRIGGER_CH23_I2C8_TX = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_23,

    DMA_enCH_TRIGGER_CH24_SSI1_RX = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_24,
    DMA_enCH_TRIGGER_CH24_ADC1_SS0 = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_24,
    DMA_enCH_TRIGGER_CH24_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_24,
    DMA_enCH_TRIGGER_CH24_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_24,
    DMA_enCH_TRIGGER_CH24_GPIOQ = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_24,
    DMA_enCH_TRIGGER_CH24_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_24,
    DMA_enCH_TRIGGER_CH24_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_24,
    DMA_enCH_TRIGGER_CH24_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_24,
    DMA_enCH_TRIGGER_CH24_I2C9_RX = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_24,

    DMA_enCH_TRIGGER_CH25_SSI1_TX = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_25,
    DMA_enCH_TRIGGER_CH25_ADC1_SS1 = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_25,
    DMA_enCH_TRIGGER_CH25_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_25,
    DMA_enCH_TRIGGER_CH25_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_25,
    DMA_enCH_TRIGGER_CH25_SOFTWARE0 = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_25,
    DMA_enCH_TRIGGER_CH25_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_25,
    DMA_enCH_TRIGGER_CH25_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_25,
    DMA_enCH_TRIGGER_CH25_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_25,
    DMA_enCH_TRIGGER_CH25_I2C9_TX = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_25,

    DMA_enCH_TRIGGER_CH26_SOFTWARE0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_26,
    DMA_enCH_TRIGGER_CH26_ADC1_SS2 = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_26,
    DMA_enCH_TRIGGER_CH26_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_26,
    DMA_enCH_TRIGGER_CH26_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_26,
    DMA_enCH_TRIGGER_CH26_SOFTWARE1 = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_26,
    DMA_enCH_TRIGGER_CH26_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_26,
    DMA_enCH_TRIGGER_CH26_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_26,
    DMA_enCH_TRIGGER_CH26_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_26,
    DMA_enCH_TRIGGER_CH26_I2C6_RX = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_26,

    DMA_enCH_TRIGGER_CH27_SOFTWARE0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_27,
    DMA_enCH_TRIGGER_CH27_ADC1_SS3 = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_27,
    DMA_enCH_TRIGGER_CH27_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_27,
    DMA_enCH_TRIGGER_CH27_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_27,
    DMA_enCH_TRIGGER_CH27_RESERVED4 = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_27,
    DMA_enCH_TRIGGER_CH27_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_27,
    DMA_enCH_TRIGGER_CH27_SOFTWARE1 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_27,
    DMA_enCH_TRIGGER_CH27_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_27,
    DMA_enCH_TRIGGER_CH27_I2C6_TX = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_27,

    DMA_enCH_TRIGGER_CH28_RESERVED0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_28,
    DMA_enCH_TRIGGER_CH28_RESERVED1 = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_28,
    DMA_enCH_TRIGGER_CH28_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_28,
    DMA_enCH_TRIGGER_CH28_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_28,
    DMA_enCH_TRIGGER_CH28_RESERVED4 = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_28,
    DMA_enCH_TRIGGER_CH28_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_28,
    DMA_enCH_TRIGGER_CH28_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_28,
    DMA_enCH_TRIGGER_CH28_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_28,
    DMA_enCH_TRIGGER_CH28_I2C7_RX = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_28,

    DMA_enCH_TRIGGER_CH29_RESERVED0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_29,
    DMA_enCH_TRIGGER_CH29_RESERVED1 = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_29,
    DMA_enCH_TRIGGER_CH29_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_29,
    DMA_enCH_TRIGGER_CH29_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_29,
    DMA_enCH_TRIGGER_CH29_RESERVED4 = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_29,
    DMA_enCH_TRIGGER_CH29_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_29,
    DMA_enCH_TRIGGER_CH29_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_29,
    DMA_enCH_TRIGGER_CH29_RESERVED7 = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_29,
    DMA_enCH_TRIGGER_CH29_I2C7_TX = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_29,

    DMA_enCH_TRIGGER_CH30_SOFTWARE0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_30,
    DMA_enCH_TRIGGER_CH30_SOFTWARE1 = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_30,
    DMA_enCH_TRIGGER_CH30_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_30,
    DMA_enCH_TRIGGER_CH30_SOFTWARE2 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_30,
    DMA_enCH_TRIGGER_CH30_RESERVED4 = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_30,
    DMA_enCH_TRIGGER_CH30_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_30,
    DMA_enCH_TRIGGER_CH30_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_30,
    DMA_enCH_TRIGGER_CH30_EPI0_RX = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_30,
    DMA_enCH_TRIGGER_CH30_SOFTWARE3 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_30,

    DMA_enCH_TRIGGER_CH31_RESERVED0 = ((UBase_t) DMA_enCH_ENCODER_0 << 8UL) | (UBase_t) DMA_enCH_31,
    DMA_enCH_TRIGGER_CH31_RESERVED1 = ((UBase_t) DMA_enCH_ENCODER_1 << 8UL) | (UBase_t) DMA_enCH_31,
    DMA_enCH_TRIGGER_CH31_RESERVED2 = ((UBase_t) DMA_enCH_ENCODER_2 << 8UL) | (UBase_t) DMA_enCH_31,
    DMA_enCH_TRIGGER_CH31_RESERVED3 = ((UBase_t) DMA_enCH_ENCODER_3 << 8UL) | (UBase_t) DMA_enCH_31,
    DMA_enCH_TRIGGER_CH31_RESERVED4 = ((UBase_t) DMA_enCH_ENCODER_4 << 8UL) | (UBase_t) DMA_enCH_31,
    DMA_enCH_TRIGGER_CH31_RESERVED5 = ((UBase_t) DMA_enCH_ENCODER_5 << 8UL) | (UBase_t) DMA_enCH_31,
    DMA_enCH_TRIGGER_CH31_RESERVED6 = ((UBase_t) DMA_enCH_ENCODER_6 << 8UL) | (UBase_t) DMA_enCH_31,
    DMA_enCH_TRIGGER_CH31_EPI0_TX = ((UBase_t) DMA_enCH_ENCODER_7 << 8UL) | (UBase_t) DMA_enCH_31,
    DMA_enCH_TRIGGER_CH31_RESERVED8 = ((UBase_t) DMA_enCH_ENCODER_8 << 8UL) | (UBase_t) DMA_enCH_31,

    DMA_enCH_TRIGGER_UNDEF = UNDEF_VALUE,
}DMA_nCH_TRIGGER;

#if 0
/*
 * This Struct is already defined in DMA_StructRegisterChannel.h
 *  DMA_CTL_t
 *  */
typedef struct
{
    UBase_t transferMode :3;
    UBase_t useBurst :1;
    UBase_t transferSize :10;
    UBase_t burstSize :4;
    UBase_t reserved :6;
    UBase_t sourceSize :2;
    UBase_t sourceInc :2;
    UBase_t destSize :2;
    UBase_t destInc :2;
}DMA_CONTROL_t;
#endif

typedef struct
{
    DMA_nCH_MODE enTransferMode;
    DMA_nSTATE enUseLastBurst;
    UBase_t uxTransferSize;
    DMA_nCH_ARBITRATION_SIZE enArbitrationSize;
    DMA_nCH_DATA_SIZE enSourceDataSize;
    DMA_nCH_INCREMENT enSourceIncrement;
    DMA_nCH_DATA_SIZE enDestinationDataSize;
    DMA_nCH_INCREMENT enDestinationIncrement;
    DMA_nCH_ACCESS enSourceAccess;
    DMA_nCH_ACCESS enDestinationAccess;
}DMA_CONTROL_t;

typedef struct
{
    DMA_nSTATE enChannelEnable;
    DMA_nCH_REQTYPE enRequestType;
    DMA_nCH_PERIPHERAL enPeripheralEnable;
    DMA_nCH_CONTROL enControlStructure;
    DMA_nCH_PRIORITY enChannelPriority;
    DMA_nCH_ENCODER enEncoder;
}DMA_CONFIG_t;


typedef MCU_Register_t DMA_Register_t;
typedef MCU_pvfIRQVectorHandler_t DMA_pvfIRQVectorHandler_t;
typedef MCU_pvfIRQSourceHandler_t DMA_pvfIRQSourceHandler_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_ENUM_H_ */
