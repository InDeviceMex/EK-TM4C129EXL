/**
 *
 * @file ADC_InterruptRoutine_Vector_Module1_SS1.c
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
 * @verbatim 20 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ADC/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module1/xHeader/ADC_InterruptRoutine_Vector_Module1_SS1.h>

#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Dependencies.h>

#define ADC_DMA_COMPARATIVE ((uint32_t) ((uint32_t) ADC_enSEQ_SOURCE_DMA << (uint32_t) ADC_enSEQ_1))
#define ADC_Sample_COMPARATIVE ((uint32_t) ((uint32_t) ADC_enSEQ_SOURCE_SAMPLE << (uint32_t) ADC_enSEQ_1))
#define ADC_Comp_COMPARATIVE ((uint32_t) ((uint32_t) ADC_enSEQ_SOURCE_COMP << (uint32_t) ADC_enSEQ_1))

void ADC1_SS1__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Ready = 0U;
    volatile uint32_t u32RegCompInterrupt = 0UL;
    volatile uint32_t u32RegCompSelect = 0UL;
    volatile uint32_t u32RegCompMux = 0UL;
    volatile uint32_t u32RegCompMuxBit = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;
    uint32_t u32Pos = 0UL;
    uint32_t u32Shift = 0x1UL;
    uint32_t u32Offset = 0x0UL;

    u32Ready = SYSCTL_PRADC_R;
    if(SYSCTL_PRADC_R_ADC1_NOREADY == (SYSCTL_PRADC_R_ADC1_MASK & u32Ready))
    {
        pfvCallback = ADC_SW__pvfGetIRQSourceHandler(ADC_enMODULE_1,
                                                     ADC_enSEQ_1);
        pfvCallback();
    }
    else
    {
        u32Reg = ADC1_ISC_R;
        if(0UL == ((ADC_DMA_COMPARATIVE|ADC_Sample_COMPARATIVE|ADC_Comp_COMPARATIVE ) &u32Reg))
        {
            pfvCallback = ADC_SW__pvfGetIRQSourceHandler(ADC_enMODULE_1,
                                                         ADC_enSEQ_1);
            pfvCallback();
        }
        else
        {
            u32RegCompInterrupt = ADC1_DCISC_R;
            u32RegCompSelect = ADC1_SSOP1_R;
            if(u32Reg & ADC_DMA_COMPARATIVE)
            {
                ADC1_ISC_R = ADC_DMA_COMPARATIVE;
                pfvCallback = ADC_Sample__pvfGetIRQSourceHandler(ADC_enMODULE_1,
                                                                 ADC_enSEQ_1,
                                                                 ADC_enINT_SOURCE_DMA);
                pfvCallback();
            }
            if(u32Reg & ADC_Sample_COMPARATIVE)
            {
                ADC1_ISC_R = ADC_Sample_COMPARATIVE;
                pfvCallback = ADC_Sample__pvfGetIRQSourceHandler(ADC_enMODULE_1,
                                                                 ADC_enSEQ_1,
                                                                 ADC_enINT_SOURCE_SAMPLE);
                pfvCallback();
            }
            if(u32Reg & ADC_Comp_COMPARATIVE)
            {
                ADC1_ISC_R = ADC_Comp_COMPARATIVE;
                for(u32Pos = (uint32_t) ADC_enMUX_0; u32Pos < (uint32_t) ADC_enMUX_MAX; u32Pos++)
                {
                    if(u32RegCompSelect & u32Shift)
                    {
                        u32RegCompMux = ADC1_SSDC1_R >> u32Offset;
                        u32RegCompMux &= 0xFUL;
                        u32RegCompMuxBit = 1UL;
                        u32RegCompMuxBit <<= u32RegCompMux;
                        if(u32RegCompInterrupt & u32RegCompMuxBit)
                        {
                            ADC1_DCISC_R = (uint32_t) u32RegCompMuxBit;
                            pfvCallback = ADC_Comp__pvfGetIRQSourceHandler(ADC_enMODULE_1,
                                                                       ADC_enSEQ_1,
                                                                       (ADC_nCOMPARATOR) u32RegCompMux);
                            pfvCallback();
                        }
                    }
                    u32Offset += 0x4UL;
                    u32Shift <<= 4UL;
                }
            }
        }
    }
}
