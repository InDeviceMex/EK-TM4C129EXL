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

void SSI__vSetFormatControl(SSI_nMODULE enModule,
                            SSI_nFORMAT enFormatArg,
                            SSI_nLENGTH enLengthDataArg,
                            SSI_nCLOCK_PHASE enClockPhaseArg,
                            SSI_nCLOCK_POLARITY enClockPolarityArg)
{
    SSI__vSetDataLength(enModule, enLengthDataArg);
    SSI__vSetFormat(enModule, enFormatArg);
    SSI__vSetClockPhase(enModule, enClockPhaseArg);
    SSI__vSetClockPolarity(enModule, enClockPolarityArg);
}

void SSI__vSetFormatControlStruct(SSI_nMODULE enModule,
                                  const SSI_FRAME_CONTROL_t stFormatControl)
{
    SSI__vSetDataLength(enModule, stFormatControl.enLengthData);
    SSI__vSetFormat(enModule, stFormatControl.enFormat);
    SSI__vSetClockPhase(enModule, stFormatControl.enClockPhase);
    SSI__vSetClockPolarity(enModule, stFormatControl.enClockPolarity);
}

void SSI__vSetFormatControlStructPointer(SSI_nMODULE enModule,
                                         const SSI_FRAME_CONTROL_t* pstFormatControl)
{
    if(0UL != (UBase_t) pstFormatControl)
    {
        SSI__vSetDataLength(enModule, pstFormatControl->enLengthData);
        SSI__vSetFormat(enModule, pstFormatControl->enFormat);
        SSI__vSetClockPhase(enModule, pstFormatControl->enClockPhase);
        SSI__vSetClockPolarity(enModule, pstFormatControl->enClockPolarity);
    }
}
