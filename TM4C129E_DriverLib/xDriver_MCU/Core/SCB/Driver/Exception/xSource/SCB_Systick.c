/**
 *
 * @file SCB_Systick.c
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
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_Systick.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Driver/Intrinsics/Primitives/SCB_Primitives.h>

SCB_nERROR SCB_SYSTICK__enSetPriority(SCB_nMODULE enModuleArg, SCB_nPRIORITY enPriorityArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.u32Shift = SCB_SHPR3_R_SYSTICK_BIT;
    stRegister.u32Mask = SCB_SHPR3_SYSTICK_MASK;
    stRegister.uptrAddress = SCB_SHPR3_OFFSET;
    stRegister.u32Value = (uint32_t) enPriorityArg;
    MCU__vDataSyncBarrier();
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);
    MCU__vDataSyncBarrier();

    return (enErrorReg);
}

SCB_nERROR SCB_SYSTICK__enGetPriority(SCB_nMODULE enModuleArg, SCB_nPRIORITY* enPriorityArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    if(0UL != (uintptr_t) enPriorityArg)
    {
        stRegister.u32Shift = SCB_SHPR3_R_SYSTICK_BIT;
        stRegister.u32Mask = SCB_SHPR3_SYSTICK_MASK;
        stRegister.uptrAddress = SCB_SHPR3_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);

        *enPriorityArg = (SCB_nPRIORITY) stRegister.u32Value;
    }
    else
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    return (enErrorReg);
}

SCB_nERROR SCB_SYSTICK__enSetPending(SCB_nMODULE enModuleArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.u32Shift = SCB_ICSR_R_PENDSTSET_BIT;
    stRegister.u32Mask = SCB_ICSR_PENDSTSET_MASK;
    stRegister.uptrAddress = SCB_ICSR_OFFSET;
    stRegister.u32Value = SCB_ICSR_PENDSTSET_SET;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}


SCB_nERROR SCB_SYSTICK__enClearPending(SCB_nMODULE enModuleArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.u32Shift = SCB_ICSR_R_PENDSTCLR_BIT;
    stRegister.u32Mask = SCB_ICSR_PENDSTCLR_MASK;
    stRegister.uptrAddress = SCB_ICSR_OFFSET;
    stRegister.u32Value = SCB_ICSR_PENDSTCLR_REMOVE;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

SCB_nERROR SCB_SYSTICK__enGetPending(SCB_nMODULE enModuleArg, SCB_nPENDSTATE* enStateArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    if(0UL != (uintptr_t) enStateArg)
    {
        stRegister.u32Shift = SCB_ICSR_R_PENDSTSET_BIT;
        stRegister.u32Mask = SCB_ICSR_PENDSTSET_MASK;
        stRegister.uptrAddress = SCB_ICSR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);

        *enStateArg = (SCB_nPENDSTATE) stRegister.u32Value;
    }
    else
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    return (enErrorReg);
}
