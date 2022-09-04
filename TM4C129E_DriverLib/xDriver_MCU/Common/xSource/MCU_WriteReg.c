/**
 *
 * @file MCU_WriteReg.c
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
#include <xDriver_MCU/Common/xHeader/MCU_WriteReg.h>

#include <xDriver_MCU/Common/xHeader/MCU_Interrupt.h>

MCU_nERROR MCU__enWriteRegister_RAM(const MCU_Register_t* const pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    MCU_nSTATE enStatus;
    MCU_nERROR enErrorReg;
    uint32_t u32RegisterShift;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u32RegisterShift = pstRegisterDataArg->u32Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        enErrorReg = MCU_enERROR_OK;
        u32Reg = u32RegisterValue;
        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        if(MCU_MASK_32 != u32RegisterMask)
        {
            u32Reg = *pu32RegisterAddress;
            u32RegisterValue &= u32RegisterMask;
            if(0U != u32RegisterShift)
            {
                u32RegisterValue <<= u32RegisterShift;
                u32RegisterMask <<= u32RegisterShift;
            }
            u32Reg &= ~u32RegisterMask;
            u32Reg |= u32RegisterValue;
        }
        enStatus = MCU__enDisGlobalInterrupt_RAM();
        *pu32RegisterAddress = (uint32_t) u32Reg;
        (void) MCU__vSetGlobalInterrupt_RAM(enStatus);
    }
    else
    {
        enErrorReg = MCU_enERROR_POINTER;
    }

    return (enErrorReg);
}


MCU_nERROR MCU__enWriteRegister(const MCU_Register_t* const pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    MCU_nSTATE enStatus;
    MCU_nERROR enErrorReg;
    uint32_t u32RegisterShift;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u32RegisterShift = pstRegisterDataArg->u32Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        enErrorReg = MCU_enERROR_OK;
        u32Reg = u32RegisterValue;
        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        if(MCU_MASK_32 != u32RegisterMask)
        {
            u32Reg = *pu32RegisterAddress;
            u32RegisterValue &= u32RegisterMask;
            if(0U != u32RegisterShift)
            {
                u32RegisterValue <<= u32RegisterShift;
                u32RegisterMask <<= u32RegisterShift;
            }
            u32Reg &= ~u32RegisterMask;
            u32Reg |= u32RegisterValue;
        }
        enStatus = MCU__enDisGlobalInterrupt();
        *pu32RegisterAddress = (uint32_t) u32Reg;
        (void) MCU__vSetGlobalInterrupt(enStatus);
    }
    else
    {
        enErrorReg = MCU_enERROR_POINTER;
    }

    return (enErrorReg);
}

MCU_nERROR MCU__enWriteRegister_Direct(const MCU_Register_t* const pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    MCU_nSTATE enStatus;
    MCU_nERROR enErrorReg;
    uint32_t u32RegisterShift;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u32RegisterShift = pstRegisterDataArg->u32Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        enErrorReg = MCU_enERROR_OK;
        u32Reg = u32RegisterValue;
        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        u32RegisterValue &= u32RegisterMask;
        u32RegisterValue <<= u32RegisterShift;
        enStatus = MCU__enDisGlobalInterrupt();
        *pu32RegisterAddress = u32Reg;
        (void) MCU__vSetGlobalInterrupt(enStatus);
    }
    else
    {
        enErrorReg = MCU_enERROR_POINTER;
    }

    return (enErrorReg);
}

void MCU__vWriteRegister_RAM(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister,
                             uint32_t u32FeatureValue, uint32_t u32MaskFeature,
                             uint32_t u32BitFeature)
{
    MCU_nSTATE enStatus = MCU_enSTATE_ENA;
    uint32_t u32Reg = u32FeatureValue;
    volatile uint32_t* pu32Peripheral = 0UL;

    u32PeripheralBase += u32OffsetRegister;
    pu32Peripheral = (volatile uint32_t*) u32PeripheralBase;
    if(0xFFFFFFFFUL != u32MaskFeature)
    {
        u32Reg = *pu32Peripheral;
        /*Get Value in bit position*/
        u32FeatureValue &= u32MaskFeature;
        if(0UL != u32BitFeature)
        {
            u32FeatureValue <<= u32BitFeature;
            /*Get Value to clear*/
            u32MaskFeature <<= u32BitFeature;
        }
        u32Reg &= ~u32MaskFeature;
        u32Reg |= u32FeatureValue;
    }
    enStatus = MCU__enDisGlobalInterrupt();
    (*pu32Peripheral) = (uint32_t) u32Reg;
    MCU__vSetGlobalInterrupt(enStatus);
}
