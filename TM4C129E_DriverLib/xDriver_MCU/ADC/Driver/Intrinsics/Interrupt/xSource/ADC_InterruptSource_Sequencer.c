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
                                                    ADC_nINT_TYPE enInterruptTypeArg, uint32_t* pu32StateArg);


static ADC_nERROR ADC_Sequencer__enGetStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg, uintptr_t uptrOffsetArg,
                                                  ADC_nINT_TYPE enInterruptTypeArg, ADC_nSEQMASK* penSequencerGetArg)
{
    ADC_Register_t stRegister;
    uint32_t u32BitPos;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) penSequencerGetArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerMaskArg, (uint32_t) ADC_enSEQMASK_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enInterruptTypeArg, (uint32_t) ADC_enINT_TYPE_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {

        u32BitPos = (uint32_t) enInterruptTypeArg;
        u32BitPos <<= 3U; /* *= 8U */

        stRegister.u32Shift = (uint32_t) u32BitPos;
        stRegister.u32Mask = enSequencerMaskArg;
        stRegister.uptrAddress = uptrOffsetArg;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *penSequencerGetArg = (ADC_nSEQMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

static ADC_nERROR ADC_Sequencer__enGetStateByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg, uintptr_t uptrOffsetArg,
                                             ADC_nINT_TYPE enInterruptTypeArg, uint32_t* pu32StateArg)
{
    ADC_Register_t stRegister;
    uint32_t u32BitPos;
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_enERROR_OK;
    if(0UL == (uintptr_t) pu32StateArg)
    {
        enErrorReg = ADC_enERROR_POINTER;
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enInterruptTypeArg, (uint32_t) ADC_enINT_TYPE_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {

        u32BitPos = (uint32_t) enInterruptTypeArg;
        u32BitPos <<= 3U; /* *= 8U */
        u32BitPos += (uint32_t) enSequencerArg;

        stRegister.u32Shift = (uint32_t) u32BitPos;
        stRegister.u32Mask = 0x1UL;
        stRegister.uptrAddress = uptrOffsetArg;
        enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        *pu32StateArg = stRegister.u32Value;
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enSetInterruptSourceStateByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                          ADC_nINT_TYPE enInterruptTypeArg, ADC_nSTATE enStateArg)
{
    ADC_Register_t stRegister;
    uint32_t u32ValueReg;
    uint32_t u32BitPos;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerMaskArg, (uint32_t) ADC_enSEQMASK_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enInterruptTypeArg, (uint32_t) ADC_enINT_TYPE_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32BitPos = (uint32_t) enInterruptTypeArg;
        u32BitPos <<= 3U; /* *= 8U */
        if(ADC_enSTATE_DIS == enStateArg)
        {
            u32ValueReg = 0U;
        }
        else
        {
            u32ValueReg = (uint32_t) enSequencerMaskArg;
        }
        stRegister.u32Shift = (uint32_t) u32BitPos;
        stRegister.uptrAddress = ADC_IM_OFFSET;
        stRegister.u32Value = u32ValueReg;

        switch(enInterruptTypeArg)
        {
        case ADC_enINT_TYPE_SAMPLE:
        case ADC_enINT_TYPE_DMA:
            stRegister.u32Mask = enSequencerMaskArg;
            enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
            break;
        case ADC_enINT_TYPE_COMP:
            stRegister.u32Mask = (uint32_t) ADC_enSEQMASK_ALL;
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
    uint32_t u32BitPos;
    uint32_t u32BitComp;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enInterruptTypeArg, (uint32_t) ADC_enINT_TYPE_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32BitPos = (uint32_t) enInterruptTypeArg;
        u32BitPos <<= 3U; /* *= 8U */

        stRegister.uptrAddress = ADC_IM_OFFSET;

        switch(enInterruptTypeArg)
        {
        case ADC_enINT_TYPE_SAMPLE:
        case ADC_enINT_TYPE_DMA:
            u32BitPos += (uint32_t) enSequencerArg;

            stRegister.u32Shift = (uint32_t) u32BitPos;
            stRegister.u32Mask = ADC_IM_MASK0_MASK;
            stRegister.u32Value = (uint32_t) enStateArg;
            enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
            break;
        case ADC_enINT_TYPE_COMP:
            u32BitComp = (uint32_t) enStateArg;
            u32BitComp <<= (uint32_t) enSequencerArg;

            stRegister.u32Shift = (uint32_t) u32BitPos;
            stRegister.u32Mask = (uint32_t) ADC_enSEQMASK_ALL;
            stRegister.u32Value = (uint32_t) u32BitComp;
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
    enErrorReg = ADC_Sequencer__enGetStateByNumber(enModuleArg, enSequencerArg, ADC_IM_OFFSET, enInterruptTypeArg, (uint32_t*) penStateArg);
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enEnableInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                        ADC_nINT_TYPE enInterruptTypeArg)
{
    ADC_nERROR enReturnReg;
    enReturnReg = ADC_Sequencer__enSetInterruptSourceStateByMask(enModuleArg, enSequencerMaskArg, enInterruptTypeArg, ADC_enSTATE_ENA);
    return (enReturnReg);
}

ADC_nERROR ADC_Sequencer__enEnableInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                          ADC_nINT_TYPE enInterruptTypeArg)
{
    ADC_nERROR enReturnReg;
    enReturnReg = ADC_Sequencer__enSetInterruptSourceStateByNumber(enModuleArg, enSequencerArg, enInterruptTypeArg, ADC_enSTATE_ENA);
    return (enReturnReg);
}

ADC_nERROR ADC_Sequencer__enDisableInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                         ADC_nINT_TYPE enInterruptTypeArg)
{
    ADC_nERROR enReturnReg;
    enReturnReg = ADC_Sequencer__enSetInterruptSourceStateByMask(enModuleArg, enSequencerMaskArg, enInterruptTypeArg, ADC_enSTATE_DIS);
    return (enReturnReg);
}

ADC_nERROR ADC_Sequencer__enDisableInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                           ADC_nINT_TYPE enInterruptTypeArg)
{
    ADC_nERROR enReturnReg;
    enReturnReg = ADC_Sequencer__enSetInterruptSourceStateByNumber(enModuleArg, enSequencerArg, enInterruptTypeArg, ADC_enSTATE_DIS);
    return (enReturnReg);
}

ADC_nERROR ADC_Sequencer__enClearInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg,
                                                       ADC_nINT_TYPE enInterruptTypeArg)
{
    ADC_Register_t stRegister;
    uint32_t u32ValueReg;
    uint32_t u32BitPos;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerMaskArg, (uint32_t) ADC_enSEQMASK_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enInterruptTypeArg, (uint32_t) ADC_enINT_TYPE_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32BitPos = (uint32_t) enInterruptTypeArg;
        u32BitPos <<= 3U; /* *= 8U */

        u32ValueReg = (uint32_t) enSequencerMaskArg;
        u32ValueReg <<= u32BitPos;
        stRegister.u32Shift = 0UL;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = ADC_ISC_OFFSET;
        stRegister.u32Value = (uint32_t) u32ValueReg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enClearInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                               ADC_nINT_TYPE enInterruptTypeArg)
{

    ADC_Register_t stRegister;
    uint32_t u32ValueReg;
    uint32_t u32BitPos;
    ADC_nERROR enErrorReg;

    enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enInterruptTypeArg, (uint32_t) ADC_enINT_TYPE_MAX);
    }
    if(ADC_enERROR_OK == enErrorReg)
    {
        u32BitPos = (uint32_t) enInterruptTypeArg;
        u32BitPos <<= 3U; /* *= 8U */
        u32BitPos += (uint32_t) enSequencerArg;

        u32ValueReg = 1U;
        u32ValueReg <<= u32BitPos;
        stRegister.u32Shift = 0UL;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = ADC_ISC_OFFSET;
        stRegister.u32Value = (uint32_t) u32ValueReg;
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
    enErrorReg = ADC_Sequencer__enGetStateByNumber(enModuleArg, enSequencerArg, ADC_RIS_OFFSET, enInterruptTypeArg, (uint32_t*) penStatusArg);
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
    enErrorReg = ADC_Sequencer__enGetStateByNumber(enModuleArg, enSequencerArg, ADC_ISC_OFFSET, enInterruptTypeArg, (uint32_t*) penStatusArg);
    return (enErrorReg);
}


