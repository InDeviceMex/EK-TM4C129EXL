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

DMA_nERROR DMA_CH__enRegisterIRQSourceHandler_Software(DMA_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                      DMA_nMODULE enModuleArg,
                                                      DMA_nCH enChannelArg);
DMA_nERROR DMA__enRegisterIRQSourceHandler_Error(DMA_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                  DMA_nMODULE enModuleArg,
                                                  DMA_nINT_ERROR enInterruptSourceArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_DMA_INTERRUPTREGISTERIRQSOURCE_SOFTWARE_H_ */
