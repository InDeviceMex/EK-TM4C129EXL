/**
 *
 * @file SSI_FrameControl.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/App/xHeader/SSI_FrameControl.h>

#include <xDriver_MCU/SSI/Driver/SSI_Driver.h>

SSI_nERROR SSI__enSetFrameFormatControl(SSI_nMODULE enModuleArg,
                                        SSI_nFORMAT enFormatArg,
                                        SSI_nLENGTH enLengthDataArg,
                                        SSI_nPHASE enClockPhaseArg,
                                        SSI_nPOLARITY enClockPolarityArg)
{
    SSI_nERROR enErrorReg;

    enErrorReg = SSI__enSetDataLength(enModuleArg, enLengthDataArg);
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enSetFrameFormat(enModuleArg, enFormatArg);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enSetSerialClockPhase(enModuleArg, enClockPhaseArg);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enSetSerialClockPolarity(enModuleArg, enClockPolarityArg);
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enSetFrameFormatControlStructure(SSI_nMODULE enModule,
                                              const SSI_FRAME_CONTROL_t* pstFormatControl)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) pstFormatControl)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enSetDataLength(enModule, pstFormatControl->enLengthData);
    }

    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enSetFrameFormat(enModule, pstFormatControl->enFormat);
    }

    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enSetSerialClockPhase(enModule, pstFormatControl->enClockPhase);
    }

    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enSetSerialClockPolarity(enModule, pstFormatControl->enClockPolarity);
    }

    return (enErrorReg);
}

