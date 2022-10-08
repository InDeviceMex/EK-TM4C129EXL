/*
 * SYSCTL_RegisterDefines_RIS.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_RIS_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_RIS_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 4 RIS *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RIS_R_BORRIS_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_RIS_R_BORRIS_BIT    (1UL)
#define SYSCTL_RIS_R_BORRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_R_BORRIS_ACTIVE    ((UBase_t) 0x00000002UL)

#define SYSCTL_RIS_BORRIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RIS_BORRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_BORRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_MOFRIS_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_RIS_R_MOFRIS_BIT    (3UL)
#define SYSCTL_RIS_R_MOFRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_R_MOFRIS_ACTIVE    ((UBase_t) 0x00000008UL)

#define SYSCTL_RIS_MOFRIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RIS_MOFRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_MOFRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_PLLLRIS_MASK    ((UBase_t) 0x00000040UL)
#define SYSCTL_RIS_R_PLLLRIS_BIT    (6UL)
#define SYSCTL_RIS_R_PLLLRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_R_PLLLRIS_ACTIVE    ((UBase_t) 0x00000040UL)

#define SYSCTL_RIS_PLLLRIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RIS_PLLLRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_PLLLRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RIS_R_MOSCPUPRIS_MASK    ((UBase_t) 0x00000100UL)
#define SYSCTL_RIS_R_MOSCPUPRIS_BIT    (8UL)
#define SYSCTL_RIS_R_MOSCPUPRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_R_MOSCPUPRIS_ACTIVE    ((UBase_t) 0x00000100UL)

#define SYSCTL_RIS_MOSCPUPRIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RIS_MOSCPUPRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_RIS_MOSCPUPRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_RIS_H_ */
