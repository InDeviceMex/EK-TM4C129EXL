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

MCU_nERROR MCU__enWriteRegister_RAM(MCU_Register_t* pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    MCU_nENABLE enStatus;
    MCU_nERROR enErrorReg;
    uint8_t u8RegisterShift;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u8RegisterShift = pstRegisterDataArg->u8Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        enErrorReg = MCU_enERROR_OK;
        enStatus = MCU__enDisGlobalInterrupt_RAM();
        u32Reg = u32RegisterValue;
        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        if(MCU_MASK_32 != u32RegisterMask)
        {
            u32Reg = *pu32RegisterAddress;
            u32RegisterValue &= u32RegisterMask;
            if(0U != u8RegisterShift)
            {
                u32RegisterValue <<= u8RegisterShift;
                u32RegisterMask <<= u8RegisterShift;
            }
            u32Reg &= ~u32RegisterMask;
            u32Reg |= u32RegisterValue;
        }
        *pu32RegisterAddress = u32Reg;
        (void) MCU__vSetGlobalInterrupt_RAM(enStatus);
    }
    else
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
}


MCU_nERROR MCU__enWriteRegister(MCU_Register_t* pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    MCU_nENABLE enStatus;
    MCU_nERROR enErrorReg;
    uint8_t u8RegisterShift;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u8RegisterShift = pstRegisterDataArg->u8Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        enErrorReg = MCU_enERROR_OK;
        enStatus = MCU__enDisGlobalInterrupt();
        u32Reg = u32RegisterValue;
        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        if(MCU_MASK_32 != u32RegisterMask)
        {
            u32Reg = *pu32RegisterAddress;
            u32RegisterValue &= u32RegisterMask;
            if(0U != u8RegisterShift)
            {
                u32RegisterValue <<= u8RegisterShift;
                u32RegisterMask <<= u8RegisterShift;
            }
            u32Reg &= ~u32RegisterMask;
            u32Reg |= u32RegisterValue;
        }
        *pu32RegisterAddress = u32Reg;
        (void) MCU__vSetGlobalInterrupt(enStatus);
    }
    else
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
}

MCU_nERROR MCU__enWriteRegister_Direct(MCU_Register_t* pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    MCU_nENABLE enStatus;
    MCU_nERROR enErrorReg;
    uint8_t u8RegisterShift;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u8RegisterShift = pstRegisterDataArg->u8Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        enErrorReg = MCU_enERROR_OK;
        enStatus = MCU__enDisGlobalInterrupt();
        u32Reg = u32RegisterValue;
        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        u32RegisterValue &= u32RegisterMask;
        u32RegisterValue <<= u8RegisterShift;
        *pu32RegisterAddress = u32Reg;
        (void) MCU__vSetGlobalInterrupt(enStatus);
    }
    else
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
}
