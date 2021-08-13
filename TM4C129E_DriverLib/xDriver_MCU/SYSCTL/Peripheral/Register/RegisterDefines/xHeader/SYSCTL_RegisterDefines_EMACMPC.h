/*
 * SYSCTL_RegisterDefines_EMACMPC.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_EMACMPC_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_EMACMPC_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 35 EMACMPC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_EMACMPC_R_PWRCTL_MASK    ((uint32_t) 0x00000003UL)
#define SYSCTL_EMACMPC_R_PWRCTL_BIT    (0UL)
#define SYSCTL_EMACMPC_R_PWRCTL_OFF    ((uint32_t) 0x00000000UL)
#define SYSCTL_EMACMPC_R_PWRCTL_ON    ((uint32_t) 0x00000003UL)

#define SYSCTL_EMACMPC_PWRCTL_MASK    ((uint32_t) 0x00000003UL)
#define SYSCTL_EMACMPC_PWRCTL_OFF    ((uint32_t) 0x00000000UL)
#define SYSCTL_EMACMPC_PWRCTL_ON    ((uint32_t) 0x00000003UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_EMACMPC_H_ */
