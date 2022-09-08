/**
 *
 * @file SCB_SoftwareInterruptTrigger.c
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
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_SoftwareInterruptTrigger.h>

#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Driver/Intrinsics/Primitives/SCB_Primitives.h>

SCB_nERROR SCB__enSetUnprivilegedSWTriggerEnableState(SCB_nMODULE enModuleArg, SCB_nSTATE enStateArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.u32Shift = SCB_CCR_R_USERSETMPEND_BIT;
    stRegister.u32Mask = SCB_CCR_USERSETMPEND_MASK;
    stRegister.uptrAddress = SCB_CCR_OFFSET;
    stRegister.u32Value = (uint32_t) enStateArg;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

SCB_nERROR SCB__enEnableUnprivilegedSWTrigger(SCB_nMODULE enModuleArg)
{
    SCB_nERROR enErrorReg;

    enErrorReg = SCB__enSetUnprivilegedSWTriggerEnableState(enModuleArg, SCB_enSTATE_ENA);

    return (enErrorReg);
}

SCB_nERROR SCB__enDisableUnprivilegedSWTrigger(SCB_nMODULE enModuleArg)
{
    SCB_nERROR enErrorReg;

    enErrorReg = SCB__enSetUnprivilegedSWTriggerEnableState(enModuleArg, SCB_enSTATE_DIS);

    return (enErrorReg);
}

SCB_nERROR SCB__enGetUnprivilegedSWTriggerEnableState(SCB_nMODULE enModuleArg, SCB_nSTATE* penStateArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    if(0UL != (uintptr_t) penStateArg)
    {
        stRegister.u32Shift = SCB_CCR_R_USERSETMPEND_BIT;
        stRegister.u32Mask = SCB_CCR_USERSETMPEND_MASK;
        stRegister.uptrAddress = SCB_CCR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);
        if(SCB_enERROR_OK == enErrorReg)
        {
            *penStateArg = (SCB_nSTATE) stRegister.u32Value;
        }
    }
    else
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    return (enErrorReg);
}
