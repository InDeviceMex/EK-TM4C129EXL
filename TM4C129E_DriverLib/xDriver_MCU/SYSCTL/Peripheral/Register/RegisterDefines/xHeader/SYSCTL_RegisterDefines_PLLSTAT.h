/*
 * SYSCTL_RegisterDefines_PLLSTAT.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLSTAT_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLSTAT_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************21 PLLSTAT *********************************************
******************************************************************************************/
/*--------*/
#define PLL_STAT_R_LOCK_MASK    ((UBase_t) 0x00000001UL)
#define PLL_STAT_R_LOCK_BIT    (0UL)
#define PLL_STAT_R_LOCK_NOLOCK    ((UBase_t) 0x00000000UL)
#define PLL_STAT_R_LOCK_LOCK    ((UBase_t) 0x00000001UL)

#define PLL_STAT_LOCK_MASK    ((UBase_t) 0x00000001UL)
#define PLL_STAT_LOCK_NOLOCK    ((UBase_t) 0x00000000UL)
#define PLL_STAT_LOCK_LOCK    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLSTAT_H_ */
