/**
 *
 * @file SSI_Length.c
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
#include <xDriver_MCU/SSI/Driver/FrameControl/xHeader/SSI_Length.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

SSI_nERROR SSI__enSetDataLength(SSI_nMODULE enModuleArg, SSI_nLENGTH enLengthArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    stRegister.uxShift = SSI_CR0_R_DSS_BIT;
    stRegister.uxMask = SSI_CR0_DSS_MASK;
    stRegister.uptrAddress = SSI_CR0_OFFSET;
    stRegister.uxValue = (UBase_t) enLengthArg;
    enErrorReg = SSI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SSI_nERROR SSI__enGetDataLength(SSI_nMODULE enModuleArg, SSI_nLENGTH* penLengthArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) penLengthArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SSI_CR0_R_DSS_BIT;
        stRegister.uxMask = SSI_CR0_DSS_MASK;
        stRegister.uptrAddress = SSI_CR0_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        *penLengthArg = (SSI_nLENGTH) stRegister.uxValue;
    }

    return (enErrorReg);
}
