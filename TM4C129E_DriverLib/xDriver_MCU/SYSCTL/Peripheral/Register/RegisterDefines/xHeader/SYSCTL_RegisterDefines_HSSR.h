/*
 * SYSCTL_RegisterDefines_HSSR.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_HSSR_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_HSSR_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 31 HSSR *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_HSSR_R_CDOFF_MASK    ((UBase_t) 0x00FFFFFFUL)
#define SYSCTL_HSSR_R_CDOFF_BIT    (0UL)

#define SYSCTL_HSSR_CDOFF_MASK    ((UBase_t) 0x00FFFFFFUL)
/*--------*/

/*--------*/
#define SYSCTL_HSSR_R_KEY_MASK    ((UBase_t) 0xFF000000UL)
#define SYSCTL_HSSR_R_KEY_BIT    (24UL)
#define SYSCTL_HSSR_R_KEY_INIT    ((UBase_t) 0xCA000000UL)

#define SYSCTL_HSSR_KEY_MASK    ((UBase_t) 0x000000FFUL)
#define SYSCTL_HSSR_KEY_INIT    ((UBase_t) 0x000000CAUL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_HSSR_H_ */
