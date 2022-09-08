/**
 *
 * @file ADC_InterruptSource_SeqComp.c
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
 * @verbatim 22 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/xHeader/ADC_InterruptSource_SeqComp.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

ADC_nERROR ADC_Comparator__enSetInterruptSourceStateByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                                           ADC_nSTATE enStateArg)
{
    ADC_Register_t stRegister;
    uint32_t u32ComparatorMaskReg;
    uint32_t u32OffsetReg;
    uint32_t u32ComparatorReg;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enComparatorMaskArg, ((uint32_t) ADC_enCOMPMASK_ALL) + 1U);
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_enERROR_OK;
        stRegister.u32Shift = ADC_DC_CTL_R_CIE_BIT;
        stRegister.u32Mask = ADC_DC_CTL_CIE_MASK;
        stRegister.u32Value = (uint32_t) enStateArg;

        u32ComparatorReg = 0U;
        u32ComparatorMaskReg = (uint32_t) enComparatorMaskArg;
        while(0UL != u32ComparatorMaskReg)
        {
            if(0UL != (((uint32_t) ADC_enCOMPMASK_0) & u32ComparatorMaskReg))
            {
                u32OffsetReg = u32ComparatorReg;
                u32OffsetReg <<= 2U;
                u32OffsetReg += ADC_DC_CTL_OFFSET;
                stRegister.uptrAddress = (uintptr_t) u32OffsetReg;
                enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
            }

            if(ADC_enERROR_OK != enErrorReg)
            {
                break;
            }

            u32ComparatorMaskReg >>= 1U;
            u32ComparatorReg++;
        }
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enSetInterruptSourceStateByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                             ADC_nSTATE enStateArg)
{
    ADC_Register_t stRegister;
    uint32_t u32OffsetReg;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enComparatorArg, (uint32_t) ADC_enCOMPARATOR_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32OffsetReg = (uint32_t) enComparatorArg;
        u32OffsetReg <<= 2U;
        u32OffsetReg += ADC_DC_CTL_OFFSET;

        stRegister.u32Shift = ADC_DC_CTL_R_CIE_BIT;
        stRegister.u32Mask = ADC_DC_CTL_CIE_MASK;
        stRegister.uptrAddress = (uintptr_t) u32OffsetReg;
        stRegister.u32Value = (uint32_t) enStateArg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


ADC_nERROR ADC_Comparator__enGetInterruptSourceStateByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                                           ADC_nCOMPMASK* penComparatorGetArg)
{
    ADC_Register_t stRegister;
    uint32_t u32ComparatorMaskReg;
    uint32_t u32OffsetReg;
    uint32_t u32ComparatorReg;
    uint32_t u32ComparatorGetReg;
    uint32_t u32ValueReg;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) penComparatorGetArg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enComparatorMaskArg, ((uint32_t) ADC_enCOMPMASK_ALL) + 1U);
        if(ADC_enERROR_OK == enErrorReg)
        {
            enErrorReg = ADC_enERROR_OK;
            stRegister.u32Shift = ADC_DC_CTL_R_CIE_BIT;
            stRegister.u32Mask = ADC_DC_CTL_CIE_MASK;

            u32ComparatorGetReg = 0U;
            u32ValueReg = (uint32_t) ADC_enCOMPMASK_0;
            u32ComparatorReg = 0U;
            u32ComparatorMaskReg = (uint32_t) enComparatorMaskArg;
            while(0UL != u32ComparatorMaskReg)
            {
                if(0UL != (((uint32_t) ADC_enCOMPMASK_0) & u32ComparatorMaskReg))
                {
                    u32OffsetReg = u32ComparatorReg;
                    u32OffsetReg <<= 2U;
                    u32OffsetReg += ADC_DC_CTL_OFFSET;
                    stRegister.uptrAddress = (uintptr_t) u32OffsetReg;
                    enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
                    if(ADC_enERROR_OK == enErrorReg)
                    {
                        if(0UL != stRegister.u32Value)
                        {
                            u32ComparatorGetReg |= u32ValueReg;
                        }
                    }
                }

                if(ADC_enERROR_OK != enErrorReg)
                {
                    break;
                }
                u32ValueReg <<= 1U;
                u32ComparatorMaskReg >>= 1U;
                u32ComparatorReg++;
            }

            if(ADC_enERROR_OK != enErrorReg)
            {
                *penComparatorGetArg = (ADC_nCOMPMASK) u32ComparatorGetReg;
            }

        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enGetInterruptSourceStateByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                             ADC_nSTATE* penStateArg)
{
    ADC_Register_t stRegister;
    uint32_t u32OffsetReg;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) penStateArg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enComparatorArg, (uint32_t) ADC_enCOMPARATOR_MAX);
        if(ADC_enERROR_OK == enErrorReg)
        {
            u32OffsetReg = (uint32_t) enComparatorArg;
            u32OffsetReg <<= 2U;
            u32OffsetReg += ADC_DC_CTL_OFFSET;

            stRegister.u32Shift = ADC_DC_CTL_R_CIE_BIT;
            stRegister.u32Mask = ADC_DC_CTL_CIE_MASK;
            stRegister.uptrAddress = (uintptr_t) u32OffsetReg;
            enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
            if(ADC_enERROR_OK == enErrorReg)
            {
                *penStateArg = (ADC_nSTATE) stRegister.u32Value;
            }

        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enEnableInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg)
{
    ADC_nERROR enReturnReg;

    enReturnReg = ADC_Comparator__enSetInterruptSourceStateByMask(enModuleArg, enComparatorMaskArg, ADC_enSTATE_ENA);

    return (enReturnReg);
}

ADC_nERROR ADC_Comparator__enEnableInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg)
{
    ADC_nERROR enReturnReg;

    enReturnReg = ADC_Comparator__enSetInterruptSourceStateByNumber(enModuleArg, enComparatorArg, ADC_enSTATE_ENA);

    return (enReturnReg);
}

ADC_nERROR ADC_Comparator__enDisableInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg)
{
    ADC_nERROR enReturnReg;

    enReturnReg = ADC_Comparator__enSetInterruptSourceStateByMask(enModuleArg, enComparatorMaskArg, ADC_enSTATE_DIS);

    return (enReturnReg);
}

ADC_nERROR ADC_Comparator__enDisableInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg)
{
    ADC_nERROR enReturnReg;

    enReturnReg = ADC_Comparator__enSetInterruptSourceStateByNumber(enModuleArg, enComparatorArg, ADC_enSTATE_DIS);

    return (enReturnReg);
}

ADC_nERROR ADC_Comparator__enClearInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enComparatorMaskArg, ((uint32_t) ADC_enCOMPMASK_ALL) + 1U);
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0UL;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = ADC_DCISC_OFFSET;
        stRegister.u32Value = (uint32_t) enComparatorMaskArg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enClearInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enComparatorArg, (uint32_t) ADC_enCOMPARATOR_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enComparatorArg;
        stRegister.u32Mask = ADC_DCISC_DCINT_MASK;
        stRegister.uptrAddress = ADC_DCISC_OFFSET;
        stRegister.u32Value = ADC_DCISC_DCINT_CLEAR;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enStatusInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                                         ADC_nCOMPMASK* penComparatorGetArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enComparatorMaskArg, ((uint32_t) ADC_enCOMPMASK_ALL) + 1U);
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0UL;
        stRegister.u32Mask = (uint32_t) enComparatorMaskArg;
        stRegister.uptrAddress = ADC_DCISC_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *penComparatorGetArg = (ADC_nCOMPMASK) stRegister.u32Value;
        }
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enStatusInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                           ADC_nSTATE* penStateArg)
{
    ADC_Register_t stRegister;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enComparatorArg, (uint32_t) ADC_enCOMPARATOR_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enComparatorArg;
        stRegister.u32Mask = ADC_DCISC_DCINT_MASK;
        stRegister.uptrAddress = ADC_DCISC_OFFSET;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
        if(ADC_enERROR_OK == enErrorReg)
        {
            *penStateArg = (ADC_nSTATE) stRegister.u32Value;
        }
    }

    return (enErrorReg);
}
