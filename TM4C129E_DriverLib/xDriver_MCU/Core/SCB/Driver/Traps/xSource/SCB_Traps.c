/**
 *
 * @file SCB_Traps.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 2 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SCB/Driver/Traps/SCB_Traps.h>

SCB_nERROR SCB__enSetAllTrapsEnableState(SCB_nMODULE enModuleArg, SCB_nSTATE enStateArg)
{
    SCB_nERROR enErrorReg;

    enErrorReg = SCB__enSetDivisionTrapEnableState(enModuleArg, enStateArg);
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enSetUnalignTrapEnableState(enModuleArg, enStateArg);
    }

    return (enErrorReg);
}

SCB_nERROR SCB__enEnableAllTraps(SCB_nMODULE enModuleArg)
{
    SCB_nERROR enErrorReg;
    enErrorReg = SCB__enSetAllTrapsEnableState(enModuleArg, SCB_enSTATE_ENA);
    return (enErrorReg);
}

SCB_nERROR SCB__enDisableAllTraps(SCB_nMODULE enModuleArg)
{
    SCB_nERROR enErrorReg;
    enErrorReg = SCB__enSetAllTrapsEnableState(enModuleArg, SCB_enSTATE_DIS);
    return (enErrorReg);
}
