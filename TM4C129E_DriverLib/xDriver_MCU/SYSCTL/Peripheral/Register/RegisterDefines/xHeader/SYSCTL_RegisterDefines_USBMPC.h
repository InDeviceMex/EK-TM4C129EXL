/*
 * SYSCTL_RegisterDefines_USB_MPC.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_USB_MPC_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_USB_MPC_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 33 USB_MPC *********************************************
******************************************************************************************/
/*--------*/
#define USB_MPC_R_PWRCTL_MASK    ((UBase_t) 0x00000003UL)
#define USB_MPC_R_PWRCTL_BIT    (0UL)
#define USB_MPC_R_PWRCTL_OFF    ((UBase_t) 0x00000000UL)
#define USB_MPC_R_PWRCTL_RET    ((UBase_t) 0x00000001UL)
#define USB_MPC_R_PWRCTL_ON    ((UBase_t) 0x00000003UL)

#define USB_MPC_PWRCTL_MASK    ((UBase_t) 0x00000003UL)
#define USB_MPC_PWRCTL_OFF    ((UBase_t) 0x00000000UL)
#define USB_MPC_PWRCTL_RET    ((UBase_t) 0x00000001UL)
#define USB_MPC_PWRCTL_ON    ((UBase_t) 0x00000003UL)
/*--------*/



#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_USB_MPC_H_ */
