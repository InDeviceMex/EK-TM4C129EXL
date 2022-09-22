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

static DMA_pvfIRQVectorHandler_t DMA_pvIRQVectorHandler[(uint32_t) DMA_enMODULE_MAX][(uint32_t) DMA_enVECTOR_MAX]=
{
 {
  &DMA_SW__vIRQVectorHandler, &DMA_ERROR__vIRQVectorHandler,
 },
};

DMA_pvfIRQVectorHandler_t DMA__pvfGetIRQVectorHandler(DMA_nMODULE enModuleArg, DMA_nVECTOR enInterruptArg)
{
    DMA_pvfIRQVectorHandler_t pvfVectorReg;
    pvfVectorReg = DMA_pvIRQVectorHandler[(uint32_t) enModuleArg][(uint32_t) enInterruptArg];
    return (pvfVectorReg);
}

DMA_pvfIRQVectorHandler_t* DMA__pvfGetIRQVectorHandlerPointer(DMA_nMODULE enModuleArg, DMA_nVECTOR enInterruptArg)
{
    DMA_pvfIRQVectorHandler_t* pvfVectorReg;
    pvfVectorReg = &DMA_pvIRQVectorHandler[(uint32_t) enModuleArg][(uint32_t) enInterruptArg];
    return (pvfVectorReg);
}
