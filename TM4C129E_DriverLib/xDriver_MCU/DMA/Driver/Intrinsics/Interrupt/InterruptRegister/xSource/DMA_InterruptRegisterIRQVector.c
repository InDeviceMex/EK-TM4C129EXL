/**
 *
 * @file DMA_InterruptRegisterIRQVector.c
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
 * @verbatim 1 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/DMA_InterruptRegisterIRQVector.h>

#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/DMA_InterruptRoutine.h>
#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Dependencies.h>

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
