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
    PWM_enGENMASK_0 = 0x1UL,
    PWM_enGENMASK_1 = 0x2UL,
    PWM_enGENMASK_2 = 0x4UL,
    PWM_enGENMASK_3 = 0x8UL,
    PWM_enGENMASK_MAX = 0xFUL,
    PWM_enGENMASK_UNDEF = 0xFFFFFFFFUL,
}PWM_nGENMASK;

typedef enum
{
    PWM_enFAULTMASK_0 = 0x1UL,
    PWM_enFAULTMASK_1 = 0x2UL,
    PWM_enFAULTMASK_2 = 0x4UL,
    PWM_enFAULTMASK_3 = 0x8UL,
    PWM_enFAULTMASK_MAX = 0xFUL,
    PWM_enFAULTMASK_UNDEF = 0xFFFFFFFFUL,
}PWM_nFAULTMASK;

typedef enum
{
    PWM_enINTERRUPT_SW = 0UL,
    PWM_enINTERRUPT_INDEX = 1UL,
    PWM_enINTERRUPT_TIMER = 2UL,
    PWM_enINTERRUPT_DIRECTION = 3UL,
    PWM_enINTERRUPT_ERROR = 4UL,
    PWM_enINTERRUPT_MAX = 5UL,
    PWM_enINTERRUPT_UNDEF = 0xFFFFFFFFUL,
}PWM_nINTERRUPT;

typedef enum
{
    PWM_enINT_NOOCCUR = 0UL,
    PWM_enINT_OCCUR = 1UL,
    PWM_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
}PWM_nINT_STATUS;



#endif /* XDRIVER_MCU_PWM_PERIPHERAL_XHEADER_PWM_ENUM_H_ */
