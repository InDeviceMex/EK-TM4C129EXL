/**
 *
 * @file DMA_Init.c
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
 * @verbatim 10 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/DMA/xHeader/DMA_Init.h>

#include <xApplication_MCU/DMA/Interrupt/InterruptRegister/DMA_InterruptRegister.h>
#include <xApplication_MCU/DMA/Intrinsics/xHeader/DMA_Dependencies.h>

void DMA__vInit(void)
{
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    pfIrqVectorHandler = DMA__pvfGetIRQVectorHandler(DMA_enVECTOR_SW);
    DMA__vRegisterIRQVectorHandler( pfIrqVectorHandler, DMA_enVECTOR_SW);

    pfIrqVectorHandler = DMA__pvfGetIRQVectorHandler(DMA_enVECTOR_ERROR);
    DMA__vRegisterIRQVectorHandler( pfIrqVectorHandler, DMA_enVECTOR_ERROR);

    DMA__vSetChannelControlPointer( (uint32_t) DMA__stChannel);
    DMA__vSetModuleEnable(DMA_enENABLE_ENA);
}



