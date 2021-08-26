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
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Enable = 0U;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Enable = SYSCTL_RCGCDMA_R;
    u32Enable |= SYSCTL_SCGCDMA_R;
    u32Enable |= SYSCTL_DCGCDMA_R;
    if(SYSCTL_RCGCDMA_R_UDMA_DIS == (SYSCTL_RCGCDMA_R_UDMA_MASK & u32Enable))
    {
        pfvCallback = DMA__pvfGetIRQSourceHandler_Error(DMA_enINT_ERROR_SW);
        pfvCallback();
    }
    else
    {
        u32Reg = DMA_ERRCLR_R;
        if(DMA_ERRCLR_R_ERRCLR_MASK & u32Reg)
        {
            DMA_ERRCLR_R = DMA_ERRCLR_ERRCLR_CLEAR;
            pfvCallback = DMA__pvfGetIRQSourceHandler_Error(DMA_enINT_ERROR_ERROR);
            pfvCallback();
        }
        else
        {
            pfvCallback = DMA__pvfGetIRQSourceHandler_Error(DMA_enINT_ERROR_SW);
            pfvCallback();
        }
    }
}
