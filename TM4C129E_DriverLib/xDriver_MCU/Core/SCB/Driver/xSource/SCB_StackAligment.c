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
    stRegister.uxShift = SCB_CCR_R_STKALIGN_BIT;
    stRegister.uxMask = SCB_CCR_STKALIGN_MASK;
    stRegister.uptrAddress = SCB_CCR_OFFSET;
    stRegister.uxValue = (UBase_t) enAlignArg;

    SCB_nERROR enErrorReg;
    enErrorReg = SCB__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SCB_nERROR SCB__enGetStackAligment(SCB_nMODULE enModuleArg, SCB_nALIGN* penAlignArg)
{
    SCB_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penAlignArg) ? SCB_enERROR_POINTER : SCB_enERROR_OK;
    if(SCB_enERROR_OK == enErrorReg)
    {
        SCB_Register_t stRegister;
        stRegister.uxShift = SCB_CCR_R_STKALIGN_BIT;
        stRegister.uxMask = SCB_CCR_STKALIGN_MASK;
        stRegister.uptrAddress = SCB_CCR_OFFSET;
        enErrorReg = SCB__enReadRegister(enModuleArg, &stRegister);
        if(SCB_enERROR_OK == enErrorReg)
        {
            *penAlignArg = (SCB_nALIGN) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
