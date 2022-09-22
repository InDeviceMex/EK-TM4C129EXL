/**
 *
 * @file ADC_InterruptRoutine_Vector_Module0_SS2.c
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
#include <xApplication_MCU/ADC/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/xHeader/ADC_InterruptRoutine_Vector_Module0_SS2.h>

#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Dependencies.h>

void ADC0_SS2__vIRQVectorHandler(void)
{
    uint32_t u32Reg;
    uint32_t u32Ready;
    uint32_t u32RegCompInterrupt;
    uint32_t u32RegCompSelect;
    uint32_t u32RegCompMux;
    uint32_t u32RegCompEnable;
    uint32_t u32RegCompMuxBit;
    uint32_t u32OffsetReg;
    uint32_t u32Pos;
    uint32_t u32ShiftReg;
    uint32_t u32TempReg;
    ADC_pvfIRQSourceHandler_t pvfCallback;

    u32Ready = SYSCTL_PRADC_R;
    if(SYSCTL_PRADC_R_ADC0_NOREADY == (SYSCTL_PRADC_R_ADC0_MASK & u32Ready))
    {
        pvfCallback = ADC_SW__pvfGetIRQSourceHandler(ADC_enMODULE_0, ADC_enSEQ_2);
        pvfCallback(ADC0_BASE, (void*) ADC_enSEQ_2);
    }
    else
    {
        u32Reg = ADC0_ISC_R;
        if(0UL == ((ADC_ISC_R_DMAIN2_MASK | ADC_ISC_R_IN2_MASK | ADC_ISC_R_DCINSS2_MASK ) &u32Reg))
        {
            pvfCallback = ADC_SW__pvfGetIRQSourceHandler(ADC_enMODULE_0, ADC_enSEQ_2);
            pvfCallback(ADC0_BASE, (void*) ADC_enSEQ_2);
        }
        else
        {
            if(u32Reg & ADC_ISC_R_DMAIN2_MASK)
            {
                ADC0_ISC_R =  ADC_ISC_R_DMAIN2_CLEAR;
                pvfCallback = ADC_Sequencer__pvfGetIRQSourceHandler(ADC_enMODULE_0, ADC_enSEQ_2, ADC_enINT_TYPE_DMA);
                pvfCallback(ADC0_BASE, (void*) ADC_enSEQ_2);
            }
            if(u32Reg & ADC_ISC_R_IN2_MASK)
            {
                ADC0_ISC_R =  ADC_ISC_R_IN2_MASK;
                pvfCallback = ADC_Sequencer__pvfGetIRQSourceHandler(ADC_enMODULE_0, ADC_enSEQ_2, ADC_enINT_TYPE_SAMPLE);
                pvfCallback(ADC0_BASE, (void*) ADC_enSEQ_2);
            }
            if(u32Reg & ADC_ISC_R_DCINSS2_MASK)
            {
                ADC0_ISC_R = ADC_ISC_R_DCINSS2_CLEAR;
                pvfCallback = ADC_Sequencer__pvfGetIRQSourceHandler(ADC_enMODULE_0, ADC_enSEQ_2, ADC_enINT_TYPE_COMP);
                pvfCallback(ADC0_BASE, (void*) ADC_enSEQ_2);

                u32RegCompInterrupt = ADC0_DCISC_R;
                u32OffsetReg = ADC_DC_CTL_OFFSET;
                u32RegCompMux = ADC0_SS2_DC_R;
                u32RegCompSelect = ADC0_SS2_OP_R;
                u32ShiftReg = 0x1UL;
                for(u32Pos = (uint32_t) ADC_enSAMPLE_0; u32Pos < (uint32_t) ADC_enSAMPLE_4; u32Pos++)
                {
                    if(u32RegCompSelect & u32ShiftReg)
                    {
                        u32TempReg = u32RegCompMux;
                        u32TempReg &= 0xFUL;
                        u32RegCompMuxBit = 1UL;
                        u32RegCompMuxBit <<= u32TempReg;
                        if(u32RegCompInterrupt & u32RegCompMuxBit)
                        {
                            u32RegCompEnable = *((uint32_t*) u32OffsetReg);

                            if(u32RegCompEnable & ADC_DC_CTL_R_CIE_MASK)
                            {
                                ADC0_DCISC_R = (uint32_t) u32RegCompMuxBit;
                                pvfCallback = ADC_Comparator__pvfGetIRQSourceHandler(ADC_enMODULE_0, ADC_enSEQ_2, (ADC_nCOMPARATOR) u32TempReg);
                                pvfCallback(ADC0_BASE, (void*) u32TempReg);
                            }
                        }
                    }
                    u32OffsetReg += 4UL;
                    u32RegCompMux >>= 2UL;
                    u32ShiftReg <<= 4UL;
                }
            }
        }
    }
}
