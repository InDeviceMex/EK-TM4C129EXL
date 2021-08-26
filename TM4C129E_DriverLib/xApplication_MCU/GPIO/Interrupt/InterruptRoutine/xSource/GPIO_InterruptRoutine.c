/**
 *
 * @file GPIO_InterruptRoutine.c
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/GPIO/Interrupt/InterruptRoutine/GPIO_InterruptRoutine.h>

void (*GPIO__pvIRQVectorHandler[(uint32_t) GPIO_enPORT_MAX])(void)=
{
    &GPIOA__vIRQVectorHandler,
    &GPIOB__vIRQVectorHandler,
    &GPIOC__vIRQVectorHandler,
    &GPIOD__vIRQVectorHandler,
    &GPIOE__vIRQVectorHandler,
    &GPIOF__vIRQVectorHandler,
    &GPIOG__vIRQVectorHandler,
    &GPIOH__vIRQVectorHandler,
    &GPIOJ__vIRQVectorHandler,
    &GPIOK__vIRQVectorHandler,
    &GPIOL__vIRQVectorHandler,
    &GPIOM__vIRQVectorHandler,
    &GPION__vIRQVectorHandler,
    &GPIOP__vIRQVectorHandler,
    &GPIOQ__vIRQVectorHandler
};


void (*GPIO_PQ__pvIRQVectorHandler[(uint32_t) GPIO_enPORT_MAX - (uint32_t) GPIO_enPORT_P]
                                   [(uint32_t) GPIO_enPIN_NUMBER_MAX])(void) =
{
    {
        &GPIOP__vIRQVectorHandler, &GPIOP1__vIRQVectorHandler,
        &GPIOP2__vIRQVectorHandler, &GPIOP3__vIRQVectorHandler,
        &GPIOP4__vIRQVectorHandler, &GPIOP5__vIRQVectorHandler,
        &GPIOP6__vIRQVectorHandler, &GPIOP7__vIRQVectorHandler
    },
    {
        &GPIOQ__vIRQVectorHandler, &GPIOQ1__vIRQVectorHandler,
        &GPIOQ2__vIRQVectorHandler, &GPIOQ3__vIRQVectorHandler,
        &GPIOQ4__vIRQVectorHandler, &GPIOQ5__vIRQVectorHandler,
        &GPIOQ6__vIRQVectorHandler, &GPIOQ7__vIRQVectorHandler
    },
};


void (*GPIO__pvfGetIRQVectorHandler(GPIO_nPORT enGPIOPort))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = GPIO__pvIRQVectorHandler[(uint32_t) enGPIOPort];
    return (pvfFunctionReg);
}

void (**GPIO__pvfGetIRQVectorHandlerPointer(GPIO_nPORT enGPIOPort))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &GPIO__pvIRQVectorHandler[(uint32_t) enGPIOPort];
    return (pvfFunctionReg);
}

void (*GPIO_PQ__pvfGetIRQVectorHandler(GPIO_nPORT enGPIOPort,
                                       GPIO_nPIN_NUMBER enPinNumber))(void)
{
    uint32_t u32PortReg = (uint32_t) GPIO_enPORT_Q;
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    if((GPIO_enPORT_P == enGPIOPort) || (GPIO_enPORT_Q == enGPIOPort))
    {
        u32PortReg -= (uint32_t) enGPIOPort;
        pvfFunctionReg = GPIO_PQ__pvIRQVectorHandler[u32PortReg]
                                                    [(uint32_t) enPinNumber];
    }
    return (pvfFunctionReg);
}

void (**GPIO_PQ__pvfGetIRQVectorHandlerPointer(GPIO_nPORT enGPIOPort,
                                            GPIO_nPIN_NUMBER enPinNumber))(void)
{
    uint32_t u32PortReg = (uint32_t) GPIO_enPORT_Q;
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    if((GPIO_enPORT_P == enGPIOPort) || (GPIO_enPORT_Q == enGPIOPort))
    {
        u32PortReg -= (uint32_t) enGPIOPort;
        pvfFunctionReg = (void(**)(void)) &GPIO_PQ__pvIRQVectorHandler[u32PortReg]
                                                                      [(uint32_t) enPinNumber];
    }
    return (pvfFunctionReg);
}
