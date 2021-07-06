/**
 *
 * @file DMA_Init.c
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
 * @verbatim 19 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/App/xHeader/DMA_Init.h>

#include <xDriver_MCU/DMA/Driver/DMA_Driver.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

void DMA__vInit(void)
{
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    DMA__vSetReady(DMA_enMODULE_0);

    pfIrqVectorHandler = DMA__pvfGetIRQVectorHandler(DMA_enVECTOR_SW);
    DMA__vRegisterIRQVectorHandler( pfIrqVectorHandler, DMA_enVECTOR_SW);

    pfIrqVectorHandler = DMA__pvfGetIRQVectorHandler(DMA_enVECTOR_ERROR);
    DMA__vRegisterIRQVectorHandler( pfIrqVectorHandler, DMA_enVECTOR_ERROR);

    DMA__vSetChannelControlPointer( (uint32_t) DMA__stChannel);
    DMA__vSetModuleEnable(DMA_enENABLE_ENA);
}
