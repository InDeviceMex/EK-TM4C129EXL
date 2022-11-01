/*
 * SYSCTL_RegisterDefines_EMACPDS.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_EMACPDS_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_EMACPDS_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 34 EMACPDS *********************************************
******************************************************************************************/
/*--------*/
#define EMAC_PDS_R_PWRSTAT_MASK    ((UBase_t) 0x00000003UL)
#define EMAC_PDS_R_PWRSTAT_BIT    (0UL)
#define EMAC_PDS_R_PWRSTAT_OFF    ((UBase_t) 0x00000000UL)
#define EMAC_PDS_R_PWRSTAT_ON    ((UBase_t) 0x00000003UL)

#define EMAC_PDS_PWRSTAT_MASK    ((UBase_t) 0x00000003UL)
#define EMAC_PDS_PWRSTAT_OFF    ((UBase_t) 0x00000000UL)
#define EMAC_PDS_PWRSTAT_ON    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define EMAC_PDS_R_MEMSTAT_MASK    ((UBase_t) 0x0000000CUL)
#define EMAC_PDS_R_MEMSTAT_BIT    (2UL)
#define EMAC_PDS_R_MEMSTAT_OFF    ((UBase_t) 0x00000000UL)
#define EMAC_PDS_R_MEMSTAT_ON    ((UBase_t) 0x0000000CUL)

#define EMAC_PDS_MEMSTAT_MASK    ((UBase_t) 0x00000003UL)
#define EMAC_PDS_MEMSTAT_OFF    ((UBase_t) 0x00000000UL)
#define EMAC_PDS_MEMSTAT_ON    ((UBase_t) 0x00000003UL)
/*--------*/




#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_EMACPDS_H_ */
