/**
 *
 * @file GPIO_InterruptRoutine_Source.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Source.h>

static void GPIO_vIRQSourceHandler_Dummy(void);

void (*GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_MAX]
                              [(uint32_t) GPIO_enPIN_NUMBER_MAX])(void) =
{
    {
        &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
        &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
        &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
        &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
    {
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
    {
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
    {
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
    {
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
    {
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
    {
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
    {
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
    {
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
    {
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
    {
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
    {
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
    {
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
    {
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
    {
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
         &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy
    },
};

void (*GPIO__vIRQSourceDMAHandler[(uint32_t) GPIO_enPORT_MAX])(void) =
{
    &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
    &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
    &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
    &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
    &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
    &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
    &GPIO_vIRQSourceHandler_Dummy, &GPIO_vIRQSourceHandler_Dummy,
    &GPIO_vIRQSourceHandler_Dummy
};

static void GPIO_vIRQSourceHandler_Dummy(void)
{
    while(1UL){ }
}

void (*GPIO__pvfGetIRQSourceHandler(GPIO_nPORT enGPIOPort,
                                    GPIO_nPIN_NUMBER enPinNumber))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = GPIO__vIRQSourceHandler[(uint32_t) enGPIOPort][(uint32_t) enPinNumber];
    return (pvfFunctionReg);
}

void (**GPIO__pvfGetIRQSourceHandlerPointer(GPIO_nPORT enGPIOPort,
                                            GPIO_nPIN_NUMBER enPinNumber))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &GPIO__vIRQSourceHandler[(uint32_t) enGPIOPort]
                                                              [(uint32_t) enPinNumber];
    return (pvfFunctionReg);
}

void (*GPIO__pvfGetIRQSourceDMAHandler(GPIO_nPORT enGPIOPort))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = GPIO__vIRQSourceDMAHandler[(uint32_t) enGPIOPort];
    return (pvfFunctionReg);
}

void (**GPIO__pvfGetIRQSourceDMAHandlerPointer(GPIO_nPORT enGPIOPort))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &GPIO__vIRQSourceDMAHandler[(uint32_t) enGPIOPort];
    return (pvfFunctionReg);
}
