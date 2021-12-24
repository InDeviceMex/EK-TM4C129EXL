/**
 *
 * @file PWM_RegisterDefines_CC.h
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

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_CC_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_CC_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 32 CC *********************************************
******************************************************************************************/
/*--------*/
#define PWM_CC_R_PWMDIV_MASK    ((uint32_t) 0x00000007UL)
#define PWM_CC_R_PWMDIV_BIT    ((uint32_t) 0UL)
#define PWM_CC_R_PWMDIV_2    ((uint32_t) 0x00000000UL)
#define PWM_CC_R_PWMDIV_4    ((uint32_t) 0x00000001UL)
#define PWM_CC_R_PWMDIV_8    ((uint32_t) 0x00000002UL)
#define PWM_CC_R_PWMDIV_16    ((uint32_t) 0x00000003UL)
#define PWM_CC_R_PWMDIV_32    ((uint32_t) 0x00000004UL)
#define PWM_CC_R_PWMDIV_64    ((uint32_t) 0x00000005UL)

#define PWM_CC_PWMDIV_MASK    ((uint32_t) 0x00000007UL)
#define PWM_CC_PWMDIV_2    ((uint32_t) 0x00000000UL)
#define PWM_CC_PWMDIV_4    ((uint32_t) 0x00000001UL)
#define PWM_CC_PWMDIV_8    ((uint32_t) 0x00000002UL)
#define PWM_CC_PWMDIV_16    ((uint32_t) 0x00000003UL)
#define PWM_CC_PWMDIV_32    ((uint32_t) 0x00000004UL)
#define PWM_CC_PWMDIV_64    ((uint32_t) 0x00000005UL)
/*--------*/

/*--------*/
#define PWM_CC_R_USEPWM_MASK    ((uint32_t) 0x00000100UL)
#define PWM_CC_R_USEPWM_BIT    ((uint32_t) 8UL)
#define PWM_CC_R_USEPWM_BYPASS    ((uint32_t) 0x00000000UL)
#define PWM_CC_R_USEPWM_DIVIDER    ((uint32_t) 0x00000100UL)

#define PWM_CC_USEPWM_MASK    ((uint32_t) 0x00000001UL)
#define PWM_CC_USEPWM_BYPASS    ((uint32_t) 0x00000000UL)
#define PWM_CC_USEPWM_DIVIDER    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_CC_H_ */
