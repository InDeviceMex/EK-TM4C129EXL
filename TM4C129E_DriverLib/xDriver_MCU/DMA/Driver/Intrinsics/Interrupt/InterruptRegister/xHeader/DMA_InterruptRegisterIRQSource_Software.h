/**
 *
 * @file DMA_InterruptRegisterIRQSource_Software.h
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
 * @verbatim 1 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_DMA_INTERRUPTREGISTERIRQSOURCE_SOFTWARE_H_
#define XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_DMA_INTERRUPTREGISTERIRQSOURCE_SOFTWARE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA__vRegisterIRQSourceHandler_Software(void (*pfIrqSourceHandler) (void), DMA_nCH_INT_SOFT enInterruptParam);

#endif /* XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_DMA_INTERRUPTREGISTERIRQSOURCE_SOFTWARE_H_ */
