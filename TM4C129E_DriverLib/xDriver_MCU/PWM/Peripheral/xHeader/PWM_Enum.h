/**
 *
 * @file PWM_Enum.h
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
 * @verbatim May 26, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * May 26, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_XHEADER_PWM_ENUM_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_XHEADER_PWM_ENUM_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    PWM_enSTATUS_OK = 0UL,
    PWM_enSTATUS_ERROR = 1UL,
    PWM_enSTATUS_UNDEF = 0xFFFFFFFFUL,
}PWM_nSTATUS;

typedef enum
{
    PWM_enNOREADY = 0UL,
    PWM_enREADY = 1UL,
}PWM_nREADY;

typedef enum
{
    PWM_enMODULE_0 = 0UL,
    PWM_enMODULE_MAX = 1UL,
}PWM_nMODULE;

typedef enum
{
    PWM_enPRI0 = 0UL,
    PWM_enPRI1 = 1UL,
    PWM_enPRI2 = 2UL,
    PWM_enPRI3 = 3UL,
    PWM_enPRI4 = 4UL,
    PWM_enPRI5 = 5UL,
    PWM_enPRI6 = 6UL,
    PWM_enPRI7 = 7UL,
    PWM_enPRIMAX = 7UL,
    PWM_enDEFAULT = 0xFFFFFFFFUL,
}PWM_nPRIORITY;

typedef enum
{
    PWM_enGEN_0 = 0UL,
    PWM_enGEN_1 = 1UL,
    PWM_enGEN_2 = 2UL,
    PWM_enGEN_3 = 3UL,
    PWM_enGEN_MAX = 4UL,
    PWM_enGEN_UNDEF = 0xFFFFFFFFUL,
}PWM_nGENERATOR;

typedef enum
{
    PWM_enFAULT_0 = 0UL,
    PWM_enFAULT_1 = 1UL,
    PWM_enFAULT_2 = 2UL,
    PWM_enFAULT_3 = 3UL,
    PWM_enFAULT_MAX = 4UL,
    PWM_enFAULT_UNDEF = 0xFFFFFFFFUL,
}PWM_nFAULT;

typedef enum
{
    PWM_enGENMASK_NONE = 0x0UL,
    PWM_enGENMASK_0 = 0x1UL,
    PWM_enGENMASK_1 = 0x2UL,
    PWM_enGENMASK_2 = 0x4UL,
    PWM_enGENMASK_3 = 0x8UL,
    PWM_enGENMASK_MAX = 0xFUL,
    PWM_enGENMASK_UNDEF = 0xFFFFFFFFUL,
}PWM_nGENMASK;

typedef enum
{
    PWM_enFAULTMASK_NONE = 0x0UL,
    PWM_enFAULTMASK_0 = 0x1UL,
    PWM_enFAULTMASK_1 = 0x2UL,
    PWM_enFAULTMASK_2 = 0x4UL,
    PWM_enFAULTMASK_3 = 0x8UL,
    PWM_enFAULTMASK_MAX = 0xFUL,
    PWM_enFAULTMASK_UNDEF = 0xFFFFFFFFUL,
}PWM_nFAULTMASK;

/**
 * PWM Gen interrupts
 */
typedef enum
{
    PWM_enGEN_INTERRUPT_SW = 0UL,
    PWM_enGEN_INTERRUPT_ZERO = 1UL,
    PWM_enGEN_INTERRUPT_LOAD = 2UL,
    PWM_enGEN_INTERRUPT_CMPA_UP = 3UL,
    PWM_enGEN_INTERRUPT_CMPA_DOWN = 4UL,
    PWM_enGEN_INTERRUPT_CMPB_UP = 5UL,
    PWM_enGEN_INTERRUPT_CMPB_DOWN = 6UL,
    PWM_enGEN_INTERRUPT_MAX = 7UL,
}PWM_nGEN_INTERRUPT;

typedef enum
{
    PWM_enGEN_INT_SOURCE_NONE = 0x0UL,
    PWM_enGEN_INT_SOURCE_ZERO = 0x1UL,
    PWM_enGEN_INT_SOURCE_LOAD = 0x2UL,
    PWM_enGEN_INT_SOURCE_CMPA_UP = 0x4UL,
    PWM_enGEN_INT_SOURCE_CMPA_DOWN = 0x8UL,
    PWM_enGEN_INT_SOURCE_CMPB_UP = 0x10UL,
    PWM_enGEN_INT_SOURCE_CMPB_DOWN = 0x20UL,
    PWM_enGEN_INT_SOURCE_ALL = 0x3FUL,
}PWM_nGEN_INT_SOURCE;


/**
 * PWM Gen interrupts
 */
typedef enum
{
    PWM_enFAULT_INTERRUPT_SW = 0UL,
    PWM_enFAULT_INTERRUPT_FAULT = 1UL,
    PWM_enFAULT_INTERRUPT_MAX = 2UL,
}PWM_nFAULT_INTERRUPT;

typedef enum
{
    PWM_enFAULT_INT_SOURCE_NONE = 0x0UL,
    PWM_enFAULT_INT_SOURCE_FAULT = 0x1UL,
    PWM_enFAULT_INT_SOURCE_ALL = 0x1UL,
}PWM_nFAULT_INT_SOURCE;

typedef enum
{
    PWM_enINT_STATUS_NOOCCUR = 0UL,
    PWM_enINT_STATUS_OCCUR = 1UL,
    PWM_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
}PWM_nINT_STATUS;



#endif /* XDRIVER_MCU_PWM_PERIPHERAL_XHEADER_PWM_ENUM_H_ */
