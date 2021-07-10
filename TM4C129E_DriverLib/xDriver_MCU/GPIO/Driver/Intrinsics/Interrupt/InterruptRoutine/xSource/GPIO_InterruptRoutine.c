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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/GPIO_InterruptRoutine.h>

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

void (*GPIO__pvfGetIRQVectorHandler(GPIO_nPORT enGPIOPort))(void)
{
    return (GPIO__pvIRQVectorHandler[(uint32_t) enGPIOPort]);
}

void (**GPIO__pvfGetIRQVectorHandlerPointer(GPIO_nPORT enGPIOPort))(void)
{
    return ((void(**)(void)) &GPIO__pvIRQVectorHandler[(uint32_t) enGPIOPort]);
}
