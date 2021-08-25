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

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(MCU__vWriteRegister_RAM, ".ramcode")

void MCU__vWriteRegister_RAM(uint32_t u32PeripheralBase,
                             uint32_t u32OffsetRegister,
                             uint32_t u32FeatureValue,
                             uint32_t u32MaskFeature,
                             uint32_t u32BitFeature);

#elif defined (__GNUC__ )

__attribute__((section(".ramcode")))
void MCU__vWriteRegister_RAM(uint32_t u32PeripheralBase,
                             uint32_t u32OffsetRegister,
                             uint32_t u32FeatureValue,
                             uint32_t u32MaskFeature,
                             uint32_t u32BitFeature) ;

#endif

#if defined (__TI_ARM__ )
    #pragma CHECK_MISRA("-8.5")
#endif

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
        u32FeatureValue <<= u32BitFeature;

        /*Get Value to clear*/
        u32MaskFeature <<= u32BitFeature;

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

#if defined (__TI_ARM__ )
    #pragma RESET_MISRA("8.5")
#endif

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_WRITEREG_H_ */
