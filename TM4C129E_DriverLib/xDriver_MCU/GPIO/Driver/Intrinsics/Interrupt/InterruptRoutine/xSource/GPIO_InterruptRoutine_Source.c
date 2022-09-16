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
                              [(uint32_t) GPIO_enPIN_MAX])(void) =
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

void (*GPIO_DMA__vIRQSourceHandler[(uint32_t) GPIO_enPORT_MAX])(void) =
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

void (*GPIO_SW__vIRQSourceHandler[(uint32_t) GPIO_enPORT_MAX])(void) =
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

void (*GPIO_SW__vIRQSourceHandler_PQ[(uint32_t) GPIO_enPORT_MAX - (uint32_t) GPIO_enPORT_P]
                              [(uint32_t) GPIO_enPIN_MAX])(void) =
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
    }
};

static void GPIO_vIRQSourceHandler_Dummy(void)
{
    while(1UL){ }
}

void (*GPIO__pvfGetIRQSourceHandler(GPIO_nPORT enGPIOPort,
                                    GPIO_nPIN enPinNumber))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = GPIO__vIRQSourceHandler[(uint32_t) enGPIOPort][(uint32_t) enPinNumber];
    return (pvfFunctionReg);
}

void (**GPIO__pvfGetIRQSourceHandlerPointer(GPIO_nPORT enGPIOPort,
                                            GPIO_nPIN enPinNumber))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &GPIO__vIRQSourceHandler[(uint32_t) enGPIOPort]
                                                              [(uint32_t) enPinNumber];
    return (pvfFunctionReg);
}

void (*GPIO_DMA__pvfGetIRQSourceHandler(GPIO_nPORT enGPIOPort))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = GPIO_DMA__vIRQSourceHandler[(uint32_t) enGPIOPort];
    return (pvfFunctionReg);
}

void (**GPIO_DMA__pvfGetIRQSourceHandlerPointer(GPIO_nPORT enGPIOPort))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &GPIO_DMA__vIRQSourceHandler[(uint32_t) enGPIOPort];
    return (pvfFunctionReg);
}

void (*GPIO_SW__pvfGetIRQSourceHandler(GPIO_nPORT enGPIOPort))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = GPIO_SW__vIRQSourceHandler[(uint32_t) enGPIOPort];
    return (pvfFunctionReg);
}

void (**GPIO_SW__pvfGetIRQSourceHandlerPointer(GPIO_nPORT enGPIOPort))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &GPIO_SW__vIRQSourceHandler[(uint32_t) enGPIOPort];
    return (pvfFunctionReg);
}

void (*GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_nPORT enGPIOPort,
                                         GPIO_nPIN enPinNumber))(void)
{
    uint32_t u32PortReg = (uint32_t) GPIO_enPORT_Q;
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    if((GPIO_enPORT_P == enGPIOPort) || (GPIO_enPORT_Q == enGPIOPort))
    {
        u32PortReg -= (uint32_t) enGPIOPort;
        pvfFunctionReg = GPIO_SW__vIRQSourceHandler_PQ[u32PortReg]
                                                     [(uint32_t) enPinNumber];
    }
    return (pvfFunctionReg);
}

void (**GPIO_SW__pvfGetIRQSourceHandlerPointer_PQ(GPIO_nPORT enGPIOPort,
                                                 GPIO_nPIN enPinNumber))(void)
{
    uint32_t u32PortReg = (uint32_t) GPIO_enPORT_Q;
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    if((GPIO_enPORT_P == enGPIOPort) || (GPIO_enPORT_Q == enGPIOPort))
    {
        u32PortReg -= (uint32_t) enGPIOPort;
        pvfFunctionReg = (void(**)(void)) &GPIO_SW__vIRQSourceHandler_PQ[u32PortReg]
                                                                       [(uint32_t) enPinNumber];
    }
    return (pvfFunctionReg);
}
