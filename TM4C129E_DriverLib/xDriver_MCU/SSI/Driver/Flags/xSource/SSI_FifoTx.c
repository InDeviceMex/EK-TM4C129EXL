/**
 *
 * @file SSI_FifoTx.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/Flags/xHeader/SSI_FifoTx.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

SSI_nERROR SSI__enIsTransmitFifoEmpty(SSI_nMODULE enModuleArg, SSI_nBOOLEAN* penStateArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? SSI_enERROR_POINTER : SSI_enERROR_OK;

    if(SSI_enERROR_OK == enErrorReg)
    {
        SSI_Register_t stRegister;
        stRegister.uxShift = SSI_SR_R_TFE_BIT;
        stRegister.uxMask = SSI_SR_TFE_MASK;
        stRegister.uptrAddress = SSI_SR_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
        if(SSI_enERROR_OK == enErrorReg)
        {
            SSI_nBOOLEAN enStateReg = (SSI_SR_TFE_NOEMPTY == stRegister.uxValue) ? SSI_enFALSE : SSI_enTRUE;
            *penStateArg = enStateReg;
        }
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enIsTransmitFifoFull(SSI_nMODULE enModuleArg, SSI_nBOOLEAN* penStateArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? SSI_enERROR_POINTER : SSI_enERROR_OK;
    if(SSI_enERROR_OK == enErrorReg)
    {
        SSI_Register_t stRegister;
        stRegister.uxShift = SSI_SR_R_TNF_BIT;
        stRegister.uxMask = SSI_SR_TNF_MASK;
        stRegister.uptrAddress = SSI_SR_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
        if(SSI_enERROR_OK == enErrorReg)
        {
            SSI_nBOOLEAN enStateReg = (SSI_SR_TNF_FULL == stRegister.uxValue) ? SSI_enTRUE : SSI_enFALSE;
            *penStateArg = enStateReg;
        }
    }
    return (enErrorReg);
}

