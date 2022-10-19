/**
 *
 * @file SSI_Format.c
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
#include <xDriver_MCU/SSI/Driver/FrameControl/xHeader/SSI_Format.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

SSI_nERROR SSI__enSetFrameFormat(SSI_nMODULE enModuleArg, SSI_nFORMAT enFormatArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    stRegister.uxShift = SSI_CR0_R_FRF_BIT;
    stRegister.uxMask = SSI_CR0_FRF_MASK;
    stRegister.uptrAddress = SSI_CR0_OFFSET;
    stRegister.uxValue = (UBase_t) enFormatArg;
    enErrorReg = SSI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}


SSI_nERROR SSI__enGetFrameFormat(SSI_nMODULE enModuleArg, SSI_nFORMAT* penFormatArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) penFormatArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SSI_CR0_R_FRF_BIT;
        stRegister.uxMask = SSI_CR0_FRF_MASK;
        stRegister.uptrAddress = SSI_CR0_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        *penFormatArg = (SSI_nFORMAT) stRegister.uxValue;
    }

    return (enErrorReg);
}
