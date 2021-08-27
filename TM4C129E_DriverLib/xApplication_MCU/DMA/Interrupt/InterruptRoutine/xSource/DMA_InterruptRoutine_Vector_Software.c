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
    volatile uint32_t u32Priority = 0UL;
    volatile uint32_t u32IntStatus = 0UL;
    volatile uint32_t u32Ready = 0U;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Ready = SYSCTL_PRDMA_R;
    if(SYSCTL_PRDMA_R_UDMA_NOREADY == (SYSCTL_PRDMA_R_UDMA_MASK & u32Ready))
    {
        pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_SW);
        pfvCallback();
    }
    else
    {
        u32IntStatus = DMA_CHIS_R;
        if(0UL == (u32IntStatus &
                (DMA_CHIS_R_CHIS3_MASK | DMA_CHIS_R_CHIS22_MASK |
                 DMA_PRIOSET_R_SET23_MASK | DMA_PRIOSET_R_SET25_MASK |
                 DMA_PRIOSET_R_SET26_MASK | DMA_PRIOSET_R_SET27_MASK |
                 DMA_PRIOSET_R_SET30_MASK) ))
        {
            pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_SW);
            pfvCallback();
        }
        else
        {
            u32Priority = DMA_PRIOSET_R;
            if(DMA_CHIS_R_CHIS3_MASK & u32IntStatus)
            {
                if(0UL != (u32Priority & DMA_PRIOSET_R_SET3_MASK))
                {
                    pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_03);
                    pfvCallback();
                    DMA_CHIS_R = DMA_CHIS_R_CHIS3_MASK;
                }
            }

            if(DMA_CHIS_R_CHIS22_MASK & u32IntStatus)
            {
                if(0UL != (u32Priority & DMA_PRIOSET_R_SET22_MASK))
                {
                    pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_22);
                    pfvCallback();
                    DMA_CHIS_R = DMA_CHIS_R_CHIS22_MASK;
                }
            }

            if(DMA_CHIS_R_CHIS23_MASK & u32IntStatus)
            {
                if(0UL != (u32Priority & DMA_PRIOSET_R_SET23_MASK))
                {
                    pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_23);
                    pfvCallback();
                    DMA_CHIS_R = DMA_CHIS_R_CHIS23_MASK;
                }
            }

            if(DMA_CHIS_R_CHIS25_MASK & u32IntStatus)
            {
                if(0UL != (u32Priority & DMA_PRIOSET_R_SET25_MASK))
                {
                    pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_25);
                    pfvCallback();
                    DMA_CHIS_R = DMA_CHIS_R_CHIS25_MASK;
                }
            }

            if(DMA_CHIS_R_CHIS26_MASK & u32IntStatus)
            {
                if(0UL != (u32Priority & DMA_PRIOSET_R_SET26_MASK))
                {
                    pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_26);
                    pfvCallback();
                    DMA_CHIS_R = DMA_CHIS_R_CHIS26_MASK;
                }
            }

            if(DMA_CHIS_R_CHIS27_MASK & u32IntStatus)
            {
                if(0UL != (u32Priority & DMA_PRIOSET_R_SET27_MASK))
                {
                    pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_27);
                    pfvCallback();
                    DMA_CHIS_R = DMA_CHIS_R_CHIS27_MASK;
                }
            }

            if(DMA_CHIS_R_CHIS30_MASK & u32IntStatus)
            {
                if(0UL != (u32Priority & DMA_PRIOSET_R_SET30_MASK))
                {
                    pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_30);
                    pfvCallback();
                    DMA_CHIS_R = DMA_CHIS_R_CHIS30_MASK;
                }
            }

            if(DMA_CHIS_R_CHIS22_MASK & u32IntStatus)
            {
                pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_22);
                pfvCallback();
                DMA_CHIS_R = DMA_CHIS_R_CHIS22_MASK;
            }

            if(DMA_CHIS_R_CHIS23_MASK & u32IntStatus)
            {
                pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_23);
                pfvCallback();
                DMA_CHIS_R = DMA_CHIS_R_CHIS23_MASK;
            }

            if(DMA_CHIS_R_CHIS25_MASK & u32IntStatus)
            {
                pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_25);
                pfvCallback();
                DMA_CHIS_R = DMA_CHIS_R_CHIS25_MASK;
            }

            if(DMA_CHIS_R_CHIS26_MASK & u32IntStatus)
            {
                pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_26);
                pfvCallback();
                DMA_CHIS_R = DMA_CHIS_R_CHIS26_MASK;
            }

            if(DMA_CHIS_R_CHIS27_MASK & u32IntStatus)
            {
                pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_27);
                pfvCallback();
                DMA_CHIS_R = DMA_CHIS_R_CHIS27_MASK;
            }

            if(DMA_CHIS_R_CHIS30_MASK & u32IntStatus)
            {
                pfvCallback = DMA_CH__pvfGetIRQSourceHandler_Software(DMA_enCH_INT_SOFT_30);
                pfvCallback();
                DMA_CHIS_R = DMA_CHIS_R_CHIS30_MASK;
            }
        }
    }
}
