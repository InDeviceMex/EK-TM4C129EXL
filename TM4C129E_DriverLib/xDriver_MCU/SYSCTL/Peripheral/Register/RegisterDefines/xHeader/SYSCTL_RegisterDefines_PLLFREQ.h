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
#define PLL_FREQ0_R_PLL_M_INT_MASK    ((UBase_t) 0x000003FFUL)
#define PLL_FREQ0_R_PLL_M_INT_BIT    (0UL)

#define PLL_FREQ0_PLL_M_INT_MASK    ((UBase_t) 0x000003FFUL)
/*--------*/

/*--------*/
#define PLL_FREQ0_R_PLL_M_FRAC_MASK    ((UBase_t) 0x000FFC00UL)
#define PLL_FREQ0_R_PLL_M_FRAC_BIT    (10UL)

#define PLL_FREQ0_PLL_M_FRAC_MASK    ((UBase_t) 0x000003FFUL)
/*--------*/

/*--------*/
#define PLL_FREQ0_R_PLL_PWR_MASK    ((UBase_t) 0x00800000UL)
#define PLL_FREQ0_R_PLL_PWR_BIT    (23UL)
#define PLL_FREQ0_R_PLL_PWR_OFF    ((UBase_t) 0x00000000UL)
#define PLL_FREQ0_R_PLL_PWR_ON    ((UBase_t) 0x00800000UL)

#define PLL_FREQ0_PLL_PWR_MASK    ((UBase_t) 0x00000001UL)
#define PLL_FREQ0_PLL_PWR_OFF    ((UBase_t) 0x00000000UL)
#define PLL_FREQ0_PLL_PWR_ON    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************20 PLLFREQ1 *********************************************
******************************************************************************************/
/*--------*/
#define PLL_FREQ1_R_PLL_N_VALUE_MASK    ((UBase_t) 0x0000001FUL)
#define PLL_FREQ1_R_PLL_N_VALUE_BIT    (0UL)

#define PLL_FREQ1_PLL_N_VALUE_MASK    ((UBase_t) 0x0000001FUL)
/*--------*/

/*--------*/
#define PLL_FREQ1_R_PLL_Q_VALUE_MASK    ((UBase_t) 0x00001F00UL)
#define PLL_FREQ1_R_PLL_Q_VALUE_BIT    (8UL)

#define PLL_FREQ1_PLL_Q_VALUE_MASK    ((UBase_t) 0x0000001FUL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLFREQ_H_ */
