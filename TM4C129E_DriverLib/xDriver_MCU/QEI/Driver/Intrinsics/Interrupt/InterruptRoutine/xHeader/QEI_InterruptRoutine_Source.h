/**
 *
 * @file QEI_InterruptRoutine_Source.h
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

#ifndef XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_QEI_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_QEI_INTERRUPTROUTINE_SOURCE_H_

#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>

void (*QEI__pvfGetIRQSourceHandler(QEI_nMODULE enQEISubmodule,
                                   QEI_nINTERRUPT enQEIInterruptNum))(void);
void (**QEI__pvfGetIRQSourceHandlerPointer(QEI_nMODULE enQEISubmodule,
                                           QEI_nINTERRUPT enQEIInterruptNum))(void);

#endif /* XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_QEI_INTERRUPTROUTINE_SOURCE_H_ */
