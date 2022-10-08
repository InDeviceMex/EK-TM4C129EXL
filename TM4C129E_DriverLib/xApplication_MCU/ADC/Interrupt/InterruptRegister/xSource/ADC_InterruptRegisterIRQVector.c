/**
 *
 * @file ADC_InterruptRegisterIRQVector.c
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
 * @verbatim 10 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ADC/Interrupt/InterruptRegister/xHeader/ADC_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/ADC/Interrupt/InterruptRoutine/ADC_InterruptRoutine.h>
#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Dependencies.h>

ADC_nERROR ADC__enRegisterIRQVectorHandler(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg, ADC_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_enVECISR_ADC[(UBase_t) ADC_enMODULE_MAX][(UBase_t) ADC_enSEQ_MAX]=
    {
     {SCB_enVECISR_ADC0SEQ0, SCB_enVECISR_ADC0SEQ1, SCB_enVECISR_ADC0SEQ2, SCB_enVECISR_ADC0SEQ3},
     {SCB_enVECISR_ADC1SEQ0, SCB_enVECISR_ADC1SEQ1, SCB_enVECISR_ADC1SEQ2, SCB_enVECISR_ADC1SEQ3}
    };
    SCB_nVECISR enVectorReg;
    ADC_nERROR enErrorReg;
    ADC_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) ADC_enMODULE_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerArg, (UBase_t) ADC_enSEQ_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enVectorReg = SCB_enVECISR_ADC[(UBase_t) enModuleArg][(UBase_t) enSequencerArg];
        pvfVectorHandlerReg = ADC__pvfGetIRQVectorHandlerPointer(enModuleArg, enSequencerArg);
        enErrorReg = (ADC_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}
