/**
 *
 * @file TIMER_CheckParams.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/xHeader/TIMER_CheckParams.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>


void TIMER__vCheckParams(uint32_t u32ModuleSize, uint32_t u32SubModule, uint32_t u32ModuleNumber, uint32_t* pu32ModuleSize, uint32_t* pu32SubModule, uint32_t* pu32ModuleNumber)
{
    if(0UL != (uint32_t) pu32ModuleSize)
    {
        *pu32ModuleSize = MCU__u32CheckParams(u32ModuleSize, (uint32_t) TIMER_enSIZE_MAX);
    }
    if(0UL != (uint32_t) pu32SubModule)
    {
        *pu32SubModule = MCU__u32CheckParams(u32SubModule, (uint32_t) TIMER_enSUBMODULE_MAX);
    }
    if(0UL != (uint32_t) pu32ModuleNumber)
    {
        *pu32ModuleNumber = MCU__u32CheckParams(u32ModuleNumber, (uint32_t) TIMER_enMODULE_NUM_MAX);
    }
}

