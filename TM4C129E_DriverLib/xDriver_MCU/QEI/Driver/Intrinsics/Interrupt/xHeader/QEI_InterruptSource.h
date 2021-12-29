/**
 *
 * @file QEI_InterruptSource.h
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_XHEADER_QEI_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_XHEADER_QEI_INTERRUPTSOURCE_H_

#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>

void QEI__vEnInterruptSource(QEI_nMODULE enModule, QEI_nINT_SOURCE enSourceInt);
void QEI__vDisInterruptSource(QEI_nMODULE enModule, QEI_nINT_SOURCE enSourceInt);
void QEI__vClearInterruptSource(QEI_nMODULE enModule, QEI_nINT_SOURCE enSourceInt);
QEI_nINT_SOURCE QEI__enStatusInterruptSource(QEI_nMODULE enModule, QEI_nINT_SOURCE enSourceInt);

#endif /* XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_XHEADER_QEI_INTERRUPTSOURCE_H_ */
