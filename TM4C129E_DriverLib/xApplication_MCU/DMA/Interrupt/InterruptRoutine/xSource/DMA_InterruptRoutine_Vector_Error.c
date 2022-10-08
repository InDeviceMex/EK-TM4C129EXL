/**
 *
 * @file DMA_InterruptRoutine_Vector_Error.c
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
#include <xApplication_MCU/DMA/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Vector_Error.h>
#include <xApplication_MCU/DMA/Intrinsics/xHeader/DMA_Dependencies.h>

void DMA_ERROR__vIRQVectorHandler(void)
{
    UBase_t uxReg;
    UBase_t uxReady;
    DMA_pvfIRQSourceHandler_t pvfCallback;

    uxReady = SYSCTL_PRDMA_R;
    if(SYSCTL_PRDMA_R_UDMA_NOREADY == (SYSCTL_PRDMA_R_UDMA_MASK & uxReady))
    {
        pvfCallback = DMA__pvfGetIRQSourceHandler_Error(DMA_enMODULE_0, DMA_enINT_ERROR_SW);
        pvfCallback(DMA_BASE, (void*) DMA_enINT_ERROR_SW);
    }
    else
    {
        uxReg = DMA_ERRCLR_R;
        if(DMA_ERRCLR_R_ERRCLR_MASK & uxReg)
        {
            DMA_ERRCLR_R = DMA_ERRCLR_ERRCLR_CLEAR;
            pvfCallback = DMA__pvfGetIRQSourceHandler_Error(DMA_enMODULE_0, DMA_enINT_ERROR_ERROR);
            pvfCallback(DMA_BASE, (void*) DMA_enINT_ERROR_ERROR);
        }
        else
        {
            pvfCallback = DMA__pvfGetIRQSourceHandler_Error(DMA_enMODULE_0, DMA_enINT_ERROR_SW);
            pvfCallback(DMA_BASE, (void*) DMA_enINT_ERROR_SW);
        }
    }
}
