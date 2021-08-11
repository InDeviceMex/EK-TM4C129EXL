/**
 *
 * @file DMA_InterruptRegisterIRQVector.c
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
#include <xApplication_MCU/DMA/Interrupt/InterruptRegister/xHeader/DMA_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/DMA/Interrupt/InterruptRoutine/DMA_InterruptRoutine.h>
#include <xApplication_MCU/DMA/Intrinsics/xHeader/DMA_Dependencies.h>

void DMA__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),DMA_nVECTOR enVector)
{
    SCB_nVECISR enSCBVector = SCB_enVECISR_UDMASOFT;
    uint32_t u32Vector = 0UL;
    const SCB_nVECISR SCB_enVECISR_DMA[(uint32_t) DMA_enVECTOR_MAX] = { SCB_enVECISR_UDMASOFT, SCB_enVECISR_UDMAERROR};

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32Vector = MCU__u32CheckParams((uint32_t) enVector, (uint32_t) DMA_enVECTOR_MAX);
        enSCBVector = SCB_enVECISR_DMA[u32Vector];
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler, DMA__pvfGetIRQVectorHandlerPointer((DMA_nVECTOR) u32Vector), enSCBVector);
    }
}



