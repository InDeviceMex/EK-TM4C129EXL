/**
 *
 * @file ADC_InterruptRoutine.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ADC/Interrupt/InterruptRoutine/ADC_InterruptRoutine.h>
#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Defines.h>

static ADC_pvfIRQVectorHandler_t ADC_pvIRQVectorHandler[(UBase_t) ADC_enMODULE_MAX][(UBase_t) ADC_enSEQ_MAX ]=
{
 {&ADC0_SS0__vIRQVectorHandler,&ADC0_SS1__vIRQVectorHandler, &ADC0_SS2__vIRQVectorHandler,&ADC0_SS3__vIRQVectorHandler},
 {&ADC1_SS0__vIRQVectorHandler,&ADC1_SS1__vIRQVectorHandler, &ADC1_SS2__vIRQVectorHandler,&ADC1_SS3__vIRQVectorHandler}
};

ADC_pvfIRQVectorHandler_t ADC__pvfGetIRQVectorHandler(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg)
{
    ADC_pvfIRQVectorHandler_t pvfVectorReg;
    pvfVectorReg = ADC_pvIRQVectorHandler[(UBase_t) enModuleArg][(UBase_t) enSequencerArg];
    return (pvfVectorReg);
}

ADC_pvfIRQVectorHandler_t* ADC__pvfGetIRQVectorHandlerPointer(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg)
{
    ADC_pvfIRQVectorHandler_t* pvfVectorReg;
    pvfVectorReg = &ADC_pvIRQVectorHandler[(UBase_t) enModuleArg][(UBase_t) enSequencerArg];
    return (pvfVectorReg);
}
