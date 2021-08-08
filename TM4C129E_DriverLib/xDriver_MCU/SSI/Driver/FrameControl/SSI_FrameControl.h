/**
 *
 * @file SSI_FrameControl.h
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
#ifndef XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_SSI_FRAMECONTROL_H_
#define XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_SSI_FRAMECONTROL_H_

#include <xDriver_MCU/SSI/Driver/FrameControl/Clock/SSI_Clock.h>
#include <xDriver_MCU/SSI/Driver/FrameControl/xHeader/SSI_Length.h>
#include <xDriver_MCU/SSI/Driver/FrameControl/xHeader/SSI_Format.h>
#include <xDriver_MCU/SSI/Driver/FrameControl/xHeader/SSI_Phase.h>
#include <xDriver_MCU/SSI/Driver/FrameControl/xHeader/SSI_Polarity.h>

void SSI__vSetFormatControl(SSI_nMODULE enModule, SSI_nFORMAT enFormatArg, SSI_nLENGTH enLengthDataArg, SSI_nCLOCK_PHASE enClockPhaseArg, SSI_nCLOCK_POLARITY enClockPolarityArg);
void SSI__vSetFormatControlStruct(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_TypeDef stFormatControl);
void SSI__vSetFormatControlStructPointer(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_TypeDef* pstFormatControl);
void SSI__vSetClockAndFormatControl(SSI_nMODULE enModule, SSI_nFORMAT enFormatArg, SSI_nLENGTH enLengthDataArg, SSI_nCLOCK_PHASE enClockPhaseArg, SSI_nCLOCK_POLARITY enClockPolarityArg, uint32_t u32ClockArg);
void SSI__vSetClockAndFormatControlStruct(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_TypeDef stFormatControl, uint32_t u32ClockArg);
void SSI__vSetClockAndFormatControlStructPointer(SSI_nMODULE enModule, const SSI_FRAME_CONTROL_TypeDef* pstFormatControl, uint32_t u32ClockArg);

#endif /* XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_SSI_FRAMECONTROL_H_ */
