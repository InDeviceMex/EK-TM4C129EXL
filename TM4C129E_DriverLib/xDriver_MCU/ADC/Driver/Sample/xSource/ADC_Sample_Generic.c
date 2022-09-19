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

static const uint32_t ADC_u32SampleMax[(uint32_t) ADC_enSEQ_MAX] =
{(uint32_t) ADC_enSAMPLE_MAX, (uint32_t) ADC_enSAMPLE_4,
 (uint32_t) ADC_enSAMPLE_4, (uint32_t) ADC_enSAMPLE_1};

ADC_nERROR ADC_Sample__enSetGeneric(ADC_nMODULE enModuleArg, ADC_nSEQUENCER  enSequencerArg,
                             ADC_nSAMPLE enSampleArg, ADC_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrSequencerOffsetReg;
    uint32_t u32BitReg;
    uint32_t u32SampleNumMaxReg;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32SampleNumMaxReg = ADC_u32SampleMax[(uint32_t) enSequencerArg];
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSampleArg, u32SampleNumMaxReg);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32BitReg = (uint32_t) enSampleArg;
        u32BitReg <<= 2UL; /* each mux has 4 bits*/
        pstRegisterDataArg->u32Shift += u32BitReg;

        uptrSequencerOffsetReg = (uintptr_t) enSequencerArg;
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
    uintptr_t uptrSequencerOffsetReg;
    uint32_t u32BitReg;
    uint32_t u32SampleNumMaxReg;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32SampleNumMaxReg = ADC_u32SampleMax[(uint32_t) enSequencerArg];
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSampleArg, u32SampleNumMaxReg);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32BitReg = (uint32_t) enSampleArg;
        u32BitReg <<= 2UL; /* each mux has 4 bits*/
        pstRegisterDataArg->u32Shift += u32BitReg;

        uptrSequencerOffsetReg = (uintptr_t) enSequencerArg;
        uptrSequencerOffsetReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
        uptrSequencerOffsetReg <<= 2UL;
        uptrSequencerOffsetReg += ADC_SS_REGISTER_BASE_OFFSET;
        pstRegisterDataArg->uptrAddress += uptrSequencerOffsetReg;

        enErrorReg = ADC__enReadRegister(enModuleArg, pstRegisterDataArg);
    }
    return (enErrorReg);
}
