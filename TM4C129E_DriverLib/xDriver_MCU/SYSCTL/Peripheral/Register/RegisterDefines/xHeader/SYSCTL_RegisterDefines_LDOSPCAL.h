/*
 * SYSCTL_RegisterDefines_LDOSPCAL.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LDOSPCAL_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LDOSPCAL_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************26 LDOSPCAL *********************************************
******************************************************************************************/
/*--------*/
#define LDO_SPCAL_R_NOPLL_MASK    ((UBase_t) 0x000000FFUL)
#define LDO_SPCAL_R_NOPLL_BIT    (0UL)

#define LDO_SPCAL_NOPLL_MASK    ((UBase_t) 0x000000FFUL)
/*--------*/

/*--------*/
#define LDO_SPCAL_R_WITHPLL_MASK    ((UBase_t) 0x0000FF00UL)
#define LDO_SPCAL_R_WITHPLL_BIT    (8UL)

#define LDO_SPCAL_WITHPLL_MASK    ((UBase_t) 0x000000FFUL)
/*--------*/



#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_LDOSPCAL_H_ */
