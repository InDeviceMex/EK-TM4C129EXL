/*
 * SYSCTL_RegisterDefines_DIVSCLK.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_DIVSCLK_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_DIVSCLK_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 15 DIVSCLK *********************************************
******************************************************************************************/
/*--------*/
#define DIVSCLK_CFG_R_DIV_MASK    ((UBase_t) 0x000000FFUL)
#define DIVSCLK_CFG_R_DIV_BIT    (0UL)

#define DIVSCLK_CFG_DIV_MASK    ((UBase_t) 0x000000FFUL)
/*--------*/

/*--------*/
#define DIVSCLK_CFG_R_SRC_MASK    ((UBase_t) 0x00030000UL)
#define DIVSCLK_CFG_R_SRC_BIT    (16UL)
#define DIVSCLK_CFG_R_SRC_SYSCLK    ((UBase_t) 0x00000000UL)
#define DIVSCLK_CFG_R_SRC_PIOSC    ((UBase_t) 0x00010000UL)
#define DIVSCLK_CFG_R_SRC_MOSC    ((UBase_t) 0x00020000UL)

#define DIVSCLK_CFG_SRC_MASK    ((UBase_t) 0x00000003UL)
#define DIVSCLK_CFG_SRC_SYSCLK    ((UBase_t) 0x00000000UL)
#define DIVSCLK_CFG_SRC_PIOSC    ((UBase_t) 0x00000001UL)
#define DIVSCLK_CFG_SRC_MOSC    ((UBase_t) 0x00000002UL)
/*--------*/
/*--------*/
#define DIVSCLK_CFG_R_EN_MASK    ((UBase_t) 0x80000000UL)
#define DIVSCLK_CFG_R_EN_BIT    (31UL)
#define DIVSCLK_CFG_R_EN_ENA    ((UBase_t) 0x00000000UL)
#define DIVSCLK_CFG_R_EN_DIS    ((UBase_t) 0x80000000UL)

#define DIVSCLK_CFG_EN_MASK    ((UBase_t) 0x00000001UL)
#define DIVSCLK_CFG_EN_ENA    ((UBase_t) 0x00000000UL)
#define DIVSCLK_CFG_EN_DIS    ((UBase_t) 0x00000001UL)
/*--------*/


#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_DIVSCLK_H_ */
