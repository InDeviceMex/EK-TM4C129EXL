/**
 *
 * @file I2C_HighSpeed.c
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
 * @verbatim Mar 27, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 27, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/xHeader/I2C_HighSpeed.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nMASTER_HIGHSPEED_CAPABLE I2C__enIsHighSpeedCapable(I2C_nMODULE enModule)
{
    I2C_nMASTER_HIGHSPEED_CAPABLE enSupported = I2C_enMASTER_HIGHSPEED_CAPABLE_DIS;
    enSupported = (I2C_nMASTER_HIGHSPEED_CAPABLE) I2C__u32ReadRegister(enModule,
                               I2C_PP_OFFSET, I2C_PP_HS_MASK, I2C_PP_R_HS_BIT);
    return (enSupported);
}


void I2C__vSetHighSpeedCapable(I2C_nMODULE enModule,
                               I2C_nMASTER_HIGHSPEED enHighSpeedArg)
{
    I2C_nMASTER_HIGHSPEED_CAPABLE enHighSpeedCapableReg = I2C_enMASTER_HIGHSPEED_CAPABLE_DIS;

    enHighSpeedCapableReg = I2C__enIsHighSpeedCapable(enModule);
    if(I2C_enMASTER_HIGHSPEED_CAPABLE_ENA == enHighSpeedCapableReg)
    {
        I2C__vWriteRegister(enModule, I2C_PC_OFFSET, (uint32_t) enHighSpeedArg,
                            I2C_PC_HS_MASK, I2C_PC_R_HS_BIT);
    }
}

I2C_nMASTER_HIGHSPEED I2C__enGetHighSpeedCapable(I2C_nMODULE enModule)
{
    I2C_nMASTER_HIGHSPEED enHighSpeedReg = I2C_enMASTER_HIGHSPEED_DIS;
    enHighSpeedReg = (I2C_nMASTER_HIGHSPEED) I2C__u32ReadRegister(enModule, I2C_PC_OFFSET,
                                                      I2C_PC_HS_MASK, I2C_PC_R_HS_BIT);
    return (enHighSpeedReg);
}
