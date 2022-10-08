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
                                            UBase_t uxRangeLowArg)
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
                enErrorReg = ADC_Comparator__enSetRangeLowByNumber(enModuleArg, (ADC_nCOMPARATOR) uxComparatorReg, uxRangeLowArg);
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


ADC_nERROR ADC_Comparator__enSetRangeLowByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                  UBase_t uxRangeLowArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    stRegister.uxShift = ADC_DC_CMP_R_COMP0_BIT;
    stRegister.uxMask = ADC_DC_CMP_COMP0_MASK;
    stRegister.uptrAddress = ADC_DC_CMP_OFFSET;
    stRegister.uxValue = uxRangeLowArg;
    enErrorReg = ADC_Comparator__enSetGeneric(enModuleArg, enComparatorArg, &stRegister);

    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enGetRangeLowByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                  UBase_t* puxRangeLowArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) puxRangeLowArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = ADC_DC_CMP_R_COMP0_BIT;
        stRegister.uxMask = ADC_DC_CMP_COMP0_MASK;
        stRegister.uptrAddress = ADC_DC_CMP_OFFSET;
        enErrorReg = ADC_Comparator__enGetGeneric(enModuleArg, enComparatorArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *puxRangeLowArg = stRegister.uxValue;
    }
    return (enErrorReg);
}

