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

#include <xUtils/Standard/Standard.h>

typedef enum
{
    ACMP_enSTATUS_OK = 0UL,
    ACMP_enSTATUS_ERROR = 1UL,
    ACMP_enSTATUS_UNDEF = 0xFFFFFFFFUL,
}ACMP_nSTATUS;

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
    ACMP_enCOMPMASK_0 = 0x1UL,
    ACMP_enCOMPMASK_1 = 0x2UL,
    ACMP_enCOMPMASK_2 = 0x4UL,
    ACMP_enCOMPMASK_ALL = 0x7UL,
    ACMP_enCOMPMASK_UNDEF = 0xFFFFFFFFUL,
}ACMP_nCOMPMASK;

typedef enum
{
    ACMP_enINT_NOOCCUR = 0UL,
    ACMP_enINT_OCCUR = 1UL,
    ACMP_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
} ACMP_nINT_STATUS;

typedef enum
{
    ACMP_enREFERENCE_DIS = 0UL,
    ACMP_enREFERENCE_ENA = 1UL,
    ACMP_enREFERENCE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nREFERENCE;

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
    ACMP_enINT_DIS = 0UL,
    ACMP_enINT_ENA = 1UL,
    ACMP_enINT_UNDEF = 0xFFFFFFFFUL,
} ACMP_nINT;

typedef enum
{
    ACMP_enADC_DIS = 0UL,
    ACMP_enADC_ENA = 1UL,
    ACMP_enADC_UNDEF = 0xFFFFFFFFUL,
} ACMP_nADC;

typedef enum
{
    ACMP_enADC_SENSE_LEVEL = 0UL,
    ACMP_enADC_SENSE_EDGE = 1UL,
    ACMP_enADC_SENSE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nADC_SENSE;

typedef enum
{
    ACMP_enADC_LEVEL_LOW = 0UL,
    ACMP_enADC_LEVEL_HIGH = 1UL,
    ACMP_enADC_LEVEL_UNDEF = 0xFFFFFFFFUL,
} ACMP_nADC_LEVEL;

typedef enum
{
    ACMP_enADC_EDGE_NONE = 0UL,
    ACMP_enADC_EDGE_FALLING = 1UL,
    ACMP_enADC_EDGE_RISING = 2UL,
    ACMP_enADC_EDGE_BOTH = 3UL,
    ACMP_enADC_EDGE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nADC_EDGE;

typedef enum
{
    ACMP_enADC_CONFIG_EDGE_FALLING = ((uint32_t) ACMP_enADC_SENSE_EDGE << 8UL) | ((uint32_t) ACMP_enADC_EDGE_FALLING << 0UL),
    ACMP_enADC_CONFIG_EDGE_RISING = ((uint32_t) ACMP_enADC_SENSE_EDGE << 8UL) | ((uint32_t) ACMP_enADC_EDGE_RISING << 0UL),
    ACMP_enADC_CONFIG_EDGE_BOTH = ((uint32_t) ACMP_enADC_SENSE_EDGE << 8UL) | ((uint32_t) ACMP_enADC_EDGE_BOTH << 0UL),
    ACMP_enADC_CONFIG_LEVEL_LOW = ((uint32_t) ACMP_enADC_SENSE_LEVEL << 8UL) | ((uint32_t) ACMP_enADC_LEVEL_LOW << 0UL),
    ACMP_enADC_CONFIG_LEVEL_HIGH = ((uint32_t) ACMP_enADC_SENSE_LEVEL << 8UL) | ((uint32_t) ACMP_enADC_LEVEL_HIGH << 0UL),
    ACMP_enADC_CONFIG_UNDEF = 0xFFFFFFFFUL,
} ACMP_nADC_CONFIG;

typedef enum
{
    ACMP_enINT_SENSE_LEVEL = 0UL,
    ACMP_enINT_SENSE_EDGE = 1UL,
    ACMP_enINT_SENSE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nINT_SENSE;

typedef enum
{
    ACMP_enINT_LEVEL_LOW = 0UL,
    ACMP_enINT_LEVEL_HIGH = 1UL,
    ACMP_enINT_LEVEL_UNDEF = 0xFFFFFFFFUL,
} ACMP_nINT_LEVEL;

typedef enum
{
    ACMP_enINT_EDGE_NONE = 0UL,
    ACMP_enINT_EDGE_FALLING = 1UL,
    ACMP_enINT_EDGE_RISING = 2UL,
    ACMP_enINT_EDGE_BOTH = 3UL,
    ACMP_enINT_EDGE_UNDEF = 0xFFFFFFFFUL,
} ACMP_nINT_EDGE;

typedef enum
{
    ACMP_enINT_CONFIG_EDGE_FALLING = ((uint32_t) ACMP_enINT_SENSE_EDGE << 8UL) | ((uint32_t) ACMP_enINT_EDGE_FALLING << 0UL),
    ACMP_enINT_CONFIG_EDGE_RISING = ((uint32_t) ACMP_enINT_SENSE_EDGE << 8UL) | ((uint32_t) ACMP_enINT_EDGE_RISING << 0UL),
    ACMP_enINT_CONFIG_EDGE_BOTH = ((uint32_t) ACMP_enINT_SENSE_EDGE << 8UL) | ((uint32_t) ACMP_enINT_EDGE_BOTH << 0UL),
    ACMP_enINT_CONFIG_LEVEL_LOW = ((uint32_t) ACMP_enINT_SENSE_LEVEL << 8UL) | ((uint32_t) ACMP_enINT_LEVEL_LOW << 0UL),
    ACMP_enINT_CONFIG_LEVEL_HIGH = ((uint32_t) ACMP_enINT_SENSE_LEVEL << 8UL) | ((uint32_t) ACMP_enINT_LEVEL_HIGH << 0UL),
    ACMP_enINT_CONFIG_UNDEF = 0xFFFFFFFFUL,
} ACMP_nINT_CONFIG;

typedef enum
{
    ACMP_enOUTPUT_INVERT_DIS = 0UL,
    ACMP_enOUTPUT_INVERT_ENA = 1UL,
    ACMP_enOUTPUT_INVERT_UNDEF = 0xFFFFFFFFUL,
} ACMP_nOUTPUT_INVERT;

typedef enum
{
    ACMP_enOUTPUT_DIS = 0UL,
    ACMP_enOUTPUT_ENA = 1UL,
    ACMP_enOUTPUT_UNDEF = 0xFFFFFFFFUL,
}ACMP_nOUTPUT;

typedef enum
{
    ACMP_enLINE_OUT_SELECT_PRIMARY = 0UL,
    ACMP_enLINE_OUT_SELECT_ALT = 1UL,
    ACMP_enLINE_OUT_SELECT_MAX = 2UL,
    ACMP_enLINE_OUT_SELECT_UNDEF = 0xFFFFFFFFUL,
}ACMP_nLINE_OUT_SELECT;

typedef struct
{
    ACMP_nINT enIntEnable;
    ACMP_nADC enADCEnable;
    ACMP_nOUTPUT enOutputEnable;
    ACMP_nINT_CONFIG enIntConfig;
    ACMP_nADC_CONFIG enADCConfig;
    ACMP_nOUTPUT_INVERT enOutputInvert;
    ACMP_nVMAX_SOURCE enVmaxSource;
}ACMP_CONTROL_t;


#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_XHEADER_ACMP_ENUM_H_ */
