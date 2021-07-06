/**
 *
 * @file SCB_RegisterAddress.h
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
 * Date    Author    Version    Description
 * 22 jun. 2020    vyldram    1.0    initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_REGISTER_SCB_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_REGISTER_SCB_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define SCB_BASE    ((uint32_t) 0xE000E000UL)

#define SCB_ICTLR_OFFSET    ((uint32_t) 0x0004UL)
#define SCB_ACTLR_OFFSET    ((uint32_t) 0x0008UL)
#define SCB_CPUID_OFFSET    ((uint32_t) 0x0D00UL)
#define SCB_ICSR_OFFSET    ((uint32_t) 0x0D04UL)
#define SCB_VTOR_OFFSET    ((uint32_t) 0x0D08UL)
#define SCB_AIRCR_OFFSET    ((uint32_t) 0x0D0CUL)
#define SCB_SCR_OFFSET    ((uint32_t) 0x0D10UL)
#define SCB_CCR_OFFSET    ((uint32_t) 0x0D14UL)
#define SCB_SHPR1_OFFSET    ((uint32_t) 0x0D18UL)
#define SCB_SHPR2_OFFSET    ((uint32_t) 0x0D1CUL)
#define SCB_SHPR3_OFFSET    ((uint32_t) 0x0D20UL)
#define SCB_SHCSR_OFFSET    ((uint32_t) 0x0D24UL)
#define SCB_CFSR_OFFSET    ((uint32_t) 0x0D28UL)
#define SCB_MCFSR_OFFSET    ((uint32_t) 0x0D28UL)
#define SCB_BCFSR_OFFSET    ((uint32_t) 0x0D29UL)
#define SCB_UCFSR_OFFSET    ((uint32_t) 0x0D2AUL)
#define SCB_HFSR_OFFSET    ((uint32_t) 0x0D2CUL)
#define SCB_DFSR_OFFSET    ((uint32_t) 0x0D30UL)
#define SCB_MMFAR_OFFSET    ((uint32_t) 0x0D34UL)
#define SCB_BFAR_OFFSET    ((uint32_t) 0x0D38UL)
#define SCB_AFSR_OFFSET    ((uint32_t) 0x0D3CUL)
#define SCB_PFR0_OFFSET    ((uint32_t) 0x0D40UL)
#define SCB_PFR1_OFFSET    ((uint32_t) 0x0D44UL)
#define SCB_DFR0_OFFSET    ((uint32_t) 0x0D48UL)
#define SCB_AFR0_OFFSET    ((uint32_t) 0x0D4CUL)
#define SCB_MMFR0_OFFSET    ((uint32_t) 0x0D50UL)
#define SCB_MMFR1_OFFSET    ((uint32_t) 0x0D54UL)
#define SCB_MMFR2_OFFSET    ((uint32_t) 0x0D58UL)
#define SCB_MMFR3_OFFSET    ((uint32_t) 0x0D5CUL)
#define SCB_ISAR0_OFFSET    ((uint32_t) 0x0D60UL)
#define SCB_ISAR1_OFFSET    ((uint32_t) 0x0D64UL)
#define SCB_ISAR2_OFFSET    ((uint32_t) 0x0D68UL)
#define SCB_ISAR3_OFFSET    ((uint32_t) 0x0D6CUL)
#define SCB_ISAR4_OFFSET    ((uint32_t) 0x0D70UL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_REGISTER_SCB_REGISTERADDRESS_H_ */
