/*
 * SYSCTL_RegisterDefines_MISC.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MISC_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MISC_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_MISC_R_BORMIS_MASK    ((uint32_t) 0x00000002UL)
#define SYSCTL_MISC_R_BORMIS_BIT    (1UL)
#define SYSCTL_MISC_R_BORMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_R_BORMIS_ACTIVE    ((uint32_t) 0x00000002UL)

#define SYSCTL_MISC_BORMIS_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_MISC_BORMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_BORMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_MOFMIS_MASK    ((uint32_t) 0x00000008UL)
#define SYSCTL_MISC_R_MOFMIS_BIT    (3UL)
#define SYSCTL_MISC_R_MOFMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_R_MOFMIS_ACTIVE    ((uint32_t) 0x00000008UL)

#define SYSCTL_MISC_MOFMIS_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_MISC_MOFMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_MOFMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_PLLLMIS_MASK    ((uint32_t) 0x00000040UL)
#define SYSCTL_MISC_R_PLLLMIS_BIT    (6UL)
#define SYSCTL_MISC_R_PLLLMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_R_PLLLMIS_ACTIVE    ((uint32_t) 0x00000040UL)

#define SYSCTL_MISC_PLLLMIS_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_MISC_PLLLMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_PLLLMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_MOSCPUPMIS_MASK    ((uint32_t) 0x00000100UL)
#define SYSCTL_MISC_R_MOSCPUPMIS_BIT    (8UL)
#define SYSCTL_MISC_R_MOSCPUPMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_R_MOSCPUPMIS_ACTIVE    ((uint32_t) 0x00000100UL)

#define SYSCTL_MISC_MOSCPUPMIS_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_MISC_MOSCPUPMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_MOSCPUPMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MISC_H_ */
