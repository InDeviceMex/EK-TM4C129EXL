/**
 *
 * @file SSI_MasterSlave.c
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
#include <xDriver_MCU/SSI/Driver/Control/xHeader/SSI_MasterSlave.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

SSI_nERROR SSI__enSetOperation(SSI_nMODULE enModuleArg, SSI_nOPERATION enOperationArg)
{
    SSI_Register_t stRegister;
    stRegister.uxShift = SSI_CR1_R_MS_BIT;
    stRegister.uxMask = SSI_CR1_MS_MASK;
    stRegister.uptrAddress = SSI_CR1_OFFSET;
    stRegister.uxValue = (UBase_t) enOperationArg;

    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}


SSI_nERROR SSI__enGetOperation(SSI_nMODULE enModuleArg, SSI_nOPERATION* penOperationArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penOperationArg) ? SSI_enERROR_POINTER : SSI_enERROR_OK;
    if(SSI_enERROR_OK == enErrorReg)
    {
        SSI_Register_t stRegister;
        stRegister.uxShift = SSI_CR1_R_MS_BIT;
        stRegister.uxMask = SSI_CR1_MS_MASK;
        stRegister.uptrAddress = SSI_CR1_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
        if(SSI_enERROR_OK == enErrorReg)
        {
            *penOperationArg = (SSI_nOPERATION) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

