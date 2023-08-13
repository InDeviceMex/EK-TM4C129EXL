/**
 *
 * @file ADC_Sample_Generic.c
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
 * @verbatim 23 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>

#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

static const UBase_t ADC_uxSampleMax[(UBase_t) ADC_enSEQ_MAX] =
{(UBase_t) ADC_enSAMPLE_MAX, (UBase_t) ADC_enSAMPLE_4,
 (UBase_t) ADC_enSAMPLE_4, (UBase_t) ADC_enSAMPLE_1};

ADC_nERROR ADC_Sample__enSetGeneric(ADC_nMODULE enModuleArg, ADC_nSEQUENCER  enSequencerArg,
                             ADC_nSAMPLE enSampleArg, ADC_Register_t* pstRegisterDataArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) pstRegisterDataArg) ? ADC_enERROR_POINTER : ADC_enERROR_OK;
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerArg, (UBase_t) ADC_enSEQ_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        UBase_t uxSampleNumMaxReg = ADC_uxSampleMax[(UBase_t) enSequencerArg];
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSampleArg, uxSampleNumMaxReg);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        UBase_t uxBitReg = (UBase_t) enSampleArg;
        uxBitReg <<= 2UL; /* each mux has 4 bits*/
        pstRegisterDataArg->uxShift += uxBitReg;

        uintptr_t uptrSequencerOffsetReg = (uintptr_t) enSequencerArg;
        uptrSequencerOffsetReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
        uptrSequencerOffsetReg <<= 2UL;
        uptrSequencerOffsetReg += ADC_SS_REGISTER_BASE_OFFSET;
        pstRegisterDataArg->uptrAddress += uptrSequencerOffsetReg;

        enErrorReg = ADC__enWriteRegister(enModuleArg, pstRegisterDataArg);
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Sample__enGetGeneric(ADC_nMODULE enModuleArg, ADC_nSEQUENCER  enSequencerArg,
                                   ADC_nSAMPLE enSampleArg, ADC_Register_t* pstRegisterDataArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) pstRegisterDataArg) ? ADC_enERROR_POINTER : ADC_enERROR_OK;

    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerArg, (UBase_t) ADC_enSEQ_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        UBase_t uxSampleNumMaxReg = ADC_uxSampleMax[(UBase_t) enSequencerArg];
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSampleArg, uxSampleNumMaxReg);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        UBase_t uxBitReg = (UBase_t) enSampleArg;
        uxBitReg <<= 2UL; /* each mux has 4 bits*/
        pstRegisterDataArg->uxShift += uxBitReg;

        uintptr_t uptrSequencerOffsetReg = (uintptr_t) enSequencerArg;
        uptrSequencerOffsetReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
        uptrSequencerOffsetReg <<= 2UL;
        uptrSequencerOffsetReg += ADC_SS_REGISTER_BASE_OFFSET;
        pstRegisterDataArg->uptrAddress += uptrSequencerOffsetReg;

        enErrorReg = ADC__enReadRegister(enModuleArg, pstRegisterDataArg);
    }
    return (enErrorReg);
}
