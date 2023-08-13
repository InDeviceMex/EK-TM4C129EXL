/**
 *
 * @file ADC_Sequencer_InitConv.c
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
#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_InitConv.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/ADC_Intrinsics.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nERROR ADC_Sequencer__enInitConversionByMask(ADC_nMODULE enModuleArg, ADC_nSEQMASK enSequencerMaskArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerMaskArg, (UBase_t) ADC_enSEQMASK_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        ADC_Register_t stRegister;
        stRegister.uxShift = ADC_PSSI_R_SS0_BIT;
        stRegister.uxMask = (UBase_t) enSequencerMaskArg;
        stRegister.uptrAddress = ADC_PSSI_OFFSET;
        stRegister.uxValue = (UBase_t) enSequencerMaskArg;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Sequencer__enInitConversionByNumber(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enSequencerArg, (UBase_t) ADC_enSEQ_MAX);
    if(ADC_enERROR_OK == enErrorReg)
    {
        ADC_Register_t stRegister;
        stRegister.uxShift = (UBase_t) enSequencerArg;
        stRegister.uxShift += ADC_PSSI_R_SS0_BIT;
        stRegister.uxMask = ADC_PSSI_SS0_MASK;
        stRegister.uptrAddress = ADC_PSSI_OFFSET;
        stRegister.uxValue = ADC_PSSI_SS0_INIT;
        enErrorReg = ADC__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

