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


GPIO_pvfIRQVectorHandler_t GPIO_pvIRQVectorHandler[(UBase_t) GPIO_enPORT_MAX] =
{
    &GPIOA__vIRQVectorHandler, &GPIOB__vIRQVectorHandler, &GPIOC__vIRQVectorHandler, &GPIOD__vIRQVectorHandler, &GPIOE__vIRQVectorHandler,
    &GPIOF__vIRQVectorHandler, &GPIOG__vIRQVectorHandler, &GPIOH__vIRQVectorHandler, &GPIOJ__vIRQVectorHandler, &GPIOK__vIRQVectorHandler,
    &GPIOL__vIRQVectorHandler, &GPIOM__vIRQVectorHandler, &GPION__vIRQVectorHandler, &GPIOP__vIRQVectorHandler, &GPIOQ__vIRQVectorHandler
};


GPIO_pvfIRQVectorHandler_t GPIO_PQ_pvIRQVectorHandler[(UBase_t) GPIO_enPORT_MAX - (UBase_t) GPIO_enPORT_P] [(UBase_t) GPIO_enPIN_MAX] =
{
    {
        &GPIOP__vIRQVectorHandler , &GPIOP1__vIRQVectorHandler, &GPIOP2__vIRQVectorHandler, &GPIOP3__vIRQVectorHandler,
        &GPIOP4__vIRQVectorHandler, &GPIOP5__vIRQVectorHandler, &GPIOP6__vIRQVectorHandler, &GPIOP7__vIRQVectorHandler
    },
    {
        &GPIOQ__vIRQVectorHandler , &GPIOQ1__vIRQVectorHandler, &GPIOQ2__vIRQVectorHandler, &GPIOQ3__vIRQVectorHandler,
        &GPIOQ4__vIRQVectorHandler, &GPIOQ5__vIRQVectorHandler, &GPIOQ6__vIRQVectorHandler, &GPIOQ7__vIRQVectorHandler
    },
};

GPIO_pvfIRQVectorHandler_t GPIO__pvfGetIRQVectorHandler(GPIO_nPORT enPortArg)
{
    GPIO_pvfIRQVectorHandler_t pvfVectorReg;
    pvfVectorReg = GPIO_pvIRQVectorHandler[(UBase_t) enPortArg];
    return (pvfVectorReg);
}

GPIO_pvfIRQVectorHandler_t* GPIO__pvfGetIRQVectorHandlerPointer(GPIO_nPORT enPortArg)
{
    GPIO_pvfIRQVectorHandler_t* pvfVectorReg;
    pvfVectorReg = &GPIO_pvIRQVectorHandler[(UBase_t) enPortArg];
    return (pvfVectorReg);
}


GPIO_pvfIRQVectorHandler_t GPIO_PQ__pvfGetIRQVectorHandler(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_pvfIRQVectorHandler_t pvfVectorReg;
    pvfVectorReg = GPIO_PQ_pvIRQVectorHandler[(UBase_t) enPortArg][(UBase_t) enPinArg];
    return (pvfVectorReg);
}

GPIO_pvfIRQVectorHandler_t* GPIO_PQ__pvfGetIRQVectorHandlerPointer(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_pvfIRQVectorHandler_t* pvfVectorReg;
    pvfVectorReg = &GPIO_PQ_pvIRQVectorHandler[(UBase_t) enPortArg][(UBase_t) enPinArg];
    return (pvfVectorReg);
}
