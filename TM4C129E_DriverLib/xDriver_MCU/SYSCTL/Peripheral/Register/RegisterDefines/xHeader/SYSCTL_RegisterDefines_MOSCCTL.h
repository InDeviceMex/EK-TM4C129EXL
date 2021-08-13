/*
 * SYSCTL_RegisterDefines_MOSCCTL.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MOSCCTL_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MOSCCTL_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 10 MOSCCTL *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_MOSCCTL_R_CVAL_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_MOSCCTL_R_CVAL_BIT    (0UL)
#define SYSCTL_MOSCCTL_R_CVAL_DIS    ((uint32_t) 0x00000000UL)
#define SYSCTL_MOSCCTL_R_CVAL_ENA    ((uint32_t) 0x00000001UL)

#define SYSCTL_MOSCCTL_CVAL_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_MOSCCTL_CVAL_DIS    ((uint32_t) 0x00000000UL)
#define SYSCTL_MOSCCTL_CVAL_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_MOSCCTL_R_MOSCIM_MASK    ((uint32_t) 0x00000002UL)
#define SYSCTL_MOSCCTL_R_MOSCIM_BIT    (1UL)
#define SYSCTL_MOSCCTL_R_MOSCIM_RESET    ((uint32_t) 0x00000000UL)
#define SYSCTL_MOSCCTL_R_MOSCIM_INT    ((uint32_t) 0x00000002UL)

#define SYSCTL_MOSCCTL_MOSCIM_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_MOSCCTL_MOSCIM_RESET    ((uint32_t) 0x00000000UL)
#define SYSCTL_MOSCCTL_MOSCIM_INT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_MOSCCTL_R_NOXTAL_MASK    ((uint32_t) 0x00000004UL)
#define SYSCTL_MOSCCTL_R_NOXTAL_BIT    (2UL)
#define SYSCTL_MOSCCTL_R_NOXTAL_PRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_MOSCCTL_R_NOXTAL_NOPRESENT    ((uint32_t) 0x00000004UL)

#define SYSCTL_MOSCCTL_NOXTAL_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_MOSCCTL_NOXTAL_PRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_MOSCCTL_NOXTAL_NOPRESENT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_MOSCCTL_R_PWRDN_MASK    ((uint32_t) 0x00000008UL)
#define SYSCTL_MOSCCTL_R_PWRDN_BIT    (3UL)
#define SYSCTL_MOSCCTL_R_PWRDN_POWERUP    ((uint32_t) 0x00000000UL)
#define SYSCTL_MOSCCTL_R_PWRDN_POWERDOWN    ((uint32_t) 0x00000008UL)

#define SYSCTL_MOSCCTL_PWRDN_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_MOSCCTL_PWRDN_POWERUP    ((uint32_t) 0x00000000UL)
#define SYSCTL_MOSCCTL_PWRDN_POWERDOWN    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_MOSCCTL_R_OSCRNG_MASK    ((uint32_t) 0x00000010UL)
#define SYSCTL_MOSCCTL_R_OSCRNG_BIT    (4UL)
#define SYSCTL_MOSCCTL_R_OSCRNG_LOW    ((uint32_t) 0x00000000UL)
#define SYSCTL_MOSCCTL_R_OSCRNG_HIGH    ((uint32_t) 0x00000010UL)

#define SYSCTL_MOSCCTL_OSCRNG_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_MOSCCTL_OSCRNG_LOW    ((uint32_t) 0x00000000UL)
#define SYSCTL_MOSCCTL_OSCRNG_HIGH    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MOSCCTL_H_ */
