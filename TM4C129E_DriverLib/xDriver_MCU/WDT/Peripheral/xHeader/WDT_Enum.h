/**
 *
 * @file WDT_Enum.h
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
 * @verbatim 19 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

typedef enum
{
    WDT_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    WDT_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    WDT_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    WDT_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    WDT_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    WDT_enERROR_FULL = (UBase_t) MCU_enERROR_FULL,
    WDT_enERROR_TIMEOUT = (UBase_t) MCU_enERROR_TIMEOUT,
    WDT_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}WDT_nERROR;

typedef enum
{
    WDT_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    WDT_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    WDT_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
} WDT_nSTATE;

typedef enum
{
    WDT_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    WDT_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    WDT_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
} WDT_nSTATUS;

typedef enum
{
    WDT_enFALSE = (UBase_t) FALSE,
    WDT_enTRUE = (UBase_t) TRUE,
    WDT_enPENDSTATE_UNDEF = UNDEF_VALUE,
}WDT_nBOOLEAN;

typedef enum
{
    WDT_enPRI0 = (UBase_t) MCU_enPRI0,
    WDT_enPRI1 = (UBase_t) MCU_enPRI1,
    WDT_enPRI2 = (UBase_t) MCU_enPRI2,
    WDT_enPRI3 = (UBase_t) MCU_enPRI3,
    WDT_enPRI4 = (UBase_t) MCU_enPRI4,
    WDT_enPRI5 = (UBase_t) MCU_enPRI5,
    WDT_enPRI6 = (UBase_t) MCU_enPRI6,
    WDT_enPRI7 = (UBase_t) MCU_enPRI7,
    WDT_enPRIMAX = (UBase_t) MCU_enPRIMAX,
    WDT_enDEFAULT = (UBase_t) MCU_enDEFAULT,
}WDT_nPRIORITY;

typedef enum
{
    WDT_enMODULE_0 = 0UL,
    WDT_enMODULE_1 = 1UL,
    WDT_enMODULE_MAX = 2UL,
}WDT_nMODULE;


typedef enum
{
    WDT_enWRITE_STATUS_BUSY = 0UL,
    WDT_enWRITE_STATUS_READY = 1UL,
    WDT_enWRITE_STATUS_UNDEF = UNDEF_VALUE,
}WDT_nWRITE_STATUS;

typedef enum
{
    WDT_enINT_WDT = 0UL,
    WDT_enINT_SW = 1UL,
    WDT_enINT_MAX = 2UL,
    WDT_enINT_UNDEF = UNDEF_VALUE,
}WDT_nINT;

typedef enum
{
    WDT_enINTMASK_NONE = 0x0UL,
    WDT_enINTMASK_WDT = 0x1UL,
    WDT_enINTMASK_ALL = 0x1UL,
    WDT_enINTMASK_MAX = 0x2UL,
    WDT_enINTMASK_UNDEF = UNDEF_VALUE,
}WDT_nINTMASK;

typedef enum
{
    WDT_enINT_TYPE_STANDARD = 0UL,
    WDT_enINT_TYPE_NMI = 1UL,
    WDT_enINT_TYPE_MAX = 2UL,
    WDT_enINT_TYPE_UNDEF = UNDEF_VALUE,
}WDT_nINT_TYPE;

typedef enum
{
    WDT_enSTALL_CONTINUE = 0UL,
    WDT_enSTALL_FREEZE = 1UL,
    WDT_enSTALL_UNDEF = UNDEF_VALUE,
}WDT_nSTALL;

typedef enum
{
    WDT_enCONFIG_RESET_STANDARD_CONTINUE_DIS   = ((UBase_t) WDT_enSTATE_ENA << 24UL) | ((UBase_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((UBase_t) WDT_enSTALL_CONTINUE << 8UL) | ((UBase_t) WDT_enSTATE_DIS << 0UL),
    WDT_enCONFIG_RESET_STANDARD_CONTINUE_ENA   = ((UBase_t) WDT_enSTATE_ENA << 24UL) | ((UBase_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((UBase_t) WDT_enSTALL_CONTINUE << 8UL) | ((UBase_t) WDT_enSTATE_ENA << 0UL),
    WDT_enCONFIG_RESET_STANDARD_FREEZE_DIS     = ((UBase_t) WDT_enSTATE_ENA << 24UL) | ((UBase_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((UBase_t) WDT_enSTALL_FREEZE << 8UL)   | ((UBase_t) WDT_enSTATE_DIS << 0UL),
    WDT_enCONFIG_RESET_STANDARD_FREEZE_ENA     = ((UBase_t) WDT_enSTATE_ENA << 24UL) | ((UBase_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((UBase_t) WDT_enSTALL_FREEZE << 8UL)   | ((UBase_t) WDT_enSTATE_ENA << 0UL),
    WDT_enCONFIG_RESET_NMI_CONTINUE_DIS        = ((UBase_t) WDT_enSTATE_ENA << 24UL) | ((UBase_t) WDT_enINT_TYPE_NMI << 16UL)      | ((UBase_t) WDT_enSTALL_CONTINUE << 8UL) | ((UBase_t) WDT_enSTATE_DIS << 0UL),
    WDT_enCONFIG_RESET_NMI_CONTINUE_ENA        = ((UBase_t) WDT_enSTATE_ENA << 24UL) | ((UBase_t) WDT_enINT_TYPE_NMI << 16UL)      | ((UBase_t) WDT_enSTALL_CONTINUE << 8UL) | ((UBase_t) WDT_enSTATE_ENA << 0UL),
    WDT_enCONFIG_RESET_NMI_FREEZE_DIS          = ((UBase_t) WDT_enSTATE_ENA << 24UL) | ((UBase_t) WDT_enINT_TYPE_NMI << 16UL)      | ((UBase_t) WDT_enSTALL_FREEZE << 8UL)   | ((UBase_t) WDT_enSTATE_DIS << 0UL),
    WDT_enCONFIG_RESET_NMI_FREEZE_ENA          = ((UBase_t) WDT_enSTATE_ENA << 24UL) | ((UBase_t) WDT_enINT_TYPE_NMI << 16UL)      | ((UBase_t) WDT_enSTALL_FREEZE << 8UL)   | ((UBase_t) WDT_enSTATE_ENA << 0UL),
    WDT_enCONFIG_NORESET_STANDARD_CONTINUE_DIS = ((UBase_t) WDT_enSTATE_DIS << 24UL) | ((UBase_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((UBase_t) WDT_enSTALL_CONTINUE << 8UL) | ((UBase_t) WDT_enSTATE_DIS << 0UL),
    WDT_enCONFIG_NORESET_STANDARD_CONTINUE_ENA = ((UBase_t) WDT_enSTATE_DIS << 24UL) | ((UBase_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((UBase_t) WDT_enSTALL_CONTINUE << 8UL) | ((UBase_t) WDT_enSTATE_ENA << 0UL),
    WDT_enCONFIG_NORESET_STANDARD_FREEZE_DIS   = ((UBase_t) WDT_enSTATE_DIS << 24UL) | ((UBase_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((UBase_t) WDT_enSTALL_FREEZE << 8UL)   | ((UBase_t) WDT_enSTATE_DIS << 0UL),
    WDT_enCONFIG_NORESET_STANDARD_FREEZE_ENA   = ((UBase_t) WDT_enSTATE_DIS << 24UL) | ((UBase_t) WDT_enINT_TYPE_STANDARD << 16UL) | ((UBase_t) WDT_enSTALL_FREEZE << 8UL)   | ((UBase_t) WDT_enSTATE_ENA << 0UL),
    WDT_enCONFIG_NORESET_NMI_CONTINUE_DIS      = ((UBase_t) WDT_enSTATE_DIS << 24UL) | ((UBase_t) WDT_enINT_TYPE_NMI << 16UL)      | ((UBase_t) WDT_enSTALL_CONTINUE << 8UL) | ((UBase_t) WDT_enSTATE_DIS << 0UL),
    WDT_enCONFIG_NORESET_NMI_CONTINUE_ENA      = ((UBase_t) WDT_enSTATE_DIS << 24UL) | ((UBase_t) WDT_enINT_TYPE_NMI << 16UL)      | ((UBase_t) WDT_enSTALL_CONTINUE << 8UL) | ((UBase_t) WDT_enSTATE_ENA << 0UL),
    WDT_enCONFIG_NORESET_NMI_FREEZE_DIS        = ((UBase_t) WDT_enSTATE_DIS << 24UL) | ((UBase_t) WDT_enINT_TYPE_NMI << 16UL)      | ((UBase_t) WDT_enSTALL_FREEZE << 8UL)   | ((UBase_t) WDT_enSTATE_DIS << 0UL),
    WDT_enCONFIG_NORESET_NMI_FREEZE_ENA        = ((UBase_t) WDT_enSTATE_DIS << 24UL) | ((UBase_t) WDT_enINT_TYPE_NMI << 16UL)      | ((UBase_t) WDT_enSTALL_FREEZE << 8UL)   | ((UBase_t) WDT_enSTATE_ENA << 0UL),
    WDT_enCONFIG_UNDEF = UNDEF_VALUE,
}WDT_nCONFIG;

typedef struct
{
    WDT_nSTATE enInterruptState;
    WDT_nSTALL enStallMode;
    WDT_nINT_TYPE enInterruptType;
    WDT_nSTATE enResetOutput;
}WDT_CONFIG_t;

typedef MCU_Register_t WDT_Register_t;
typedef MCU_pvfIRQVectorHandler_t WDT_pvfIRQVectorHandler_t;
typedef MCU_pvfIRQSourceHandler_t WDT_pvfIRQSourceHandler_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_ENUM_H_ */
