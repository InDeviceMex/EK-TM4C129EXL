/**
 *
 * @file DMA_InterruptRoutine.h
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
 * @verbatim 1 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_DRIVER_HEADER_DMA_DMA_DRIVER_DMA_INTRINSICS_DMA_INTERRUPT_DMA_INTERRUPTROUTINE_DMA_INTERRUPTROUTINE_H_
#define XAPPLICATION_MCU_DRIVER_HEADER_DMA_DMA_DRIVER_DMA_INTRINSICS_DMA_INTERRUPT_DMA_INTERRUPTROUTINE_DMA_INTERRUPTROUTINE_H_

#include <xApplication_MCU/DMA/Intrinsics/xHeader/DMA_Defines.h>
#include <xApplication_MCU/DMA/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Vector_Software.h>
#include <xApplication_MCU/DMA/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Vector_Error.h>

DMA_pvfIRQVectorHandler_t DMA__pvfGetIRQVectorHandler(DMA_nMODULE enModuleArg, DMA_nVECTOR enInterruptArg);
DMA_pvfIRQVectorHandler_t* DMA__pvfGetIRQVectorHandlerPointer(DMA_nMODULE enModuleArg, DMA_nVECTOR enInterruptArg);

#endif /* XAPPLICATION_MCU_DRIVER_HEADER_DMA_DMA_DRIVER_DMA_INTRINSICS_DMA_INTERRUPT_DMA_INTERRUPTROUTINE_DMA_INTERRUPTROUTINE_H_ */
