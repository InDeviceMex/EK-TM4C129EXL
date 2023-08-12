/**
 *
 * @file SCB_UsageFault.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_UsageFault.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Driver/Intrinsics/Primitives/SCB_Primitives.h>

SCB_nERROR SCB_UsageFault__enSetPriority(SCB_nMODULE enModuleArg, SCB_nPRIORITY enPriorityArg)
{
    SCB_Register_t stRegister;
    stRegister.uxShift = SCB_SHPR1_R_USAGE_BIT;
    stRegister.uxMask = SCB_SHPR1_USAGE_MASK;
    stRegister.uptrAddress = SCB_SHPR1_OFFSET;
    stRegister.uxValue = (UBase_t) enPriorityArg;

    MCU__vDataSyncBarrier();
    SCB_nERROR enErrorReg;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);
    MCU__vDataSyncBarrier();
    return (enErrorReg);
}

SCB_nERROR SCB_UsageFault__enGetPriority(SCB_nMODULE enModuleArg, SCB_nPRIORITY* enPriorityArg)
{
    SCB_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) enPriorityArg) ? SCB_enERROR_POINTER : SCB_enERROR_OK;
    if(SCB_enERROR_OK == enErrorReg)
    {
        SCB_Register_t stRegister;
        stRegister.uxShift = SCB_SHPR1_R_USAGE_BIT;
        stRegister.uxMask = SCB_SHPR1_USAGE_MASK;
        stRegister.uptrAddress = SCB_SHPR1_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);
        if(SCB_enERROR_OK == enErrorReg)
        {
            *enPriorityArg = (SCB_nPRIORITY) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}


SCB_nERROR SCB_UsageFault__enSetPending(SCB_nMODULE enModuleArg)
{
    SCB_Register_t stRegister;
    stRegister.uxShift = SCB_SHCSR_R_USGFAULTPENDED_BIT;
    stRegister.uxMask = SCB_SHCSR_USGFAULTPENDED_MASK;
    stRegister.uptrAddress = SCB_SHCSR_OFFSET;
    stRegister.uxValue = SCB_SHCSR_USGFAULTPENDED_PEND;

    SCB_nERROR enErrorReg;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}


SCB_nERROR SCB_UsageFault__enClearPending(SCB_nMODULE enModuleArg)
{
    SCB_Register_t stRegister;
    stRegister.uxShift = SCB_SHCSR_R_USGFAULTPENDED_BIT;
    stRegister.uxMask = SCB_SHCSR_USGFAULTPENDED_MASK;
    stRegister.uptrAddress = SCB_SHCSR_OFFSET;
    stRegister.uxValue = SCB_SHCSR_USGFAULTPENDED_NOPEND;

    SCB_nERROR enErrorReg;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SCB_nERROR SCB_UsageFault__enGetPending(SCB_nMODULE enModuleArg, SCB_nPENDSTATE* enStateArg)
{
    SCB_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) enStateArg) ? SCB_enERROR_POINTER : SCB_enERROR_OK;
    if(SCB_enERROR_OK == enErrorReg)
    {
        SCB_Register_t stRegister;
        stRegister.uxShift = SCB_SHCSR_R_USGFAULTPENDED_BIT;
        stRegister.uxMask = SCB_SHCSR_USGFAULTPENDED_MASK;
        stRegister.uptrAddress = SCB_SHCSR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);
        if(SCB_enERROR_OK == enErrorReg)
        {
            *enStateArg = (SCB_nPENDSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}


SCB_nERROR SCB_UsageFault__enSetState(SCB_nMODULE enModuleArg, SCB_nSTATE enStateArg)
{
    SCB_Register_t stRegister;
    stRegister.uxShift = SCB_SHCSR_R_USGFAULTENA_BIT;
    stRegister.uxMask = SCB_SHCSR_USGFAULTENA_MASK;
    stRegister.uptrAddress = SCB_SHCSR_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;

    SCB_nERROR enErrorReg;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}


SCB_nERROR SCB_UsageFault__enEnable(SCB_nMODULE enModuleArg)
{
    SCB_nERROR enErrorReg;
    enErrorReg = SCB_UsageFault__enSetState(enModuleArg, SCB_enSTATE_ENA);
    return (enErrorReg);
}

SCB_nERROR SCB_UsageFault__enDisable(SCB_nMODULE enModuleArg)
{
    SCB_nERROR enErrorReg;
    enErrorReg = SCB_UsageFault__enSetState(enModuleArg, SCB_enSTATE_DIS);
    return (enErrorReg);
}


SCB_nERROR SCB_UsageFault__enGetState(SCB_nMODULE enModuleArg, SCB_nSTATE* penStateArg)
{
    SCB_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? SCB_enERROR_POINTER : SCB_enERROR_OK;
    if(SCB_enERROR_OK == enErrorReg)
    {
        SCB_Register_t stRegister;
        stRegister.uxShift = SCB_SHCSR_R_USGFAULTENA_BIT;
        stRegister.uxMask = SCB_SHCSR_USGFAULTENA_MASK;
        stRegister.uptrAddress = SCB_SHCSR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);
        if(SCB_enERROR_OK == enErrorReg)
        {
            *penStateArg = (SCB_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
