/**
 *
 * @file DMA_RegisterAddressChannel.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESSCHANNEL_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESSCHANNEL_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Peripheral/Struct/xHeader/DMA_StructPeripheralChannel.h>

#define DMACH_MAX    (32UL)
#define DMACH_REG_NUM    (4UL)

extern volatile DMACHANNEL_TypeDef DMA__stChannel[DMACH_MAX];
extern volatile DMACHANNEL_TypeDef DMA__stChannelAlt[DMACH_MAX];

#define DMACH_BASE    ((uint32_t) DMA__stChannel)
#define DMACH_OFFSET    ((uint32_t) DMA__stChannel & (uint32_t) 0x00FFFFFFUL)

#define DMAALTCH_BASE    ((uint32_t) DMA__stChannelAlt)
#define DMAALTCH_OFFSET    ((uint32_t) DMA__stChannelAlt & (uint32_t) 0x00FFFFFFUL)

#define DMACH_BITBANDING_BASE    ((uint32_t) 0x22000000UL)
#define DMAALTCH_BITBANDING_BASE    ((uint32_t) 0x22000000UL)

#define DMACH0_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000000UL)
#define DMACH1_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000010UL)
#define DMACH2_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000020UL)
#define DMACH3_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000030UL)
#define DMACH4_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000040UL)
#define DMACH5_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000050UL)
#define DMACH6_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000060UL)
#define DMACH7_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000070UL)
#define DMACH8_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000080UL)
#define DMACH9_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000090UL)
#define DMACH10_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x000000A0UL)
#define DMACH11_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x000000B0UL)
#define DMACH12_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x000000C0UL)
#define DMACH13_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x000000D0UL)
#define DMACH14_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x000000E0UL)
#define DMACH15_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x000000F0UL)
#define DMACH16_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000100UL)
#define DMACH17_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000110UL)
#define DMACH18_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000120UL)
#define DMACH19_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000130UL)
#define DMACH20_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000140UL)
#define DMACH21_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000150UL)
#define DMACH22_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000160UL)
#define DMACH23_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000170UL)
#define DMACH24_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000180UL)
#define DMACH25_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x00000190UL)
#define DMACH26_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x000001A0UL)
#define DMACH27_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x000001B0UL)
#define DMACH28_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x000001C0UL)
#define DMACH29_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x000001D0UL)
#define DMACH30_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x000001E0UL)
#define DMACH31_BASE    ((uint32_t) DMACH_BASE + (uint32_t) 0x000001F0UL)

#define DMACH0_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000000UL)
#define DMACH1_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000010UL)
#define DMACH2_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000020UL)
#define DMACH3_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000030UL)
#define DMACH4_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000040UL)
#define DMACH5_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000050UL)
#define DMACH6_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000060UL)
#define DMACH7_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000070UL)
#define DMACH8_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000080UL)
#define DMACH9_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000090UL)
#define DMACH10_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x000000A0UL)
#define DMACH11_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x000000B0UL)
#define DMACH12_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x000000C0UL)
#define DMACH13_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x000000D0UL)
#define DMACH14_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x000000E0UL)
#define DMACH15_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x000000F0UL)
#define DMACH16_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000100UL)
#define DMACH17_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000110UL)
#define DMACH18_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000120UL)
#define DMACH19_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000130UL)
#define DMACH20_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000140UL)
#define DMACH21_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000150UL)
#define DMACH22_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000160UL)
#define DMACH23_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000170UL)
#define DMACH24_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000180UL)
#define DMACH25_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x00000190UL)
#define DMACH26_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x000001A0UL)
#define DMACH27_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x000001B0UL)
#define DMACH28_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x000001C0UL)
#define DMACH29_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x000001D0UL)
#define DMACH30_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x000001E0UL)
#define DMACH31_OFFSET    ((uint32_t) DMACH_OFFSET + (uint32_t) 0x000001F0UL)

#define DMAALTCH0_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000000UL)
#define DMAALTCH1_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000010UL)
#define DMAALTCH2_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000020UL)
#define DMAALTCH3_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000030UL)
#define DMAALTCH4_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000040UL)
#define DMAALTCH5_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000050UL)
#define DMAALTCH6_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000060UL)
#define DMAALTCH7_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000070UL)
#define DMAALTCH8_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000080UL)
#define DMAALTCH9_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000090UL)
#define DMAALTCH10_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x000000A0UL)
#define DMAALTCH11_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x000000B0UL)
#define DMAALTCH12_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x000000C0UL)
#define DMAALTCH13_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x000000D0UL)
#define DMAALTCH14_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x000000E0UL)
#define DMAALTCH15_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x000000F0UL)
#define DMAALTCH16_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000100UL)
#define DMAALTCH17_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000110UL)
#define DMAALTCH18_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000120UL)
#define DMAALTCH19_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000130UL)
#define DMAALTCH20_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000140UL)
#define DMAALTCH21_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000150UL)
#define DMAALTCH22_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000160UL)
#define DMAALTCH23_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000170UL)
#define DMAALTCH24_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000180UL)
#define DMAALTCH25_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x00000190UL)
#define DMAALTCH26_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x000001A0UL)
#define DMAALTCH27_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x000001B0UL)
#define DMAALTCH28_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x000001C0UL)
#define DMAALTCH29_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x000001D0UL)
#define DMAALTCH30_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x000001E0UL)
#define DMAALTCH31_BASE    ((uint32_t) DMAALTCH_BASE + (uint32_t) 0x000001F0UL)

#define DMAALTCH0_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000000UL)
#define DMAALTCH1_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000010UL)
#define DMAALTCH2_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000020UL)
#define DMAALTCH3_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000030UL)
#define DMAALTCH4_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000040UL)
#define DMAALTCH5_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000050UL)
#define DMAALTCH6_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000060UL)
#define DMAALTCH7_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000070UL)
#define DMAALTCH8_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000080UL)
#define DMAALTCH9_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000090UL)
#define DMAALTCH10_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x000000A0UL)
#define DMAALTCH11_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x000000B0UL)
#define DMAALTCH12_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x000000C0UL)
#define DMAALTCH13_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x000000D0UL)
#define DMAALTCH14_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x000000E0UL)
#define DMAALTCH15_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x000000F0UL)
#define DMAALTCH16_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000100UL)
#define DMAALTCH17_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000110UL)
#define DMAALTCH18_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000120UL)
#define DMAALTCH19_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000130UL)
#define DMAALTCH20_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000140UL)
#define DMAALTCH21_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000150UL)
#define DMAALTCH22_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000160UL)
#define DMAALTCH23_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000170UL)
#define DMAALTCH24_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000180UL)
#define DMAALTCH25_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x00000190UL)
#define DMAALTCH26_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x000001A0UL)
#define DMAALTCH27_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x000001B0UL)
#define DMAALTCH28_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x000001C0UL)
#define DMAALTCH29_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x000001D0UL)
#define DMAALTCH30_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x000001E0UL)
#define DMAALTCH31_OFFSET    ((uint32_t) DMAALTCH_OFFSET + (uint32_t) 0x000001F0UL)

#define DMACH_SRCENDP_OFFSET    ((uint32_t) 0x00000000UL)
#define DMACH_DSTENDP_OFFSET    ((uint32_t) 0x00000004UL)
#define DMACH_CHCTL_OFFSET    ((uint32_t) 0x00000008UL)
#define DMACH_RESERVED_OFFSET    ((uint32_t) 0x0000000CUL)

#define DMAALTCH_SRCENDP_OFFSET    ((uint32_t) 0x00000000UL)
#define DMAALTCH_DSTENDP_OFFSET    ((uint32_t) 0x00000004UL)
#define DMAALTCH_CHCTL_OFFSET    ((uint32_t) 0x00000008UL)
#define DMAALTCH_RESERVED_OFFSET    ((uint32_t) 0x0000000CUL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESSCHANNEL_H_ */
