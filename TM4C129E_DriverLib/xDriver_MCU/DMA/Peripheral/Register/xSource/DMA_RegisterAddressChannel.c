/**
 *
 * @file DMA_RegisterAddressChannel.c
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
 * Date           Author     Version     Description
 * 28 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Peripheral/Register/xHeader/DMA_RegisterAddressChannel.h>


#if defined (__TI_ARM__ )

#pragma DATA_SECTION(DMA__stChannel, ".dma")
#pragma DATA_SECTION(DMA__stChannelAlt, ".dmaalt")

volatile DMACHANNEL_TypeDef DMA__stChannel[DMACH_MAX];
volatile DMACHANNEL_TypeDef DMA__stChannelAlt[DMACH_MAX];

#elif defined (__GNUC__ )

__attribute__((section(".dma"))) volatile DMACHANNEL_TypeDef DMA__stChannel[DMACH_MAX];
__attribute__((section(".dmaalt"))) volatile DMACHANNEL_TypeDef DMA__stChannelAlt[DMACH_MAX];

#endif
