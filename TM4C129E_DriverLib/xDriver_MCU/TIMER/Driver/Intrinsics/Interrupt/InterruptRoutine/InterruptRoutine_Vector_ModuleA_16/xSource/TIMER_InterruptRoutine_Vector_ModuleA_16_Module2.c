/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleA_16_Module2.c
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
 * @verbatim 14 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleA_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleA_16_Module2.h>

#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Dependencies.h>

#define DMA_SOURCE_BIT_1    (4UL)
#define DMA_SOURCE_MASK_1    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT_1))
#define DMA_SOURCE_BIT_2    (6UL)
#define DMA_SOURCE_MASK_2    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT_2))
#define DMA_SOURCE_BIT_3    (14UL)
#define DMA_SOURCE_MASK_3    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT_3))

void TIMER2A__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32RegDMAEn = 0UL;
    volatile uint32_t u32RegDMAOccur = 0UL;
    volatile uint32_t u32RegPeriph = 0UL;
    volatile uint32_t u32RegDMASource = 0UL;

    u32RegDMAEn = SYSCTL_RCGCDMA_R;
    u32RegDMAEn &= SYSCTL_RCGCDMA_R_UDMA_ENA;
    if(0UL != u32RegDMAEn)
    {
        u32RegDMAOccur = DMA_CHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK_1;
        if(0UL != u32RegDMAOccur)
        {
            u32RegPeriph = DMA_REQMASKSET_R;
            u32RegPeriph &= DMA_SOURCE_MASK_1;
            if(0UL == u32RegPeriph)
            {
                u32RegDMASource = DMA_CHMAP0_R;
                u32RegDMASource &= DMA_CHMAP0_R_CH4SEL_MASK;
                if(DMA_CHMAP0_R_CH4SEL_TIMER2A == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_1][DMA_SOURCE_BIT_1]();
                    DMA_CHIS_R = DMA_SOURCE_MASK_1;
                }
            }
        }
        u32RegDMAOccur = DMA_CHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK_2;
        if(0UL != u32RegDMAOccur)
        {
            u32RegPeriph = DMA_REQMASKSET_R;
            u32RegPeriph &= DMA_SOURCE_MASK_2;
            if(0UL == u32RegPeriph)
            {
                u32RegDMASource = DMA_CHMAP0_R;
                u32RegDMASource &= DMA_CHMAP0_R_CH6SEL_MASK;
                if(DMA_CHMAP0_R_CH6SEL_TIMER2A == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_1][DMA_SOURCE_BIT_2]();
                    DMA_CHIS_R = DMA_SOURCE_MASK_2;
                }
            }
        }
        u32RegDMAOccur = DMA_CHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK_3;
        if(0UL != u32RegDMAOccur)
        {
            u32RegPeriph = DMA_REQMASKSET_R;
            u32RegPeriph &= DMA_SOURCE_MASK_3;
            if(0UL == u32RegPeriph)
            {
                u32RegDMASource = DMA_CHMAP1_R;
                u32RegDMASource &= DMA_CHMAP1_R_CH14SEL_MASK;
                if(DMA_CHMAP1_R_CH14SEL_TIMER2A == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_1][DMA_SOURCE_BIT_3]();
                    DMA_CHIS_R = DMA_SOURCE_MASK_3;
                }
            }
        }
    }

    u32Reg = (uint32_t) GPTM2_TA_TnMIS_R;

    if((uint32_t) TIMER_enINT_TA_TIMEOUT & u32Reg)
    {
        GPTM2_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_TIMEOUT;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_32][(uint32_t) TIMER_enSUBMODULE_A][(uint32_t) TIMER_enMODULE_NUM_2][(uint32_t) TIMER_enINTERRUPT_TIMEOUT]();
    }
    if((uint32_t) TIMER_enINT_TA_CAPTURE_MATCH & u32Reg)
    {
        GPTM2_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_32][(uint32_t) TIMER_enSUBMODULE_A][(uint32_t) TIMER_enMODULE_NUM_2][(uint32_t) TIMER_enINTERRUPT_CAPTURE_MATCH]();
    }
    if((uint32_t) TIMER_enINT_TA_CAPTURE_EVENT & u32Reg)
    {
        GPTM2_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_32][(uint32_t) TIMER_enSUBMODULE_A][(uint32_t) TIMER_enMODULE_NUM_2][(uint32_t) TIMER_enINTERRUPT_CAPTURE_EVENT]();
    }
    if((uint32_t) TIMER_enINT_TA_MATCH & u32Reg)
    {
        GPTM2_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_32][(uint32_t) TIMER_enSUBMODULE_A][(uint32_t) TIMER_enMODULE_NUM_2][(uint32_t) TIMER_enINTERRUPT_MATCH]();
    }
    if((uint32_t) TIMER_enINT_TW_RTC & u32Reg)
    {
        GPTM2_TA_TnICR_R = (uint32_t) TIMER_enINT_TW_RTC;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_32][(uint32_t) TIMER_enSUBMODULE_A][(uint32_t) TIMER_enMODULE_NUM_2][(uint32_t) TIMER_enINTERRUPT_RTC]();
    }

}



