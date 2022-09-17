/*
 * SYSCTL_RegisterDefines_IMC.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_IMC_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_IMC_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 5 IMC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_IMC_R_BORIM_MASK    ((uint32_t) 0x00000002UL)
#define SYSCTL_IMC_R_BORIM_BIT    (1UL)
#define SYSCTL_IMC_R_BORIM_DIS    ((uint32_t) 0x00000000UL)
#define SYSCTL_IMC_R_BORIM_ENA    ((uint32_t) 0x00000002UL)

#define SYSCTL_IMC_BORIM_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_IMC_BORIM_DIS    ((uint32_t) 0x00000000UL)
#define SYSCTL_IMC_BORIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_MOFIM_MASK    ((uint32_t) 0x00000008UL)
#define SYSCTL_IMC_R_MOFIM_BIT    (3UL)
#define SYSCTL_IMC_R_MOFIM_DIS    ((uint32_t) 0x00000000UL)
#define SYSCTL_IMC_R_MOFIM_ENA    ((uint32_t) 0x00000008UL)

#define SYSCTL_IMC_MOFIM_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_IMC_MOFIM_DIS    ((uint32_t) 0x00000000UL)
#define SYSCTL_IMC_MOFIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_PLLLIM_MASK    ((uint32_t) 0x00000040UL)
#define SYSCTL_IMC_R_PLLLIM_BIT    (6UL)
#define SYSCTL_IMC_R_PLLLIM_DIS    ((uint32_t) 0x00000000UL)
#define SYSCTL_IMC_R_PLLLIM_ENA    ((uint32_t) 0x00000040UL)

#define SYSCTL_IMC_PLLLIM_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_IMC_PLLLIM_DIS    ((uint32_t) 0x00000000UL)
#define SYSCTL_IMC_PLLLIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_IMC_R_MOSCPUPIM_MASK ((uint32_t) 0x00000100UL)
#define SYSCTL_IMC_R_MOSCPUPIM_BIT    (8UL)
#define SYSCTL_IMC_R_MOSCPUPIM_DIS    ((uint32_t) 0x00000000UL)
#define SYSCTL_IMC_R_MOSCPUPIM_ENA    ((uint32_t) 0x00000100UL)

#define SYSCTL_IMC_MOSCPUPIM_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_IMC_MOSCPUPIM_DIS    ((uint32_t) 0x00000000UL)
#define SYSCTL_IMC_MOSCPUPIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_IMC_H_ */
