/*
 * SYSCTL_RegisterDefines_LDOSPCTL.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LDOSPCTL_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LDOSPCTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************25 LDOSPCTL *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_LDOSPCTL_R_VLDO_MASK    ((uint32_t) 0x000000FFUL)
#define SYSCTL_LDOSPCTL_R_VLDO_BIT    (0UL)

#define SYSCTL_LDOSPCTL_VLDO_MASK    ((uint32_t) 0x000000FFUL)
/*--------*/

/*--------*/
#define SYSCTL_LDOSPCTL_R_VADJEN_MASK    ((uint32_t) 0x80000000UL)
#define SYSCTL_LDOSPCTL_R_VADJEN_BIT    (31UL)

#define SYSCTL_LDOSPCTL_VADJEN_MASK    ((uint32_t) 0x000000F01UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LDOSPCTL_H_ */
