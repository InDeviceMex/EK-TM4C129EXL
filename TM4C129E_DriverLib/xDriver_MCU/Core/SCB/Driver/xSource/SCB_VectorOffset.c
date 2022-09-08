/**
 *
 * @file SCB_VectorOffset.c
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
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_VectorOffset.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Driver/Intrinsics/Primitives/SCB_Primitives.h>

SCB_nERROR SCB__enSetVectorOffset(SCB_nMODULE enModuleArg, uint32_t u32OffsetArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;
    MCU_nSTATE enInterruptState;

    stRegister.u32Shift = 0UL;
    stRegister.u32Mask = SCB_VTOR_R_TBLOFF_MASK;
    stRegister.uptrAddress = SCB_VTOR_OFFSET;
    stRegister.u32Value = u32OffsetArg;
    enInterruptState = MCU__enDisGlobalInterrupt();
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);
    MCU__vDataSyncBarrier();
    MCU__vSetGlobalInterrupt(enInterruptState);

    return (enErrorReg);
}

SCB_nERROR SCB__enGetVectorOffset(SCB_nMODULE enModuleArg, uint32_t* pu32OffsetArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    if(0UL != (uintptr_t) pu32OffsetArg)
    {
        stRegister.u32Shift = 0UL;
        stRegister.u32Mask = SCB_VTOR_R_TBLOFF_MASK;
        stRegister.uptrAddress = SCB_VTOR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);
        if(SCB_enERROR_OK == enErrorReg)
        {
            *pu32OffsetArg = stRegister.u32Value;
        }
    }
    else
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    return (enErrorReg);
}

