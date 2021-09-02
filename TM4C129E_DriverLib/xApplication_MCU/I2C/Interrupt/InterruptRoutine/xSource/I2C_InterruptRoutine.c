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

void (*I2C__pvIRQVectorHandler[(uint32_t) I2C_enMODULE_MAX]) (void)=
{
    &I2C0__vIRQVectorHandler,&I2C1__vIRQVectorHandler,
    &I2C2__vIRQVectorHandler,&I2C3__vIRQVectorHandler,
    &I2C4__vIRQVectorHandler,&I2C5__vIRQVectorHandler,
    &I2C6__vIRQVectorHandler,&I2C7__vIRQVectorHandler,
    &I2C8__vIRQVectorHandler,&I2C9__vIRQVectorHandler
};

void (*I2C__pvfGetIRQVectorHandler(I2C_nMODULE enI2CModule))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = I2C__pvIRQVectorHandler[(uint32_t) enI2CModule];
    return (pvfFunctionReg);
}

void (**I2C__pvfGetIRQVectorHandlerPointer(I2C_nMODULE enI2CModule))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &I2C__pvIRQVectorHandler[(uint32_t) enI2CModule];
    return (pvfFunctionReg);
}
