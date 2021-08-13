/**
 *
 * @file ADC_InterruptRegisterIRQSource.c
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
 * @verbatim 19 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/ADC_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ADC_InterruptRoutine_Source.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC_Sample__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                           ADC_nMODULE enModule,
                                           ADC_nSEQUENCER enSequencer,
                                           ADC_nINT_SOURCE enIntSourceArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32Sequencer = 0UL;
    uint32_t u32IntSourceReg = 0UL;

    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32Module = MCU__u32CheckParams( (uint32_t) enModule,
                                         (uint32_t) ADC_enMODULE_MAX);
        u32Sequencer = MCU__u32CheckParams( (uint32_t) enSequencer,
                                            (uint32_t) ADC_enSEQ_MAX);
        u32IntSourceReg = MCU__u32CheckParams( (uint32_t) enIntSourceArg,
                                               (uint32_t) ADC_enINT_SOURCE_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
                   ADC_Sample__pvfGetIRQSourceHandlerPointer((ADC_nMODULE) u32Module,
                                                             (ADC_nSEQUENCER) u32Sequencer,
                                                             (ADC_nINT_SOURCE) u32IntSourceReg),
                   0UL,
                   1UL);
    }
}

void ADC_Comp__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                         ADC_nMODULE enModule,
                                         ADC_nSEQUENCER enSequence,
                                         ADC_nCOMPARATOR enSeqComparator)
{
    uint32_t u32Module = 0UL;
    uint32_t u32Sequencer = 0UL;
    uint32_t u32Comparator = 0UL;

    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32Module = MCU__u32CheckParams( (uint32_t) enModule,
                                         (uint32_t) ADC_enMODULE_MAX);
        u32Sequencer = MCU__u32CheckParams( (uint32_t) enSequence,
                                            (uint32_t) ADC_enSEQ_MAX);
        u32Comparator = MCU__u32CheckParams( (uint32_t) enSeqComparator,
                                             (uint32_t) ADC_enCOMPARATOR_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler,
                       ADC_Comp__pvfGetIRQSourceHandlerPointer((ADC_nMODULE) u32Module,
                                                               (ADC_nSEQUENCER) u32Sequencer,
                                                               (ADC_nCOMPARATOR) u32Comparator),
                       0UL,
                       1UL);
    }
}

