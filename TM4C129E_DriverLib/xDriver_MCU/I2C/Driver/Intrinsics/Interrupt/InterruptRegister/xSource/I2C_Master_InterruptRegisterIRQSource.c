/**
 *
 * @file I2C_Master_InterruptRegisterIRQSource.c
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
 * @verbatim Mar 24, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 24, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/I2C_Master_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_Master_InterruptRoutine_Source.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Master__enRegisterIRQSourceHandler(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enIntSourceArg, I2C_pvfIRQSourceHandler_t pfIrqSourceHandler)
{
    I2C_pvfIRQSourceHandler_t* pvfIrqHandler;
    I2C_nERROR enErrorReg;

    enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) I2C_enMODULE_MAX);
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enIntSourceArg, (uint32_t) I2C_enMASTER_INT_MAX);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        pvfIrqHandler = I2C_Master__pvfGetIRQSourceHandlerPointer(enModuleArg, enIntSourceArg);
        enErrorReg = (I2C_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, pvfIrqHandler, 0UL, 1UL);
    }

    return (enErrorReg);
}
