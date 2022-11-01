/*
 * SYSCTL_RegisterDefines_MOSCCTL.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MOSCCTL_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MOSCCTL_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 10 MOSCCTL *********************************************
******************************************************************************************/
/*--------*/
#define MOSC_CTL_R_CVAL_MASK    ((UBase_t) 0x00000001UL)
#define MOSC_CTL_R_CVAL_BIT    (0UL)
#define MOSC_CTL_R_CVAL_DIS    ((UBase_t) 0x00000000UL)
#define MOSC_CTL_R_CVAL_ENA    ((UBase_t) 0x00000001UL)

#define MOSC_CTL_CVAL_MASK    ((UBase_t) 0x00000001UL)
#define MOSC_CTL_CVAL_DIS    ((UBase_t) 0x00000000UL)
#define MOSC_CTL_CVAL_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MOSC_CTL_R_MOSCIM_MASK    ((UBase_t) 0x00000002UL)
#define MOSC_CTL_R_MOSCIM_BIT    (1UL)
#define MOSC_CTL_R_MOSCIM_RESET    ((UBase_t) 0x00000000UL)
#define MOSC_CTL_R_MOSCIM_INT    ((UBase_t) 0x00000002UL)

#define MOSC_CTL_MOSCIM_MASK    ((UBase_t) 0x00000001UL)
#define MOSC_CTL_MOSCIM_RESET    ((UBase_t) 0x00000000UL)
#define MOSC_CTL_MOSCIM_INT    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MOSC_CTL_R_NOXTAL_MASK    ((UBase_t) 0x00000004UL)
#define MOSC_CTL_R_NOXTAL_BIT    (2UL)
#define MOSC_CTL_R_NOXTAL_CONNECTED    ((UBase_t) 0x00000000UL)
#define MOSC_CTL_R_NOXTAL_NOCONNECTED    ((UBase_t) 0x00000004UL)

#define MOSC_CTL_NOXTAL_MASK    ((UBase_t) 0x00000001UL)
#define MOSC_CTL_NOXTAL_CONNECTED    ((UBase_t) 0x00000000UL)
#define MOSC_CTL_NOXTAL_NOCONNECTED    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MOSC_CTL_R_PWRDN_MASK    ((UBase_t) 0x00000008UL)
#define MOSC_CTL_R_PWRDN_BIT    (3UL)
#define MOSC_CTL_R_PWRDN_POWERUP    ((UBase_t) 0x00000000UL)
#define MOSC_CTL_R_PWRDN_POWERDOWN    ((UBase_t) 0x00000008UL)

#define MOSC_CTL_PWRDN_MASK    ((UBase_t) 0x00000001UL)
#define MOSC_CTL_PWRDN_POWERUP    ((UBase_t) 0x00000000UL)
#define MOSC_CTL_PWRDN_POWERDOWN    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MOSC_CTL_R_OSCRNG_MASK    ((UBase_t) 0x00000010UL)
#define MOSC_CTL_R_OSCRNG_BIT    (4UL)
#define MOSC_CTL_R_OSCRNG_LOW    ((UBase_t) 0x00000000UL)
#define MOSC_CTL_R_OSCRNG_HIGH    ((UBase_t) 0x00000010UL)

#define MOSC_CTL_OSCRNG_MASK    ((UBase_t) 0x00000001UL)
#define MOSC_CTL_OSCRNG_LOW    ((UBase_t) 0x00000000UL)
#define MOSC_CTL_OSCRNG_HIGH    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MOSCCTL_H_ */
