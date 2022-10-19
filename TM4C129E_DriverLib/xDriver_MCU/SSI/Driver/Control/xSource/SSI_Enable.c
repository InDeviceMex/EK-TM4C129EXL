/**
 *
 * @file SSI_Enable.c
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
#include <xDriver_MCU/SSI/Driver/Control/xHeader/SSI_Enable.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

SSI_nERROR SSI__enSetState(SSI_nMODULE enModuleArg, SSI_nSTATE enStateArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    stRegister.uxShift = SSI_CR1_R_SSE_BIT;
    stRegister.uxMask = SSI_CR1_SSE_MASK;
    stRegister.uptrAddress = SSI_CR1_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = SSI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SSI_nERROR SSI__enGetState(SSI_nMODULE enModuleArg, SSI_nSTATE* penStateArg)
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
        stRegister.uxShift = SSI_CR1_R_SSE_BIT;
        stRegister.uxMask = SSI_CR1_SSE_MASK;
        stRegister.uptrAddress = SSI_CR1_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        *penStateArg = (SSI_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}
