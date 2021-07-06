/**
 *
 * @file DMA_InterruptRoutine_Source_Software.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_DMA_INTERRUPTROUTINE_SOURCE_SOFTWARE_H_
#define XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_DMA_INTERRUPTROUTINE_SOURCE_SOFTWARE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void (*DMA_CH__pvfGetIRQSourceHandler_Software(DMA_nCH_INT_SOFT enInterruptSourceArg))(void);
void (**DMA_CH__pvfGetIRQSourceHandlerPointer_Software(DMA_nCH_INT_SOFT enInterruptSourceArg))(void);

#endif /* XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_DMA_INTERRUPTROUTINE_SOURCE_SOFTWARE_H_ */
