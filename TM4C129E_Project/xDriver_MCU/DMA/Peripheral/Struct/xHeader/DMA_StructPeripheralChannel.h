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
        DMASRCENDP_TypeDef SRCENDP_Bit;
    };
    union
    {
        volatile uint32_t DSTENDP;
        DMADSTENDP_TypeDef DSTENDP_Bit;
    };
    union
    {
        volatile uint32_t CHCTL;
        DMACHCTL_TypeDef CHCTL_Bit;
    };
    const uint32_t reserved;
}DMACHANNEL_TypeDef;

typedef volatile struct
{
    DMACHANNEL_TypeDef DMACh [32UL];
}DMACH_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERALCHANNEL_H_ */
