/**
 *
 * @file DMA_InterruptRoutine_Source_Software.c
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
 * @verbatim 1 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Source_Software.h>

static void DMA_CH_vIRQSourceHandler_Dummy(void);

static void (*DMA_CH__vIRQSourceHandler_Software[(uint32_t) DMA_enCH_INT_SOFT_MAX]) (void)=
{
    &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
    &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
    &DMA_CH_vIRQSourceHandler_Dummy,&DMA_CH_vIRQSourceHandler_Dummy,
    &DMA_CH_vIRQSourceHandler_Dummy
};

static void DMA_CH_vIRQSourceHandler_Dummy(void)
{

}
void (*DMA_CH__pvfGetIRQSourceHandler_Software(DMA_nCH_INT_SOFT enInterruptSourceArg))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = DMA_CH__vIRQSourceHandler_Software[(uint32_t) enInterruptSourceArg];
    return (pvfFunctionReg);
}

void (**DMA_CH__pvfGetIRQSourceHandlerPointer_Software(DMA_nCH_INT_SOFT enInterruptSourceArg))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &DMA_CH__vIRQSourceHandler_Software[(uint32_t) enInterruptSourceArg];
    return (pvfFunctionReg);
}
