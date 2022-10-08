/**
 *
 * @file DMA_StructRegisterChannel.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTERCHANNEL_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTERCHANNEL_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

typedef volatile struct
{
    volatile UBase_t ADDR: 32;
}DMA_CH_SRCENDP_t;

typedef volatile struct
{
    volatile UBase_t ADDR: 32;
}DMA_CH_DSTENDP_t;

typedef volatile struct
{
    volatile UBase_t XFERMODE :3;
    volatile UBase_t NXTUSEBURST :1;
    volatile UBase_t XFERSIZE :10;
    volatile UBase_t ARBSIZE :4;
    volatile UBase_t SRCPROT0 :1;
    const UBase_t reserved :2;
    volatile UBase_t DSTPROT0 :1;
    const UBase_t reserved1 :2;
    volatile UBase_t SRCSIZE :2;
    volatile UBase_t SRCINC :2;
    volatile UBase_t DSTSIZE :2;
    volatile UBase_t DSTINC :2;
}DMA_CH_CTL_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTERCHANNEL_H_ */
