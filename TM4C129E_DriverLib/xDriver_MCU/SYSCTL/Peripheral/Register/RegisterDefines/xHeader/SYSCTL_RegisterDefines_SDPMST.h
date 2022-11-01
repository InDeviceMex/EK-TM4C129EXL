/*
 * SYSCTL_RegisterDefines_SDPMST.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_SDPMST_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_SDPMST_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************29 SDPMST *********************************************
******************************************************************************************/
/*--------*/
#define SDP_MST_R_SRAM_PD_ERR_MASK    ((UBase_t) 0x00000001UL)
#define SDP_MST_R_SRAM_PD_ERR_BIT    (0UL)
#define SDP_MST_R_SRAM_PD_ERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_R_SRAM_PD_ERR_ERROR    ((UBase_t) 0x00000001UL)

#define SDP_MST_SRAM_PD_ERR_MASK    ((UBase_t) 0x00000001UL)
#define SDP_MST_SRAM_PD_ERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_SRAM_PD_ERR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SDP_MST_R_FLASH_PD_ERR_MASK    ((UBase_t) 0x00000002UL)
#define SDP_MST_R_FLASH_PD_ERR_BIT    (1UL)
#define SDP_MST_R_FLASH_PD_ERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_R_FLASH_PD_ERR_ERROR    ((UBase_t) 0x00000002UL)

#define SDP_MST_FLASH_PD_ERR_MASK    ((UBase_t) 0x00000001UL)
#define SDP_MST_FLASH_PD_ERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_FLASH_PD_ERR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SDP_MST_R_PIOSC_PD_ERR_MASK    ((UBase_t) 0x00000004UL)
#define SDP_MST_R_PIOSC_PD_ERR_BIT    (2UL)
#define SDP_MST_R_PIOSC_PD_ERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_R_PIOSC_PD_ERR_ERROR    ((UBase_t) 0x00000004UL)

#define SDP_MST_PIOSC_PD_ERR_MASK    ((UBase_t) 0x00000001UL)
#define SDP_MST_PIOSC_PD_ERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_PIOSC_PD_ERR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SDP_MST_R_VLDO_DMIN_ERR_MASK    ((UBase_t) 0x00000008UL)
#define SDP_MST_R_VLDO_DMIN_ERR_BIT    (3UL)
#define SDP_MST_R_VLDO_DMIN_ERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_R_VLDO_DMIN_ERR_ERROR    ((UBase_t) 0x00000008UL)

#define SDP_MST_VLDO_DMIN_ERR_MASK    ((UBase_t) 0x00000001UL)
#define SDP_MST_VLDO_DMIN_ERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_VLDO_DMIN_ERR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SDP_MST_R_VLDO_SMIN_ERR_MASK    ((UBase_t) 0x00000010UL)
#define SDP_MST_R_VLDO_SMIN_ERR_BIT    (4UL)
#define SDP_MST_R_VLDO_SMIN_ERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_R_VLDO_SMIN_ERR_ERROR    ((UBase_t) 0x00000010UL)

#define SDP_MST_VLDO_SMIN_ERR_MASK    ((UBase_t) 0x00000001UL)
#define SDP_MST_VLDO_SMIN_ERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_VLDO_SMIN_ERR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SDP_MST_R_VLDO_MAX_ERR_MASK    ((UBase_t) 0x00000040UL)
#define SDP_MST_R_VLDO_MAX_ERR_BIT    (6UL)
#define SDP_MST_R_VLDO_MAX_ERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_R_VLDO_MAX_ERR_ERROR    ((UBase_t) 0x00000040UL)

#define SDP_MST_VLDO_MAX_ERR_MASK    ((UBase_t) 0x00000001UL)
#define SDP_MST_VLDO_MAX_ERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_VLDO_MAX_ERR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SDP_MST_R_PIOSC_PD_WARNING_MASK    ((UBase_t) 0x00000080UL)
#define SDP_MST_R_PIOSC_PD_WARNING_BIT    (7UL)
#define SDP_MST_R_PIOSC_PD_WARNING_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_R_PIOSC_PD_WARNING_ERROR    ((UBase_t) 0x00000080UL)

#define SDP_MST_PIOSC_PD_WARNING_MASK    ((UBase_t) 0x00000001UL)
#define SDP_MST_PIOSC_PD_WARNING_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_PIOSC_PD_WARNING_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SDP_MST_R_LOW_ACTIVE_MASK    ((UBase_t) 0x00010000UL)
#define SDP_MST_R_LOW_ACTIVE_BIT    (16UL)
#define SDP_MST_R_LOW_ACTIVE_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_R_LOW_ACTIVE_ERROR    ((UBase_t) 0x00010000UL)

#define SDP_MST_LOW_ACTIVE_MASK    ((UBase_t) 0x00000001UL)
#define SDP_MST_LOW_ACTIVE_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_LOW_ACTIVE_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SDP_MST_R_LOW_PWR_MASK    ((UBase_t) 0x00020000UL)
#define SDP_MST_R_LOW_PWR_BIT    (17UL)
#define SDP_MST_R_LOW_PWR_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_R_LOW_PWR_ERROR    ((UBase_t) 0x00020000UL)

#define SDP_MST_LOW_PWR_MASK    ((UBase_t) 0x00000001UL)
#define SDP_MST_LOW_PWR_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_LOW_PWR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SDP_MST_R_FLASH_LP_MASK    ((UBase_t) 0x00040000UL)
#define SDP_MST_R_FLASH_LP_BIT    (18UL)
#define SDP_MST_R_FLASH_LP_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_R_FLASH_LP_ERROR    ((UBase_t) 0x00040000UL)

#define SDP_MST_FLASH_LP_MASK    ((UBase_t) 0x00000001UL)
#define SDP_MST_FLASH_LP_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_FLASH_LP_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SDP_MST_R_LDO_UA_MASK    ((UBase_t) 0x00080000UL)
#define SDP_MST_R_LDO_UA_BIT    (19UL)
#define SDP_MST_R_LDO_UA_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_R_LDO_UA_ERROR    ((UBase_t) 0x00080000UL)

#define SDP_MST_LDO_UA_MASK    ((UBase_t) 0x00000001UL)
#define SDP_MST_LDO_UA_NOERROR    ((UBase_t) 0x00000000UL)
#define SDP_MST_LDO_UA_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/


#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_SDPMST_H_ */
