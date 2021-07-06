/**
 *
 * @file DMA_InterruptVector.c
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
 * @verbatim 23 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/xHeader/DMA_InterruptVector.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Dependencies.h>

static NVIC_nSTIR NVIC_VECTOR_DMA[(uint32_t) DMA_enVECTOR_MAX] = { NVIC_enSTIR_UDMASOFT, NVIC_enSTIR_UDMAERROR};

void DMA__vEnInterruptVector(DMA_nVECTOR enVector, DMA_nPRIORITY enDmaPriority)
{
    NVIC_nSTIR enVectorNvic = NVIC_enSTIR_UDMASOFT;
    enVector = (DMA_nVECTOR) MCU__u32CheckParams( (uint32_t) enVector, (uint32_t) DMA_enVECTOR_MAX);

    enVectorNvic = NVIC_VECTOR_DMA[ (uint32_t) enVector];
    NVIC__vSetEnableIRQ(enVectorNvic, (NVIC_nPRIORITY) enDmaPriority);
}

void DMA__vDisInterruptVector(DMA_nVECTOR enVector)
{
    NVIC_nSTIR enVectorNvic = NVIC_enSTIR_UDMASOFT;
    enVector = (DMA_nVECTOR) MCU__u32CheckParams( (uint32_t) enVector, (uint32_t) DMA_enVECTOR_MAX);

    enVectorNvic = NVIC_VECTOR_DMA[ (uint32_t) enVector];
    NVIC__vClearEnableIRQ(enVectorNvic);
}
