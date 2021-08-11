/**
 *
 * @file DMA_Ready.h
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
 * @verbatim 10 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_DMA_INTRINSICS_XHEADER_DMA_READY_H_
#define XAPPLICATION_MCU_DMA_INTRINSICS_XHEADER_DMA_READY_H_

#include <xApplication_MCU/DMA/Intrinsics/xHeader/DMA_Defines.h>

void DMA__vReset(DMA_nMODULE enModule);
void DMA__vSetReady(DMA_nMODULE enModule);
void DMA__vClearReady(DMA_nMODULE enModule);
DMA_nREADY DMA__enIsReady(DMA_nMODULE enModule);

#endif /* XAPPLICATION_MCU_DMA_INTRINSICS_XHEADER_DMA_READY_H_ */
