/**
 *
 * @file SYSEXC_RegisterAddress.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define SYSEXC_BASE    ((uint32_t) 0x400F9000UL)
#define SYSEXC_BITBANDING_BASE    ((uint32_t) 0x42000000UL)
#define SYSEXC_OFFSET    ((uint32_t) 0x000F9000UL)

#define SYSEXC_RIS_OFFSET    ((uint32_t) 0x0000UL)
#define SYSEXC_IM_OFFSET    ((uint32_t) 0x0004UL)
#define SYSEXC_MIS_OFFSET    ((uint32_t) 0x0008UL)
#define SYSEXC_IC_OFFSET    ((uint32_t) 0x000CUL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERADDRESS_H_ */
