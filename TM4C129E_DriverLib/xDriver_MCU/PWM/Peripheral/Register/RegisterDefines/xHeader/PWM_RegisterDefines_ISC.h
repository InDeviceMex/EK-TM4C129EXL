/**
 *
 * @file PWM_RegisterDefines_ISC.h
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

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_ISC_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_ISC_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

/******************************************************************************************
************************************ 8 ISC *********************************************
******************************************************************************************/
/*--------*/
#define PWM_ISC_R_GEN0_MASK    ((UBase_t) 0x00000001UL)
#define PWM_ISC_R_GEN0_BIT    ((UBase_t) 0UL)
#define PWM_ISC_R_GEN0_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_R_GEN0_ACTIVE    ((UBase_t) 0x00000001UL)

#define PWM_ISC_GEN0_MASK    ((UBase_t) 0x00000001UL)
#define PWM_ISC_GEN0_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_GEN0_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_ISC_R_GEN1_MASK    ((UBase_t) 0x00000002UL)
#define PWM_ISC_R_GEN1_BIT    ((UBase_t) 1UL)
#define PWM_ISC_R_GEN1_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_R_GEN1_ACTIVE    ((UBase_t) 0x00000002UL)

#define PWM_ISC_GEN1_MASK    ((UBase_t) 0x00000001UL)
#define PWM_ISC_GEN1_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_GEN1_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_ISC_R_GEN2_MASK    ((UBase_t) 0x00000004UL)
#define PWM_ISC_R_GEN2_BIT    ((UBase_t) 2UL)
#define PWM_ISC_R_GEN2_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_R_GEN2_ACTIVE    ((UBase_t) 0x00000004UL)

#define PWM_ISC_GEN2_MASK    ((UBase_t) 0x00000001UL)
#define PWM_ISC_GEN2_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_GEN2_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_ISC_R_GEN3_MASK    ((UBase_t) 0x00000008UL)
#define PWM_ISC_R_GEN3_BIT    ((UBase_t) 3UL)
#define PWM_ISC_R_GEN3_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_R_GEN3_ACTIVE    ((UBase_t) 0x00000008UL)

#define PWM_ISC_GEN3_MASK    ((UBase_t) 0x00000001UL)
#define PWM_ISC_GEN3_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_GEN3_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_ISC_R_GEN0_FAULT_MASK    ((UBase_t) 0x00010000UL)
#define PWM_ISC_R_GEN0_FAULT_BIT    ((UBase_t) 16UL)
#define PWM_ISC_R_GEN0_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_R_GEN0_FAULT_NA    ((UBase_t) 0x00000000UL)
#define PWM_ISC_R_GEN0_FAULT_ACTIVE    ((UBase_t) 0x00010000UL)
#define PWM_ISC_R_GEN0_FAULT_CLEAR    ((UBase_t) 0x00010000UL)

#define PWM_ISC_GEN0_FAULT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_ISC_GEN0_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_GEN0_FAULT_NA    ((UBase_t) 0x00000000UL)
#define PWM_ISC_GEN0_FAULT_ACTIVE    ((UBase_t) 0x00000001UL)
#define PWM_ISC_GEN0_FAULT_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_ISC_R_GEN1_FAULT_MASK    ((UBase_t) 0x00020000UL)
#define PWM_ISC_R_GEN1_FAULT_BIT    ((UBase_t) 17UL)
#define PWM_ISC_R_GEN1_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_R_GEN1_FAULT_NA    ((UBase_t) 0x00000000UL)
#define PWM_ISC_R_GEN1_FAULT_ACTIVE    ((UBase_t) 0x00020000UL)
#define PWM_ISC_R_GEN1_FAULT_CLEAR    ((UBase_t) 0x00020000UL)

#define PWM_ISC_GEN1_FAULT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_ISC_GEN1_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_GEN1_FAULT_NA    ((UBase_t) 0x00000000UL)
#define PWM_ISC_GEN1_FAULT_ACTIVE    ((UBase_t) 0x00000001UL)
#define PWM_ISC_GEN1_FAULT_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_ISC_R_GEN2_FAULT_MASK    ((UBase_t) 0x00040000UL)
#define PWM_ISC_R_GEN2_FAULT_BIT    ((UBase_t) 18UL)
#define PWM_ISC_R_GEN2_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_R_GEN2_FAULT_NA    ((UBase_t) 0x00000000UL)
#define PWM_ISC_R_GEN2_FAULT_ACTIVE    ((UBase_t) 0x00040000UL)
#define PWM_ISC_R_GEN2_FAULT_CLEAR    ((UBase_t) 0x00040000UL)

#define PWM_ISC_GEN2_FAULT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_ISC_GEN2_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_GEN2_FAULT_NA    ((UBase_t) 0x00000000UL)
#define PWM_ISC_GEN2_FAULT_ACTIVE    ((UBase_t) 0x00000001UL)
#define PWM_ISC_GEN2_FAULT_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_ISC_R_GEN3_FAULT_MASK    ((UBase_t) 0x00080000UL)
#define PWM_ISC_R_GEN3_FAULT_BIT    ((UBase_t) 19UL)
#define PWM_ISC_R_GEN3_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_R_GEN3_FAULT_NA    ((UBase_t) 0x00000000UL)
#define PWM_ISC_R_GEN3_FAULT_ACTIVE    ((UBase_t) 0x00080000UL)
#define PWM_ISC_R_GEN3_FAULT_CLEAR    ((UBase_t) 0x00080000UL)

#define PWM_ISC_GEN3_FAULT_MASK    ((UBase_t) 0x00000001UL)
#define PWM_ISC_GEN3_FAULT_INACTIVE    ((UBase_t) 0x00000000UL)
#define PWM_ISC_GEN3_FAULT_NA    ((UBase_t) 0x00000000UL)
#define PWM_ISC_GEN3_FAULT_ACTIVE    ((UBase_t) 0x00000001UL)
#define PWM_ISC_GEN3_FAULT_CLEAR    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_ISC_H_ */
