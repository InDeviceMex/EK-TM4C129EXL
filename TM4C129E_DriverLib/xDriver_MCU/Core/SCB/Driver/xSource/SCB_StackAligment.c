/**
 *
 * @file SCB_StackAligment.c
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
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_StackAligment.h>

#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Driver/Intrinsics/Primitives/SCB_Primitives.h>

SCB_nERROR SCB__enSetStackAligment(SCB_nMODULE enModuleArg, SCB_nALIGN enAlignArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    stRegister.u32Shift = SCB_CCR_R_STKALIGN_BIT;
    stRegister.u32Mask = SCB_CCR_STKALIGN_MASK;
    stRegister.uptrAddress = SCB_CCR_OFFSET;
    stRegister.u32Value = (uint32_t) enAlignArg;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

SCB_nERROR SCB__enGetStackAligment(SCB_nMODULE enModuleArg, SCB_nALIGN* penAlignArg)
{
    SCB_Register_t stRegister;
    SCB_nERROR enErrorReg;

    enErrorReg = SCB_enERROR_OK;
    if(0UL == (uintptr_t) penAlignArg)
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = SCB_CCR_R_STKALIGN_BIT;
        stRegister.u32Mask = SCB_CCR_STKALIGN_MASK;
        stRegister.uptrAddress = SCB_CCR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        *penAlignArg = (SCB_nALIGN) stRegister.u32Value;
    }
    return (enErrorReg);
}
