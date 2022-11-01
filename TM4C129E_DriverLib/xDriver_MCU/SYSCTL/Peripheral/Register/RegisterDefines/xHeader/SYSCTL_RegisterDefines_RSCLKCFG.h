/*
 * SYSCTL_RegisterDefines_RSCLKCFG.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_RSCLKCFG_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_RSCLKCFG_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 11 RSCLKCFG *********************************************
******************************************************************************************/
/*--------*/
#define RSCLK_CFG_R_PLL_SYSDIV_MASK    ((UBase_t) 0x000003FFUL)
#define RSCLK_CFG_R_PLL_SYSDIV_BIT    (0UL)

#define RSCLK_CFG_PLL_SYSDIV_MASK    ((UBase_t) 0x000003FFUL)
/*--------*/

/*--------*/
#define RSCLK_CFG_R_OSC_SYSDIV_MASK    ((UBase_t) 0x000FFC00UL)
#define RSCLK_CFG_R_OSC_SYSDIV_BIT    (10UL)

#define RSCLK_CFG_OSC_SYSDIV_MASK    ((UBase_t) 0x000003FFUL)
/*--------*/

/*--------*/
#define RSCLK_CFG_R_OSC_SRC_MASK    ((UBase_t) 0x00F00000UL)
#define RSCLK_CFG_R_OSC_SRC_BIT    (20UL)
#define RSCLK_CFG_R_OSC_SRC_PIOSC    ((UBase_t) 0x00000000UL)
#define RSCLK_CFG_R_OSC_SRC_LFIOSC    ((UBase_t) 0x00200000UL)
#define RSCLK_CFG_R_OSC_SRC_MOSC    ((UBase_t) 0x00300000UL)
#define RSCLK_CFG_R_OSC_SRC_RTCOSC    ((UBase_t) 0x00400000UL)

#define RSCLK_CFG_OSC_SRC_MASK    ((UBase_t) 0x0000000FUL)
#define RSCLK_CFG_OSC_SRC_PIOSC    ((UBase_t) 0x00000000UL)
#define RSCLK_CFG_OSC_SRC_LFIOSC    ((UBase_t) 0x00000002UL)
#define RSCLK_CFG_OSC_SRC_MOSC    ((UBase_t) 0x00000003UL)
#define RSCLK_CFG_OSC_SRC_RTCOSC    ((UBase_t) 0x00000004UL)
/*--------*/

/*--------*/
#define RSCLK_CFG_R_PLL_SRC_MASK    ((UBase_t) 0x0F000000UL)
#define RSCLK_CFG_R_PLL_SRC_BIT    (24UL)
#define RSCLK_CFG_R_PLL_SRC_PIOSC    ((UBase_t) 0x00000000UL)
#define RSCLK_CFG_R_PLL_SRC_MOSC    ((UBase_t) 0x03000000UL)

#define RSCLK_CFG_PLL_SRC_MASK    ((UBase_t) 0x0000000FUL)
#define RSCLK_CFG_PLL_SRC_PIOSC    ((UBase_t) 0x00000000UL)
#define RSCLK_CFG_PLL_SRC_MOSC    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define RSCLK_CFG_R_USEPLL_MASK    ((UBase_t) 0x10000000UL)
#define RSCLK_CFG_R_USEPLL_BIT    (28UL)
#define RSCLK_CFG_R_USEPLL_OSC    ((UBase_t) 0x00000000UL)
#define RSCLK_CFG_R_USEPLL_PLL    ((UBase_t) 0x10000000UL)

#define RSCLK_CFG_USEPLL_MASK    ((UBase_t) 0x00000001UL)
#define RSCLK_CFG_USEPLL_OSC    ((UBase_t) 0x00000000UL)
#define RSCLK_CFG_USEPLL_PLL    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define RSCLK_CFG_R_ACG_MASK    ((UBase_t) 0x20000000UL)
#define RSCLK_CFG_R_ACG_BIT    (29UL)
#define RSCLK_CFG_R_ACG_RCGCn    ((UBase_t) 0x00000000UL)
#define RSCLK_CFG_R_ACG_SCGCn    ((UBase_t) 0x20000000UL)

#define RSCLK_CFG_ACG_MASK    ((UBase_t) 0x00000001UL)
#define RSCLK_CFG_ACG_RCGCn    ((UBase_t) 0x00000000UL)
#define RSCLK_CFG_ACG_SCGCn    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define RSCLK_CFG_R_NEW_PLLFREQ_MASK    ((UBase_t) 0x40000000UL)
#define RSCLK_CFG_R_NEW_PLLFREQ_BIT    (30UL)
#define RSCLK_CFG_R_NEW_PLLFREQ_NOEFFECT    ((UBase_t) 0x00000000UL)
#define RSCLK_CFG_R_NEW_PLLFREQ_UPDATE    ((UBase_t) 0x40000000UL)

#define RSCLK_CFG_NEW_PLLFREQ_MASK    ((UBase_t) 0x00000001UL)
#define RSCLK_CFG_NEW_PLLFREQ_NOEFFECT    ((UBase_t) 0x00000000UL)
#define RSCLK_CFG_NEW_PLLFREQ_UPDATE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define RSCLK_CFG_R_MEMTIMU_MASK    ((UBase_t) 0x80000000UL)
#define RSCLK_CFG_R_MEMTIMU_BIT    (31UL)
#define RSCLK_CFG_R_MEMTIMU_NOEFFECT    ((UBase_t) 0x00000000UL)
#define RSCLK_CFG_R_MEMTIMU_UPDATE    ((UBase_t) 0x80000000UL)

#define RSCLK_CFG_MEMTIMU_MASK    ((UBase_t) 0x00000001UL)
#define RSCLK_CFG_MEMTIMU_NOEFFECT    ((UBase_t) 0x00000000UL)
#define RSCLK_CFG_MEMTIMU_UPDATE    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_RSCLKCFG_H_ */
