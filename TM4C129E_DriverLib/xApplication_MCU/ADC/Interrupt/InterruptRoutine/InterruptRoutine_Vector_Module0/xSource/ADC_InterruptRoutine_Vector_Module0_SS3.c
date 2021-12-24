/**
 *
 * @file ADC_InterruptRoutine_Vector_Module0_SS3.c
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
#include <xApplication_MCU/ADC/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/xHeader/ADC_InterruptRoutine_Vector_Module0_SS3.h>

#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Dependencies.h>

#define ADC_DMA_COMPARATIVE ((uint32_t) ((uint32_t) ADC_enSEQ_SOURCE_DMA << (uint32_t) ADC_enSEQ_3))
#define ADC_Sample_COMPARATIVE ((uint32_t) ((uint32_t) ADC_enSEQ_SOURCE_SAMPLE << (uint32_t) ADC_enSEQ_3))
#define ADC_Comp_COMPARATIVE ((uint32_t) ((uint32_t) ADC_enSEQ_SOURCE_COMP << (uint32_t) ADC_enSEQ_3))

void ADC0_SS3__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Ready = 0U;
    volatile uint32_t u32RegCompInterrupt = 0UL;
    volatile uint32_t u32RegCompSelect = 0UL;
    volatile uint32_t u32RegCompMux = 0UL;
    volatile uint32_t u32RegCompMuxBit = 0UL;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;
    uint32_t u32Pos = 0UL;
    uint32_t u32Shift = 0x1UL;
    uint32_t u32Offset = 0x0UL;

    u32Ready = SYSCTL_PRADC_R;
    if(SYSCTL_PRADC_R_ADC0_NOREADY == (SYSCTL_PRADC_R_ADC0_MASK & u32Ready))
    {
        pvfCallback = ADC_SW__pvfGetIRQSourceHandler(ADC_enMODULE_0,
                                                     ADC_enSEQ_3);
        pvfCallback();
    }
    else
    {
        u32Reg = ADC0_ISC_R;
        if(0UL == ((ADC_DMA_COMPARATIVE|ADC_Sample_COMPARATIVE|ADC_Comp_COMPARATIVE ) &u32Reg))
        {
            pvfCallback = ADC_SW__pvfGetIRQSourceHandler(ADC_enMODULE_0,
                                                         ADC_enSEQ_3);
            pvfCallback();
        }
        else
        {
            u32RegCompInterrupt = ADC0_DC_ISC_R;
            u32RegCompSelect = ADC0_SS3_OP_R;
            if(u32Reg & ADC_DMA_COMPARATIVE)
            {
                ADC0_ISC_R = ADC_DMA_COMPARATIVE;
                pvfCallback = ADC_Sample__pvfGetIRQSourceHandler(ADC_enMODULE_0,
                                                                 ADC_enSEQ_3,
                                                                 ADC_enINT_SOURCE_DMA);
                pvfCallback();
            }
            if(u32Reg & ADC_Sample_COMPARATIVE)
            {
                ADC0_ISC_R = ADC_Sample_COMPARATIVE;
                pvfCallback = ADC_Sample__pvfGetIRQSourceHandler(ADC_enMODULE_0,
                                                                 ADC_enSEQ_3,
                                                                 ADC_enINT_SOURCE_SAMPLE);
                pvfCallback();
            }
            if(u32Reg & ADC_Comp_COMPARATIVE)
            {
                ADC0_ISC_R = ADC_Comp_COMPARATIVE;
                for(u32Pos = (uint32_t) ADC_enMUX_0; u32Pos < (uint32_t) ADC_enMUX_MAX; u32Pos++)
                {
                    if(u32RegCompSelect & u32Shift)
                    {
                        u32RegCompMux = ADC0_SS3_DC_R >> u32Offset;
                        u32RegCompMux &= 0xFUL;
                        u32RegCompMuxBit = 1UL;
                        u32RegCompMuxBit <<= u32RegCompMux;
                        if(u32RegCompInterrupt & u32RegCompMuxBit)
                        {
                            ADC0_DC_ISC_R = (uint32_t) u32RegCompMuxBit;
                            pvfCallback = ADC_Comp__pvfGetIRQSourceHandler(ADC_enMODULE_0,
                                                                   ADC_enSEQ_3,
                                                                   (ADC_nCOMPARATOR) u32RegCompMux);
                            pvfCallback();
                        }
                    }
                    u32Offset += 0x4UL;
                    u32Shift <<= 4UL;
                }
            }
        }
    }
}
