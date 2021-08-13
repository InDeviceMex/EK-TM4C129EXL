/*
 * SYSCTL_RegisterDefines_LDOSPCAL.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LDOSPCAL_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LDOSPCAL_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************26 LDOSPCAL *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_LDOSPCAL_R_NOPLL_MASK    ((uint32_t) 0x000000FFUL)
#define SYSCTL_LDOSPCAL_R_NOPLL_BIT    (0UL)

#define SYSCTL_LDOSPCAL_NOPLL_MASK    ((uint32_t) 0x000000FFUL)
/*--------*/

/*--------*/
#define SYSCTL_LDOSPCAL_R_WITHPLL_MASK    ((uint32_t) 0x0000FF00UL)
#define SYSCTL_LDOSPCAL_R_WITHPLL_BIT    (8UL)

#define SYSCTL_LDOSPCAL_WITHPLL_MASK    ((uint32_t) 0x000000FFUL)
/*--------*/



#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LDOSPCAL_H_ */
