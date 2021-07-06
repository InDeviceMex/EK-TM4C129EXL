/**
 *
 * @file FPU_RegisterAddress.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define FPU_BASE    ((uint32_t) 0xE000E000UL)
#define FPU_OFFSET    ((uint32_t) 0x00000D88UL)

#define FPU_CPACR_OFFSET    ((uint32_t) 0x0D88UL)
#define FPU_FPCCR_OFFSET    ((uint32_t) 0x0F34UL)
#define FPU_FPCAR_OFFSET    ((uint32_t) 0x0F38UL)
#define FPU_FPDSCR_OFFSET    ((uint32_t) 0x0F3CUL)
#define FPU_MVFR0_OFFSET    ((uint32_t) 0x0F40UL)
#define FPU_MVFR1_OFFSET    ((uint32_t) 0x0F44UL)
#define FPU_MVFR2_OFFSET    ((uint32_t) 0x0F48UL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERADDRESS_H_ */
