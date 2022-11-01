/*
 * SYSCTL_RegisterDefines_BOOTCFG.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_BOOTCFG_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_BOOTCFG_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ Flash BOOTCFG *********************************************
******************************************************************************************/
/*--------*/
#define BOOT_CFG_R_DBG0_MASK    ((UBase_t) 0x00000001UL)
#define BOOT_CFG_R_DBG0_BIT    (0UL)

#define BOOT_CFG_DBG0_MASK    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define BOOT_CFG_R_DBG1_MASK    ((UBase_t) 0x00000002UL)
#define BOOT_CFG_R_DBG1_BIT    (1UL)

#define BOOT_CFG_DBG1_MASK    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define BOOT_CFG_R_KEY_MASK    ((UBase_t) 0x00000010UL)
#define BOOT_CFG_R_KEY_BIT    (4UL)
#define BOOT_CFG_R_KEY_71D5    ((UBase_t) 0x00000000UL)
#define BOOT_CFG_R_KEY_A442    ((UBase_t) 0x00000010UL)

#define BOOT_CFG_KEY_MASK    ((UBase_t) 0x00000001UL)
#define BOOT_CFG_KEY_71D5    ((UBase_t) 0x00000000UL)
#define BOOT_CFG_KEY_A442    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define BOOT_CFG_R_EN_MASK    ((UBase_t) 0x00000100UL)
#define BOOT_CFG_R_EN_BIT    (8UL)
#define BOOT_CFG_R_EN_GPIO    ((UBase_t) 0x00000000UL)
#define BOOT_CFG_R_EN_ADDRESS ((UBase_t) 0x00000100UL)

#define BOOT_CFG_EN_MASK    ((UBase_t) 0x00000001UL)
#define BOOT_CFG_EN_GPIO    ((UBase_t) 0x00000000UL)
#define BOOT_CFG_EN_ADDRESS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define BOOT_CFG_R_POL_MASK    ((UBase_t) 0x00000200UL)
#define BOOT_CFG_R_POL_BIT    (9UL)
#define BOOT_CFG_R_POL_LOW    ((UBase_t) 0x00000000UL)
#define BOOT_CFG_R_POL_HIGH    ((UBase_t) 0x00000200UL)

#define BOOT_CFG_POL_MASK    ((UBase_t) 0x00000001UL)
#define BOOT_CFG_POL_LOW    ((UBase_t) 0x00000000UL)
#define BOOT_CFG_POL_HIGH    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define BOOT_CFG_R_PIN_MASK    ((UBase_t) 0x00001C00UL)
#define BOOT_CFG_R_PIN_BIT    (10UL)
#define BOOT_CFG_R_PIN_0    ((UBase_t) 0x00000000UL)
#define BOOT_CFG_R_PIN_1    ((UBase_t) 0x00000400UL)
#define BOOT_CFG_R_PIN_2    ((UBase_t) 0x00000800UL)
#define BOOT_CFG_R_PIN_3    ((UBase_t) 0x00000C00UL)
#define BOOT_CFG_R_PIN_4    ((UBase_t) 0x00001000UL)
#define BOOT_CFG_R_PIN_5    ((UBase_t) 0x00001400UL)
#define BOOT_CFG_R_PIN_6    ((UBase_t) 0x00001800UL)
#define BOOT_CFG_R_PIN_7    ((UBase_t) 0x00001C00UL)

#define BOOT_CFG_PIN_MASK    ((UBase_t) 0x00000007UL)
#define BOOT_CFG_PIN_0    ((UBase_t) 0x00000000UL)
#define BOOT_CFG_PIN_1    ((UBase_t) 0x00000001UL)
#define BOOT_CFG_PIN_2    ((UBase_t) 0x00000002UL)
#define BOOT_CFG_PIN_3    ((UBase_t) 0x00000003UL)
#define BOOT_CFG_PIN_4    ((UBase_t) 0x00000004UL)
#define BOOT_CFG_PIN_5    ((UBase_t) 0x00000005UL)
#define BOOT_CFG_PIN_6    ((UBase_t) 0x00000006UL)
#define BOOT_CFG_PIN_7    ((UBase_t) 0x00000007UL)
/*--------*/

/*--------*/
#define BOOT_CFG_R_PORT_MASK    ((UBase_t) 0x0000E000UL)
#define BOOT_CFG_R_PORT_BIT    (13UL)
#define BOOT_CFG_R_PORT_A    ((UBase_t) 0x00000000UL)
#define BOOT_CFG_R_PORT_B    ((UBase_t) 0x00002000UL)
#define BOOT_CFG_R_PORT_C    ((UBase_t) 0x00004000UL)
#define BOOT_CFG_R_PORT_D    ((UBase_t) 0x00006000UL)
#define BOOT_CFG_R_PORT_E    ((UBase_t) 0x00008000UL)
#define BOOT_CFG_R_PORT_F    ((UBase_t) 0x0000A000UL)
#define BOOT_CFG_R_PORT_G    ((UBase_t) 0x0000C000UL)
#define BOOT_CFG_R_PORT_H    ((UBase_t) 0x0000E000UL)

#define BOOT_CFG_PORT_MASK    ((UBase_t) 0x00000007UL)
#define BOOT_CFG_PORT_A    ((UBase_t) 0x00000000UL)
#define BOOT_CFG_PORT_B    ((UBase_t) 0x00000001UL)
#define BOOT_CFG_PORT_C    ((UBase_t) 0x00000002UL)
#define BOOT_CFG_PORT_D    ((UBase_t) 0x00000003UL)
#define BOOT_CFG_PORT_E    ((UBase_t) 0x00000004UL)
#define BOOT_CFG_PORT_F    ((UBase_t) 0x00000005UL)
#define BOOT_CFG_PORT_G    ((UBase_t) 0x00000006UL)
#define BOOT_CFG_PORT_H    ((UBase_t) 0x00000007UL)
/*--------*/

/*--------*/
#define BOOT_CFG_R_NW_MASK    ((UBase_t) 0x80000000UL)
#define BOOT_CFG_R_NW_BIT    (31UL)
#define BOOT_CFG_R_NW_DIS    ((UBase_t) 0x00000000UL)
#define BOOT_CFG_R_NW_ENA    ((UBase_t) 0x80000000UL)

#define BOOT_CFG_NW_MASK    ((UBase_t) 0x00000001UL)
#define BOOT_CFG_NW_DIS    ((UBase_t) 0x00000000UL)
#define BOOT_CFG_NW_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_BOOTCFG_H_ */
