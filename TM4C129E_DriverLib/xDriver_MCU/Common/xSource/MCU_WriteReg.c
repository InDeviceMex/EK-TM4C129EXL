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

void MCU__vWriteRegister_RAM(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister,
                             uint32_t u32FeatureValue, uint32_t u32MaskFeature,
                             uint32_t u32BitFeature)
{
    MCU_nENABLE enStatus = MCU_enENABLE_ENA;
    uint32_t u32Reg = u32FeatureValue;
    volatile uint32_t* pu32Peripheral = 0UL;

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
    MCU__vSetGlobalInterrupt(enStatus);
}
