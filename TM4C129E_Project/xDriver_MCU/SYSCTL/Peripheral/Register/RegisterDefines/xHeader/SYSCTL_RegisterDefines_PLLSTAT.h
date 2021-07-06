/*
 * SYSCTL_RegisterDefines_PLLSTAT.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLSTAT_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLSTAT_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************21 PLLSTAT *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PLLSTAT_R_LOCK_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_PLLSTAT_R_LOCK_BIT    (0UL)
#define SYSCTL_PLLSTAT_R_LOCK_NOLOCK    ((uint32_t) 0x00000000UL)
#define SYSCTL_PLLSTAT_R_LOCK_LOCK    ((uint32_t) 0x00000001UL)

#define SYSCTL_PLLSTAT_LOCK_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_PLLSTAT_LOCK_NOLOCK    ((uint32_t) 0x00000000UL)
#define SYSCTL_PLLSTAT_LOCK_LOCK    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLSTAT_H_ */
