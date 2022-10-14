/**
 *
 * @file DMA_InterruptRoutine_Vector_Software.c
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
 * @verbatim 21 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/DMA/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Vector_Software.h>
#include <xApplication_MCU/DMA/Intrinsics/xHeader/DMA_Dependencies.h>

void DMA_SW__vIRQVectorHandler(void)
{
    UBase_t uxPriority;
    UBase_t uxIntStatus;
    UBase_t uxSwMask;
    UBase_t uxReady;
    UBase_t uxShiftReg;
    UBase_t uxCount;
    DMA_pvfIRQSourceHandler_t pvfCallback;

    uxReady = SYSCTL_PRDMA_R;
    if(SYSCTL_PRDMA_R_UDMA_NOREADY == (SYSCTL_PRDMA_R_UDMA_MASK & uxReady))
    {
        pvfCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enMODULE_0, DMA_enCH_SW);
        pvfCallback(DMA_BASE, (void*) DMA_enCH_SW);
    }
    else
    {
        uxSwMask = DMA_CH_REQMASKSET_R;
        uxIntStatus = DMA_CH_IS_R;
        uxIntStatus &= uxSwMask;
        if(0UL == uxIntStatus)
        {
            pvfCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enMODULE_0, DMA_enCH_SW);
            pvfCallback(DMA_BASE, (void*) DMA_enCH_SW);
        }
        else
        {
            uxPriority = DMA_CH_PRIOSET_R;
            if(0UL != uxPriority)
            {
                uxCount = 0U;
                uxShiftReg = 1UL;
                uxPriority &= uxIntStatus;
                while(0UL != uxPriority)
                {
                    if(0UL != (uxPriority & uxShiftReg))
                    {
                        DMA_CH_IS_R = (UBase_t) uxShiftReg;
                        uxPriority &= ~uxShiftReg;
                        uxIntStatus &= ~uxShiftReg;
                        pvfCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enMODULE_0, (DMA_nCH) uxCount);
                        pvfCallback(DMA_BASE, (void*) uxCount);
                    }
                    uxShiftReg <<= 1U;
                    uxCount++;
                }
            }

            uxCount = 0U;
            uxShiftReg = 1UL;
            while(0UL != uxIntStatus)
            {
                if(uxShiftReg & uxIntStatus)
                {
                    DMA_CH_IS_R = (UBase_t) uxShiftReg;
                    uxIntStatus &= ~uxShiftReg;
                    pvfCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enMODULE_0, (DMA_nCH) uxCount);
                    pvfCallback(DMA_BASE, (void*) uxCount);
                }
                uxShiftReg <<= 1U;
                uxCount++;
            }
        }
    }
}
