/**
 *
 * @file PWM_RegisterDefines_INTEN.h
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

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_INTEN_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_INTEN_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 6 INTEN *********************************************
******************************************************************************************/
/*--------*/
#define PWM_INTEN_R_INTPWM0_MASK    ((uint32_t) 0x00000001UL)
#define PWM_INTEN_R_INTPWM0_BIT    ((uint32_t) 0UL)
#define PWM_INTEN_R_INTPWM0_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_R_INTPWM0_ENA    ((uint32_t) 0x00000001UL)

#define PWM_INTEN_INTPWM0_MASK    ((uint32_t) 0x00000001UL)
#define PWM_INTEN_INTPWM0_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_INTPWM0_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_INTEN_R_INTPWM1_MASK    ((uint32_t) 0x00000002UL)
#define PWM_INTEN_R_INTPWM1_BIT    ((uint32_t) 1UL)
#define PWM_INTEN_R_INTPWM1_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_R_INTPWM1_ENA    ((uint32_t) 0x00000002UL)

#define PWM_INTEN_INTPWM1_MASK    ((uint32_t) 0x00000001UL)
#define PWM_INTEN_INTPWM1_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_INTPWM1_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_INTEN_R_INTPWM2_MASK    ((uint32_t) 0x00000004UL)
#define PWM_INTEN_R_INTPWM2_BIT    ((uint32_t) 2UL)
#define PWM_INTEN_R_INTPWM2_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_R_INTPWM2_ENA    ((uint32_t) 0x00000004UL)

#define PWM_INTEN_INTPWM2_MASK    ((uint32_t) 0x00000001UL)
#define PWM_INTEN_INTPWM2_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_INTPWM2_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_INTEN_R_INTPWM3_MASK    ((uint32_t) 0x00000008UL)
#define PWM_INTEN_R_INTPWM3_BIT    ((uint32_t) 3UL)
#define PWM_INTEN_R_INTPWM3_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_R_INTPWM3_ENA    ((uint32_t) 0x00000008UL)

#define PWM_INTEN_INTPWM3_MASK    ((uint32_t) 0x00000001UL)
#define PWM_INTEN_INTPWM3_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_INTPWM3_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_INTEN_R_INTFAULT0_MASK    ((uint32_t) 0x00010000UL)
#define PWM_INTEN_R_INTFAULT0_BIT    ((uint32_t) 16UL)
#define PWM_INTEN_R_INTFAULT0_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_R_INTFAULT0_ENA    ((uint32_t) 0x00010000UL)

#define PWM_INTEN_INTFAULT0_MASK    ((uint32_t) 0x00000001UL)
#define PWM_INTEN_INTFAULT0_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_INTFAULT0_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_INTEN_R_INTFAULT1_MASK    ((uint32_t) 0x00020000UL)
#define PWM_INTEN_R_INTFAULT1_BIT    ((uint32_t) 17UL)
#define PWM_INTEN_R_INTFAULT1_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_R_INTFAULT1_ENA    ((uint32_t) 0x00020000UL)

#define PWM_INTEN_INTFAULT1_MASK    ((uint32_t) 0x00000001UL)
#define PWM_INTEN_INTFAULT1_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_INTFAULT1_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_INTEN_R_INTFAULT2_MASK    ((uint32_t) 0x00040000UL)
#define PWM_INTEN_R_INTFAULT2_BIT    ((uint32_t) 18UL)
#define PWM_INTEN_R_INTFAULT2_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_R_INTFAULT2_ENA    ((uint32_t) 0x00040000UL)

#define PWM_INTEN_INTFAULT2_MASK    ((uint32_t) 0x00000001UL)
#define PWM_INTEN_INTFAULT2_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_INTFAULT2_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_INTEN_R_INTFAULT3_MASK    ((uint32_t) 0x00080000UL)
#define PWM_INTEN_R_INTFAULT3_BIT    ((uint32_t) 19UL)
#define PWM_INTEN_R_INTFAULT3_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_R_INTFAULT3_ENA    ((uint32_t) 0x00080000UL)

#define PWM_INTEN_INTFAULT3_MASK    ((uint32_t) 0x00000001UL)
#define PWM_INTEN_INTFAULT3_DIS    ((uint32_t) 0x00000000UL)
#define PWM_INTEN_INTFAULT3_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_INTEN_H_ */
