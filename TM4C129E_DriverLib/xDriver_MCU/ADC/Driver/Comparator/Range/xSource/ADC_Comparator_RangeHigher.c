/**
 *
 * @file ADC_Comparator_RangeHigher.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_RangeHigher.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Comparator/xHeader/ADC_CompGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC_Comparator__enSetRangeHighByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                            uint32_t u32RangeHighArg)
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
            if(0UL != ((uint32_t) ADC_enCOMPMASK_0 & u32ComparatorMaskReg))
            {
                enErrorReg = ADC_Comparator__enSetRangeHighByNumber(enModuleArg, (ADC_nCOMPARATOR) u32ComparatorReg, u32RangeHighArg);
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

ADC_nERROR ADC_Comparator__enSetRangeHighByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                  uint32_t u32RangeHighArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    stRegister.u32Shift = ADC_DC_CMP_R_COMP1_BIT;
    stRegister.u32Mask = ADC_DC_CMP_COMP1_MASK;
    stRegister.uptrAddress = ADC_DC_CMP_OFFSET;
    stRegister.u32Value = u32RangeHighArg;
    enErrorReg = ADC_Comparator__enSetGeneric(enModuleArg, enComparatorArg, &stRegister);

    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enGetRangeHighByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                  uint32_t* pu32RangeHighArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) pu32RangeHighArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = ADC_DC_CMP_R_COMP1_BIT;
        stRegister.u32Mask = ADC_DC_CMP_COMP1_MASK;
        stRegister.uptrAddress = ADC_DC_CMP_OFFSET;
        enErrorReg = ADC_Comparator__enGetGeneric(enModuleArg, enComparatorArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *pu32RangeHighArg = stRegister.u32Value;
    }
    return (enErrorReg);
}
