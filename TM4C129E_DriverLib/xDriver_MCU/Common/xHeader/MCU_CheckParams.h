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

#pragma  CODE_SECTION(MCU__uxCheckParams_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__uxCheckParams_RAM, ".ramcode")

MCU_nERROR MCU__enCheckParams_RAM(UBase_t uxModuleArg, UBase_t uxModuleMaxArg);
UBase_t MCU__uxCheckParams_RAM(UBase_t uxModuleArg, UBase_t uxModuleMaxArg);

#elif defined (__GNUC__ )

__attribute__((section(".ramcode")))
MCU_nERROR MCU__enCheckParams_RAM(UBase_t uxModuleArg, UBase_t uxModuleMaxArg);
__attribute__((section(".ramcode")))
UBase_t MCU__uxCheckParams_RAM(UBase_t uxModuleArg, UBase_t uxModuleMaxArg);
#endif

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-8.5")
#endif

MCU_nERROR MCU__enCheckParams(UBase_t uxModuleArg, UBase_t uxModuleMaxArg);
UBase_t MCU__uxCheckParams(UBase_t uxModuleArg, UBase_t uxModuleMaxArg);

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("8.5")
#endif
#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_CHECKPARAMS_H_ */
