/**
 *
 * @file DMA_CH_Encoder.c
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
 * @verbatim 20 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_Encoder.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>

void DMA_CH__vSetEncoder(DMA_nCH_MODULE enChannel, DMA_nCH_ENCODER enChannelEncoder)
{
    uint32_t u32Channel = 0UL;
    uint32_t u32ChannelReg = 0UL;
    uint32_t u32ChannelPos = 0UL;
    uint32_t u32Encoder = 0UL;
    uint32_t u32RegisterOffset = 0UL;

    u32Channel = MCU__u32CheckParams( (uint32_t) enChannel, (uint32_t) DMA_enCH_MODULE_MAX);
    u32Encoder = MCU__u32CheckParams( (uint32_t) enChannelEncoder, (uint32_t) DMA_enCH_ENCODER_MAX);

    u32ChannelReg = u32Channel / 8UL;
    u32ChannelReg *= 4UL;
    u32RegisterOffset = DMA_CHMAP_OFFSET;
    u32RegisterOffset += u32ChannelReg;

    u32ChannelPos = u32Channel % 8UL;
    u32ChannelPos *= 4UL;

    DMA__vWriteRegister(u32RegisterOffset, u32Encoder, 0xFUL, u32ChannelPos);
}

void DMA_CH__vSetEncoderDefine(DMA_nCHSRC enChannelEncoder)
{
    uint32_t u32Channel = 0UL;
    uint32_t u32Encoder = 0UL;

    u32Channel = (uint32_t) enChannelEncoder;
    u32Channel &= 0xFFUL;

    u32Encoder = (uint32_t) enChannelEncoder;
    u32Encoder >>= 8UL;
    u32Encoder &= 0xFUL;

    DMA_CH__vSetEncoder( (DMA_nCH_MODULE) u32Channel, (DMA_nCH_ENCODER) u32Encoder);
}

DMA_nCH_ENCODER DMA_CH__enGetEncoder(DMA_nCH_MODULE enChannel)
{
    uint32_t u32Channel = 0UL;
    uint32_t u32ChannelReg = 0UL;
    uint32_t u32ChannelPos = 0UL;
    uint32_t u32Encoder = 0UL;
    uint32_t u32RegisterOffset = 0UL;
    DMA_nCH_ENCODER enChannelEncoder = DMA_enCH_ENCODER_UNDEF;
    DMA_nSTATUS enStatus = DMA_enSTATUS_UNDEF;

    u32Channel = MCU__u32CheckParams( (uint32_t) enChannel, (uint32_t) DMA_enCH_MODULE_MAX);

    u32ChannelReg = u32Channel / 8UL;
    u32ChannelReg *= 4UL;
    u32RegisterOffset = DMA_CHMAP_OFFSET;
    u32RegisterOffset += u32ChannelReg;

    u32ChannelPos = u32Channel % 8UL;
    u32ChannelPos *= 4UL;

    enStatus = DMA__enReadRegister(u32RegisterOffset, &u32Encoder, 0xFUL, u32ChannelPos);

    if(DMA_enSTATUS_OK == enStatus)
    {
        enChannelEncoder = (DMA_nCH_ENCODER) u32Encoder;
    }
    return (enChannelEncoder);
}

DMA_nCHSRC DMA_CH__enGetEncoderDefine(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_ENCODER enChannelEncoder = DMA_enCH_ENCODER_UNDEF;
    uint32_t u32Encoder = 0UL;
    DMA_nCHSRC enEncoderChannel = DMA_enCHSRC_UNDEF;
    uint32_t u32EncoderChannel = 0UL;

    enChannel = (DMA_nCH_MODULE) MCU__u32CheckParams( (uint32_t) enChannel, (uint32_t) DMA_enCH_MODULE_MAX);
    enChannelEncoder = DMA_CH__enGetEncoder(enChannel);

    u32Encoder = (uint32_t) enChannelEncoder;
    u32Encoder <<= 8UL;
    u32EncoderChannel = (uint32_t) enChannel;
    u32EncoderChannel |= u32Encoder;
    enEncoderChannel = (DMA_nCHSRC) u32EncoderChannel;
    return (enEncoderChannel);
}
