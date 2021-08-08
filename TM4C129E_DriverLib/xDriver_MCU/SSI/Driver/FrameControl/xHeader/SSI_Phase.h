/**
 *
 * @file SSI_Phase.h
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
#ifndef XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_XHEADER_SSI_CLOCK_PHASE_H_
#define XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_XHEADER_SSI_CLOCK_PHASE_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

SSI_nCLOCK_PHASE SSI__enGetClockPhase(SSI_nMODULE enModule);
void SSI__vSetClockPhase(SSI_nMODULE enModule, SSI_nCLOCK_PHASE enClockPhaseArg);

#endif /* XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_XHEADER_SSI_CLOCK_PHASE_H_ */
