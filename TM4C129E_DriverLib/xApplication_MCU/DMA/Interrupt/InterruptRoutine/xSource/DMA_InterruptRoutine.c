/**
 *
 * @file DMA_InterruptRoutine.c
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
 * @verbatim 17 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/DMA/Interrupt/InterruptRoutine/DMA_InterruptRoutine.h>
#include <xApplication_MCU/DMA/Intrinsics/xHeader/DMA_Defines.h>

void (*DMA__pvIRQVectorHandler[(uint32_t) DMA_enVECTOR_MAX]) (void)=
{
  &DMA_SW__vIRQVectorHandler,
  &DMA_ERROR__vIRQVectorHandler
};

void (*DMA__pvfGetIRQVectorHandler(DMA_nVECTOR enDmaVector))(void)
{

    return (DMA__pvIRQVectorHandler[(uint32_t) enDmaVector]);
}

void (**DMA__pvfGetIRQVectorHandlerPointer(DMA_nVECTOR enDmaVector))(void)
{
    return ((void(**)(void)) &DMA__pvIRQVectorHandler[(uint32_t) enDmaVector]);
}
