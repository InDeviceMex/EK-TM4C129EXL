/*
 * SYSCTL_RegisterDefines_PLLFREQ.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLFREQ_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLFREQ_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************19 PLLFREQ0 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PLLFREQ0_R_MINT_MASK    ((uint32_t) 0x000003FFUL)
#define SYSCTL_PLLFREQ0_R_MINT_BIT    (0UL)

#define SYSCTL_PLLFREQ0_MINT_MASK    ((uint32_t) 0x000003FFUL)
/*--------*/

/*--------*/
#define SYSCTL_PLLFREQ0_R_MFRAC_MASK    ((uint32_t) 0x000FFC00UL)
#define SYSCTL_PLLFREQ0_R_MFRAC_BIT    (10UL)

#define SYSCTL_PLLFREQ0_MFRAC_MASK    ((uint32_t) 0x000003FFUL)
/*--------*/

/*--------*/
#define SYSCTL_PLLFREQ0_R_PLLPWR_MASK    ((uint32_t) 0x00800000UL)
#define SYSCTL_PLLFREQ0_R_PLLPWR_BIT    (23UL)
#define SYSCTL_PLLFREQ0_R_PLLPWR_OFF    ((uint32_t) 0x00000000UL)
#define SYSCTL_PLLFREQ0_R_PLLPWR_ON    ((uint32_t) 0x00800000UL)

#define SYSCTL_PLLFREQ0_PLLPWR_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_PLLFREQ0_PLLPWR_OFF    ((uint32_t) 0x00000000UL)
#define SYSCTL_PLLFREQ0_PLLPWR_ON    ((uint32_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************20 PLLFREQ1 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PLLFREQ1_R_N_MASK    ((uint32_t) 0x0000001FUL)
#define SYSCTL_PLLFREQ1_R_N_BIT    (0UL)

#define SYSCTL_PLLFREQ1_N_MASK    ((uint32_t) 0x0000001FUL)
/*--------*/

/*--------*/
#define SYSCTL_PLLFREQ1_R_Q_MASK    ((uint32_t) 0x00001F00UL)
#define SYSCTL_PLLFREQ1_R_Q_BIT    (8UL)

#define SYSCTL_PLLFREQ1_Q_MASK    ((uint32_t) 0x0000001FUL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLFREQ_H_ */
