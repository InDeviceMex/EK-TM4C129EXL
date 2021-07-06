/**
 *
 * @file DMA_ChannelControlAltPointer.c
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
#include <xDriver_MCU/DMA/Driver/xHeader/DMA_ChannelControlAltPointer.h>

#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

uint32_t DMA__u32GetChannelControlAltPointer(void)
{
    uint32_t u32Reg = 0UL;
    DMA__enReadRegister(DMA_ALTBASE_OFFSET, &u32Reg, DMA_ALTBASE_R_ADDR_MASK, 0UL);
    return (u32Reg);
}
