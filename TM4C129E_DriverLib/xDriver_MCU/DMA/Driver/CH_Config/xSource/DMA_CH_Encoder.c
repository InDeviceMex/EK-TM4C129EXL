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
    UBase_t uxChannelReg;
    UBase_t uxChannelMaskReg;
    DMA_nERROR enErrorReg;

    uxChannelReg = 0U;
    uxChannelMaskReg = (UBase_t) enChannelMaskArg;
    enErrorReg = DMA_enERROR_OK;
    while((0U != uxChannelMaskReg) && (DMA_enERROR_OK == enErrorReg))
    {
        if(0UL != ((UBase_t) DMA_enCHMASK_0 & uxChannelMaskReg))
        {
            enErrorReg = DMA_CH__enSetEncoderByNumber(enModuleArg, (DMA_nCH) uxChannelReg, enEncoderArg);
        }
        uxChannelReg++;
        uxChannelMaskReg >>= 1U;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH__enSetEncoderByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                        DMA_nCH_ENCODER enEncoderArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enChannelArg, (UBase_t) DMA_enCH_MAX);
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enEncoderArg, (UBase_t) DMA_enCH_ENCODER_MAX);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        UBase_t uxChannelReg = (UBase_t) enChannelArg;
        uxChannelReg >>= 3UL; /* /8 */
        uxChannelReg <<= 2UL;  /* *4 */

        UBase_t uxRegisterOffset = DMA_CH_MAP_OFFSET;
        uxRegisterOffset += uxChannelReg;

        UBase_t uxChannelPos = (UBase_t) enChannelArg;
        uxChannelPos %= 8UL;
        uxChannelPos <<= 2UL;  /* *4 */

        DMA_Register_t stRegister;
        stRegister.uxShift = (UBase_t) uxChannelPos;
        stRegister.uxMask = 0xFUL;
        stRegister.uptrAddress = (uintptr_t) uxRegisterOffset;
        stRegister.uxValue = (UBase_t) enEncoderArg;
        enErrorReg = DMA__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetEncoderByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                       DMA_nCH_ENCODER* penEncoderArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penEncoderArg) ? DMA_enERROR_POINTER : DMA_enERROR_OK;
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enChannelArg, (UBase_t) DMA_enCH_MAX);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        UBase_t uxChannelReg = (UBase_t) enChannelArg;
        uxChannelReg >>= 3UL; /* /8 */
        uxChannelReg <<= 2UL;  /* *4 */

        UBase_t uxRegisterOffset = DMA_CH_MAP_OFFSET;
        uxRegisterOffset += uxChannelReg;

        UBase_t uxChannelPos = (UBase_t) enChannelArg;
        uxChannelPos %= 8UL;
        uxChannelPos <<= 4UL;  /* *4 */

        DMA_Register_t stRegister;
        stRegister.uxShift = (UBase_t) uxChannelPos;
        stRegister.uxMask = 0xFUL;
        stRegister.uptrAddress = (uintptr_t) uxRegisterOffset;
        enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *penEncoderArg = (DMA_nCH_ENCODER) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enSetTrigger(DMA_nMODULE enModuleArg, DMA_nCH_TRIGGER enChannelTriggerArg)
{
    UBase_t uxChannel;
    uxChannel = (UBase_t) enChannelTriggerArg;
    uxChannel &= 0xFFUL;

    UBase_t uxEncoder;
    uxEncoder = (UBase_t) enChannelTriggerArg;
    uxEncoder >>= 8UL;
    uxEncoder &= 0xFUL;

    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetEncoderByNumber(enModuleArg, (DMA_nCH) uxChannel, (DMA_nCH_ENCODER) uxEncoder);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetTrigger(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                DMA_nCH_TRIGGER* penChannelTriggerArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penChannelTriggerArg) ? DMA_enERROR_POINTER : DMA_enERROR_OK;

    UBase_t uxEncoder;
    uxEncoder = 0U;
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetEncoderByNumber(enModuleArg, enChannelArg, (DMA_nCH_ENCODER*) &uxEncoder);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        UBase_t uxTrigger = uxEncoder;
        uxTrigger <<= 8UL;
        uxTrigger |= (UBase_t) enChannelArg;
        *penChannelTriggerArg = (DMA_nCH_TRIGGER) uxTrigger;
    }
    return (enErrorReg);
}
