/*
 * SYSCTL_RegisterDefines_DIVSCLK.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_DIVSCLK_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_DIVSCLK_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 15 DIVSCLK *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DIVSCLK_R_DIV_MASK    ((uint32_t) 0x000000FFUL)
#define SYSCTL_DIVSCLK_R_DIV_BIT    (0UL)

#define SYSCTL_DIVSCLK_DIV_MASK    ((uint32_t) 0x000000FFUL)
/*--------*/

/*--------*/
#define SYSCTL_DIVSCLK_R_SRC_MASK    ((uint32_t) 0x00030000UL)
#define SYSCTL_DIVSCLK_R_SRC_BIT    (16UL)
#define SYSCTL_DIVSCLK_R_SRC_SYSCLK    ((uint32_t) 0x00000000UL)
#define SYSCTL_DIVSCLK_R_SRC_PIOSC    ((uint32_t) 0x00010000UL)
#define SYSCTL_DIVSCLK_R_SRC_MOSC    ((uint32_t) 0x00020000UL)

#define SYSCTL_DIVSCLK_SRC_MASK    ((uint32_t) 0x00000003UL)
#define SYSCTL_DIVSCLK_SRC_SYSCLK    ((uint32_t) 0x00000000UL)
#define SYSCTL_DIVSCLK_SRC_PIOSC    ((uint32_t) 0x00000001UL)
#define SYSCTL_DIVSCLK_SRC_MOSC    ((uint32_t) 0x00000002UL)
/*--------*/
/*--------*/
#define SYSCTL_DIVSCLK_R_EN_MASK    ((uint32_t) 0x80000000UL)
#define SYSCTL_DIVSCLK_R_EN_BIT    (31UL)
#define SYSCTL_DIVSCLK_R_EN_ENA    ((uint32_t) 0x00000000UL)
#define SYSCTL_DIVSCLK_R_EN_DIS    ((uint32_t) 0x80000000UL)

#define SYSCTL_DIVSCLK_EN_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_DIVSCLK_EN_ENA    ((uint32_t) 0x00000000UL)
#define SYSCTL_DIVSCLK_EN_DIS    ((uint32_t) 0x00000001UL)
/*--------*/


#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_DIVSCLK_H_ */
