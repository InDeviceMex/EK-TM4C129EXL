/*
 * SYSCTL_RegisterDefines_PIOSCCAL.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PIOSCCAL_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PIOSCCAL_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************17 PIOSCCAL *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PIOSCCAL_R_UT_MASK    ((uint32_t) 0x0000007FUL)
#define SYSCTL_PIOSCCAL_R_UT_BIT    (0UL)

#define SYSCTL_PIOSCCAL_UT_MASK    ((uint32_t) 0x0000007FUL)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCCAL_R_UPDATE_MASK    ((uint32_t) 0x00000100UL)
#define SYSCTL_PIOSCCAL_R_UPDATE_BIT    (8UL)
#define SYSCTL_PIOSCCAL_R_UPDATE_NOACTION    ((uint32_t) 0x00000000UL)
#define SYSCTL_PIOSCCAL_R_UPDATE_UPDATE    ((uint32_t) 0x00000100UL)

#define SYSCTL_PIOSCCAL_UPDATE_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_PIOSCCAL_UPDATE_NOACTION    ((uint32_t) 0x00000000UL)
#define SYSCTL_PIOSCCAL_UPDATE_UPDATE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCCAL_R_CAL_MASK    ((uint32_t) 0x00000200UL)
#define SYSCTL_PIOSCCAL_R_CAL_BIT    (9UL)
#define SYSCTL_PIOSCCAL_R_CAL_NOACTION    ((uint32_t) 0x00000000UL)
#define SYSCTL_PIOSCCAL_R_CAL_START    ((uint32_t) 0x00000200UL)

#define SYSCTL_PIOSCCAL_CAL_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_PIOSCCAL_CAL_NOACTION    ((uint32_t) 0x00000000UL)
#define SYSCTL_PIOSCCAL_CAL_START    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCCAL_R_UTEN_MASK    ((uint32_t) 0x80000000UL)
#define SYSCTL_PIOSCCAL_R_UTEN_BIT    (31UL)
#define SYSCTL_PIOSCCAL_R_UTEN_FACTORY    ((uint32_t) 0x00000000UL)
#define SYSCTL_PIOSCCAL_R_UTEN_TRIM    ((uint32_t) 0x80000000UL)

#define SYSCTL_PIOSCCAL_UTEN_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_PIOSCCAL_UTEN_FACTORY    ((uint32_t) 0x00000000UL)
#define SYSCTL_PIOSCCAL_UTEN_TRIM    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PIOSCCAL_H_ */
