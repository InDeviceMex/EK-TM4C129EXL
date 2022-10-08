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
    QEI_enSTATUS_OK = 0UL,
    QEI_enSTATUS_ERROR = 1UL,
    QEI_enSTATUS_UNDEF = UNDEF_VALUE,
}QEI_nSTATUS;

typedef enum
{
    QEI_enNOREADY = 0UL,
    QEI_enREADY = 1UL,
}QEI_nREADY;

typedef enum
{
    QEI_enMODULE_0 = 0UL,
    QEI_enMODULE_MAX = 1UL,
}QEI_nMODULE;

typedef enum
{
    QEI_enPRI0 = 0UL,
    QEI_enPRI1 = 1UL,
    QEI_enPRI2 = 2UL,
    QEI_enPRI3 = 3UL,
    QEI_enPRI4 = 4UL,
    QEI_enPRI5 = 5UL,
    QEI_enPRI6 = 6UL,
    QEI_enPRI7 = 7UL,
    QEI_enPRIMAX = 7UL,
    QEI_enDEFAULT = UNDEF_VALUE,
}QEI_nPRIORITY;

typedef enum
{
    QEI_enINTERRUPT_SW = 0UL,
    QEI_enINTERRUPT_INDEX = 1UL,
    QEI_enINTERRUPT_TIMER = 2UL,
    QEI_enINTERRUPT_DIRECTION = 3UL,
    QEI_enINTERRUPT_ERROR = 4UL,
    QEI_enINTERRUPT_MAX = 5UL,
    QEI_enINTERRUPT_UNDEF = UNDEF_VALUE,
}QEI_nINTERRUPT;

typedef enum
{
    QEI_enINT_SOURCE_NONE = 0x0UL,
    QEI_enINT_SOURCE_INDEX = 0x1UL,
    QEI_enINT_SOURCE_TIMER = 0x2UL,
    QEI_enINT_SOURCE_DIRECTION = 0x4UL,
    QEI_enINT_SOURCE_ERROR = 0x8UL,
    QEI_enINT_SOURCE_ALL = 0xFUL,
    QEI_enINT_SOURCE_UNDEF = UNDEF_VALUE,
}QEI_nINT_SOURCE;

typedef enum
{
    QEI_enINT_STATUS_INACTIVE = 0UL,
    QEI_enINT_STATUS_ACTIVE = 1UL,
    QEI_enINT_STATUS_UNDEF = UNDEF_VALUE,
} QEI_nINT_STATUS;

typedef enum
{
    QEI_enDIRECTION_FORWARD = 0UL,
    QEI_enDIRECTION_REVERSE = 1UL,
    QEI_enDIRECTION_UNDEF = UNDEF_VALUE,
} QEI_nDIRECTION;

typedef enum
{
    QEI_enENABLE_STOP = 0UL,
    QEI_enENABLE_START = 1UL,
    QEI_enENABLE_UNDEF = UNDEF_VALUE,
}QEI_nENABLE;

typedef enum
{
    QEI_enSWAP_DIS = 0UL,
    QEI_enSWAP_ENA = 1UL,
    QEI_enSWAP_UNDEF = UNDEF_VALUE,
}QEI_nSWAP;

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
    QEI_enVELOCITY_DIS = 0UL,
    QEI_enVELOCITY_ENA = 1UL,
    QEI_enVELOCITY_UNDEF = UNDEF_VALUE,
}QEI_nVELOCITY;

typedef enum
{
    QEI_enVELOCITY_PREDIV_1 = 0UL,
    QEI_enVELOCITY_PREDIV_2 = 1UL,
    QEI_enVELOCITY_PREDIV_4 = 2UL,
    QEI_enVELOCITY_PREDIV_8 = 3UL,
    QEI_enVELOCITY_PREDIV_16 = 4UL,
    QEI_enVELOCITY_PREDIV_32 = 5UL,
    QEI_enVELOCITY_PREDIV_64 = 6UL,
    QEI_enVELOCITY_PREDIV_128 = 7UL,
    QEI_enVELOCITY_PREDIV_UNDEF = UNDEF_VALUE,
}QEI_nVELOCITY_PREDIV;

