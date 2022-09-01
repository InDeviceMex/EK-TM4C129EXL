/**
 *
 * @file ACMP_Enum.h
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
 * @verbatim 28 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_XHEADER_ACMP_ENUM_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_XHEADER_ACMP_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef enum
{
    ACMP_enERROR_OK = (uint32_t) MCU_enERROR_OK,
    ACMP_enERROR_POINTER = (uint32_t) MCU_enERROR_POINTER,
    ACMP_enERROR_VALUE = (uint32_t) MCU_enERROR_VALUE,
    ACMP_enERROR_UNDEF = (uint32_t) MCU_enERROR_UNDEF,
}ACMP_nERROR;

typedef enum
{
    ACMP_enSTATE_DIS = 0UL,
    ACMP_enSTATE_ENA = 1UL,
    ACMP_enSTATE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nSTATE;

typedef enum
{
    ACMP_enSTATUS_NOOCCUR = 0UL,
    ACMP_enSTATUS_OCCUR = 1UL,
    ACMP_enSTATUS_UNDEF = 0xFFFFFFFFUL,
} ACMP_nSTATUS;

typedef enum
{
    ACMP_enNOREADY = 0UL,
    ACMP_enREADY = 1UL,
}ACMP_nREADY;

typedef enum
{
    ACMP_enMODULE_0 = 0UL,
    ACMP_enMODULE_MAX = 1UL,
}ACMP_nMODULE;

typedef enum
{
    ACMP_enPRI0 = 0UL,
    ACMP_enPRI1 = 1UL,
    ACMP_enPRI2 = 2UL,
    ACMP_enPRI3 = 3UL,
    ACMP_enPRI4 = 4UL,
    ACMP_enPRI5 = 5UL,
    ACMP_enPRI6 = 6UL,
    ACMP_enPRI7 = 7UL,
    ACMP_enPRIMAX = 7UL,
    ACMP_enDEFAULT = 0xFFFFFFFFUL,
}ACMP_nPRIORITY;

typedef enum
{
    ACMP_enCOMP_0 = 0UL,
    ACMP_enCOMP_1 = 1UL,
    ACMP_enCOMP_2 = 2UL,
    ACMP_enCOMP_MAX = 3UL,
    ACMP_enCOMP_UNDEF = 0xFFFFFFFFUL,
}ACMP_nCOMP;

typedef enum
{
    ACMP_enCOMPMASK_NONE = 0x0UL,
    ACMP_enCOMPMASK_0 = 0x1UL,
    ACMP_enCOMPMASK_1 = 0x2UL,
    ACMP_enCOMPMASK_2 = 0x4UL,
    ACMP_enCOMPMASK_ALL = 0x7UL,
    ACMP_enCOMPMASK_MAX = 0x8UL,
    ACMP_enCOMPMASK_UNDEF = 0xFFFFFFFFUL,
}ACMP_nCOMPMASK;

typedef enum
{
    ACMP_enREFERENCE_RANGE_HIGH = 0UL,
    ACMP_enREFERENCE_RANGE_LOW = 1UL,
    ACMP_enREFERENCE_RANGE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nREFERENCE_RANGE;

typedef enum
{
    ACMP_enOUTPUT_VALUE_VMIN_GREATER = 0UL,
    ACMP_enOUTPUT_VALUE_VMAX_LOWER = 0UL,
    ACMP_enOUTPUT_VALUE_VMIN_LOWER = 1UL,
    ACMP_enOUTPUT_VALUE_VMAX_GREATER = 1UL,
    ACMP_enOUTPUT_VALUE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nOUTPUT_VALUE;

typedef enum
{
    ACMP_enVMAX_SOURCE_CN = 0UL,
    ACMP_enVMAX_SOURCE_C0 = 1UL,
    ACMP_enVMAX_SOURCE_VIREF = 2UL,
    ACMP_enVMAX_SOURCE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nVMAX_SOURCE;

typedef enum
{
    ACMP_enLEVEL_LOW = 0UL,
    ACMP_enLEVEL_HIGH = 1UL,
    ACMP_enLEVEL_UNDEF = 0xFFFFFFFFUL,
} ACMP_nLEVEL;

typedef enum
{
    ACMP_enSENSE_LEVEL = 0UL,
    ACMP_enSENSE_EDGE = 1UL,
    ACMP_enSENSE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nSENSE;

typedef enum
{
    ACMP_enEDGE_NONE = 0UL,
    ACMP_enEDGE_FALLING = 1UL,
    ACMP_enEDGE_RISING = 2UL,
    ACMP_enEDGE_BOTH = 3UL,
    ACMP_enEDGE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nEDGE;

typedef enum
{
    ACMP_enADC_CONFIG_EDGE_FALLING = ((uint32_t) ACMP_enSENSE_EDGE << 8UL) | ((uint32_t) ACMP_enEDGE_FALLING << 0UL),
    ACMP_enADC_CONFIG_EDGE_RISING = ((uint32_t) ACMP_enSENSE_EDGE << 8UL) | ((uint32_t) ACMP_enEDGE_RISING << 0UL),
    ACMP_enADC_CONFIG_EDGE_BOTH = ((uint32_t) ACMP_enSENSE_EDGE << 8UL) | ((uint32_t) ACMP_enEDGE_BOTH << 0UL),
    ACMP_enADC_CONFIG_LEVEL_LOW = ((uint32_t) ACMP_enSENSE_LEVEL << 8UL) | ((uint32_t) ACMP_enLEVEL_LOW << 0UL),
    ACMP_enADC_CONFIG_LEVEL_HIGH = ((uint32_t) ACMP_enSENSE_LEVEL << 8UL) | ((uint32_t) ACMP_enLEVEL_HIGH << 0UL),
    ACMP_enADC_CONFIG_UNDEF = 0xFFFFFFFFUL,
} ACMP_nADC_CONFIG;

typedef enum
{
    ACMP_enINT_CONFIG_EDGE_FALLING = ((uint32_t) ACMP_enSENSE_EDGE << 8UL) | ((uint32_t) ACMP_enEDGE_FALLING << 0UL),
    ACMP_enINT_CONFIG_EDGE_RISING = ((uint32_t) ACMP_enSENSE_EDGE << 8UL) | ((uint32_t) ACMP_enEDGE_RISING << 0UL),
    ACMP_enINT_CONFIG_EDGE_BOTH = ((uint32_t) ACMP_enSENSE_EDGE << 8UL) | ((uint32_t) ACMP_enEDGE_BOTH << 0UL),
    ACMP_enINT_CONFIG_LEVEL_LOW = ((uint32_t) ACMP_enSENSE_LEVEL << 8UL) | ((uint32_t) ACMP_enLEVEL_LOW << 0UL),
    ACMP_enINT_CONFIG_LEVEL_HIGH = ((uint32_t) ACMP_enSENSE_LEVEL << 8UL) | ((uint32_t) ACMP_enLEVEL_HIGH << 0UL),
    ACMP_enINT_CONFIG_UNDEF = 0xFFFFFFFFUL,
} ACMP_nINT_CONFIG;

typedef enum
{
    ACMP_enLINE_OUT_SELECT_PRIMARY = 0UL,
    ACMP_enLINE_OUT_SELECT_ALT = 1UL,
    ACMP_enLINE_OUT_SELECT_MAX = 2UL,
    ACMP_enLINE_OUT_SELECT_UNDEF = 0xFFFFFFFFUL,
}ACMP_nLINE_OUT_SELECT;

typedef struct
{
    ACMP_nSTATE enIntEnable;
    ACMP_nSTATE enADCEnable;
    ACMP_nSTATE enOutputEnable;
    ACMP_nSTATE enOutputInvert;
    ACMP_nINT_CONFIG enIntConfig;
    ACMP_nADC_CONFIG enADCConfig;
    ACMP_nVMAX_SOURCE enVmaxSource;
}ACMP_CONTROL_t;


typedef MCU_Register_t ACMP_Register_t;
typedef MCU_pvfIRQSourceHandler_t ACMP_pvfIRQSourceHandler_t;

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_XHEADER_ACMP_ENUM_H_ */
