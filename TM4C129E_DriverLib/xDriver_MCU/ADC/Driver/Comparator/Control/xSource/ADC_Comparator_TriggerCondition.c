/**
 *
 * @file ADC_Comparator_TriggerCondition.c
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
 * @verbatim 5 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Comparator/Control/xHeader/ADC_Comparator_TriggerCondition.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Comparator/xHeader/ADC_CompGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC_Comparator__enSetTriggerConditionsByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                                         ADC_nCOMP_CONDITION enTriggerConditionsArg)
{
    uint32_t u32ComparatorReg;
    uint32_t u32ComparatorMaskReg;
    ADC_nERROR enErrorReg;
    ADC_nERROR enErrorMemoryReg;

    enErrorMemoryReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enComparatorMaskArg, ((uint32_t) ADC_enCOMPMASK_ALL + 1UL));
    if(ADC_enERROR_OK == enErrorMemoryReg)
    {
        u32ComparatorReg = 0U;
        u32ComparatorMaskReg = (uint32_t) enComparatorMaskArg;
        while(0U != u32ComparatorMaskReg)
        {
            if(0UL != (ADC_enCOMPMASK_0 & u32ComparatorMaskReg))
            {
                enErrorReg = ADC_Comparator__enSetTriggerConditionsByNumber(enModuleArg, (ADC_nCOMPARATOR) u32ComparatorReg, enTriggerConditionsArg);
            }

            if(ADC_enERROR_OK != enErrorReg)
            {
                break;
            }
            u32ComparatorReg++;
            u32ComparatorMaskReg >>= 1U;
        }
    }

    return (enErrorMemoryReg);
}

ADC_nERROR ADC_Comparator__enSetTriggerConditionsByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                           ADC_nCOMP_CONDITION enTriggerConditionsArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    stRegister.u32Shift = ADC_DC_CTL_R_CTC_BIT;
    stRegister.u32Mask = ADC_DC_CTL_CTC_MASK;
    stRegister.uptrAddress = ADC_DC_CTL_OFFSET;
    stRegister.u32Value = (uint32_t) enTriggerConditionsArg;
    enErrorReg = ADC_Comparator__enSetGeneric(enModuleArg, enComparatorArg, &stRegister);

    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enGetTriggerConditionsByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                           ADC_nCOMP_CONDITION* penTriggerConditionsArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) penTriggerConditionsArg)
    {
        stRegister.u32Shift = ADC_DC_CTL_R_CTC_BIT;
        stRegister.u32Mask = ADC_DC_CTL_CTC_MASK;
        stRegister.uptrAddress = ADC_DC_CTL_OFFSET;
        enErrorReg = ADC_Comparator__enGetGeneric(enModuleArg, enComparatorArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *penTriggerConditionsArg = (ADC_nCOMP_CONDITION) stRegister.u32Value;
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }

    return (enErrorReg);
}
