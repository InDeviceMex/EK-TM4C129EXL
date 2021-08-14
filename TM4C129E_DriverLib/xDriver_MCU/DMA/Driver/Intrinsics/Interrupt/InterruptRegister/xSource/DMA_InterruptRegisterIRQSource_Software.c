/**
 *
 * @file DMA_InterruptRegisterIRQSource_Software.c
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
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/DMA_InterruptRegisterIRQSource_Software.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Source_Software.h>

void DMA__vRegisterIRQSourceHandler_Software(void (*pfIrqSourceHandler) (void),
                                             DMA_nCH_INT_SOFT enInterruptParam)
{
    uint32_t u32InterruptSource = 0UL;
    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32InterruptSource = MCU__u32CheckParams( (uint32_t) enInterruptParam,
                                                  (uint32_t) DMA_enCH_INT_SOFT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
           DMA_CH__pvfGetIRQSourceHandlerPointer_Software((DMA_nCH_INT_SOFT) u32InterruptSource),
           0UL,
           1UL);
    }
}
