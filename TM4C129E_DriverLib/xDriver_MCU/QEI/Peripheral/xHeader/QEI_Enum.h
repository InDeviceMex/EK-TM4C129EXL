/**
 *
 * @file QEI_Enum.h
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_XHEADER_QEI_ENUM_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_XHEADER_QEI_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

typedef enum
{
    QEI_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    QEI_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    QEI_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    QEI_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    QEI_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    QEI_enERROR_TIMEOUT = (UBase_t) MCU_enERROR_TIMEOUT,
    QEI_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}QEI_nERROR;

typedef enum
{
    QEI_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    QEI_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    QEI_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
} QEI_nSTATE;

typedef enum
{
    QEI_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    QEI_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    QEI_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
} QEI_nSTATUS;

typedef enum
{
    QEI_enFALSE = (UBase_t) FALSE,
    QEI_enTRUE = (UBase_t) TRUE,
    QEI_enPENDSTATE_UNDEF = UNDEF_VALUE,
}QEI_nBOOLEAN;

typedef enum
{
    QEI_enPRI0 = (UBase_t) MCU_enPRI0,
    QEI_enPRI1 = (UBase_t) MCU_enPRI1,
    QEI_enPRI2 = (UBase_t) MCU_enPRI2,
    QEI_enPRI3 = (UBase_t) MCU_enPRI3,
    QEI_enPRI4 = (UBase_t) MCU_enPRI4,
    QEI_enPRI5 = (UBase_t) MCU_enPRI5,
    QEI_enPRI6 = (UBase_t) MCU_enPRI6,
    QEI_enPRI7 = (UBase_t) MCU_enPRI7,
    QEI_enPRIMAX = (UBase_t) MCU_enPRIMAX,
    QEI_enDEFAULT = (UBase_t) MCU_enDEFAULT,
}QEI_nPRIORITY;

typedef enum
{
    QEI_enMODULE_0 = 0UL,
    QEI_enMODULE_MAX = 1UL,
}QEI_nMODULE;

typedef enum
{
    QEI_enINT_INDEX = 0UL,
    QEI_enINT_TIMER = 1UL,
    QEI_enINT_DIRECTION = 2UL,
    QEI_enINT_ERROR = 3UL,
    QEI_enINT_SW = 4UL,
    QEI_enINT_MAX = 5UL,
    QEI_enINT_UNDEF = UNDEF_VALUE,
}QEI_nINT;

typedef enum
{
    QEI_enINTMASK_NONE = 0x0UL,
    QEI_enINTMASK_INDEX = 0x1UL,
    QEI_enINTMASK_TIMER = 0x2UL,
    QEI_enINTMASK_DIRECTION = 0x4UL,
    QEI_enINTMASK_ERROR = 0x8UL,
    QEI_enINTMASK_ALL = 0xFUL,
    QEI_enINTMASK_MAX = 0x10UL,
    QEI_enINTMASK_UNDEF = UNDEF_VALUE,
}QEI_nINTMASK;

typedef enum
{
    QEI_enDIRECTION_FORWARD = 0UL,
    QEI_enDIRECTION_REVERSE = 1UL,
    QEI_enDIRECTION_UNDEF = UNDEF_VALUE,
} QEI_nDIRECTION;

typedef enum
{
    QEI_enMODE_QUADRATURE = 0UL,
    QEI_enMODE_BYPASS = 1UL,
    QEI_enMODE_UNDEF = UNDEF_VALUE,
}QEI_nMODE;

typedef enum
{
    QEI_enCAPTURE_PhA = 0UL,
    QEI_enCAPTURE_BOTH = 1UL,
    QEI_enCAPTURE_UNDEF = UNDEF_VALUE,
}QEI_nCAPTURE;

typedef enum
{
    QEI_enRESET_MAXPOS = 0UL,
    QEI_enRESET_INDEX = 1UL,
    QEI_enRESET_UNDEF = UNDEF_VALUE,
}QEI_nRESET;

typedef enum
{
    QEI_enPREDIV_1 = 0UL,
    QEI_enPREDIV_2 = 1UL,
    QEI_enPREDIV_4 = 2UL,
    QEI_enPREDIV_8 = 3UL,
    QEI_enPREDIV_16 = 4UL,
    QEI_enPREDIV_32 = 5UL,
    QEI_enPREDIV_64 = 6UL,
    QEI_enPREDIV_128 = 7UL,
    QEI_enPREDIV_UNDEF = UNDEF_VALUE,
}QEI_nPREDIV;

typedef enum
{
    QEI_enSTALL_CONTINUE = 0UL,
    QEI_enSTALL_FREEZE = 1UL,
    QEI_enSTALL_UNDEF = UNDEF_VALUE,
}QEI_nSTALL;

typedef enum
{
    QEI_nFILTER_COUNT_2 = 0UL,
    QEI_nFILTER_COUNT_3 = 1UL,
    QEI_nFILTER_COUNT_4 = 2UL,
    QEI_nFILTER_COUNT_5 = 3UL,
    QEI_nFILTER_COUNT_6 = 4UL,
    QEI_nFILTER_COUNT_7 = 5UL,
    QEI_nFILTER_COUNT_8 = 6UL,
    QEI_nFILTER_COUNT_9 = 7UL,
    QEI_nFILTER_COUNT_10 = 8UL,
    QEI_nFILTER_COUNT_11 = 9UL,
    QEI_nFILTER_COUNT_12 = 10UL,
    QEI_nFILTER_COUNT_13 = 11UL,
    QEI_nFILTER_COUNT_14 = 12UL,
    QEI_nFILTER_COUNT_15 = 13UL,
    QEI_nFILTER_COUNT_16 = 14UL,
    QEI_nFILTER_COUNT_17 = 15UL,
    QEI_nFILTER_COUNT_UNDEF = UNDEF_VALUE,
}QEI_nFILTER_COUNT;

typedef enum
{
    QEI_enINPUT_PhA = 0UL,
    QEI_enINPUT_PhB = 1UL,
    QEI_enINPUT_INDEX = 2UL,
    QEI_enINPUT_MAX = 3UL,
    QEI_enINPUT_UNDEF = UNDEF_VALUE,
}QEI_nINPUT;

typedef enum
{
    QEI_enINPUTMASK_PhA = 0x1UL,
    QEI_enINPUTMASK_PhB = 0x2UL,
    QEI_enINPUTMASK_PhA_PhB = 0x3UL,
    QEI_enINPUTMASK_INDEX = 0x4UL,
    QEI_enINPUTMASK_PhA_INDEX = 0x5UL,
    QEI_enINPUTMASK_PhB_INDEX = 0x6UL,
    QEI_enINPUTMASK_PhA_PhB_INDEX = 0x7UL,
    QEI_enINPUTMASK_MASK = 0x8UL,
    QEI_enINPUTMASK_UNDEF = UNDEF_VALUE,
}QEI_nINPUTMASK;

typedef enum
{
    QEI_enINPUT_SELECT_PRIMARY = 0UL,
    QEI_enINPUT_SELECT_ALT = 1UL,
    QEI_enINPUT_SELECT_UNDEF = UNDEF_VALUE,
}QEI_nINPUT_SELECT;

typedef struct
{
    QEI_nSTATE enSwapPhaseInput;
    QEI_nMODE enMode;
    QEI_nCAPTURE enCaptureMode;
    QEI_nRESET enResetMode;
    QEI_nSTATE enVelocity;
    QEI_nPREDIV enVelocityPrediv;
    QEI_nSTATE enInputFilter;
    QEI_nFILTER_COUNT enInputFilterCount;
    QEI_nSTALL enStall;
    QEI_nSTATE enEnableModule;
}QEI_CONTROL_t;

typedef struct
{
    QEI_nSTATE enPhAInvert;
    QEI_nSTATE enPhBInvert;
    QEI_nSTATE enIDXInvert;
    QEI_nINPUT_SELECT enPhA;
    QEI_nINPUT_SELECT enPhB;
    QEI_nINPUT_SELECT enIDX;
}QEI_INPUT_t;


typedef MCU_Register_t QEI_Register_t;
typedef MCU_pvfIRQVectorHandler_t QEI_pvfIRQVectorHandler_t;
typedef MCU_pvfIRQSourceHandler_t QEI_pvfIRQSourceHandler_t;

#endif /* XDRIVER_MCU_QEI_PERIPHERAL_XHEADER_QEI_ENUM_H_ */
