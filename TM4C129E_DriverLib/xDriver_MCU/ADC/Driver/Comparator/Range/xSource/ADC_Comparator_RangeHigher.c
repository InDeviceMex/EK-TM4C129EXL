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
                                            UBase_t uxRangeHighArg)
{
    UBase_t uxComparatorReg;
    UBase_t uxComparatorMaskReg;
    ADC_nERROR enErrorReg;
    ADC_nERROR enErrorMemoryReg;

    enErrorMemoryReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enComparatorMaskArg, (UBase_t) ADC_enCOMPMASK_MAX);
    if(ADC_enERROR_OK == enErrorMemoryReg)
    {
        uxComparatorReg = 0U;
        uxComparatorMaskReg = (UBase_t) enComparatorMaskArg;
        enErrorReg = ADC_enERROR_OK;
        while(0U != uxComparatorMaskReg)
        {
            if(0UL != ((UBase_t) ADC_enCOMPMASK_0 & uxComparatorMaskReg))
            {
                enErrorReg = ADC_Comparator__enSetRangeHighByNumber(enModuleArg, (ADC_nCOMPARATOR) uxComparatorReg, uxRangeHighArg);
            }

            if(ADC_enERROR_OK != enErrorReg)
            {
                enErrorMemoryReg = enErrorReg;
                break;
            }
            uxComparatorReg++;
            uxComparatorMaskReg >>= 1U;
        }
    }

    return (enErrorMemoryReg);
}

ADC_nERROR ADC_Comparator__enSetRangeHighByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                  UBase_t uxRangeHighArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    stRegister.uxShift = ADC_DC_CMP_R_COMP1_BIT;
    stRegister.uxMask = ADC_DC_CMP_COMP1_MASK;
    stRegister.uptrAddress = ADC_DC_CMP_OFFSET;
    stRegister.uxValue = uxRangeHighArg;
    enErrorReg = ADC_Comparator__enSetGeneric(enModuleArg, enComparatorArg, &stRegister);

    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enGetRangeHighByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                  UBase_t* puxRangeHighArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) puxRangeHighArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = ADC_DC_CMP_R_COMP1_BIT;
        stRegister.uxMask = ADC_DC_CMP_COMP1_MASK;
        stRegister.uptrAddress = ADC_DC_CMP_OFFSET;
        enErrorReg = ADC_Comparator__enGetGeneric(enModuleArg, enComparatorArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *puxRangeHighArg = stRegister.uxValue;
    }
    return (enErrorReg);
}
