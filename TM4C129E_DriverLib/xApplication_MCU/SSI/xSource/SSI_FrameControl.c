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
#include <xApplication_MCU/SSI/xHeader/SSI_FrameControl.h>

#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Dependencies.h>
#include <xApplication_MCU/SSI/xHeader/SSI_Clock.h>

SSI_nERROR SSI__enSetClockAndFormatControl(SSI_nMODULE enModule, SSI_nFORMAT enFormatArg, SSI_nLENGTH enLengthDataArg, SSI_nPHASE enClockPhaseArg, SSI_nPOLARITY enClockPolarityArg, UBase_t uxClockArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetClockFrequency(enModule, uxClockArg);
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enSetFrameFormatControl(enModule, enFormatArg, enLengthDataArg, enClockPhaseArg, enClockPolarityArg);
    }
    return (enErrorReg);
}

SSI_nERROR SSI__enSetClockAndFormatControlStructure(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_t* pstFormatControl, UBase_t uxClockArg)
{
    SSI_nERROR enErrorReg;
    enErrorReg = SSI__enSetClockFrequency(enModule, uxClockArg);
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = SSI__enSetFrameFormatControlStructure(enModule, pstFormatControl);
    }
    return (enErrorReg);
}
