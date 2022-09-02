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
#pragma  CODE_SECTION(MCU__enWriteRegister_RAM, ".ramcode")

MCU_nERROR MCU__enWriteRegister_RAM(const MCU_Register_t* const pstRegisterDataArg);
void MCU__vWriteRegister_RAM(uint32_t u32PeripheralBase,
                             uint32_t u32OffsetRegister,
                             uint32_t u32FeatureValue,
                             uint32_t u32MaskFeature,
                             uint32_t u32BitFeature);
#elif defined (__GNUC__ )

__attribute__((section(".ramcode")))
MCU_nERROR MCU__enWriteRegister_RAM(const MCU_Register_t* const pstRegisterDataArg);
void MCU__vWriteRegister_RAM(uint32_t u32PeripheralBase,
                             uint32_t u32OffsetRegister,
                             uint32_t u32FeatureValue,
                             uint32_t u32MaskFeature,
                             uint32_t u32BitFeature) ;
#endif

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-8.5")
#endif

MCU_nERROR MCU__enWriteRegister(const MCU_Register_t* const pstRegisterDataArg);
MCU_nERROR MCU__enWriteRegister_Direct(const MCU_Register_t* const pstRegisterDataArg);

inline void MCU__vWriteRegisterNew(const MCU_Register_t* const pstRegisterDataArg);
inline void MCU__vWriteRegister_DirectNew(const MCU_Register_t* const pstRegisterDataArg);

inline void MCU__vWriteRegister(uint32_t u32PeripheralBase,
                                uint32_t u32OffsetRegister,
                                uint32_t u32FeatureValue,
                                uint32_t u32MaskFeature,
                                uint32_t u32BitFeature);
inline void MCU__vWriteRegister_Direct(uint32_t u32PeripheralBase,
                                       uint32_t u32OffsetRegister,
                                       uint32_t u32FeatureValue,
                                       uint32_t u32MaskFeature,
                                       uint32_t u32BitFeature);

inline void MCU__vWriteRegisterNew(const MCU_Register_t* const pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    MCU_nENABLE enStatus;
    uint32_t u32RegisterShift;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u32RegisterShift = pstRegisterDataArg->u32Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        enStatus = MCU__enDisGlobalInterrupt();
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
        *pu32RegisterAddress = (uint32_t) u32Reg;
        MCU__vSetGlobalInterrupt(enStatus);
    }
}

inline void MCU__vWriteRegister_DirectNew(const MCU_Register_t* const pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    MCU_nENABLE enStatus;
    uint32_t u32RegisterShift;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u32RegisterShift = pstRegisterDataArg->u32Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        enStatus = MCU__enDisGlobalInterrupt();
        u32Reg = u32RegisterValue;
        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        u32RegisterValue &= u32RegisterMask;
        u32RegisterValue <<= u32RegisterShift;
        *pu32RegisterAddress = u32Reg;
        MCU__vSetGlobalInterrupt(enStatus);
    }
}



inline void MCU__vWriteRegister(uint32_t u32PeripheralBase,
                                uint32_t u32OffsetRegister,
                                uint32_t u32FeatureValue,
                                uint32_t u32MaskFeature,
                                uint32_t u32BitFeature)
{
    uint32_t u32Reg = u32FeatureValue;
    volatile uint32_t* pu32Peripheral = 0UL;
    MCU_nENABLE enStatus = MCU_enENABLE_ENA;

    u32PeripheralBase += u32OffsetRegister;
    enStatus = MCU__enDisGlobalInterrupt();
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

    (*pu32Peripheral) = (uint32_t) u32Reg;
    (void) MCU__vSetGlobalInterrupt(enStatus);
}

inline void MCU__vWriteRegister_Direct(uint32_t u32PeripheralBase,
                                       uint32_t u32OffsetRegister,
                                       uint32_t u32FeatureValue,
                                       uint32_t u32MaskFeature,
                                       uint32_t u32BitFeature)
{
    MCU_nENABLE enStatus = MCU_enENABLE_ENA;
    volatile uint32_t* pu32Peripheral = 0UL;

    u32PeripheralBase += u32OffsetRegister;
    enStatus = MCU__enDisGlobalInterrupt();
    pu32Peripheral = (volatile uint32_t*) u32PeripheralBase;
    /*Get Value in bit position*/
    u32FeatureValue &= u32MaskFeature;
    u32FeatureValue <<= u32BitFeature;
    (*pu32Peripheral) = (uint32_t) u32FeatureValue;
    MCU__vSetGlobalInterrupt(enStatus);
}


#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("8.5")
#endif

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_WRITEREG_H_ */
