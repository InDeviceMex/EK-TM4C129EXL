/**
 *
 * @file PWM_RegisterDefines_STATUS.h
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

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_STATUS_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_STATUS_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

/******************************************************************************************
************************************ 9 STATUS *********************************************
******************************************************************************************/
/*--------*/
#define PWM_STATUS_R_GEN0_FAULT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_STATUS_R_GEN0_FAULT_BIT    ((UBase_t) 0UL)
#define PWM_STATUS_R_GEN0_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_STATUS_R_GEN0_FAULT_ACTIVE    ((UBase_t) 0x00000001UL)

#define PWM_STATUS_GEN0_FAULT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_STATUS_GEN0_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_STATUS_GEN0_FAULT_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_STATUS_R_GEN1_FAULT_MASK    ((UBase_t) 0x00000002UL)
#define PWM_STATUS_R_GEN1_FAULT_BIT    ((UBase_t) 1UL)
#define PWM_STATUS_R_GEN1_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_STATUS_R_GEN1_FAULT_ACTIVE    ((UBase_t) 0x00000002UL)

#define PWM_STATUS_GEN1_FAULT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_STATUS_GEN1_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_STATUS_GEN1_FAULT_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_STATUS_R_GEN2_FAULT_MASK    ((UBase_t) 0x00000004UL)
#define PWM_STATUS_R_GEN2_FAULT_BIT    ((UBase_t) 2UL)
#define PWM_STATUS_R_GEN2_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_STATUS_R_GEN2_FAULT_ACTIVE    ((UBase_t) 0x00000004UL)

#define PWM_STATUS_GEN2_FAULT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_STATUS_GEN2_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_STATUS_GEN2_FAULT_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_STATUS_R_GEN3_FAULT_MASK    ((UBase_t) 0x00000008UL)
#define PWM_STATUS_R_GEN3_FAULT_BIT    ((UBase_t) 3UL)
#define PWM_STATUS_R_GEN3_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_STATUS_R_GEN3_FAULT_ACTIVE    ((UBase_t) 0x00000008UL)

#define PWM_STATUS_GEN3_FAULT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_STATUS_GEN3_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_STATUS_GEN3_FAULT_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_STATUS_H_ */
