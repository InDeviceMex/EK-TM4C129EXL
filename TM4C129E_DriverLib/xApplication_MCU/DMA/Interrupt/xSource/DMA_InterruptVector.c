/**
 *
 * @file DMA_InterruptVector.c
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
#include <xApplication_MCU/DMA/Interrupt/xHeader/DMA_InterruptVector.h>

#include <xApplication_MCU/DMA/Intrinsics/xHeader/DMA_Dependencies.h>

static NVIC_nVECTOR NVIC_VECTOR_DMA[(uint32_t) DMA_enVECTOR_MAX] = { NVIC_enVECTOR_UDMASOFT, NVIC_enVECTOR_UDMAERROR};

void DMA__vEnInterruptVector(DMA_nVECTOR enVector, DMA_nPRIORITY enDmaPriority)
{
    NVIC_nVECTOR enVectorNvic = NVIC_enVECTOR_UDMASOFT;
    enVector = (DMA_nVECTOR) MCU__u32CheckParams( (uint32_t) enVector, (uint32_t) DMA_enVECTOR_MAX);

    enVectorNvic = NVIC_VECTOR_DMA[ (uint32_t) enVector];
    NVIC__vSetEnableIRQ(enVectorNvic, (NVIC_nPRIORITY) enDmaPriority);
}

void DMA__vDisInterruptVector(DMA_nVECTOR enVector)
{
    NVIC_nVECTOR enVectorNvic = NVIC_enVECTOR_UDMASOFT;
    enVector = (DMA_nVECTOR) MCU__u32CheckParams( (uint32_t) enVector, (uint32_t) DMA_enVECTOR_MAX);

    enVectorNvic = NVIC_VECTOR_DMA[ (uint32_t) enVector];
    NVIC__vClearEnableIRQ(enVectorNvic);
}
