/*
 * SYSCTL_RegisterDefines_PWRTC.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PWRTC_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PWRTC_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 8 PWRTC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PWRTC_R_VDD_UBOR_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_PWRTC_R_VDD_UBOR_BIT    (0UL)
#define SYSCTL_PWRTC_R_VDD_UBOR_NOTRIP    ((uint32_t) 0x00000000UL)
#define SYSCTL_PWRTC_R_VDD_UBOR_TRIP    ((uint32_t) 0x00000001UL)

#define SYSCTL_PWRTC_VDD_UBOR_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_PWRTC_VDD_UBOR_NOTRIP    ((uint32_t) 0x00000000UL)
#define SYSCTL_PWRTC_VDD_UBOR_TRIP    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_PWRTC_R_VDDA_UBOR_MASK    ((uint32_t) 0x00000010UL)
#define SYSCTL_PWRTC_R_VDDA_UBOR_BIT    (4UL)
#define SYSCTL_PWRTC_R_VDDA_UBOR_NOTRIP    ((uint32_t) 0x00000000UL)
#define SYSCTL_PWRTC_R_VDDA_UBOR_TRIP    ((uint32_t) 0x00000010UL)

#define SYSCTL_PWRTC_VDDA_UBOR_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_PWRTC_VDDA_UBOR_NOTRIP    ((uint32_t) 0x00000000UL)
#define SYSCTL_PWRTC_VDDA_UBOR_TRIP    ((uint32_t) 0x00000001UL)
/*--------*/




#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PWRTC_H_ */
