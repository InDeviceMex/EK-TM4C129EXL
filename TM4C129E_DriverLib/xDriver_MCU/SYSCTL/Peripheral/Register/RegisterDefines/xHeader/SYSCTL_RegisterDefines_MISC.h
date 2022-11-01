/*
 * SYSCTL_RegisterDefines_MISC.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MISC_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MISC_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_MISC_R_BOR_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_MISC_R_BOR_BIT    (1UL)
#define SYSCTL_MISC_R_BOR_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_MISC_R_BOR_ACTIVE    ((UBase_t) 0x00000002UL)

#define SYSCTL_MISC_BOR_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_MISC_BOR_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_MISC_BOR_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_MOSC_FAILURE_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_MISC_R_MOSC_FAILURE_BIT    (3UL)
#define SYSCTL_MISC_R_MOSC_FAILURE_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_MISC_R_MOSC_FAILURE_ACTIVE    ((UBase_t) 0x00000008UL)

#define SYSCTL_MISC_MOSC_FAILURE_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_MISC_MOSC_FAILURE_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_MISC_MOSC_FAILURE_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_PLL_LOCK_MASK    ((UBase_t) 0x00000040UL)
#define SYSCTL_MISC_R_PLL_LOCK_BIT    (6UL)
#define SYSCTL_MISC_R_PLL_LOCK_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_MISC_R_PLL_LOCK_ACTIVE    ((UBase_t) 0x00000040UL)

#define SYSCTL_MISC_PLL_LOCK_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_MISC_PLL_LOCK_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_MISC_PLL_LOCK_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_MOSC_POWERUP_MASK    ((UBase_t) 0x00000100UL)
#define SYSCTL_MISC_R_MOSC_POWERUP_BIT    (8UL)
#define SYSCTL_MISC_R_MOSC_POWERUP_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_MISC_R_MOSC_POWERUP_ACTIVE    ((UBase_t) 0x00000100UL)

#define SYSCTL_MISC_MOSC_POWERUP_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_MISC_MOSC_POWERUP_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_MISC_MOSC_POWERUP_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MISC_H_ */
