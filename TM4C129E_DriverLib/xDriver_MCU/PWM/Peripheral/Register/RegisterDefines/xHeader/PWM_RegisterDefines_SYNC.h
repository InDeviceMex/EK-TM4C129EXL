/**
 *
 * @file PWM_RegisterDefines_SYNC.h
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

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_SYNC_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_SYNC_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

/******************************************************************************************
************************************ 2 SYNC *********************************************
******************************************************************************************/
/*--------*/
#define PWM_SYNC_R_GEN0_SYNC_MASK    ((UBase_t) 0x00000001UL)
#define PWM_SYNC_R_GEN0_SYNC_BIT    ((UBase_t) 0UL)
#define PWM_SYNC_R_GEN0_SYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_SYNC_R_GEN0_SYNC_RESET    ((UBase_t) 0x00000001UL)

#define PWM_SYNC_GEN0_SYNC_MASK    ((UBase_t) 0x00000001UL)
#define PWM_SYNC_GEN0_SYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_SYNC_GEN0_SYNC_RESET    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_SYNC_R_GEN1_SYNC_MASK    ((UBase_t) 0x00000002UL)
#define PWM_SYNC_R_GEN1_SYNC_BIT    ((UBase_t) 1UL)
#define PWM_SYNC_R_GEN1_SYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_SYNC_R_GEN1_SYNC_RESET    ((UBase_t) 0x00000002UL)

#define PWM_SYNC_GEN1_SYNC_MASK    ((UBase_t) 0x00000001UL)
#define PWM_SYNC_GEN1_SYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_SYNC_GEN1_SYNC_RESET    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_SYNC_R_GEN2_SYNC_MASK    ((UBase_t) 0x00000004UL)
#define PWM_SYNC_R_GEN2_SYNC_BIT    ((UBase_t) 2UL)
#define PWM_SYNC_R_GEN2_SYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_SYNC_R_GEN2_SYNC_RESET    ((UBase_t) 0x00000004UL)

#define PWM_SYNC_GEN2_SYNC_MASK    ((UBase_t) 0x00000001UL)
#define PWM_SYNC_GEN2_SYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_SYNC_GEN2_SYNC_RESET    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_SYNC_R_GEN3_SYNC_MASK    ((UBase_t) 0x00000008UL)
#define PWM_SYNC_R_GEN3_SYNC_BIT    ((UBase_t) 3UL)
#define PWM_SYNC_R_GEN3_SYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_SYNC_R_GEN3_SYNC_RESET    ((UBase_t) 0x00000008UL)

#define PWM_SYNC_GEN3_SYNC_MASK    ((UBase_t) 0x00000001UL)
#define PWM_SYNC_GEN3_SYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_SYNC_GEN3_SYNC_RESET    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_SYNC_H_ */
