/*
 * SYSCTL_RegisterDefines_SYSPROP.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_SYSPROP_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_SYSPROP_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************16 SYSPROP *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SYSPROP_R_FPU_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_R_FPU_BIT    (0UL)
#define SYSCTL_SYSPROP_R_FPU_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_FPU_PRESENT    ((uint32_t) 0x00000001UL)

#define SYSCTL_SYSPROP_FPU_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_FPU_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_FPU_PRESENT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_LDOSEQ_MASK    ((uint32_t) 0x00000020UL)
#define SYSCTL_SYSPROP_R_LDOSEQ_BIT    (5UL)
#define SYSCTL_SYSPROP_R_LDOSEQ_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_LDOSEQ_PRESENT    ((uint32_t) 0x00000020UL)

#define SYSCTL_SYSPROP_LDOSEQ_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_LDOSEQ_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_LDOSEQ_PRESENT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_FLASHLPM_MASK    ((uint32_t) 0x00000100UL)
#define SYSCTL_SYSPROP_R_FLASHLPM_BIT    (8UL)
#define SYSCTL_SYSPROP_R_FLASHLPM_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_FLASHLPM_PRESENT    ((uint32_t) 0x00000100UL)

#define SYSCTL_SYSPROP_FLASHLPM_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_FLASHLPM_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_FLASHLPM_PRESENT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_SRAMLPM_MASK    ((uint32_t) 0x00000400UL)
#define SYSCTL_SYSPROP_R_SRAMLPM_BIT    (10UL)
#define SYSCTL_SYSPROP_R_SRAMLPM_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_SRAMLPM_PRESENT    ((uint32_t) 0x00000400UL)

#define SYSCTL_SYSPROP_SRAMLPM_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_SRAMLPM_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_SRAMLPM_PRESENT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_SRAMSM_MASK    ((uint32_t) 0x00000800UL)
#define SYSCTL_SYSPROP_R_SRAMSM_BIT    (11UL)
#define SYSCTL_SYSPROP_R_SRAMSM_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_SRAMSM_PRESENT    ((uint32_t) 0x00000800UL)

#define SYSCTL_SYSPROP_SRAMSM_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_SRAMSM_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_SRAMSM_PRESENT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_PIOSCPDE_MASK    ((uint32_t) 0x00001000UL)
#define SYSCTL_SYSPROP_R_PIOSCPDE_BIT    (12UL)
#define SYSCTL_SYSPROP_R_PIOSCPDE_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_PIOSCPDE_PRESENT    ((uint32_t) 0x00001000UL)

#define SYSCTL_SYSPROP_PIOSCPDE_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_PIOSCPDE_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_PIOSCPDE_PRESENT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_TSPDE_MASK    ((uint32_t) 0x00010000UL)
#define SYSCTL_SYSPROP_R_TSPDE_BIT    (16UL)
#define SYSCTL_SYSPROP_R_TSPDE_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_TSPDE_PRESENT    ((uint32_t) 0x00010000UL)

#define SYSCTL_SYSPROP_TSPDE_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_TSPDE_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_TSPDE_PRESENT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_LDOSME_MASK    ((uint32_t) 0x00020000UL)
#define SYSCTL_SYSPROP_R_LDOSME_BIT    (17UL)
#define SYSCTL_SYSPROP_R_LDOSME_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_LDOSME_PRESENT    ((uint32_t) 0x00020000UL)

#define SYSCTL_SYSPROP_LDOSME_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_LDOSME_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_LDOSME_PRESENT    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_SYSPROP_H_ */
