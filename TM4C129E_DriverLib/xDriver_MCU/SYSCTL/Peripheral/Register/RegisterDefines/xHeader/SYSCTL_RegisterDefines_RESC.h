/*
 * SYSCTL_RegisterDefines_RESC.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_RESC_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_RESC_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 7 RESC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RESC_R_EXT_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RESC_R_EXT_BIT    (0UL)
#define SYSCTL_RESC_R_EXT_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_R_EXT_RESET    ((UBase_t) 0x00000001UL)

#define SYSCTL_RESC_EXT_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RESC_EXT_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_EXT_RESET    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_POR_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_RESC_R_POR_BIT    (1UL)
#define SYSCTL_RESC_R_POR_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_R_POR_RESET    ((UBase_t) 0x00000002UL)

#define SYSCTL_RESC_POR_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RESC_POR_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_POR_RESET    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_BOR_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_RESC_R_BOR_BIT    (2UL)
#define SYSCTL_RESC_R_BOR_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_R_BOR_RESET    ((UBase_t) 0x00000004UL)

#define SYSCTL_RESC_BOR_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RESC_BOR_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_BOR_RESET    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_WDT0_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_RESC_R_WDT0_BIT    (3UL)
#define SYSCTL_RESC_R_WDT0_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_R_WDT0_RESET    ((UBase_t) 0x00000008UL)

#define SYSCTL_RESC_WDT0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RESC_WDT0_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_WDT0_RESET    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_SW_MASK    ((UBase_t) 0x00000010UL)
#define SYSCTL_RESC_R_SW_BIT    (4UL)
#define SYSCTL_RESC_R_SW_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_R_SW_RESET    ((UBase_t) 0x00000010UL)

#define SYSCTL_RESC_SW_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RESC_SW_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_SW_RESET    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_WDT1_MASK    ((UBase_t) 0x00000020UL)
#define SYSCTL_RESC_R_WDT1_BIT    (5UL)
#define SYSCTL_RESC_R_WDT1_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_R_WDT1_RESET    ((UBase_t) 0x00000020UL)

#define SYSCTL_RESC_WDT1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RESC_WDT1_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_WDT1_RESET    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_HSSR_MASK    ((UBase_t) 0x00001000UL)
#define SYSCTL_RESC_R_HSSR_BIT    (12UL)
#define SYSCTL_RESC_R_HSSR_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_R_HSSR_RESET    ((UBase_t) 0x00001000UL)

#define SYSCTL_RESC_HSSR_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RESC_HSSR_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_HSSR_RESET    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_MOSCFAIL_MASK    ((UBase_t) 0x00010000UL)
#define SYSCTL_RESC_R_MOSCFAIL_BIT    (16UL)
#define SYSCTL_RESC_R_MOSCFAIL_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_R_MOSCFAIL_RESET    ((UBase_t) 0x00010000UL)

#define SYSCTL_RESC_MOSCFAIL_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RESC_MOSCFAIL_NORESET    ((UBase_t) 0x00000000UL)
#define SYSCTL_RESC_MOSCFAIL_RESET    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_RESC_H_ */
