/*
 * SYSCTL_RegisterDefines_NMIC.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_NMIC_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_NMIC_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 9 NMIC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_NMIC_R_EXTERNAL_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_NMIC_R_EXTERNAL_BIT    (0UL)
#define SYSCTL_NMIC_R_EXTERNAL_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_NMIC_R_EXTERNAL_ACTIVE    ((UBase_t) 0x00000001UL)

#define SYSCTL_NMIC_EXTERNAL_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_NMIC_EXTERNAL_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_NMIC_EXTERNAL_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_NMIC_R_POWER_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_NMIC_R_POWER_BIT    (2UL)
#define SYSCTL_NMIC_R_POWER_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_NMIC_R_POWER_ACTIVE    ((UBase_t) 0x00000004UL)

#define SYSCTL_NMIC_POWER_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_NMIC_POWER_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_NMIC_POWER_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_NMIC_R_WDT0_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_NMIC_R_WDT0_BIT    (3UL)
#define SYSCTL_NMIC_R_WDT0_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_NMIC_R_WDT0_ACTIVE    ((UBase_t) 0x00000008UL)

#define SYSCTL_NMIC_WDT0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_NMIC_WDT0_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_NMIC_WDT0_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_NMIC_R_WDT1_MASK    ((UBase_t) 0x00000020UL)
#define SYSCTL_NMIC_R_WDT1_BIT    (5UL)
#define SYSCTL_NMIC_R_WDT1_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_NMIC_R_WDT1_ACTIVE    ((UBase_t) 0x00000020UL)

#define SYSCTL_NMIC_WDT1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_NMIC_WDT1_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_NMIC_WDT1_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_NMIC_R_TAMPER_MASK    ((UBase_t) 0x00000200UL)
#define SYSCTL_NMIC_R_TAMPER_BIT    (9UL)
#define SYSCTL_NMIC_R_TAMPER_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_NMIC_R_TAMPER_ACTIVE    ((UBase_t) 0x00000200UL)

#define SYSCTL_NMIC_TAMPER_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_NMIC_TAMPER_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_NMIC_TAMPER_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_NMIC_R_MOSCFAIL_MASK    ((UBase_t) 0x00010000UL)
#define SYSCTL_NMIC_R_MOSCFAIL_BIT    (16UL)
#define SYSCTL_NMIC_R_MOSCFAIL_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_NMIC_R_MOSCFAIL_ACTIVE    ((UBase_t) 0x00010000UL)

#define SYSCTL_NMIC_MOSCFAIL_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_NMIC_MOSCFAIL_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSCTL_NMIC_MOSCFAIL_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_NMIC_H_ */