typedef enum
{
    QEI_enSTALL_CONTINUE = 0UL,
    QEI_enSTALL_FREEZE = 1UL,
    QEI_enSTALL_UNDEF = UNDEF_VALUE,
}QEI_nSTALL;

typedef enum
{
    QEI_enINPUT_FILTER_DIS = 0UL,
    QEI_enINPUT_FILTER_ENA = 1UL,
    QEI_enINPUT_FILTER_UNDEF = UNDEF_VALUE,
}QEI_nINPUT_FILTER;

typedef enum
{
    QEI_enINPUT_FILTER_COUNT_2 = 0UL,
    QEI_enINPUT_FILTER_COUNT_3 = 1UL,
    QEI_enINPUT_FILTER_COUNT_4 = 2UL,
    QEI_enINPUT_FILTER_COUNT_5 = 3UL,
    QEI_enINPUT_FILTER_COUNT_6 = 4UL,
    QEI_enINPUT_FILTER_COUNT_7 = 5UL,
    QEI_enINPUT_FILTER_COUNT_8 = 6UL,
    QEI_enINPUT_FILTER_COUNT_9 = 7UL,
    QEI_enINPUT_FILTER_COUNT_10 = 8UL,
    QEI_enINPUT_FILTER_COUNT_11 = 9UL,
    QEI_enINPUT_FILTER_COUNT_12 = 10UL,
    QEI_enINPUT_FILTER_COUNT_13 = 11UL,
    QEI_enINPUT_FILTER_COUNT_14 = 12UL,
    QEI_enINPUT_FILTER_COUNT_15 = 13UL,
    QEI_enINPUT_FILTER_COUNT_16 = 14UL,
    QEI_enINPUT_FILTER_COUNT_17 = 15UL,
    QEI_enINPUT_FILTER_COUNT_UNDEF = UNDEF_VALUE,
}QEI_nINPUT_FILTER_COUNT;

typedef enum
{
    QEI_enSIGNAL_PhA = 0x1UL,
    QEI_enSIGNAL_PhB = 0x2UL,
    QEI_enSIGNAL_PhA_PhB = 0x3UL,
    QEI_enSIGNAL_INDEX = 0x4UL,
    QEI_enSIGNAL_PhA_INDEX = 0x5UL,
    QEI_enSIGNAL_PhB_INDEX = 0x6UL,
    QEI_enSIGNAL_PhA_PhB_INDEX = 0x7UL,
    QEI_enSIGNAL_UNDEF = UNDEF_VALUE,
}QEI_nSIGNAL;

typedef enum
{
    QEI_enSIGNAL_SELECT_PRIMARY = 0UL,
    QEI_enSIGNAL_SELECT_ALT = 1UL,
    QEI_enSIGNAL_SELECT_UNDEF = UNDEF_VALUE,
}QEI_nSIGNAL_SELECT;

typedef enum
{
    QEI_enINVERT_DIS = 0UL,
    QEI_enINVERT_ENA = 1UL,
    QEI_enINVERT_UNDEF = UNDEF_VALUE,
}QEI_nINVERT;

typedef struct
{
    QEI_nSWAP enSwapSignals;
    QEI_nMODE enSignalMode;
    QEI_nCAPTURE enCaptureMode;
    QEI_nRESET enResetMode;
    QEI_nVELOCITY enVelocity;
    QEI_nVELOCITY_PREDIV enVelocityPrediv;
    QEI_nINPUT_FILTER enInputFilter;
    QEI_nINPUT_FILTER_COUNT enInputFilterCount;
    QEI_nSTALL enStall;
    QEI_nENABLE enEnableModule;
}QEI_CONTROL_t;

typedef struct
{
    QEI_nINVERT enPhAInvert;
    QEI_nINVERT enPhBInvert;
    QEI_nINVERT enIDXInvert;
    QEI_nSIGNAL_SELECT enPhA;
    QEI_nSIGNAL_SELECT enPhB;
    QEI_nSIGNAL_SELECT enIDX;
}QEI_SIGNAL_t;

#endif /* XDRIVER_MCU_QEI_PERIPHERAL_XHEADER_QEI_ENUM_H_ */
