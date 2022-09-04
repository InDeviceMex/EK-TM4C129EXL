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

MCU_nERROR MCU__enCheckParams_RAM(uint32_t u32ModuleArg, uint32_t u32ModuleMaxArg)
{
    MCU_nERROR enErrorReg;
    if(u32ModuleMaxArg <= u32ModuleArg)
    {
        enErrorReg = MCU_enERROR_VALUE;
    }
    else
    {
        enErrorReg = MCU_enERROR_OK;
    }
    return (enErrorReg);
}

uint32_t MCU__u32CheckParams_RAM(uint32_t u32ModuleArg, uint32_t u32ModuleMaxArg)
{
#if !defined(Opt_Check)
    if((u32ModuleMaxArg <= u32ModuleArg) && (0UL != u32ModuleMaxArg))
    {
        u32ModuleMaxArg--;
        u32ModuleArg = u32ModuleMaxArg;
    }
#endif
    return (u32ModuleArg);
}

