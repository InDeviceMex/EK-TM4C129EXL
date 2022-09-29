/**
 *
 * @file I2C_InterruptRoutine.c
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
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/I2C_InterruptRoutine.h>

static I2C_pvfIRQVectorHandler_t I2C_pvIRQVectorHandler[(uint32_t) I2C_enMODULE_MAX] =
{
 &I2C0__vIRQVectorHandler, &I2C1__vIRQVectorHandler, &I2C2__vIRQVectorHandler, &I2C3__vIRQVectorHandler, &I2C4__vIRQVectorHandler,
 &I2C5__vIRQVectorHandler, &I2C6__vIRQVectorHandler, &I2C7__vIRQVectorHandler, &I2C8__vIRQVectorHandler, &I2C9__vIRQVectorHandler
};

I2C_pvfIRQVectorHandler_t I2C__pvfGetIRQVectorHandler(I2C_nMODULE enModuleArg)
{
    I2C_pvfIRQVectorHandler_t pvfVectorReg;
    pvfVectorReg = I2C_pvIRQVectorHandler[(uint32_t) enModuleArg];
    return (pvfVectorReg);
}

I2C_pvfIRQVectorHandler_t* I2C__pvfGetIRQVectorHandlerPointer(I2C_nMODULE enModuleArg)
{
    I2C_pvfIRQVectorHandler_t* pvfVectorReg;
    pvfVectorReg = &I2C_pvIRQVectorHandler[(uint32_t) enModuleArg];
    return (pvfVectorReg);
}

