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

#include <xApplication_MCU/SSI/xHeader/SSI_Clock.h>
#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Dependencies.h>

void SSI__vSetClockAndFormatControl(SSI_nMODULE enModule, SSI_nFORMAT enFormatArg, SSI_nLENGTH enLengthDataArg, SSI_nCLOCK_PHASE enClockPhaseArg, SSI_nCLOCK_POLARITY enClockPolarityArg, UBase_t uxClockArg)
{
    SSI__vSetClock(enModule, uxClockArg);
    SSI__vSetFormatControl(enModule, enFormatArg, enLengthDataArg, enClockPhaseArg, enClockPolarityArg);
}

void SSI__vSetClockAndFormatControlStruct(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_t stFormatControl, UBase_t uxClockArg)
{
    SSI__vSetClock(enModule, uxClockArg);
    SSI__vSetFormatControlStruct(enModule, stFormatControl);
}

void SSI__vSetClockAndFormatControlStructPointer(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_t* pstFormatControl, UBase_t uxClockArg)
{
    SSI__vSetClock(enModule, uxClockArg);
    SSI__vSetFormatControlStructPointer(enModule, pstFormatControl);
}
