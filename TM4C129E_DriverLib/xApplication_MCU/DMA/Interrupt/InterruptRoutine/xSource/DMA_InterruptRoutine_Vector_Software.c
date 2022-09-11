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
    uint32_t u32Priority;
    uint32_t u32IntStatus;
    uint32_t u32SwMask;
    uint32_t u32Enable;
    uint32_t u32Ready;
    uint32_t u32ShiftReg;
    uint32_t u32Count;
    DMA_pvfIRQSourceHandler_t pvfCallback;

    u32Ready = SYSCTL_PRDMA_R;
    if(SYSCTL_PRDMA_R_UDMA_NOREADY == (SYSCTL_PRDMA_R_UDMA_MASK & u32Ready))
    {
        pvfCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enMODULE_0, DMA_enCH_SW);
        pvfCallback(DMA_BASE, (void*) DMA_enCH_SW);
    }
    else
    {
        u32Enable = DMA_CH_ENASET_R;
        u32SwMask = DMA_CH_REQMASKSET_R;
        u32IntStatus = DMA_CH_IS_R;
        u32IntStatus &= u32SwMask;
        u32IntStatus &= u32Enable;
        if(0UL == u32IntStatus)
        {
            pvfCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enMODULE_0, DMA_enCH_SW);
            pvfCallback(DMA_BASE, (void*) DMA_enCH_SW);
        }
        else
        {
            u32Priority = DMA_CH_PRIOSET_R;
            if(0UL != u32Priority)
            {
                u32Count = 0U;
                u32ShiftReg = 1UL;
                while((0UL != u32Priority) && (0UL != u32IntStatus))
                {
                    if(u32ShiftReg & u32IntStatus)
                    {
                        if(0UL != (u32Priority & u32ShiftReg))
                        {
                            pvfCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enMODULE_0, (DMA_nCH) u32Count);
                            pvfCallback(DMA_BASE, (void*) u32Count);
                            DMA_CH_IS_R = (uint32_t) u32ShiftReg;
                        }
                    }
                    u32ShiftReg <<= 1U;
                    u32Priority >>= 1U;
                    u32Count++;
                }
            }

            u32Count = 0U;
            u32ShiftReg = 1UL;
            while(0UL != u32IntStatus)
            {
                if(u32ShiftReg & u32IntStatus)
                {
                    pvfCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enMODULE_0, (DMA_nCH) u32Count);
                    pvfCallback(DMA_BASE, (void*) u32Count);
                    DMA_CH_IS_R = (uint32_t) u32ShiftReg;
                }
                u32ShiftReg <<= 1U;
                u32Count++;
            }
        }
    }
}
