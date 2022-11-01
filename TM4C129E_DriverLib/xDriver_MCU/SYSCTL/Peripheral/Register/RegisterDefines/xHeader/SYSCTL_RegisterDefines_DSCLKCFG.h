/*
 * SYSCTL_RegisterDefines_DSCLKCFG.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_DSCLKCFG_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_DSCLKCFG_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 14 DSCLKCFG *********************************************
******************************************************************************************/
/*--------*/
#define DSCLK_CFG_R_DEEPSLEEP_OSC_SYSDIV_MASK    ((UBase_t) 0x000003FFUL)
#define DSCLK_CFG_R_DEEPSLEEP_OSC_SYSDIV_BIT    (0UL)

#define DSCLK_CFG_DEEPSLEEP_OSC_SYSDIV_MASK    ((UBase_t) 0x000003FFUL)
/*--------*/

/*--------*/
#define DSCLK_CFG_R_DEEPSLEEP_OSC_SRC_MASK    ((UBase_t) 0x00F00000UL)
#define DSCLK_CFG_R_DEEPSLEEP_OSC_SRC_BIT    (20UL)
#define DSCLK_CFG_R_DEEPSLEEP_OSC_SRC_PIOSC    ((UBase_t) 0x00000000UL)
#define DSCLK_CFG_R_DEEPSLEEP_OSC_SRC_LFIOSC    ((UBase_t) 0x00200000UL)
#define DSCLK_CFG_R_DEEPSLEEP_OSC_SRC_MOSC    ((UBase_t) 0x00300000UL)
#define DSCLK_CFG_R_DEEPSLEEP_OSC_SRC_RTCOSC    ((UBase_t) 0x00400000UL)

#define DSCLK_CFG_DEEPSLEEP_OSC_SRC_MASK    ((UBase_t) 0x0000000FUL)
#define DSCLK_CFG_DEEPSLEEP_OSC_SRC_PIOSC    ((UBase_t) 0x00000000UL)
#define DSCLK_CFG_DEEPSLEEP_OSC_SRC_LFIOSC    ((UBase_t) 0x00000002UL)
#define DSCLK_CFG_DEEPSLEEP_OSC_SRC_MOSC    ((UBase_t) 0x00000003UL)
#define DSCLK_CFG_DEEPSLEEP_OSC_SRC_RTCOSC    ((UBase_t) 0x00000004UL)
/*--------*/

/*--------*/
#define DSCLK_CFG_R_MOSC_DPD_MASK    ((UBase_t) 0x40000000UL)
#define DSCLK_CFG_R_MOSC_DPD_BIT    (30UL)
#define DSCLK_CFG_R_MOSC_DPD_DIS    ((UBase_t) 0x00000000UL)
#define DSCLK_CFG_R_MOSC_DPD_ENA    ((UBase_t) 0x40000000UL)

#define DSCLK_CFG_MOSC_DPD_MASK    ((UBase_t) 0x00000001UL)
#define DSCLK_CFG_MOSC_DPD_DIS    ((UBase_t) 0x00000000UL)
#define DSCLK_CFG_MOSC_DPD_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define DSCLK_CFG_R_PIOSC_PD_MASK    ((UBase_t) 0x80000000UL)
#define DSCLK_CFG_R_PIOSC_PD_BIT    (31UL)
#define DSCLK_CFG_R_PIOSC_PD_ENA    ((UBase_t) 0x00000000UL)
#define DSCLK_CFG_R_PIOSC_PD_DIS    ((UBase_t) 0x80000000UL)

#define DSCLK_CFG_PIOSC_PD_MASK    ((UBase_t) 0x00000001UL)
#define DSCLK_CFG_PIOSC_PD_ENA    ((UBase_t) 0x00000000UL)
#define DSCLK_CFG_PIOSC_PD_DIS    ((UBase_t) 0x00000001UL)
/*--------*/




#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_DSCLKCFG_H_ */
