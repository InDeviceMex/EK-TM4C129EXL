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


#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma DATA_SECTION(DMA__stChannel, ".dma")

volatile DMA_CHANNEL_t DMA__stChannel[DMA_CH_MAX * 2UL] __attribute__((aligned(1024)));

#elif defined (__GNUC__ )

__attribute__((section(".dma"))) volatile DMA_CHANNEL_t DMA__stChannel[DMA_CH_MAX * 2UL] __attribute__((aligned(1024)));

#endif
