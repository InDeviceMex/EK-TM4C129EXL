/*
 * SYSCTL_RegisterDefines_RIS.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_RIS_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_RIS_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 4 RIS *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RIS_R_BOR_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_RIS_R_BOR_BIT    (1UL)
#define SYSCTL_RIS_R_BOR_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_R_BOR_ACTIVE    ((UBase_t) 0x00000002UL)

#define SYSCTL_RIS_BOR_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RIS_BOR_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_BOR_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_MOSC_FAILURE_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_RIS_R_MOSC_FAILURE_BIT    (3UL)
#define SYSCTL_RIS_R_MOSC_FAILURE_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_R_MOSC_FAILURE_ACTIVE    ((UBase_t) 0x00000008UL)

#define SYSCTL_RIS_MOSC_FAILURE_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RIS_MOSC_FAILURE_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_MOSC_FAILURE_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_PLL_LOCK_MASK    ((UBase_t) 0x00000040UL)
#define SYSCTL_RIS_R_PLL_LOCK_BIT    (6UL)
#define SYSCTL_RIS_R_PLL_LOCK_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_R_PLL_LOCK_ACTIVE    ((UBase_t) 0x00000040UL)

#define SYSCTL_RIS_PLL_LOCK_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RIS_PLL_LOCK_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_PLL_LOCK_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_MOSC_POWERUP_MASK    ((UBase_t) 0x00000100UL)
#define SYSCTL_RIS_R_MOSC_POWERUP_BIT    (8UL)
#define SYSCTL_RIS_R_MOSC_POWERUP_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_R_MOSC_POWERUP_ACTIVE    ((UBase_t) 0x00000100UL)

#define SYSCTL_RIS_MOSC_POWERUP_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RIS_MOSC_POWERUP_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_MOSC_POWERUP_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_RIS_H_ */
