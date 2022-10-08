/*
 * SYSCTL_RegisterDefines_ALTCLKCFG.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_ALTCLKCFG_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_ALTCLKCFG_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 13 ALTCLKCFG *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_ALTCLKCFG_R_ALTCLK_MASK    ((UBase_t) 0x0000000FUL)
#define SYSCTL_ALTCLKCFG_R_ALTCLK_BIT    (0UL)
#define SYSCTL_ALTCLKCFG_R_ALTCLK_PIOSC    ((UBase_t) 0x00000000UL)
#define SYSCTL_ALTCLKCFG_R_ALTCLK_RTCOSC    ((UBase_t) 0x00000003UL)
#define SYSCTL_ALTCLKCFG_R_ALTCLK_LFIOSC    ((UBase_t) 0x00000004UL)

#define SYSCTL_ALTCLKCFG_ALTCLK_MASK    ((UBase_t) 0x0000000FUL)
#define SYSCTL_ALTCLKCFG_ALTCLK_PIOSC    ((UBase_t) 0x00000000UL)
#define SYSCTL_ALTCLKCFG_ALTCLK_RTCOSC    ((UBase_t) 0x00000003UL)
#define SYSCTL_ALTCLKCFG_ALTCLK_LFIOSC    ((UBase_t) 0x00000004UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_ALTCLKCFG_H_ */
