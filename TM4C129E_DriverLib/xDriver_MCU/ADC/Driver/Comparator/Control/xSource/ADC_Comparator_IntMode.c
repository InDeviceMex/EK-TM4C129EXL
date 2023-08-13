/**
 *
 * @file ADC_Comparator_IntMode.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Control/xHeader/ADC_Comparator_IntMode.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Comparator/xHeader/ADC_CompGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC_Comparator__enSetInterruptModeByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                                         ADC_nCOMP_MODE enInterruptModeArg)
{
    ADC_nERROR enErrorMemoryReg;
    enErrorMemoryReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enComparatorMaskArg, (UBase_t) ADC_enCOMPMASK_MAX);
    if(ADC_enERROR_OK == enErrorMemoryReg)
    {
        UBase_t uxComparatorReg = 0U;
        UBase_t uxComparatorMaskReg = (UBase_t) enComparatorMaskArg;
        ADC_nERROR enErrorReg = ADC_enERROR_OK;
        while(0U != uxComparatorMaskReg)
        {
            if(0UL != ((UBase_t) ADC_enCOMPMASK_0 & uxComparatorMaskReg))
            {
                enErrorReg = ADC_Comparator__enSetInterruptModeByNumber(enModuleArg, (ADC_nCOMPARATOR) uxComparatorReg, enInterruptModeArg);
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

ADC_nERROR ADC_Comparator__enSetInterruptModeByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                           ADC_nCOMP_MODE enInterruptModeArg)
{
    ADC_Register_t stRegister;
    stRegister.uxShift = ADC_DC_CTL_R_CIM_BIT;
    stRegister.uxMask = ADC_DC_CTL_CIM_MASK;
    stRegister.uptrAddress = ADC_DC_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enInterruptModeArg;

    ADC_nERROR enErrorReg;
    enErrorReg = ADC_Comparator__enSetGeneric(enModuleArg, enComparatorArg, &stRegister);
    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enGetInterruptModeByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                           ADC_nCOMP_MODE* penInterruptModeArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penInterruptModeArg) ? ADC_enERROR_POINTER : ADC_enERROR_OK;

    if(ADC_enERROR_OK == enErrorReg)
    {
        ADC_Register_t stRegister;
        stRegister.uxShift = ADC_DC_CTL_R_CIM_BIT;
        stRegister.uxMask = ADC_DC_CTL_CIM_MASK;
        stRegister.uptrAddress = ADC_DC_CTL_OFFSET;
        enErrorReg = ADC_Comparator__enGetGeneric(enModuleArg, enComparatorArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *penInterruptModeArg = (ADC_nCOMP_MODE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
