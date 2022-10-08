/**
 *
 * @file PWM_RegisterDefines_PP.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 24 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_PP_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_PP_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

/******************************************************************************************
************************************ 31 PP *********************************************
******************************************************************************************/
/*--------*/
#define PWM_PP_R_GCNT_MASK    ((UBase_t) 0x0000000FUL)
#define PWM_PP_R_GCNT_BIT    ((UBase_t) 0UL)
#define PWM_PP_R_GCNT_0    ((UBase_t) 0x00000000UL)
#define PWM_PP_R_GCNT_1    ((UBase_t) 0x00000001UL)
#define PWM_PP_R_GCNT_2    ((UBase_t) 0x00000002UL)
#define PWM_PP_R_GCNT_3    ((UBase_t) 0x00000003UL)
#define PWM_PP_R_GCNT_4    ((UBase_t) 0x00000004UL)

#define PWM_PP_GCNT_MASK    ((UBase_t) 0x0000000FUL)
#define PWM_PP_GCNT_0    ((UBase_t) 0x00000000UL)
#define PWM_PP_GCNT_1    ((UBase_t) 0x00000001UL)
#define PWM_PP_GCNT_2    ((UBase_t) 0x00000002UL)
#define PWM_PP_GCNT_3    ((UBase_t) 0x00000003UL)
#define PWM_PP_GCNT_4    ((UBase_t) 0x00000004UL)
/*--------*/

/*--------*/
#define PWM_PP_R_FCNT_MASK    ((UBase_t) 0x000000F0UL)
#define PWM_PP_R_FCNT_BIT    ((UBase_t) 4UL)
#define PWM_PP_R_FCNT_0    ((UBase_t) 0x00000000UL)
#define PWM_PP_R_FCNT_1    ((UBase_t) 0x00000010UL)
#define PWM_PP_R_FCNT_2    ((UBase_t) 0x00000020UL)
#define PWM_PP_R_FCNT_3    ((UBase_t) 0x00000030UL)
#define PWM_PP_R_FCNT_4    ((UBase_t) 0x00000040UL)

#define PWM_PP_FCNT_MASK    ((UBase_t) 0x0000000FUL)
#define PWM_PP_FCNT_0    ((UBase_t) 0x00000000UL)
#define PWM_PP_FCNT_1    ((UBase_t) 0x00000001UL)
#define PWM_PP_FCNT_2    ((UBase_t) 0x00000002UL)
#define PWM_PP_FCNT_3    ((UBase_t) 0x00000003UL)
#define PWM_PP_FCNT_4    ((UBase_t) 0x00000004UL)
/*--------*/

/*--------*/
#define PWM_PP_R_ESYNC_MASK    ((UBase_t) 0x00000100UL)
#define PWM_PP_R_ESYNC_BIT    ((UBase_t) 8UL)
#define PWM_PP_R_ESYNC_NOCAPABLE    ((UBase_t) 0x00000000UL)
#define PWM_PP_R_ESYNC_CAPABLE    ((UBase_t) 0x00000100UL)

#define PWM_PP_ESYNC_MASK    ((UBase_t) 0x00000001UL)
#define PWM_PP_ESYNC_NOCAPABLE    ((UBase_t) 0x00000000UL)
#define PWM_PP_ESYNC_CAPABLE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_PP_R_EFAULT_MASK    ((UBase_t) 0x00000200UL)
#define PWM_PP_R_EFAULT_BIT    ((UBase_t) 9UL)
#define PWM_PP_R_EFAULT_NOCAPABLE    ((UBase_t) 0x00000000UL)
#define PWM_PP_R_EFAULT_CAPABLE    ((UBase_t) 0x00000200UL)

#define PWM_PP_EFAULT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_PP_EFAULT_NOCAPABLE    ((UBase_t) 0x00000000UL)
#define PWM_PP_EFAULT_CAPABLE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_PP_R_ONE_MASK    ((UBase_t) 0x00000400UL)
#define PWM_PP_R_ONE_BIT    ((UBase_t) 10UL)
#define PWM_PP_R_ONE_NOCAPABLE    ((UBase_t) 0x00000000UL)
#define PWM_PP_R_ONE_CAPABLE    ((UBase_t) 0x00000400UL)

#define PWM_PP_ONE_MASK    ((UBase_t) 0x00000001UL)
#define PWM_PP_ONE_NOCAPABLE    ((UBase_t) 0x00000000UL)
#define PWM_PP_ONE_CAPABLE    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_PP_H_ */
