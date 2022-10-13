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

SCB_nERROR SCB__enSetVectorOffset(SCB_nMODULE enModuleArg, UBase_t uxOffsetArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;
    MCU_nSTATE enInterruptState;

    stRegister.uxShift = 0UL;
    stRegister.uxMask = SCB_VTOR_R_TBLOFF_MASK;
    stRegister.uptrAddress = SCB_VTOR_OFFSET;
    stRegister.uxValue = uxOffsetArg;
    enInterruptState = MCU__enDisableGlobalInterrupt();
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);
    MCU__vDataSyncBarrier();
    MCU__vSetGlobalInterrupt(enInterruptState);

    return (enErrorReg);
}

SCB_nERROR SCB__enGetVectorOffset(SCB_nMODULE enModuleArg, UBase_t* puxOffsetArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    enErrorReg = SCB_enERROR_OK;
    if(0UL == (uintptr_t) puxOffsetArg)
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0UL;
        stRegister.uxMask = SCB_VTOR_R_TBLOFF_MASK;
        stRegister.uptrAddress = SCB_VTOR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        *puxOffsetArg = stRegister.uxValue;
    }
    return (enErrorReg);
}

