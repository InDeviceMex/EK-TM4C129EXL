/**
 *
 * @file SSI_Enum.h
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
 * @verbatim 16 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_XHEADER_SSI_ENUM_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_XHEADER_SSI_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

typedef enum
{
    SSI_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    SSI_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    SSI_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    SSI_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    SSI_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    SSI_enERROR_FULL = (UBase_t) MCU_enERROR_FULL,
    SSI_enERROR_TIMEOUT = (UBase_t) MCU_enERROR_TIMEOUT,
    SSI_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}SSI_nERROR;

typedef enum
{
    SSI_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    SSI_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    SSI_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
} SSI_nSTATE;

typedef enum
{
    SSI_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    SSI_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    SSI_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
} SSI_nSTATUS;

typedef enum
{
    SSI_enFALSE = (UBase_t) FALSE,
    SSI_enTRUE = (UBase_t) TRUE,
    SSI_enPENDSTATE_UNDEF = UNDEF_VALUE,
}SSI_nBOOLEAN;

typedef enum
{
    SSI_enPRI0 = (UBase_t) MCU_enPRI0,
    SSI_enPRI1 = (UBase_t) MCU_enPRI1,
    SSI_enPRI2 = (UBase_t) MCU_enPRI2,
    SSI_enPRI3 = (UBase_t) MCU_enPRI3,
    SSI_enPRI4 = (UBase_t) MCU_enPRI4,
    SSI_enPRI5 = (UBase_t) MCU_enPRI5,
    SSI_enPRI6 = (UBase_t) MCU_enPRI6,
    SSI_enPRI7 = (UBase_t) MCU_enPRI7,
    SSI_enPRIMAX = (UBase_t) MCU_enPRIMAX,
    SSI_enDEFAULT = (UBase_t) MCU_enDEFAULT,
}SSI_nPRIORITY;

typedef enum
{
    SSI_enMODULE_0 = 0UL,
    SSI_enMODULE_1 = 1UL,
    SSI_enMODULE_2 = 2UL,
    SSI_enMODULE_3 = 3UL,
    SSI_enMODULE_MAX = 4UL,
    SSI_enMODULE_UNDEF = UNDEF_VALUE,
}SSI_nMODULE;

typedef enum
{
    SSI_enINT_RECEIVE_OVERRUN = 0UL,
    SSI_enINT_RECEIVE_TIMEOUT = 1UL,
    SSI_enINT_RECEIVE = 2UL,
    SSI_enINT_TRANSMIT = 3UL,
    SSI_enINT_RECEIVE_DMA = 4UL,
    SSI_enINT_TRANSMIT_DMA = 5UL,
    SSI_enINT_END_OF_TRANSMIT = 6UL,
    SSI_enINT_SW = 7UL,
    SSI_enINT_MAX = 8UL,
    SSI_enINT_UNDEF = UNDEF_VALUE,
}SSI_nINT;

typedef enum
{
    SSI_enINTMASK_NONE = 0x0UL,
    SSI_enINTMASK_RECEIVE_OVERRUN = 0x1UL,
    SSI_enINTMASK_RECEIVE_TIMEOUT = 0x2UL,
    SSI_enINTMASK_RECEIVE = 0x4UL,
    SSI_enINTMASK_TRANSMIT = 0x8UL,
    SSI_enINTMASK_RECEIVE_DMA = 0x10UL,
    SSI_enINTMASK_TRANSMIT_DMA = 0x20UL,
    SSI_enINTMASK_END_OF_TRANSMIT = 0x40UL,
    SSI_enINTMASK_ALL = 0x7FUL,
    SSI_enINTMASK_MAX = 0x80UL,
    SSI_enINTMASK_UNDEF = UNDEF_VALUE,
}SSI_nINTMASK;

typedef enum
{
    SSI_enLENGTH_4BITS = 3UL,
    SSI_enLENGTH_5BITS = 4UL,
    SSI_enLENGTH_6BITS = 5UL,
    SSI_enLENGTH_7BITS = 6UL,
    SSI_enLENGTH_8BITS = 7UL,
    SSI_enLENGTH_9BITS = 8UL,
    SSI_enLENGTH_10BITS = 9UL,
    SSI_enLENGTH_11BITS = 10UL,
    SSI_enLENGTH_12BITS = 11UL,
    SSI_enLENGTH_13BITS = 12UL,
    SSI_enLENGTH_14BITS = 13UL,
    SSI_enLENGTH_15BITS = 14UL,
    SSI_enLENGTH_16BITS = 15UL,
    SSI_enLENGTH_UNDEF = UNDEF_VALUE,
}SSI_nLENGTH;

typedef enum
{
    SSI_enFORMAT_FREESCALE = 0UL,
    SSI_enFORMAT_TEXAS_INSTRUMENTS = 1UL,
    SSI_enFORMAT_UNDEF = UNDEF_VALUE,
}SSI_nFORMAT;

typedef enum
{
    SSI_enPOLARITY_LOW = 0UL,
    SSI_enPOLARITY_HIGH = 1UL,
    SSI_enPOLARITY_UNDEF = UNDEF_VALUE,
}SSI_nPOLARITY;

typedef enum
{
    SSI_enPHASE_FIRST = 0UL,
    SSI_enPHASE_SECOND = 1UL,
    SSI_enPHASE_UNDEF = UNDEF_VALUE,
}SSI_nPHASE;

typedef enum
{
    SSI_enOPERATION_MASTER = 0UL,
    SSI_enOPERATION_SLAVE = 1UL,
    SSI_enOPERATION_UNDEF = UNDEF_VALUE,
}SSI_nOPERATION;

typedef enum
{
    SSI_enMODE_LEGACY = 0UL,
    SSI_enMODE_BI = 1UL,
    SSI_enMODE_QUAD = 2UL,
    SSI_enMODE_ADVANCED = 3UL,
    SSI_enMODE_UNDEF = UNDEF_VALUE,
}SSI_nMODE;

typedef enum
{
    SSI_enDIRECTION_TX = 0UL,
    SSI_enDIRECTION_RX = 1UL,
    SSI_enDIRECTION_UNDEF = UNDEF_VALUE,
}SSI_nDIRECTION;

typedef enum
{
    SSI_enCLOCK_RSCLK = 0UL,
    SSI_enCLOCK_ALTCLK = 5UL,
    SSI_enCLOCK_UNDEF = UNDEF_VALUE,
}SSI_nCLOCK;

typedef enum
{
    SSI_enLINE_SELECT_PRIMARY = 0UL,
    SSI_enLINE_SELECT_ALT = 1UL,
    SSI_enLINE_SELECT_UNDEF = UNDEF_VALUE,
}SSI_nLINE_SELECT;

typedef struct
{
    SSI_nSTATE enLoopback;
    SSI_nDIRECTION enDirection;
    SSI_nMODE enSSIMode;
    SSI_nSTATE enFssHold;
    union
    {
        SSI_nSTATE enTxLine;
        SSI_nSTATE enDat0Line;
    };
    union
    {
        SSI_nSTATE enRxLine;
        SSI_nSTATE enDat1Line;
    };
    SSI_nSTATE enDat2Line;
    SSI_nSTATE enDat3Line;
    SSI_nSTATE enClkLine;
    SSI_nSTATE enFssLine;
}SSI_CONTROL_t;

typedef struct
{
    union
    {
        SSI_nLINE_SELECT enTx;
        SSI_nLINE_SELECT enDat0;
    };
    union
    {
        SSI_nLINE_SELECT enRx;
        SSI_nLINE_SELECT enDat1;
    };
    SSI_nLINE_SELECT enDat2;
    SSI_nLINE_SELECT enDat3;
    SSI_nLINE_SELECT enClk;
    SSI_nLINE_SELECT enFss;
}SSI_LINE_t;

typedef struct
{
    SSI_nFORMAT enFormat;
    SSI_nPHASE enClockPhase;
    SSI_nPOLARITY enClockPolarity;
    SSI_nLENGTH enLengthData;
}SSI_FRAME_CONTROL_t;

typedef struct
{
    SSI_nMODE enMode;
    SSI_nDIRECTION enDirection;
    union
    {
        uint8_t u8data;
        UBase_t uxdata;
    };
    UBase_t uxReserved1;
}SSI_ADVANCE_t;

typedef MCU_Register_t SSI_Register_t;
typedef MCU_pvfIRQVectorHandler_t SSI_pvfIRQVectorHandler_t;
typedef MCU_pvfIRQSourceHandler_t SSI_pvfIRQSourceHandler_t;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_XHEADER_SSI_ENUM_H_ */
