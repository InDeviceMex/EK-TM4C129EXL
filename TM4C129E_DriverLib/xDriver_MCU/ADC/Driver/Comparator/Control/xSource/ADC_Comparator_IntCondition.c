/**
 *
 * @file ADC_Comparator_IntCondition.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Control/xHeader/ADC_Comparator_IntCondition.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Comparator/xHeader/ADC_CompGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC_Comparator__enSetInterruptConditionByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                                         ADC_nCOMP_CONDITION enInterruptConditionArg)
{
    uint32_t u32ComparatorReg;
    uint32_t u32ComparatorMaskReg;
    ADC_nERROR enErrorReg;
    ADC_nERROR enErrorMemoryReg;

    enErrorMemoryReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enComparatorMaskArg, (uint32_t) ADC_enCOMPMASK_MAX);
    if(ADC_enERROR_OK == enErrorMemoryReg)
    {
        u32ComparatorReg = 0U;
        u32ComparatorMaskReg = (uint32_t) enComparatorMaskArg;
        enErrorReg = ADC_enERROR_OK;
        while(0U != u32ComparatorMaskReg)
        {
            if(0UL != (ADC_enCOMPMASK_0 & u32ComparatorMaskReg))
            {
                enErrorReg = ADC_Comparator__enSetInterruptConditionByNumber(enModuleArg, (ADC_nCOMPARATOR) u32ComparatorReg, enInterruptConditionArg);
            }

            if(ADC_enERROR_OK != enErrorReg)
            {
                enErrorMemoryReg = enErrorReg;
                break;
            }
            u32ComparatorReg++;
            u32ComparatorMaskReg >>= 1U;
        }
    }

    return (enErrorMemoryReg);
}

ADC_nERROR ADC_Comparator__enSetInterruptConditionByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                           ADC_nCOMP_CONDITION enInterruptConditionArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    stRegister.u32Shift = ADC_DC_CTL_R_CIC_BIT;
    stRegister.u32Mask = ADC_DC_CTL_CIC_MASK;
    stRegister.uptrAddress = ADC_DC_CTL_OFFSET;
    stRegister.u32Value = (uint32_t) enInterruptConditionArg;
    enErrorReg = ADC_Comparator__enSetGeneric(enModuleArg, enComparatorArg, &stRegister);

    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enGetInterruptConditionByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                           ADC_nCOMP_CONDITION* penInterruptConditionArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) penInterruptConditionArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = ADC_DC_CTL_R_CIC_BIT;
        stRegister.u32Mask = ADC_DC_CTL_CIC_MASK;
        stRegister.uptrAddress = ADC_DC_CTL_OFFSET;
        enErrorReg = ADC_Comparator__enGetGeneric(enModuleArg, enComparatorArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *penInterruptConditionArg = (ADC_nCOMP_CONDITION) stRegister.u32Value;
    }
    return (enErrorReg);
}
