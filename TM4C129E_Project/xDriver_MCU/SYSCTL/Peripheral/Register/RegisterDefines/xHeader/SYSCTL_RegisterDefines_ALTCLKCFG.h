/*
 * SYSCTL_RegisterDefines_ALTCLKCFG.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_ALTCLKCFG_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_ALTCLKCFG_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 13 ALTCLKCFG *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_ALTCLKCFG_R_ALTCLK_MASK    ((uint32_t) 0x0000000FUL)
#define SYSCTL_ALTCLKCFG_R_ALTCLK_BIT    (0UL)
#define SYSCTL_ALTCLKCFG_R_ALTCLK_PIOSC    ((uint32_t) 0x00000000UL)
#define SYSCTL_ALTCLKCFG_R_ALTCLK_RTCOSC    ((uint32_t) 0x00000003UL)
#define SYSCTL_ALTCLKCFG_R_ALTCLK_LFIOSC    ((uint32_t) 0x00000004UL)

#define SYSCTL_ALTCLKCFG_ALTCLK_MASK    ((uint32_t) 0x0000000FUL)
#define SYSCTL_ALTCLKCFG_ALTCLK_PIOSC    ((uint32_t) 0x00000000UL)
#define SYSCTL_ALTCLKCFG_ALTCLK_RTCOSC    ((uint32_t) 0x00000003UL)
#define SYSCTL_ALTCLKCFG_ALTCLK_LFIOSC    ((uint32_t) 0x00000004UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_ALTCLKCFG_H_ */
