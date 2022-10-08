/*
 * SYSCTL_RegisterDefines_USBPDS.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_USBPDS_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_USBPDS_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 32 USBPDS *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_USBPDS_R_PWRSTAT_MASK    ((UBase_t) 0x00000003UL)
#define SYSCTL_USBPDS_R_PWRSTAT_BIT    (0UL)
#define SYSCTL_USBPDS_R_PWRSTAT_OFF    ((UBase_t) 0x00000000UL)
#define SYSCTL_USBPDS_R_PWRSTAT_ON    ((UBase_t) 0x00000003UL)

#define SYSCTL_USBPDS_PWRSTAT_MASK    ((UBase_t) 0x00000003UL)
#define SYSCTL_USBPDS_PWRSTAT_OFF    ((UBase_t) 0x00000000UL)
#define SYSCTL_USBPDS_PWRSTAT_ON    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define SYSCTL_USBPDS_R_MEMSTAT_MASK    ((UBase_t) 0x0000000CUL)
#define SYSCTL_USBPDS_R_MEMSTAT_BIT    (2UL)
#define SYSCTL_USBPDS_R_MEMSTAT_OFF    ((UBase_t) 0x00000000UL)
#define SYSCTL_USBPDS_R_MEMSTAT_RET    ((UBase_t) 0x00000004UL)
#define SYSCTL_USBPDS_R_MEMSTAT_ON    ((UBase_t) 0x0000000CUL)

#define SYSCTL_USBPDS_MEMSTAT_MASK    ((UBase_t) 0x00000003UL)
#define SYSCTL_USBPDS_MEMSTAT_OFF    ((UBase_t) 0x00000000UL)
#define SYSCTL_USBPDS_MEMSTAT_RET    ((UBase_t) 0x00000001UL)
#define SYSCTL_USBPDS_MEMSTAT_ON    ((UBase_t) 0x00000003UL)
/*--------*/


#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_USBPDS_H_ */
