/**
 *
 * @file SYSCTL_RegisterDefines_BOR.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_BOR_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_BOR_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************ 3 PTBOCTL *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PTBOCTL_R_BOR1_MASK    ((uint32_t) 0x00000002UL)
#define SYSCTL_PTBOCTL_R_BOR1_BIT    (1UL)
#define SYSCTL_PTBOCTL_R_BOR1_INT    ((uint32_t) 0x00000000UL)
#define SYSCTL_PTBOCTL_R_BOR1_RESET ((uint32_t) 0x00000002UL)

#define SYSCTL_PTBOCTL_BOR1_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_PTBOCTL_BOR1_INT    ((uint32_t) 0x00000000UL)
#define SYSCTL_PTBOCTL_BOR1_RESET    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_PTBOCTL_R_BOR0_MASK    ((uint32_t) 0x00000004UL)
#define SYSCTL_PTBOCTL_R_BOR0_BIT    (2UL)
#define SYSCTL_PTBOCTL_R_BOR0_INT    ((uint32_t) 0x00000000UL)
#define SYSCTL_PTBOCTL_R_BOR0_RESET ((uint32_t) 0x00000004UL)

#define SYSCTL_PTBOCTL_BOR0_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_PTBOCTL_BOR0_INT    ((uint32_t) 0x00000000UL)
#define SYSCTL_PTBOCTL_BOR0_RESET    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_BOR_H_ */
