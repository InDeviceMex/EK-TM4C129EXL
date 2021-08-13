/**
 *
 * @file DMA_StructRegisterChannel_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTERCHANNEL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTERCHANNEL_BITBANDING_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef volatile struct
{
    volatile uint32_t ADDR [32UL];
}BITBANDING_DMASRCENDP_TypeDef;

typedef volatile struct
{
    volatile uint32_t ADDR [32UL];
}BITBANDING_DMADSTENDP_TypeDef;

typedef volatile struct
{
    volatile uint32_t XFERMODE [3UL];
    volatile uint32_t NXTUSEBURST;
    volatile uint32_t XFERSIZE [10UL];
    volatile uint32_t ARBSIZE [4UL];
    volatile uint32_t SRCPROT0;
    const uint32_t reserved [2UL];
    volatile uint32_t DSTPROT0;
    const uint32_t reserved1 [2UL];
    volatile uint32_t SRCSIZE [2UL];
    volatile uint32_t SRCINC [2UL];
    volatile uint32_t DSTSIZE [2UL];
    volatile uint32_t DSTINC [2UL];
}BITBANDING_DMACHCTL_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTERCHANNEL_BITBANDING_H_ */
