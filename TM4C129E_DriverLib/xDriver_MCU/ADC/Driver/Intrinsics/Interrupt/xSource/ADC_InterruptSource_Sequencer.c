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

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

static ADC_nERROR ADC_Sequencer__enGetStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg, uintptr_t uptrOffsetArg,
                                                  ADC_nINT_TYPE enInterruptTypeArg, ADC_nSEQMASK* penSequencerGetArg);

static ADC_nERROR ADC_Sequencer__enGetStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg, uintptr_t uptrOffsetArg,
                                                    ADC_nINT_TYPE enInterruptTypeArg, UBase_t* puxStateArg);


static ADC_nERROR ADC_Sequencer__enGetStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg, uintptr_t uptrOffsetArg,
                                                  ADC_nINT_TYPE enInterruptTypeArg, ADC_nSEQMASK* penSequencerGetArg)
{
    ADC_Register_t stRegister;
    UBase_t uxBitPos;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) penSequencerGetArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerMaskArg, (UBase_t) ADC_enSEQMASK_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enInterruptTypeArg, (UBase_t) ADC_enINT_TYPE_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {

        uxBitPos = (UBase_t) enInterruptTypeArg;
        uxBitPos <<= 3U; /* *= 8U */

        stRegister.uxShift = (UBase_t) uxBitPos;
        stRegister.uxMask = enSequencerMaskArg;
        stRegister.uptrAddress = uptrOffsetArg;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *penSequencerGetArg = (ADC_nSEQMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}

static ADC_nERROR ADC_Sequencer__enGetStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg, uintptr_t uptrOffsetArg,
                                             ADC_nINT_TYPE enInterruptTypeArg, UBase_t* puxStateArg)
{
    ADC_Register_t stRegister;
    UBase_t uxBitPos;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) puxStateArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerArg, (UBase_t) ADC_enSEQ_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enInterruptTypeArg, (UBase_t) ADC_enINT_TYPE_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {

        uxBitPos = (UBase_t) enInterruptTypeArg;
        uxBitPos <<= 3U; /* *= 8U */
        uxBitPos += (UBase_t) enSequencerArg;

        stRegister.uxShift = (UBase_t) uxBitPos;
        stRegister.uxMask = 0x1UL;
        stRegister.uptrAddress = uptrOffsetArg;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *puxStateArg = stRegister.uxValue;
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enSetInterruptSourceStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                          ADC_nINT_TYPE enInterruptTypeArg, ADC_nSTATE enStateArg)
{
    ADC_Register_t stRegister;
    UBase_t uxValueReg;
    UBase_t uxBitPos;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerMaskArg, (UBase_t) ADC_enSEQMASK_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enInterruptTypeArg, (UBase_t) ADC_enINT_TYPE_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        uxBitPos = (UBase_t) enInterruptTypeArg;
        uxBitPos <<= 3U; /* *= 8U */
        if(ADC_enSTATE_DIS == enStateArg)
        {
            uxValueReg = 0U;
        }
        else
        {
            uxValueReg = (UBase_t) enSequencerMaskArg;
        }
        stRegister.uxShift = (UBase_t) uxBitPos;
        stRegister.uptrAddress = ADC_IM_OFFSET;
        stRegister.uxValue = uxValueReg;

        switch(enInterruptTypeArg)
        {
        case ADC_enINT_TYPE_SAMPLE:
        case ADC_enINT_TYPE_DMA:
            stRegister.uxMask = enSequencerMaskArg;
            enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
            break;
        case ADC_enINT_TYPE_COMP:
            stRegister.uxMask = (UBase_t) ADC_enSEQMASK_ALL;
            enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
            break;
        default:
            enErrorReg = ADC_enERROR_VALUE;
            break;
        }
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enSetInterruptSourceStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                            ADC_nINT_TYPE enInterruptTypeArg, ADC_nSTATE enStateArg)
{
    ADC_Register_t stRegister;
    UBase_t uxBitPos;
    UBase_t uxBitComp;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerArg, (UBase_t) ADC_enSEQ_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enInterruptTypeArg, (UBase_t) ADC_enINT_TYPE_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        uxBitPos = (UBase_t) enInterruptTypeArg;
        uxBitPos <<= 3U; /* *= 8U */

        stRegister.uptrAddress = ADC_IM_OFFSET;

        switch(enInterruptTypeArg)
        {
        case ADC_enINT_TYPE_SAMPLE:
        case ADC_enINT_TYPE_DMA:
            uxBitPos += (UBase_t) enSequencerArg;

            stRegister.uxShift = (UBase_t) uxBitPos;
            stRegister.uxMask = ADC_IM_MASK0_MASK;
            stRegister.uxValue = (UBase_t) enStateArg;
            enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
            break;
        case ADC_enINT_TYPE_COMP:
            uxBitComp = (UBase_t) enStateArg;
            uxBitComp <<= (UBase_t) enSequencerArg;

            stRegister.uxShift = (UBase_t) uxBitPos;
            stRegister.uxMask = (UBase_t) ADC_enSEQMASK_ALL;
            stRegister.uxValue = (UBase_t) uxBitComp;
            enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
            break;
        default:
            enErrorReg = ADC_enERROR_VALUE;
            break;
        }
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enGetInterruptSourceStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                          ADC_nINT_TYPE enInterruptTypeArg, ADC_nSEQMASK* penSequencerGetArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = ADC_Sequencer__enGetStateByMask(enModuleArg, enSequencerMaskArg, ADC_IM_OFFSET, enInterruptTypeArg, penSequencerGetArg);
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enGetInterruptSourceStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                            ADC_nINT_TYPE enInterruptTypeArg, ADC_nSTATE* penStateArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = ADC_Sequencer__enGetStateByNumber(enModuleArg, enSequencerArg, ADC_IM_OFFSET, enInterruptTypeArg, (UBase_t*) penStateArg);
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enEnableInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                        ADC_nINT_TYPE enInterruptTypeArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = ADC_Sequencer__enSetInterruptSourceStateByMask(enModuleArg, enSequencerMaskArg, enInterruptTypeArg, ADC_enSTATE_ENA);
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enEnableInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                          ADC_nINT_TYPE enInterruptTypeArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = ADC_Sequencer__enSetInterruptSourceStateByNumber(enModuleArg, enSequencerArg, enInterruptTypeArg, ADC_enSTATE_ENA);
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enDisableInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                         ADC_nINT_TYPE enInterruptTypeArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = ADC_Sequencer__enSetInterruptSourceStateByMask(enModuleArg, enSequencerMaskArg, enInterruptTypeArg, ADC_enSTATE_DIS);
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enDisableInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                           ADC_nINT_TYPE enInterruptTypeArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = ADC_Sequencer__enSetInterruptSourceStateByNumber(enModuleArg, enSequencerArg, enInterruptTypeArg, ADC_enSTATE_DIS);
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enClearInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                       ADC_nINT_TYPE enInterruptTypeArg)
{
    ADC_Register_t stRegister;
    UBase_t uxValueReg;
    UBase_t uxBitPos;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerMaskArg, (UBase_t) ADC_enSEQMASK_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enInterruptTypeArg, (UBase_t) ADC_enINT_TYPE_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        uxBitPos = (UBase_t) enInterruptTypeArg;
        uxBitPos <<= 3U; /* *= 8U */

        uxValueReg = (UBase_t) enSequencerMaskArg;
        uxValueReg <<= uxBitPos;
        stRegister.uxShift = 0UL;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = ADC_ISC_OFFSET;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enClearInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                               ADC_nINT_TYPE enInterruptTypeArg)
{

    ADC_Register_t stRegister;
    UBase_t uxValueReg;
    UBase_t uxBitPos;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerArg, (UBase_t) ADC_enSEQ_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enInterruptTypeArg, (UBase_t) ADC_enINT_TYPE_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        uxBitPos = (UBase_t) enInterruptTypeArg;
        uxBitPos <<= 3U; /* *= 8U */
        uxBitPos += (UBase_t) enSequencerArg;

        uxValueReg = 1U;
        uxValueReg <<= uxBitPos;
        stRegister.uxShift = 0UL;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = ADC_ISC_OFFSET;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enStatusInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                        ADC_nINT_TYPE enInterruptTypeArg, ADC_nSEQMASK* penSequencerGetArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = ADC_Sequencer__enGetStateByMask(enModuleArg, enSequencerMaskArg, ADC_RIS_OFFSET, enInterruptTypeArg, penSequencerGetArg);
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enStatusInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                          ADC_nINT_TYPE enInterruptTypeArg, ADC_nSTATUS* penStatusArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = ADC_Sequencer__enGetStateByNumber(enModuleArg, enSequencerArg, ADC_RIS_OFFSET, enInterruptTypeArg, (UBase_t*) penStatusArg);
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enStatusMaskedInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                    ADC_nINT_TYPE enInterruptTypeArg, ADC_nSEQMASK* penSequencerGetArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = ADC_Sequencer__enGetStateByMask(enModuleArg, enSequencerMaskArg, ADC_ISC_OFFSET, enInterruptTypeArg, penSequencerGetArg);
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enStatusMaskedInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                                ADC_nINT_TYPE enInterruptTypeArg, ADC_nSTATUS* penStatusArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = ADC_Sequencer__enGetStateByNumber(enModuleArg, enSequencerArg, ADC_ISC_OFFSET, enInterruptTypeArg, (UBase_t*) penStatusArg);
    return (enErrorReg);
}


