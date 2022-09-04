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

#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC_Comparator__vEnInterrupt(ADC_nMODULE enModule, ADC_nCOMPARATOR enSeqComparator)
{
    uint32_t u32RegisterOffset = ADC_DC_CTL_OFFSET;
    uint32_t u32Comparator = 0UL;
    u32Comparator = MCU__u32CheckParams((uint32_t) enSeqComparator,
                                        (uint32_t) ADC_enCOMPARATOR_MAX);
    u32Comparator *= 4UL;
    u32RegisterOffset += u32Comparator;
    ADC__vWriteRegister(enModule , u32RegisterOffset, ADC_DC_CTL_CIE_ENA,
                        ADC_DC_CTL_CIE_MASK, ADC_DC_CTL_R_CIE_BIT);
}

void ADC_Comparator__vDisInterrupt(ADC_nMODULE enModule, ADC_nCOMPARATOR enSeqComparator)
{
    uint32_t u32RegisterOffset = ADC_DC_CTL_OFFSET;
    uint32_t u32Comparator = 0UL;
    u32Comparator = MCU__u32CheckParams((uint32_t) enSeqComparator,
                                        (uint32_t) ADC_enCOMPARATOR_MAX);
    u32Comparator *= 4UL;
    u32RegisterOffset += u32Comparator;
    ADC__vWriteRegister(enModule , u32RegisterOffset, ADC_DC_CTL_CIE_DIS,
                        ADC_DC_CTL_CIE_MASK, ADC_DC_CTL_R_CIE_BIT);
}

void ADC_Comparator__vClearInterrupt(ADC_nMODULE enModule, ADC_nCOMPARATOR enSeqComparator)
{
    uint32_t u32Comparator = 0UL;
    u32Comparator = MCU__u32CheckParams((uint32_t) enSeqComparator,
                                        (uint32_t) ADC_enCOMPARATOR_MAX);
    ADC__vWriteRegister(enModule , ADC_DC_ISC_OFFSET, ADC_DC_ISC_DCINT_CLEAR,
                        ADC_DC_ISC_DCINT_MASK, u32Comparator);
}

ADC_nSTATUS ADC_Comparator__enStatusInterrupt(ADC_nMODULE enModule,
                                                ADC_nCOMPARATOR enSeqComparator)
{
    ADC_nSTATUS enInterruptReg = ADC_enSTATUS_UNDEF;
    uint32_t u32Comparator = 0UL;
    u32Comparator = MCU__u32CheckParams((uint32_t) enSeqComparator,
                                        (uint32_t) ADC_enCOMPARATOR_MAX);
    enInterruptReg = (ADC_nSTATUS) ADC__u32ReadRegister(enModule, ADC_DC_ISC_OFFSET,
                                                         ADC_DC_ISC_DCINT_MASK, u32Comparator);
    return (enInterruptReg);
}
