/**
 *
 * @file DMA_StructPeripheralChannel.h
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
 * @verbatim 28 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 28 jul. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERALCHANNEL_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERALCHANNEL_H_

#include <xDriver_MCU/DMA/Peripheral/Struct/xHeader/DMA_StructRegisterChannel.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t SRCENDP;
        DMA_CH_SRCENDP_t SRCENDP_Bit;
    };
    union
    {
        volatile uint32_t DSTENDP;
        DMA_CH_DSTENDP_t DSTENDP_Bit;
    };
    union
    {
        volatile uint32_t CTL;
        DMA_CH_CTL_t CTL_Bit;
    };
    const uint32_t reserved;
}DMA_CHANNEL_t;

typedef volatile struct
{
    DMA_CHANNEL_t CH [32UL];
}DMA_CH_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERALCHANNEL_H_ */
