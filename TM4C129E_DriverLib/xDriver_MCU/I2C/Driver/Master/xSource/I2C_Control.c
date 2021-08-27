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

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C_Master__vSetControl(I2C_nMODULE enModule, I2C_nMASTER_CONTROL enControlArg)
{
    I2C__vWriteRegister(enModule, I2C_MCS_OFFSET, (uint32_t) enControlArg,
                        I2C_MCS_R_HS_MASK | I2C_MCS_R_ACK_MASK | I2C_MCS_R_STOP_MASK | I2C_MCS_R_START_MASK | I2C_MCS_R_RUN_MASK,
                        0UL);
}
