/**
 *
 * @file I2C_Control.c
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
 * @verbatim Mar 28, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 28, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Master/xHeader/I2C_Control.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nERROR I2C_Master__enSetControlState(I2C_nMODULE enModuleArg, I2C_nMASTER_CONTROL enControlArg)
{
    I2C_Register_t stRegister;
    stRegister.uxShift = 0UL;
    stRegister.uxMask = MCU_MASK_BASE;
    stRegister.uptrAddress = I2C_MASTER_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enControlArg;

    I2C_nERROR enErrorReg;
    enErrorReg = I2C__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}
