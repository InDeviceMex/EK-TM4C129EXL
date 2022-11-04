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

MCU_nERROR MCU__enCheckParams_RAM(UBase_t uxModuleArg, UBase_t uxModuleMaxArg)
{
    MCU_nERROR enErrorReg;
    if(uxModuleMaxArg <= uxModuleArg)
    {
        enErrorReg = MCU_enERROR_RANGE;
    }
    else
    {
        enErrorReg = MCU_enERROR_OK;
    }
    return (enErrorReg);
}

UBase_t MCU__uxCheckParams_RAM(UBase_t uxModuleArg, UBase_t uxModuleMaxArg)
{
    if((uxModuleMaxArg <= uxModuleArg) && (0UL != uxModuleMaxArg))
    {
        uxModuleMaxArg--;
        uxModuleArg = uxModuleMaxArg;
    }
    return (uxModuleArg);
}



MCU_nERROR MCU__enCheckParams(UBase_t uxModuleArg, UBase_t uxModuleMaxArg)
{
    MCU_nERROR enErrorReg;
    if(uxModuleMaxArg <= uxModuleArg)
    {
        enErrorReg = MCU_enERROR_RANGE;
    }
    else
    {
        enErrorReg = MCU_enERROR_OK;
    }
    return (enErrorReg);
}



UBase_t MCU__uxCheckParams(UBase_t uxModuleArg, UBase_t uxModuleMaxArg)
{
    if((uxModuleMaxArg <= uxModuleArg) && (0UL != uxModuleMaxArg))
    {
        uxModuleMaxArg--;
        uxModuleArg = uxModuleMaxArg;
    }
    return (uxModuleArg);
}
