/**
 *
 * @file MCU_CheckParams.c
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
#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>

MCU_nERROR MCU__enCheckParams_RAM(uint32_t u32Module, uint32_t u32ModuleMax)
{
    MCU_nERROR enErrorReg;
    if(u32ModuleMax <= u32Module)
    {
        enErrorReg = MCU_enERROR_VALUE;
    }
    else
    {
        enErrorReg = MCU_enERROR_OK;
    }
    return (enErrorReg);
}

uint32_t MCU__u32CheckParams_RAM(uint32_t u32Module, uint32_t u32ModuleMax)
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

