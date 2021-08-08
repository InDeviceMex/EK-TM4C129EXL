/**
 *
 * @file SSI_InterruptRegisterIRQSource.h
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
#ifndef XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_SSI_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_SSI_INTERRUPTREGISTERIRQSOURCE_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

void SSI__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void), SSI_nMODULE enModule, SSI_nINTERRUPT enInterruptSource);

#endif /* XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_SSI_INTERRUPTREGISTERIRQSOURCE_H_ */
