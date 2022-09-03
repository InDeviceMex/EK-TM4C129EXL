/**
 *
 * @file SCB_PriorityGroup.c
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
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_PriorityGroup.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Driver/Intrinsics/Primitives/SCB_Primitives.h>

SCB_nERROR SCB__enSetPriorityGroup(SCB_nMODULE enModuleArg, SCB_nPRIGROUP enGroupArg)
{
    SCB_Register_t stRegister;
    uint32_t u32ValueReg;
    SCB_nERROR enErrorReg;

    enErrorReg = (SCB_nERROR) MCU__enCheckParams( (uint32_t) enGroupArg, (uint32_t) SCB_enPRIGROUP_MAX);
    if(SCB_enERROR_OK == enErrorReg)
    {
        u32ValueReg = (uint32_t) enGroupArg;
        u32ValueReg <<= SCB_AIRCR_R_PRIGROUP_BIT;
        u32ValueReg |= SCB_AIRCR_R_VECTKEY_WRITE;

        stRegister.u32Shift = 0UL;
        stRegister.u32Mask = SCB_AIRCR_R_VECTKEY_MASK | SCB_AIRCR_R_PRIGROUP_MASK;
        stRegister.uptrAddress = SCB_AIRCR_OFFSET;
        stRegister.u32Value = 0U;
        MCU__vDataSyncBarrier();
        enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);
        MCU__vDataSyncBarrier();
    }

    return (enErrorReg);
}

SCB_nERROR SCB__enGetPriorityGroup(SCB_nMODULE enModuleArg, SCB_nPRIGROUP* penGroupArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    if(0UL != (uintptr_t) penGroupArg)
    {
        stRegister.u32Shift = SCB_AIRCR_R_PRIGROUP_BIT;
        stRegister.u32Mask = SCB_AIRCR_PRIGROUP_MASK;
        stRegister.uptrAddress = SCB_AIRCR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);

        *penGroupArg = (SCB_nPRIGROUP) stRegister.u32Value;
    }
    else
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    return (enErrorReg);
}
