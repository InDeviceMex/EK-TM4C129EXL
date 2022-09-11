/**
 *
 * @file DMA_ChannelControlAltPointer.h
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
 * @verbatim 19 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DMA_DRIVER_XHEADER_DMA_CHANNELCONTROLALTPOINTER_H_
#define XDRIVER_MCU_DMA_DRIVER_XHEADER_DMA_CHANNELCONTROLALTPOINTER_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA__enGetAlternateControlStructureAddress(DMA_nMODULE enModuleArg, uintptr_t* puptrControlAddressArg);
DMA_nERROR DMA_CH__enGetAlternateControlStructureAddress(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg, uintptr_t* puptrControlAddressArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_XHEADER_DMA_CHANNELCONTROLALTPOINTER_H_ */
