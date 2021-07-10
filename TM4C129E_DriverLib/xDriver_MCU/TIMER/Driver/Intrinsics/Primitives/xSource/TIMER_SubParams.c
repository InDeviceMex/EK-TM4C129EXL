/**
 *
 * @file TIMER_SubParams.c
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
 * @verbatim 31 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 31 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/xHeader/TIMER_SubParams.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void TIMER__vGetSubParams(TIMER_nMODULE enModule, uint32_t *pu32ModuleSize, uint32_t* pu32SubModule, uint32_t* pu32ModuleNumber)
{
    uint32_t u32ModuleNumber = 0UL;
    uint32_t u32ModuleSize = 0UL;
    uint32_t u32SubModule = 0UL;

    if(0UL != (uint32_t) pu32ModuleSize)
    {
        u32ModuleSize = (uint32_t) enModule;
        u32ModuleSize >>= 16UL;
        u32ModuleSize &= 0x1UL;
        *pu32ModuleSize = MCU__u32CheckParams(u32ModuleSize, (uint32_t) TIMER_enSIZE_MAX);
    }
    if(0UL != (uint32_t) pu32SubModule)
    {
        u32SubModule = (uint32_t) enModule;
        u32SubModule >>= 8UL;
        u32SubModule &= 0x3UL;
        *pu32SubModule = MCU__u32CheckParams(u32SubModule, (uint32_t) TIMER_enSUBMODULE_MAX);
    }

    if(0UL != (uint32_t) pu32ModuleNumber)
    {
        u32ModuleNumber = (uint32_t) enModule;
        u32ModuleNumber >>= 0UL;
        u32ModuleNumber &= 0x7UL;
        *pu32ModuleNumber = MCU__u32CheckParams(u32ModuleNumber, (uint32_t) TIMER_enMODULE_NUM_MAX);
    }
}


