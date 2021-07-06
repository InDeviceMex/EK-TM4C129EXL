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

#include <xUtils/Standard/Standard.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(MCU__u32CheckParams_RAM, ".ramcode")

uint32_t MCU__u32CheckParams_RAM(uint32_t u32Module, uint32_t u32ModuleMax);

#elif defined (__GNUC__ )

uint32_t MCU__u32CheckParams_RAM(uint32_t u32Module, uint32_t u32ModuleMax) __attribute__((section(".ramcode")));

#endif

#if defined (__TI_ARM__ )
    #pragma CHECK_MISRA("-8.5")
#endif

inline uint32_t MCU__u32CheckParams(uint32_t u32Module, uint32_t u32ModuleMax);


inline uint32_t MCU__u32CheckParams(uint32_t u32Module, uint32_t u32ModuleMax)
{
#if !defined(Opt_Check)
    if((u32ModuleMax <= u32Module) && (0UL != u32ModuleMax))
    {
        u32ModuleMax--;
        u32Module = u32ModuleMax;
    }
#endif
    return (u32Module);
}

#if defined (__TI_ARM__ )
    #pragma RESET_MISRA("8.5")
#endif
#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_CHECKPARAMS_H_ */
