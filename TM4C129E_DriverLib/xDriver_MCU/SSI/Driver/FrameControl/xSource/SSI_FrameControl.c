/**
 *
 * @file SSI_FrameControl.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/SSI/Driver/FrameControl/SSI_FrameControl.h>

void SSI__vSetFormatControl(SSI_nMODULE enModule, SSI_nFORMAT enFormatArg, SSI_nLENGTH enLengthDataArg, SSI_nCLOCK_PHASE enClockPhaseArg, SSI_nCLOCK_POLARITY enClockPolarityArg)
{
    SSI__vSetDataLength(enModule, enLengthDataArg);
    SSI__vSetFormat(enModule, enFormatArg);
    SSI__vSetClockPhase(enModule, enClockPhaseArg);
    SSI__vSetClockPolarity(enModule, enClockPolarityArg);
}

void SSI__vSetFormatControlStruct(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_TypeDef stFormatControl)
{
    SSI__vSetDataLength(enModule, stFormatControl.enLengthData);
    SSI__vSetFormat(enModule, stFormatControl.enFormat);
    SSI__vSetClockPhase(enModule, stFormatControl.enClockPhase);
    SSI__vSetClockPolarity(enModule, stFormatControl.enClockPolarity);
}

void SSI__vSetFormatControlStructPointer(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_TypeDef* pstFormatControl)
{
    if((uint32_t) 0UL != (uint32_t) pstFormatControl)
    {
        SSI__vSetDataLength(enModule, pstFormatControl->enLengthData);
        SSI__vSetFormat(enModule, pstFormatControl->enFormat);
        SSI__vSetClockPhase(enModule, pstFormatControl->enClockPhase);
        SSI__vSetClockPolarity(enModule, pstFormatControl->enClockPolarity);
    }
}

void SSI__vSetClockAndFormatControl(SSI_nMODULE enModule, SSI_nFORMAT enFormatArg, SSI_nLENGTH enLengthDataArg, SSI_nCLOCK_PHASE enClockPhaseArg, SSI_nCLOCK_POLARITY enClockPolarityArg, uint32_t u32ClockArg)
{
    SSI__vSetClock(enModule, u32ClockArg);
    SSI__vSetFormatControl(enModule, enFormatArg, enLengthDataArg, enClockPhaseArg, enClockPolarityArg);
}

void SSI__vSetClockAndFormatControlStruct(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_TypeDef stFormatControl, uint32_t u32ClockArg)
{
    SSI__vSetClock(enModule, u32ClockArg);
    SSI__vSetFormatControlStruct(enModule, stFormatControl);
}

void SSI__vSetClockAndFormatControlStructPointer(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_TypeDef* pstFormatControl, uint32_t u32ClockArg)
{
        SSI__vSetClock(enModule, u32ClockArg);
        SSI__vSetFormatControlStructPointer(enModule, pstFormatControl);
}
