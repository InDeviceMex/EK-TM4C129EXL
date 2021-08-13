/*
 * SYSCTL_RegisterDefines_MISC.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MISC_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MISC_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_MISC_R_BORMIS_MASK    ((uint32_t) 0x00000002UL)
#define SYSCTL_MISC_R_BORMIS_BIT    (1UL)
#define SYSCTL_MISC_R_BORMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_R_BORMIS_OCCUR    ((uint32_t) 0x00000002UL)

#define SYSCTL_MISC_BORMIS_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_MISC_BORMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_BORMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_MOFMIS_MASK    ((uint32_t) 0x00000008UL)
#define SYSCTL_MISC_R_MOFMIS_BIT    (3UL)
#define SYSCTL_MISC_R_MOFMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_R_MOFMIS_OCCUR    ((uint32_t) 0x00000008UL)

#define SYSCTL_MISC_MOFMIS_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_MISC_MOFMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_MOFMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_PLLLMIS_MASK    ((uint32_t) 0x00000040UL)
#define SYSCTL_MISC_R_PLLLMIS_BIT    (6UL)
#define SYSCTL_MISC_R_PLLLMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_R_PLLLMIS_OCCUR    ((uint32_t) 0x00000040UL)

#define SYSCTL_MISC_PLLLMIS_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_MISC_PLLLMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_PLLLMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_MISC_R_MOSCPUPMIS_MASK    ((uint32_t) 0x00000100UL)
#define SYSCTL_MISC_R_MOSCPUPMIS_BIT    (8UL)
#define SYSCTL_MISC_R_MOSCPUPMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_R_MOSCPUPMIS_OCCUR    ((uint32_t) 0x00000100UL)

#define SYSCTL_MISC_MOSCPUPMIS_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_MISC_MOSCPUPMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SYSCTL_MISC_MOSCPUPMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_MISC_H_ */
