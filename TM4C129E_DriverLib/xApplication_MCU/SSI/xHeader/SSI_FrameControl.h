/**
 *
 * @file SSI_FrameControl.h
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

#ifndef XAPPLICATION_MCU_SSI_XHEADER_SSI_FRAMECONTROL_H_
#define XAPPLICATION_MCU_SSI_XHEADER_SSI_FRAMECONTROL_H_

#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Defines.h>

void SSI__vSetClockAndFormatControl(SSI_nMODULE enModule, SSI_nFORMAT enFormatArg, SSI_nLENGTH enLengthDataArg, SSI_nCLOCK_PHASE enClockPhaseArg, SSI_nCLOCK_POLARITY enClockPolarityArg, uint32_t u32ClockArg);
void SSI__vSetClockAndFormatControlStruct(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_t stFormatControl, uint32_t u32ClockArg);
void SSI__vSetClockAndFormatControlStructPointer(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_t* pstFormatControl, uint32_t u32ClockArg);

#endif /* XAPPLICATION_MCU_SSI_XHEADER_SSI_FRAMECONTROL_H_ */
