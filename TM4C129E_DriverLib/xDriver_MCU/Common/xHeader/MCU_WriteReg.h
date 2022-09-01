/**
 *
 * @file MCU_WriteReg.h
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
#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_WRITEREG_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_WRITEREG_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

#include <xDriver_MCU/Common/xHeader/MCU_Interrupt.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(MCU__vWriteRegister_RAM, ".ramcode")

MCU_nERROR MCU__enWriteRegister_RAM(MCU_Register_t* pstRegisterDataArg);

#elif defined (__GNUC__ )

__attribute__((section(".ramcode")))
MCU_nERROR MCU__enWriteRegister_RAM(MCU_Register_t* pstRegisterDataArg);

#endif

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-8.5")
#endif

MCU_nERROR MCU__enWriteRegister(MCU_Register_t* pstRegisterDataArg);
MCU_nERROR MCU__enWriteRegister_Direct(MCU_Register_t* pstRegisterDataArg);

inline void MCU__vWriteRegister(MCU_Register_t* pstRegisterDataArg);
inline void MCU__vWriteRegister_Direct(MCU_Register_t* pstRegisterDataArg);


inline void MCU__vWriteRegister(MCU_Register_t* pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    MCU_nENABLE enStatus;
    uint8_t u8RegisterShift;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u8RegisterShift = pstRegisterDataArg->u8Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

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
}

inline void MCU__vWriteRegister_Direct(MCU_Register_t* pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    MCU_nENABLE enStatus;
    uint8_t u8RegisterShift;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u8RegisterShift = pstRegisterDataArg->u8Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        enStatus = MCU__enDisGlobalInterrupt();
        u32Reg = u32RegisterValue;
        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        u32RegisterValue &= u32RegisterMask;
        u32RegisterValue <<= u8RegisterShift;
        *pu32RegisterAddress = u32Reg;
        (void) MCU__vSetGlobalInterrupt(enStatus);
    }
}

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("8.5")
#endif

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_WRITEREG_H_ */
