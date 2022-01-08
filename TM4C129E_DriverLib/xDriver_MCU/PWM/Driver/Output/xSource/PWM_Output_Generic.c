/**
 *
 * @file PWM_Output_Generic.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 3 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Output/xHeader/PWM_Output_Generic.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Primitives/PWM_Primitives.h>

void PWM_Output__vSetGeneric(uint32_t u32Module, uint32_t u32OffsetRegister,
                               uint32_t u32OutputNumber, uint32_t u32Feature,
                               uint32_t u32FeatureBit)
{
    uint32_t u32OutputReg = 0UL;
    u32OutputReg = u32OutputNumber;
    u32OutputReg &= (uint32_t) PWM_enOUTPUT_NUMBER_ALL;
    if(0UL != u32Feature)
    {
        PWM__vWriteRegister((PWM_nMODULE) u32Module, u32OffsetRegister,
                            u32OutputReg, u32OutputReg, u32FeatureBit);
    }
    else
    {
        PWM__vWriteRegister((PWM_nMODULE) u32Module, u32OffsetRegister, 0UL,
                            u32OutputReg, u32FeatureBit);
    }
}

uint32_t PWM_Output__u32GetGeneric(uint32_t u32Module, uint32_t u32OffsetRegister,
                               uint32_t u32OutputNumber, uint32_t u32FeatureBit)
{
    uint32_t u32FeatureReg = 0UL;
    uint32_t u32OutputReg = 0UL;
    u32OutputReg = u32OutputNumber;
    u32OutputReg &= (uint32_t) PWM_enOUTPUT_NUMBER_ALL;
    u32FeatureReg = PWM__u32ReadRegister((PWM_nMODULE) u32Module, u32OffsetRegister, u32OutputReg, u32FeatureBit);
    return (u32FeatureReg);
}

void PWM_Output__vSetGenericBit(uint32_t u32Module, uint32_t u32OffsetRegister,
                                  uint32_t u32Generator, uint32_t u32Feature,
                                  uint32_t u32FeatureMask, uint32_t u32FeatureBitMult,
                                  uint32_t u32FeatureBitAdd)
{
    uint32_t u32GeneratorReg = 0UL;
    u32GeneratorReg = MCU__u32CheckParams(u32Generator, (uint32_t) PWM_enGEN_MAX);
    u32GeneratorReg *= u32FeatureBitMult;
    u32GeneratorReg += u32FeatureBitAdd;
    PWM__vWriteRegister((PWM_nMODULE) u32Module, u32OffsetRegister, u32Feature,
                        u32FeatureMask, u32GeneratorReg);
}

uint32_t PWM_Output__u32GetGenericBit(uint32_t u32Module, uint32_t u32OffsetRegister,
                                        uint32_t u32Generator, uint32_t u32FeatureMask,
                                        uint32_t u32FeatureBitMult, uint32_t u32FeatureBitAdd)
{
    uint32_t u32Feature = 0UL;
    uint32_t u32GeneratorReg = 0UL;
    u32GeneratorReg = MCU__u32CheckParams(u32Generator, (uint32_t) PWM_enGEN_MAX);
    u32GeneratorReg *= u32FeatureBitMult;
    u32GeneratorReg += u32FeatureBitAdd;
    u32Feature = PWM__u32ReadRegister((PWM_nMODULE) u32Module , u32OffsetRegister,
                                      u32FeatureMask, u32GeneratorReg);
    return (u32Feature);
}

