/**
 *
 * @file I2C_Init.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/I2C/xHeader/I2C_Init.h>

#include <xApplication_MCU/I2C/Interrupt/I2C_Interrupt.h>

void I2C__vInit(void)
{
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    pfIrqVectorHandler = I2C__pvfGetIRQVectorHandler(I2C_enMODULE_0);
    I2C__vRegisterIRQVectorHandler( pfIrqVectorHandler, I2C_enMODULE_0);
    pfIrqVectorHandler = I2C__pvfGetIRQVectorHandler(I2C_enMODULE_1);
    I2C__vRegisterIRQVectorHandler( pfIrqVectorHandler, I2C_enMODULE_1);
    pfIrqVectorHandler = I2C__pvfGetIRQVectorHandler(I2C_enMODULE_2);
    I2C__vRegisterIRQVectorHandler( pfIrqVectorHandler, I2C_enMODULE_2);
    pfIrqVectorHandler = I2C__pvfGetIRQVectorHandler(I2C_enMODULE_3);
    I2C__vRegisterIRQVectorHandler( pfIrqVectorHandler, I2C_enMODULE_3);
    pfIrqVectorHandler = I2C__pvfGetIRQVectorHandler(I2C_enMODULE_4);
    I2C__vRegisterIRQVectorHandler( pfIrqVectorHandler, I2C_enMODULE_4);
    pfIrqVectorHandler = I2C__pvfGetIRQVectorHandler(I2C_enMODULE_5);
    I2C__vRegisterIRQVectorHandler( pfIrqVectorHandler, I2C_enMODULE_5);
    pfIrqVectorHandler = I2C__pvfGetIRQVectorHandler(I2C_enMODULE_6);
    I2C__vRegisterIRQVectorHandler( pfIrqVectorHandler, I2C_enMODULE_6);
    pfIrqVectorHandler = I2C__pvfGetIRQVectorHandler(I2C_enMODULE_7);
    I2C__vRegisterIRQVectorHandler( pfIrqVectorHandler, I2C_enMODULE_7);
    pfIrqVectorHandler = I2C__pvfGetIRQVectorHandler(I2C_enMODULE_8);
    I2C__vRegisterIRQVectorHandler( pfIrqVectorHandler, I2C_enMODULE_8);
    pfIrqVectorHandler = I2C__pvfGetIRQVectorHandler(I2C_enMODULE_9);
    I2C__vRegisterIRQVectorHandler( pfIrqVectorHandler, I2C_enMODULE_9);
}


