/*
 * SYSCTL_RegisterDefines_PIOSCSTAT.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PIOSCSTAT_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PIOSCSTAT_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************18 PIOSCSTAT *********************************************
******************************************************************************************/
/*--------*/
#define PIOSC_STAT_R_CT_MASK    ((UBase_t) 0x0000007FUL)
#define PIOSC_STAT_R_CT_BIT    (0UL)

#define PIOSC_STAT_CT_MASK    ((UBase_t) 0x0000007FUL)
/*--------*/

/*--------*/
#define PIOSC_STAT_R_RESULT_MASK    ((UBase_t) 0x00000300UL)
#define PIOSC_STAT_R_RESULT_BIT    (8UL)

#define PIOSC_STAT_RESULT_MASK    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define PIOSC_STAT_R_DT_MASK    ((UBase_t) 0x007F0000UL)
#define PIOSC_STAT_R_DT_BIT    (16UL)

#define PIOSC_STAT_DT_MASK    ((UBase_t) 0x0000007FUL)
/*--------*/




#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PIOSCSTAT_H_ */
