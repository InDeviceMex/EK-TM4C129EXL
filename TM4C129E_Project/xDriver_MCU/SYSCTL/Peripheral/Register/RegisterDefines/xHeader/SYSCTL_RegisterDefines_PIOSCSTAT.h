/*
 * SYSCTL_RegisterDefines_PIOSCSTAT.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PIOSCSTAT_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PIOSCSTAT_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************18 PIOSCSTAT *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PIOSCSTAT_R_CT_MASK    ((uint32_t) 0x0000007FUL)
#define SYSCTL_PIOSCSTAT_R_CT_BIT    (0UL)

#define SYSCTL_PIOSCSTAT_CT_MASK    ((uint32_t) 0x0000007FUL)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCSTAT_R_RESULT_MASK    ((uint32_t) 0x00000300UL)
#define SYSCTL_PIOSCSTAT_R_RESULT_BIT    (8UL)

#define SYSCTL_PIOSCSTAT_RESULT_MASK    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCSTAT_R_DT_MASK    ((uint32_t) 0x007F0000UL)
#define SYSCTL_PIOSCSTAT_R_DT_BIT    (16UL)

#define SYSCTL_PIOSCSTAT_v_MASK    ((uint32_t) 0x0000007FUL)
/*--------*/




#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PIOSCSTAT_H_ */
