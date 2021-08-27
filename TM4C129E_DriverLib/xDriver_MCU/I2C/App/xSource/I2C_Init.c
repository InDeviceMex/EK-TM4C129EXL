/**
 *
 * @file I2C_Init.c
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
 * @verbatim Mar 29, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 29, 2021        indevicemex    1.0         initial Version@endverbatim
 */
 #include <xDriver_MCU/I2C/App/xHeader/I2C_Init.h>

#include <xDriver_MCU/I2C/Driver/I2C_Driver.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C__vInit(void)
{
    I2C__vRegisterIRQVectorHandler( &I2C0__vIRQVectorHandler, I2C_enMODULE_0);
    I2C__vRegisterIRQVectorHandler( &I2C1__vIRQVectorHandler, I2C_enMODULE_1);
    I2C__vRegisterIRQVectorHandler( &I2C2__vIRQVectorHandler, I2C_enMODULE_2);
    I2C__vRegisterIRQVectorHandler( &I2C3__vIRQVectorHandler, I2C_enMODULE_3);
}
