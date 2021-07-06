/*
 * SYSCTL_RegisterDefines_EMACPDS.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_EMACPDS_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_EMACPDS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 34 EMACPDS *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_EMACPDS_R_PWRSTAT_MASK    ((uint32_t) 0x00000003UL)
#define SYSCTL_EMACPDS_R_PWRSTAT_BIT    (0UL)
#define SYSCTL_EMACPDS_R_PWRSTAT_OFF    ((uint32_t) 0x00000000UL)
#define SYSCTL_EMACPDS_R_PWRSTAT_ON    ((uint32_t) 0x00000003UL)

#define SYSCTL_EMACPDS_PWRSTAT_MASK    ((uint32_t) 0x00000003UL)
#define SYSCTL_EMACPDS_PWRSTAT_OFF    ((uint32_t) 0x00000000UL)
#define SYSCTL_EMACPDS_PWRSTAT_ON    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define SYSCTL_EMACPDS_R_MEMSTAT_MASK    ((uint32_t) 0x0000000CUL)
#define SYSCTL_EMACPDS_R_MEMSTAT_BIT    (2UL)
#define SYSCTL_EMACPDS_R_MEMSTAT_OFF    ((uint32_t) 0x00000000UL)
#define SYSCTL_EMACPDS_R_MEMSTAT_ON    ((uint32_t) 0x0000000CUL)

#define SYSCTL_EMACPDS_MEMSTAT_MASK    ((uint32_t) 0x00000003UL)
#define SYSCTL_EMACPDS_MEMSTAT_OFF    ((uint32_t) 0x00000000UL)
#define SYSCTL_EMACPDS_MEMSTAT_ON    ((uint32_t) 0x00000003UL)
/*--------*/




#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_EMACPDS_H_ */
