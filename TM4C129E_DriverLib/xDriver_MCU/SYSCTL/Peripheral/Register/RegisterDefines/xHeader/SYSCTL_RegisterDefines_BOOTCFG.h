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
#define SYSCTL_BOOTCFG_R_DBG0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_BOOTCFG_R_DBG0_BIT    (0UL)

#define SYSCTL_BOOTCFG_DBG0_MASK    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_DBG1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_BOOTCFG_R_DBG1_BIT    (1UL)

#define SYSCTL_BOOTCFG_DBG1_MASK    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_KEY_MASK    ((UBase_t) 0x00000010UL)
#define SYSCTL_BOOTCFG_R_KEY_BIT    (4UL)
#define SYSCTL_BOOTCFG_R_KEY_71D5    ((UBase_t) 0x00000000UL)
#define SYSCTL_BOOTCFG_R_KEY_A442    ((UBase_t) 0x00000010UL)

#define SYSCTL_BOOTCFG_KEY_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_BOOTCFG_KEY_71D5    ((UBase_t) 0x00000000UL)
#define SYSCTL_BOOTCFG_KEY_A442    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_EN_MASK    ((UBase_t) 0x00000100UL)
#define SYSCTL_BOOTCFG_R_EN_BIT    (8UL)
#define SYSCTL_BOOTCFG_R_EN_GPIO    ((UBase_t) 0x00000000UL)
#define SYSCTL_BOOTCFG_R_EN_ADDRESS ((UBase_t) 0x00000100UL)

#define SYSCTL_BOOTCFG_EN_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_BOOTCFG_EN_GPIO    ((UBase_t) 0x00000000UL)
#define SYSCTL_BOOTCFG_EN_ADDRESS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_POL_MASK    ((UBase_t) 0x00000200UL)
#define SYSCTL_BOOTCFG_R_POL_BIT    (9UL)
#define SYSCTL_BOOTCFG_R_POL_LOW    ((UBase_t) 0x00000000UL)
#define SYSCTL_BOOTCFG_R_POL_HIGH    ((UBase_t) 0x00000200UL)

#define SYSCTL_BOOTCFG_POL_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_BOOTCFG_POL_LOW    ((UBase_t) 0x00000000UL)
#define SYSCTL_BOOTCFG_POL_HIGH    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_PIN_MASK    ((UBase_t) 0x00001C00UL)
#define SYSCTL_BOOTCFG_R_PIN_BIT    (10UL)
#define SYSCTL_BOOTCFG_R_PIN_0    ((UBase_t) 0x00000000UL)
#define SYSCTL_BOOTCFG_R_PIN_1    ((UBase_t) 0x00000400UL)
#define SYSCTL_BOOTCFG_R_PIN_2    ((UBase_t) 0x00000800UL)
#define SYSCTL_BOOTCFG_R_PIN_3    ((UBase_t) 0x00000C00UL)
#define SYSCTL_BOOTCFG_R_PIN_4    ((UBase_t) 0x00001000UL)
#define SYSCTL_BOOTCFG_R_PIN_5    ((UBase_t) 0x00001400UL)
#define SYSCTL_BOOTCFG_R_PIN_6    ((UBase_t) 0x00001800UL)
#define SYSCTL_BOOTCFG_R_PIN_7    ((UBase_t) 0x00001C00UL)

#define SYSCTL_BOOTCFG_PIN_MASK    ((UBase_t) 0x00000007UL)
#define SYSCTL_BOOTCFG_PIN_0    ((UBase_t) 0x00000000UL)
#define SYSCTL_BOOTCFG_PIN_1    ((UBase_t) 0x00000001UL)
#define SYSCTL_BOOTCFG_PIN_2    ((UBase_t) 0x00000002UL)
#define SYSCTL_BOOTCFG_PIN_3    ((UBase_t) 0x00000003UL)
#define SYSCTL_BOOTCFG_PIN_4    ((UBase_t) 0x00000004UL)
#define SYSCTL_BOOTCFG_PIN_5    ((UBase_t) 0x00000005UL)
#define SYSCTL_BOOTCFG_PIN_6    ((UBase_t) 0x00000006UL)
#define SYSCTL_BOOTCFG_PIN_7    ((UBase_t) 0x00000007UL)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_PORT_MASK    ((UBase_t) 0x0000E000UL)
#define SYSCTL_BOOTCFG_R_PORT_BIT    (13UL)
#define SYSCTL_BOOTCFG_R_PORT_A    ((UBase_t) 0x00000000UL)
#define SYSCTL_BOOTCFG_R_PORT_B    ((UBase_t) 0x00002000UL)
#define SYSCTL_BOOTCFG_R_PORT_C    ((UBase_t) 0x00004000UL)
#define SYSCTL_BOOTCFG_R_PORT_D    ((UBase_t) 0x00006000UL)
#define SYSCTL_BOOTCFG_R_PORT_E    ((UBase_t) 0x00008000UL)
#define SYSCTL_BOOTCFG_R_PORT_F    ((UBase_t) 0x0000A000UL)
#define SYSCTL_BOOTCFG_R_PORT_G    ((UBase_t) 0x0000C000UL)
#define SYSCTL_BOOTCFG_R_PORT_H    ((UBase_t) 0x0000E000UL)

#define SYSCTL_BOOTCFG_PORT_MASK    ((UBase_t) 0x00000007UL)
#define SYSCTL_BOOTCFG_PORT_A    ((UBase_t) 0x00000000UL)
#define SYSCTL_BOOTCFG_PORT_B    ((UBase_t) 0x00000001UL)
#define SYSCTL_BOOTCFG_PORT_C    ((UBase_t) 0x00000002UL)
#define SYSCTL_BOOTCFG_PORT_D    ((UBase_t) 0x00000003UL)
#define SYSCTL_BOOTCFG_PORT_E    ((UBase_t) 0x00000004UL)
#define SYSCTL_BOOTCFG_PORT_F    ((UBase_t) 0x00000005UL)
#define SYSCTL_BOOTCFG_PORT_G    ((UBase_t) 0x00000006UL)
#define SYSCTL_BOOTCFG_PORT_H    ((UBase_t) 0x00000007UL)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_NW_MASK    ((UBase_t) 0x80000000UL)
#define SYSCTL_BOOTCFG_R_NW_BIT    (31UL)
#define SYSCTL_BOOTCFG_R_NW_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_BOOTCFG_R_NW_ENA    ((UBase_t) 0x80000000UL)

#define SYSCTL_BOOTCFG_NW_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_BOOTCFG_NW_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_BOOTCFG_NW_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_BOOTCFG_H_ */
