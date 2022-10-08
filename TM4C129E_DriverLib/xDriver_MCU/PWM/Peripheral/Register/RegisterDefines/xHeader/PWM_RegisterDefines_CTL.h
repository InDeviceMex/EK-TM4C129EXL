/**
 *
 * @file PWM_RegisterDefines_CTL.h
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

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_CTL_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_CTL_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

/******************************************************************************************
************************************ 1 CTL *********************************************
******************************************************************************************/
/*--------*/
#define PWM_CTL_R_GEN0_GLOBALSYNC_MASK    ((UBase_t) 0x00000001UL)
#define PWM_CTL_R_GEN0_GLOBALSYNC_BIT    ((UBase_t) 0UL)
#define PWM_CTL_R_GEN0_GLOBALSYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_CTL_R_GEN0_GLOBALSYNC_ENA    ((UBase_t) 0x00000001UL)

#define PWM_CTL_GEN0_GLOBALSYNC_MASK    ((UBase_t) 0x00000001UL)
#define PWM_CTL_GEN0_GLOBALSYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_CTL_GEN0_GLOBALSYNC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_CTL_R_GEN1_GLOBALSYNC_MASK    ((UBase_t) 0x00000002UL)
#define PWM_CTL_R_GEN1_GLOBALSYNC_BIT    ((UBase_t) 1UL)
#define PWM_CTL_R_GEN1_GLOBALSYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_CTL_R_GEN1_GLOBALSYNC_ENA    ((UBase_t) 0x00000002UL)

#define PWM_CTL_GEN1_GLOBALSYNC_MASK    ((UBase_t) 0x00000001UL)
#define PWM_CTL_GEN1_GLOBALSYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_CTL_GEN1_GLOBALSYNC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_CTL_R_GEN2_GLOBALSYNC_MASK    ((UBase_t) 0x00000004UL)
#define PWM_CTL_R_GEN2_GLOBALSYNC_BIT    ((UBase_t) 2UL)
#define PWM_CTL_R_GEN2_GLOBALSYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_CTL_R_GEN2_GLOBALSYNC_ENA    ((UBase_t) 0x00000004UL)

#define PWM_CTL_GEN2_GLOBALSYNC_MASK    ((UBase_t) 0x00000001UL)
#define PWM_CTL_GEN2_GLOBALSYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_CTL_GEN2_GLOBALSYNC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define PWM_CTL_R_GEN3_GLOBALSYNC_MASK    ((UBase_t) 0x00000008UL)
#define PWM_CTL_R_GEN3_GLOBALSYNC_BIT    ((UBase_t) 3UL)
#define PWM_CTL_R_GEN3_GLOBALSYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_CTL_R_GEN3_GLOBALSYNC_ENA    ((UBase_t) 0x00000008UL)

#define PWM_CTL_GEN3_GLOBALSYNC_MASK    ((UBase_t) 0x00000001UL)
#define PWM_CTL_GEN3_GLOBALSYNC_NOEFFECT    ((UBase_t) 0x00000000UL)
#define PWM_CTL_GEN3_GLOBALSYNC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_PWM_REGISTERDEFINES_CTL_H_ */
