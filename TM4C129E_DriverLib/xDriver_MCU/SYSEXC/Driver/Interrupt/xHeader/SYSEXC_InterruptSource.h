/**
 *
 * @file SYSEXC_InterruptSource.h
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SYSEXC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SYSEXC_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_SYSEXC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SYSEXC_INTERRUPTSOURCE_H_

#include <xDriver_MCU/SYSEXC/Peripheral/xHeader/SYSEXC_Enum.h>

void SYSEXC__vEnInterruptSource(SYSEXC_nINT_SOURCE enInterruptParam);
void SYSEXC__vDisInterruptSource(SYSEXC_nINT_SOURCE enInterruptParam);
void SYSEXC__vClearInterruptSource(SYSEXC_nINT_SOURCE enInterruptParam);
SYSEXC_nINT_STATUS SYSEXC__enStatusInterruptSource(SYSEXC_nINT_SOURCE enInterruptParam);

#endif /* XDRIVER_MCU_SYSEXC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SYSEXC_INTERRUPTSOURCE_H_ */
