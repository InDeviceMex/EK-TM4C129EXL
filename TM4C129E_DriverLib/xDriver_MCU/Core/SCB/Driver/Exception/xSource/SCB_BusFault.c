/**
 *
 * @file SCB_BusFault.c
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
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_BusFault.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Driver/Intrinsics/Primitives/SCB_Primitives.h>

SCB_nERROR SCB_BusFault__enSetPriority(SCB_nMODULE enModuleArg, SCB_nPRIORITY enPriorityArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.u32Shift = SCB_SHPR1_R_BUS_BIT;
    stRegister.u32Mask = SCB_SHPR1_BUS_MASK;
    stRegister.uptrAddress = SCB_SHPR1_OFFSET;
    stRegister.u32Value = (uint32_t) enPriorityArg;
    MCU__vDataSyncBarrier();
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);
    MCU__vDataSyncBarrier();

    return (enErrorReg);
}

SCB_nERROR SCB_BusFault__enGetPriority(SCB_nMODULE enModuleArg, SCB_nPRIORITY* enPriorityArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    if(0UL != (uintptr_t) enPriorityArg)
    {
        stRegister.u32Shift = SCB_SHPR1_R_BUS_BIT;
        stRegister.u32Mask = SCB_SHPR1_BUS_MASK;
        stRegister.uptrAddress = SCB_SHPR1_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);

        *enPriorityArg = (SCB_nPRIORITY) stRegister.u32Value;
    }
    else
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    return (enErrorReg);
}


SCB_nERROR SCB_BusFault__enSetPending(SCB_nMODULE enModuleArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.u32Shift = SCB_SHCSR_R_BUSFAULTPENDED_BIT;
    stRegister.u32Mask = SCB_SHCSR_BUSFAULTPENDED_MASK;
    stRegister.uptrAddress = SCB_SHCSR_OFFSET;
    stRegister.u32Value = SCB_SHCSR_BUSFAULTPENDED_PEND;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}


SCB_nERROR SCB_BusFault__enClearPending(SCB_nMODULE enModuleArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.u32Shift = SCB_SHCSR_R_BUSFAULTPENDED_BIT;
    stRegister.u32Mask = SCB_SHCSR_BUSFAULTPENDED_MASK;
    stRegister.uptrAddress = SCB_SHCSR_OFFSET;
    stRegister.u32Value = SCB_SHCSR_BUSFAULTPENDED_NOPEND;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

SCB_nERROR SCB_BusFault__enGetPending(SCB_nMODULE enModuleArg, SCB_nPENDSTATE* enStateArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    if(0UL != (uintptr_t) enStateArg)
    {
        stRegister.u32Shift = SCB_SHCSR_R_BUSFAULTPENDED_BIT;
        stRegister.u32Mask = SCB_SHCSR_BUSFAULTPENDED_MASK;
        stRegister.uptrAddress = SCB_SHCSR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);

        *enStateArg = (SCB_nPENDSTATE) stRegister.u32Value;
    }
    else
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    return (enErrorReg);
}


SCB_nERROR SCB_BusFault__enSetState(SCB_nMODULE enModuleArg, SCB_nSTATE enStateArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.u32Shift = SCB_SHCSR_R_BUSFAULTENA_BIT;
    stRegister.u32Mask = SCB_SHCSR_BUSFAULTENA_MASK;
    stRegister.uptrAddress = SCB_SHCSR_OFFSET;
    stRegister.u32Value = (uint32_t) enStateArg;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}


SCB_nERROR SCB_BusFault__enEnable(SCB_nMODULE enModuleArg)
{
    SCB_nERROR enErrorReg;
    enErrorReg = SCB_BusFault__enSetState(enModuleArg, SCB_enSTATE_ENA);
    return (enErrorReg);
}

SCB_nERROR SCB_BusFault__enDisable(SCB_nMODULE enModuleArg)
{
    SCB_nERROR enErrorReg;
    enErrorReg = SCB_BusFault__enSetState(enModuleArg, SCB_enSTATE_DIS);
    return (enErrorReg);
}


SCB_nERROR SCB_BusFault__enGetState(SCB_nMODULE enModuleArg, SCB_nSTATE* penStateArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    if(0UL != (uintptr_t) penStateArg)
    {
        stRegister.u32Shift = SCB_SHCSR_R_BUSFAULTENA_BIT;
        stRegister.u32Mask = SCB_SHCSR_BUSFAULTENA_MASK;
        stRegister.uptrAddress = SCB_SHCSR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);

        *penStateArg = (SCB_nSTATE) stRegister.u32Value;
    }
    else
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    return (enErrorReg);
}


SCB_nERROR SCB_BusFault_enGetFaultAddress(SCB_nMODULE enModuleArg, uint32_t* pu32FaultAddressArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    if(0UL != (uintptr_t) pu32FaultAddressArg)
    {
        stRegister.u32Shift = SCB_BFAR_R_ADDRESS_BIT;
        stRegister.u32Mask = SCB_BFAR_ADDRESS_MASK;
        stRegister.uptrAddress = SCB_BFAR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);

        *pu32FaultAddressArg = stRegister.u32Value;
    }
    else
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    return (enErrorReg);
}
