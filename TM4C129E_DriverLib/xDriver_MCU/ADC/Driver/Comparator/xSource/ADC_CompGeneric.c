/**
 *
 * @file ADC_CompGeneric.c
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
 * @verbatim 5 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Comparator/xHeader/ADC_CompGeneric.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/ADC_Intrinsics.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC_Comparator__enSetGeneric(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR  enComparatorArg,
                                       ADC_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrComparatorOffsetReg;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enComparatorArg, (UBase_t) ADC_enCOMPARATOR_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        uptrComparatorOffsetReg = (uintptr_t) enComparatorArg;
        uptrComparatorOffsetReg <<= 2UL;
        pstRegisterDataArg->uptrAddress += uptrComparatorOffsetReg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, pstRegisterDataArg);
    }
    return (enErrorReg);

}

ADC_nERROR ADC_Comparator__enGetGeneric(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR  enComparatorArg,
                                        ADC_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrComparatorOffsetReg;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enComparatorArg, (UBase_t) ADC_enCOMPARATOR_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        uptrComparatorOffsetReg = (uintptr_t) enComparatorArg;
        uptrComparatorOffsetReg <<= 2UL;
        pstRegisterDataArg->uptrAddress += uptrComparatorOffsetReg;
        enErrorReg = ADC__enReadRegister(enModuleArg, pstRegisterDataArg);
    }
    return (enErrorReg);
}
