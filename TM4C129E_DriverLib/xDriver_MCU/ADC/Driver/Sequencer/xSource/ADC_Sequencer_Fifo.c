/**
 *
 * @file ADC_Sequencer_Fifo.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 7 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Fifo.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/ADC_Intrinsics.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC_Sequencer__enGetFifoStatusByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                  ADC_nFIFO* penFifoStatusArg)
{
    ADC_Register_t stRegister;
    uint32_t u32OffsetReg;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) penFifoStatusArg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
        if(ADC_enERROR_OK == enErrorReg)
        {
            u32OffsetReg = (uint32_t) enSequencerArg;
            u32OffsetReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
            u32OffsetReg <<= 2UL;
            u32OffsetReg += ADC_SS_REGISTER_BASE_OFFSET;
            u32OffsetReg += ADC_SS_FSTAT_OFFSET;

            stRegister.u32Shift = 0UL;
            stRegister.u32Mask = ADC_SS_FSTAT_R_EMPTY_MASK | ADC_SS_FSTAT_R_FULL_MASK;
            stRegister.uptrAddress = (uintptr_t) u32OffsetReg;
            enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
            if(ADC_enERROR_OK == enErrorReg)
            {
                if(0U == stRegister.u32Value)
                {
                    *penFifoStatusArg = ADC_enFIFO_VALUES;
                }
                else if (ADC_SS_FSTAT_R_FULL_MASK == stRegister.u32Value)
                {
                    *penFifoStatusArg = ADC_enFIFO_FULL;
                }
                else
                {
                    *penFifoStatusArg = ADC_enFIFO_EMPTY;
                }
            }
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enGetFifoHeadByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                uint32_t* pu32FifoHeadArg)
{
    ADC_Register_t stRegister;
    uint32_t u32OffsetReg;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) pu32FifoHeadArg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
        if(ADC_enERROR_OK == enErrorReg)
        {
            u32OffsetReg = (uint32_t) enSequencerArg;
            u32OffsetReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
            u32OffsetReg <<= 2UL;
            u32OffsetReg += ADC_SS_REGISTER_BASE_OFFSET;
            u32OffsetReg += ADC_SS_FSTAT_OFFSET;

            stRegister.u32Shift = ADC_SS_FSTAT_R_HPTR_BIT;
            stRegister.u32Mask = ADC_SS_FSTAT_HPTR_MASK;
            stRegister.uptrAddress = (uintptr_t) u32OffsetReg;
            enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
            if(ADC_enERROR_OK == enErrorReg)
            {
                *pu32FifoHeadArg = stRegister.u32Value;
            }
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }

    return (enErrorReg);
}


ADC_nERROR ADC_Sequencer__enGetFifoTailByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                uint32_t* pu32FifoTailArg)
{
    ADC_Register_t stRegister;
    uint32_t u32OffsetReg;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) pu32FifoTailArg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
        if(ADC_enERROR_OK == enErrorReg)
        {
            u32OffsetReg = (uint32_t) enSequencerArg;
            u32OffsetReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
            u32OffsetReg <<= 2UL;
            u32OffsetReg += ADC_SS_REGISTER_BASE_OFFSET;
            u32OffsetReg += ADC_SS_FSTAT_OFFSET;

            stRegister.u32Shift = ADC_SS_FSTAT_R_TPTR_BIT;
            stRegister.u32Mask = ADC_SS_FSTAT_TPTR_MASK;
            stRegister.uptrAddress = (uintptr_t) u32OffsetReg;
            enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
            if(ADC_enERROR_OK == enErrorReg)
            {
                *pu32FifoTailArg = stRegister.u32Value;
            }
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }

    return (enErrorReg);
}


ADC_nERROR ADC_Sequencer__enGetFifoDataByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                uint32_t* pu32FifoDataArg)
{
    ADC_Register_t stRegister;
    uint32_t u32OffsetReg;
    ADC_nERROR enErrorReg;
    ADC_nFIFO enFifoStatusReg;

    if(0UL != (uintptr_t) pu32FifoDataArg)
    {
        enErrorReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enSequencerArg, (uint32_t) ADC_enSEQ_MAX);
        if(ADC_enERROR_OK == enErrorReg)
        {
            enFifoStatusReg = ADC_enFIFO_INT_UNDEF;
            enErrorReg = ADC_Sequencer__enGetFifoStatusByNumber(enModuleArg, enSequencerArg, &enFifoStatusReg);
            if(ADC_enERROR_OK == enErrorReg)
            {
                if(ADC_enFIFO_EMPTY != enFifoStatusReg)
                {
                    u32OffsetReg = (uint32_t) enSequencerArg;
                    u32OffsetReg *= ADC_SS_REGISTER_NUM; /*Add offset for input sequencer*/
                    u32OffsetReg <<= 2UL;
                    u32OffsetReg += ADC_SS_REGISTER_BASE_OFFSET;
                    u32OffsetReg += ADC_SS_FIFO_OFFSET;

                    stRegister.u32Shift = ADC_SS_FIFO_R_DATA_BIT;
                    stRegister.u32Mask = MCU_MASK_32;
                    stRegister.uptrAddress = (uintptr_t) u32OffsetReg;
                    enErrorReg = ADC__enReadRegister(enModuleArg, &stRegister);
                    if(ADC_enERROR_OK == enErrorReg)
                    {
                        *pu32FifoDataArg = stRegister.u32Value;
                    }
                }
                else
                {
                    enErrorReg = ADC_enERROR_EMPTY;
                }
            }
        }
    }
    else
    {
        enErrorReg = ADC_enERROR_POINTER;
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enGetAllFifoDataByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg,
                                                   uint32_t* pu32FifoDataArg, uint32_t* pu32NumberArg)
{
    uint32_t u32CountReg;
    ADC_nERROR enErrorReg;

    if(0UL != (uintptr_t) pu32NumberArg)
    {
        u32CountReg = 0U;
        do
        {
            enErrorReg = ADC_Sequencer__enGetFifoDataByNumber(enModuleArg, enSequencerArg, pu32FifoDataArg);
            if(ADC_enERROR_OK == enErrorReg)
            {
                pu32FifoDataArg += 1U;
                u32CountReg++;
            }
        }while((ADC_enERROR_OK == enErrorReg));

        if(ADC_enERROR_OK == enErrorReg)
        {
            *pu32NumberArg = (uint32_t) u32CountReg;
        }
    }

    return (enErrorReg);
}

