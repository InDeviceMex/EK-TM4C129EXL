/**
 *
 * @file ADC_InterruptSource_Sequencer.c
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
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/xHeader/ADC_InterruptSource_Sequencer.h>

#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vEnSeqInterruptSource(ADC_nMODULE enModule, ADC_nSEQMASK enSequence, ADC_nINT_SOURCE enSourceInt)
{
    uint32_t u32Module = 0UL;
    uint32_t u32SourceInt = 0UL;
    uint32_t u32BitPos = 0UL;
    u32SourceInt = MCU__u32CheckParams((uint32_t) enSourceInt, (uint32_t) ADC_enINT_SOURCE_MAX);
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ADC_enMODULE_MAX);
    u32BitPos = u32SourceInt;
    u32BitPos *= 8UL;
    switch(enSourceInt)
    {
    case ADC_enINT_SOURCE_SAMPLE:
    case ADC_enINT_SOURCE_DMA:
        ADC__vWriteRegister((ADC_nMODULE) u32Module , ADC_IM_OFFSET,
                            (uint32_t) enSequence, (uint32_t) enSequence, u32BitPos);
        break;
    case ADC_enINT_SOURCE_COMP:
        ADC__vWriteRegister((ADC_nMODULE) u32Module, ADC_IM_OFFSET,
                            (uint32_t) enSequence, (uint32_t) ADC_enSEQMASK_MAX, u32BitPos);
        break;
    default:
        break;
    }
}

void ADC__vDisSeqInterruptSource(ADC_nMODULE enModule, ADC_nSEQMASK enSequence, ADC_nINT_SOURCE enSourceInt)
{
    uint32_t u32Module = 0UL;
    uint32_t u32SourceInt = 0UL;
    uint32_t u32BitPos = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ADC_enMODULE_MAX);
    u32SourceInt = MCU__u32CheckParams((uint32_t) enSourceInt, (uint32_t) ADC_enINT_SOURCE_MAX);
    u32BitPos =u32SourceInt;
    u32BitPos *= 8UL;
    switch(enSourceInt)
    {
    case ADC_enINT_SOURCE_SAMPLE:
    case ADC_enINT_SOURCE_DMA:
        ADC__vWriteRegister((ADC_nMODULE) u32Module , ADC_IM_OFFSET,
                            0UL, (uint32_t) enSequence, u32BitPos);
        break;
    case ADC_enINT_SOURCE_COMP:
        ADC__vWriteRegister((ADC_nMODULE) u32Module, ADC_IM_OFFSET,
                            0UL, (uint32_t) ADC_enSEQMASK_MAX, u32BitPos);
        break;
    default:
        break;
    }
}

void ADC__vClearSeqInterruptSource(ADC_nMODULE enModule, ADC_nSEQMASK enSequence, ADC_nINT_SOURCE enSourceInt)
{
    uint32_t u32Module = 0UL;
    uint32_t u32SourceInt = 0UL;
    uint32_t u32BitPos = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ADC_enMODULE_MAX);
    u32SourceInt = MCU__u32CheckParams((uint32_t) enSourceInt, (uint32_t) ADC_enINT_SOURCE_MAX);
    u32BitPos =u32SourceInt;
    u32BitPos *= 8UL;
    ADC__vWriteRegister((ADC_nMODULE) u32Module , ADC_ISC_OFFSET, (uint32_t) enSequence, (uint32_t) enSequence, u32BitPos);
}

ADC_nSEQ_INT_STATUS ADC__enStatusSeqInterruptSource(ADC_nMODULE enModule, ADC_nSEQMASK enSequence, ADC_nINT_SOURCE enSourceInt)
{
    ADC_nSEQ_INT_STATUS enInterruptReg = ADC_enSEQ_INT_STATUS_UNDEF;
    uint32_t u32Module = 0UL;
    uint32_t u32SourceInt = 0UL;
    uint32_t u32BitPos = 0UL;
    uint32_t u32Register= 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ADC_enMODULE_MAX);
    u32SourceInt = MCU__u32CheckParams((uint32_t) enSourceInt, (uint32_t) ADC_enINT_SOURCE_MAX);
    u32BitPos =u32SourceInt;
    u32BitPos *= 8UL;
    u32Register = ADC__u32ReadRegister((ADC_nMODULE) u32Module , ADC_RIS_OFFSET, (uint32_t) enSequence, u32BitPos);

    if(0UL != u32Register)
    {
        enInterruptReg = ADC_enSEQ_INT_STATUS_OCCUR;
    }
    else
    {
        enInterruptReg = ADC_enSEQ_INT_STATUS_NOOCCUR;
    }

    return (enInterruptReg);
}
