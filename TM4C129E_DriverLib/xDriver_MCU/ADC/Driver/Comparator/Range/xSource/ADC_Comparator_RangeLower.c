/**
 *
 * @file ADC_Comparator_RangeLower.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_RangeLower.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Comparator/xHeader/ADC_CompGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC_Comparator__enSetRangeLowByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                            uint32_t u32RangeLowArg)
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
                enErrorReg = ADC_Comparator__enSetRangeLowByNumber(enModuleArg, (ADC_nCOMPARATOR) u32ComparatorReg, u32RangeLowArg);
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


ADC_nERROR ADC_Comparator__enSetRangeLowByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                  uint32_t u32RangeLowArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    stRegister.u32Shift = ADC_DC_CMP_R_COMP0_BIT;
    stRegister.u32Mask = ADC_DC_CMP_COMP0_MASK;
    stRegister.uptrAddress = ADC_DC_CMP_OFFSET;
    stRegister.u32Value = u32RangeLowArg;
    enErrorReg = ADC_Comparator__enSetGeneric(enModuleArg, enComparatorArg, &stRegister);

    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enGetRangeLowByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                  uint32_t* pu32RangeLowArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) pu32RangeLowArg)
    {
        stRegister.u32Shift = ADC_DC_CMP_R_COMP0_BIT;
        stRegister.u32Mask = ADC_DC_CMP_COMP0_MASK;
        stRegister.uptrAddress = ADC_DC_CMP_OFFSET;
        enErrorReg = ADC_Comparator__enGetGeneric(enModuleArg, enComparatorArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *pu32RangeLowArg = stRegister.u32Value;
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }

    return (enErrorReg);
}

