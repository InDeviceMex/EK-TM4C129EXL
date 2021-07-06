/**
 *
 * @file DMA_InterruptVector.h
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
 * @verbatim 23 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_XHEADER_DMA_INTERRUPTVECTOR_H_
#define XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_XHEADER_DMA_INTERRUPTVECTOR_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA__vEnInterruptVector(DMA_nVECTOR enVector, DMA_nPRIORITY enDmaPriority);
void DMA__vDisInterruptVector(DMA_nVECTOR enVector);

#endif /* XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_XHEADER_DMA_INTERRUPTVECTOR_H_ */
