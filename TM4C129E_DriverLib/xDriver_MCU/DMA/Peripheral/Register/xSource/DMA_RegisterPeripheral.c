/**
 *
 * @file DMA_RegisterPeripheral.c
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
 * @verbatim 9 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Peripheral/Register/xHeader/DMA_RegisterPeripheral.h>

uintptr_t DMA__uptrBlockBaseAddress(DMA_nMODULE enModuleArg)
{
    const uintptr_t DMA_BLOCK_BASE[(uint32_t) DMA_enMODULE_MAX] =
    {
     DMA_BASE,
    };
    return (DMA_BLOCK_BASE[(uint32_t) enModuleArg]);
}





