/**
 *
 * @file MCU_CheckParams.h
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_CHECKPARAMS_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_CHECKPARAMS_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(MCU__u32CheckParams_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__u32CheckParams_RAM, ".ramcode")

MCU_nERROR MCU__enCheckParams_RAM(uint32_t u32ModuleArg, uint32_t u32ModuleMaxArg);
uint32_t MCU__u32CheckParams_RAM(uint32_t u32ModuleArg, uint32_t u32ModuleMaxArg);

#elif defined (__GNUC__ )

__attribute__((section(".ramcode")))
MCU_nERROR MCU__enCheckParams_RAM(uint32_t u32ModuleArg, uint32_t u32ModuleMaxArg);
__attribute__((section(".ramcode")))
uint32_t MCU__u32CheckParams_RAM(uint32_t u32ModuleArg, uint32_t u32ModuleMaxArg);
#endif

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-8.5")
#endif

MCU_nERROR MCU__enCheckParams(uint32_t u32ModuleArg, uint32_t u32ModuleMaxArg);
uint32_t MCU__u32CheckParams(uint32_t u32ModuleArg, uint32_t u32ModuleMaxArg);

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("8.5")
#endif
#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_CHECKPARAMS_H_ */
