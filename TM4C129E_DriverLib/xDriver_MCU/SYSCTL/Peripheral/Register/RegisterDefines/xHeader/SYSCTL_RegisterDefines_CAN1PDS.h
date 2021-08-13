/*
 * SYSCTL_RegisterDefines_CAN1PDS.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_CAN1PDS_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_CAN1PDS_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 38 CAN1PDS *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_CAN1PDS_R_PWRSTAT_MASK    ((uint32_t) 0x00000003UL)
#define SYSCTL_CAN1PDS_R_PWRSTAT_BIT    (0UL)
#define SYSCTL_CAN1PDS_R_PWRSTAT_OFF    ((uint32_t) 0x00000000UL)
#define SYSCTL_CAN1PDS_R_PWRSTAT_ON    ((uint32_t) 0x00000003UL)

#define SYSCTL_CAN1PDS_PWRSTAT_MASK    ((uint32_t) 0x00000003UL)
#define SYSCTL_CAN1PDS_PWRSTAT_OFF    ((uint32_t) 0x00000000UL)
#define SYSCTL_CAN1PDS_PWRSTAT_ON    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define SYSCTL_CAN1PDS_R_MEMSTAT_MASK    ((uint32_t) 0x0000000CUL)
#define SYSCTL_CAN1PDS_R_MEMSTAT_BIT    (2UL)
#define SYSCTL_CAN1PDS_R_MEMSTAT_OFF    ((uint32_t) 0x00000000UL)
#define SYSCTL_CAN1PDS_R_MEMSTAT_ON    ((uint32_t) 0x0000000CUL)

#define SYSCTL_CAN1PDS_MEMSTAT_MASK    ((uint32_t) 0x00000003UL)
#define SYSCTL_CAN1PDS_MEMSTAT_OFF    ((uint32_t) 0x00000000UL)
#define SYSCTL_CAN1PDS_MEMSTAT_ON    ((uint32_t) 0x00000003UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_CAN1PDS_H_ */
