/**
 *
 * @file MCU_ReadReg.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Common/xHeader/MCU_ReadReg.h>

MCU_nERROR MCU__enReadRegister(MCU_Register_t* pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    MCU_nERROR enErrorReg;
    uint32_t u32RegisterShift;

    if(0UL != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u32RegisterShift = pstRegisterDataArg->u32Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        u32RegisterValue = *pu32RegisterAddress;
        if(MCU_MASK_32 != u32RegisterMask)
        {
            u32RegisterValue >>= u32RegisterShift;
            u32RegisterValue &= u32RegisterMask;
        }
        pstRegisterDataArg->u32Value = (uint32_t) u32RegisterValue;
        enErrorReg = MCU_enERROR_OK;
    }
    else
    {
        enErrorReg = MCU_enERROR_POINTER;
    }

    return (enErrorReg);
}


MCU_nERROR MCU__enReadRegister_RAM(MCU_Register_t* pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    MCU_nERROR enErrorReg;
    uint32_t u32RegisterShift;

    if(0UL != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u32RegisterShift = pstRegisterDataArg->u32Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        u32RegisterValue = *pu32RegisterAddress;
        if(MCU_MASK_32 != u32RegisterMask)
        {
            u32RegisterValue >>= u32RegisterShift;
            u32RegisterValue &= u32RegisterMask;
        }
        pstRegisterDataArg->u32Value = (uint32_t) u32RegisterValue;
        enErrorReg = MCU_enERROR_OK;
    }
    else
    {
        enErrorReg = MCU_enERROR_POINTER;
    }

    return (enErrorReg);
}

uint32_t MCU__u32ReadRegister(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister,
                              uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32FeatureValue = 0UL;
    volatile uint32_t* pu32Peripheral = 0UL;

    u32PeripheralBase += u32OffsetRegister;
    pu32Peripheral = (volatile uint32_t*) (u32PeripheralBase);

    u32FeatureValue = *pu32Peripheral;

    if(0xFFFFFFFFUL != u32MaskFeature)
    {
        u32FeatureValue >>= u32BitFeature;
        u32FeatureValue &= u32MaskFeature;
    }
    return (u32FeatureValue);
}


uint32_t MCU__u32ReadRegister_RAM(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister,
                                  uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32FeatureValue = 0UL;
    volatile uint32_t* pu32Peripheral = 0UL;

    u32PeripheralBase += u32OffsetRegister;
    pu32Peripheral = (volatile uint32_t*) (u32PeripheralBase);

    u32FeatureValue = *pu32Peripheral;

    if(0xFFFFFFFFUL != u32MaskFeature)
    {
        u32FeatureValue >>= u32BitFeature;
        u32FeatureValue &= u32MaskFeature;
    }
    return (u32FeatureValue);
}
