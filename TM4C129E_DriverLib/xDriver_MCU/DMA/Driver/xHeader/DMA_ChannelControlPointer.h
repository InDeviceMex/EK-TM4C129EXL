/**
 *
 * @file DMA_ChannelControlPointer.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_XHEADER_DMA_CHANNELCONTROLPOINTER_H_
#define XDRIVER_MCU_DMA_DRIVER_XHEADER_DMA_CHANNELCONTROLPOINTER_H_

#include <xUtils/Standard/Standard.h>

void DMA__vSetChannelControlPointer(uint32_t u32ControlAddress);
uint32_t DMA__u32GetChannelControlPointer(void);

#endif /* XDRIVER_MCU_DMA_DRIVER_XHEADER_DMA_CHANNELCONTROLPOINTER_H_ */
