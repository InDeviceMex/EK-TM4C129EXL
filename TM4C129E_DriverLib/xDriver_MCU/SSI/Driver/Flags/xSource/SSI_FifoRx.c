/**
 *
 * @file SSI_FifoRx.c
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
#include <xDriver_MCU/SSI/Driver/Flags/xHeader/SSI_FifoRx.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

SSI_nERROR SSI__enIsReceiveFifoEmpty(SSI_nMODULE enModuleArg, SSI_nBOOLEAN* penStateArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SSI_SR_R_RNE_BIT;
        stRegister.uxMask = SSI_SR_RNE_MASK;
        stRegister.uptrAddress = SSI_SR_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        if(SSI_SR_RNE_EMPTY == stRegister.uxValue)
        {
            *penStateArg = SSI_enTRUE;
        }
        else
        {
            *penStateArg = SSI_enFALSE;
        }
    }

    return (enErrorReg);
}

SSI_nERROR SSI__enIsReceiveFifoFull(SSI_nMODULE enModuleArg, SSI_nBOOLEAN* penStateArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SSI_SR_R_RFF_BIT;
        stRegister.uxMask = SSI_SR_RFF_MASK;
        stRegister.uptrAddress = SSI_SR_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        if(SSI_SR_RFF_NOFULL == stRegister.uxValue)
        {
            *penStateArg = SSI_enFALSE;
        }
        else
        {
            *penStateArg = SSI_enTRUE;
        }
    }

    return (enErrorReg);
}
