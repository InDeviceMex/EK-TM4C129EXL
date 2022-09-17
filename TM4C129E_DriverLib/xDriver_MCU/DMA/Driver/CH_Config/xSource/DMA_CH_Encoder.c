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
#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enSetEncoderByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                      DMA_nCH_ENCODER enEncoderArg)
{
    uint32_t u32ChannelReg;
    uint32_t u32ChannelMaskReg;
    DMA_nERROR enErrorReg;

    u32ChannelReg = 0U;
    u32ChannelMaskReg = (uint32_t) enChannelMaskArg;
    enErrorReg = DMA_enERROR_OK;
    while(0U != u32ChannelMaskReg)
    {
        if(0UL != (DMA_enCHMASK_0 & u32ChannelMaskReg))
        {
            enErrorReg = DMA_CH__enSetEncoderByNumber(enModuleArg, (DMA_nCH) u32ChannelReg, enEncoderArg);
        }

        if(DMA_enERROR_OK != enErrorReg)
        {
            break;
        }
        u32ChannelReg++;
        u32ChannelMaskReg >>= 1U;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH__enSetEncoderByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                        DMA_nCH_ENCODER enEncoderArg)
{
    DMA_Register_t stRegister;
    uint32_t u32ChannelReg;
    uint32_t u32ChannelPos;
    uint32_t u32RegisterOffset;
    DMA_nERROR enErrorReg;

    enErrorReg = (DMA_nERROR) MCU__enCheckParams((uint32_t) enChannelArg, (uint32_t) DMA_enCH_MAX);
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((uint32_t) enEncoderArg, (uint32_t) DMA_enCH_ENCODER_MAX);
        if(DMA_enERROR_OK == enErrorReg)
        {
            u32ChannelReg = (uint32_t) enChannelArg;
            u32ChannelReg >>= 3UL; /* /8 */
            u32ChannelReg <<= 2UL;  /* *4 */

            u32RegisterOffset = DMA_CH_MAP_OFFSET;
            u32RegisterOffset += u32ChannelReg;

            u32ChannelPos = (uint32_t) enChannelArg;
            u32ChannelPos %= 8UL;
            u32ChannelPos <<= 2UL;  /* *4 */

            stRegister.u32Shift = (uint32_t) u32ChannelPos;
            stRegister.u32Mask = 0xFUL;
            stRegister.uptrAddress = (uintptr_t) u32RegisterOffset;
            stRegister.u32Value = (uint32_t) enEncoderArg;
            enErrorReg = DMA__enWriteRegister(enModuleArg, &stRegister);
        }
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetEncoderByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                       DMA_nCH_ENCODER* penEncoderArg)
{
    DMA_Register_t stRegister;
    uint32_t u32ChannelReg;
    uint32_t u32ChannelPos;
    uint32_t u32RegisterOffset;
    DMA_nERROR enErrorReg;

    if(0UL != (uintptr_t) penEncoderArg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((uint32_t) enChannelArg, (uint32_t) DMA_enCH_MAX);
        if(DMA_enERROR_OK == enErrorReg)
        {
            u32ChannelReg = (uint32_t) enChannelArg;
            u32ChannelReg >>= 3UL; /* /8 */
            u32ChannelReg <<= 2UL;  /* *4 */

            u32RegisterOffset = DMA_CH_MAP_OFFSET;
            u32RegisterOffset += u32ChannelReg;

            u32ChannelPos = (uint32_t) enChannelArg;
            u32ChannelPos %= 8UL;
            u32ChannelPos <<= 4UL;  /* *4 */

            stRegister.u32Shift = (uint32_t) u32ChannelPos;
            stRegister.u32Mask = 0xFUL;
            stRegister.uptrAddress = (uintptr_t) u32RegisterOffset;
            enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
            if(DMA_enERROR_OK == enErrorReg)
            {
                *penEncoderArg = (DMA_nCH_ENCODER) stRegister.u32Value;
            }
        }
    }
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }

    return (enErrorReg);
}


DMA_nERROR DMA_CH__enSetTrigger(DMA_nMODULE enModuleArg, DMA_nCH_TRIGGER enChannelTriggerArg)
{
    uint32_t u32Channel;
    uint32_t u32Encoder;
    DMA_nERROR enErrorReg;

    u32Channel = (uint32_t) enChannelTriggerArg;
    u32Channel &= 0xFFUL;

    u32Encoder = (uint32_t) enChannelTriggerArg;
    u32Encoder >>= 8UL;
    u32Encoder &= 0xFUL;

    enErrorReg = DMA_CH__enSetEncoderByNumber(enModuleArg, (DMA_nCH) u32Channel, (DMA_nCH_ENCODER) u32Encoder);

    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetTrigger(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                DMA_nCH_TRIGGER* penChannelTriggerArg)
{
    uint32_t u32Encoder;
    uint32_t u32Trigger;
    DMA_nERROR enErrorReg;

    if(0UL != (uintptr_t) penChannelTriggerArg)
    {
        u32Encoder = 0U;
        enErrorReg = DMA_CH__enGetEncoderByNumber(enModuleArg, enChannelArg, (DMA_nCH_ENCODER*) &u32Encoder);
        if(DMA_enERROR_OK == enErrorReg)
        {
            u32Trigger = u32Encoder;
            u32Trigger <<= 8UL;
            u32Trigger |= (uint32_t) enChannelArg;
            *penChannelTriggerArg = (DMA_nCH_TRIGGER) u32Trigger;
        }
    }
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    return (enErrorReg);
}
