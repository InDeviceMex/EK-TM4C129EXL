/**
 *
 * @file SCB_UnalignTrap.c
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
#include <xDriver_MCU/Core/SCB/Driver/Traps/xHeader/SCB_UnalignTrap.h>

#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Driver/Intrinsics/Primitives/SCB_Primitives.h>

SCB_nERROR SCB__enSetUnalignTrapEnableState(SCB_nMODULE enModuleArg, SCB_nSTATE enStateArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.uxShift = SCB_CCR_R_UNALIGN_TRP_BIT;
    stRegister.uxMask = SCB_CCR_UNALIGN_TRP_MASK;
    stRegister.uptrAddress = SCB_CCR_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

SCB_nERROR SCB__enEnableUnalignTrap(SCB_nMODULE enModuleArg)
{
    SCB_nERROR enErrorReg;
    enErrorReg = SCB__enSetUnalignTrapEnableState(enModuleArg, SCB_enSTATE_ENA);
    return (enErrorReg);
}

SCB_nERROR SCB__enDisableUnalignTrap(SCB_nMODULE enModuleArg)
{
    SCB_nERROR enErrorReg;
    enErrorReg = SCB__enSetUnalignTrapEnableState(enModuleArg, SCB_enSTATE_DIS);
    return (enErrorReg);
}

SCB_nERROR SCB__enGetUnalignTrapEnableState(SCB_nMODULE enModuleArg, SCB_nSTATE* penStateArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    enErrorReg = SCB_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SCB_CCR_R_UNALIGN_TRP_BIT;
        stRegister.uxMask = SCB_CCR_UNALIGN_TRP_MASK;
        stRegister.uptrAddress = SCB_CCR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        *penStateArg = (SCB_nSTATE) stRegister.uxValue;
    }
    return (enErrorReg);
}
