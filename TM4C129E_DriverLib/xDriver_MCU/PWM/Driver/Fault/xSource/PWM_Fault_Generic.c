/**
 *
 * @file PWM_Fault_Generic.c
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
 * @verbatim 8 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Fault/xHeader/PWM_Fault_Generic.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Primitives/PWM_Primitives.h>

void PWM_Fault__vSetGeneric(uint32_t u32Module, uint32_t  u32Generator,
                            uint32_t u32OffsetRegister, uint32_t u32Feature,
                            uint32_t u32FeatureMask, uint32_t u32FeatureBit)
{
    uint32_t u32GeneratorReg = 0UL;

    u32GeneratorReg = MCU__u32CheckParams(u32Generator, (uint32_t) PWM_enGEN_MAX);


    u32GeneratorReg *= PWM_GEN_REGISTER_NUM; /*Add offset for generators*/
    u32GeneratorReg *= 4UL;
    u32GeneratorReg += PWM_GEN_REGISTER_BASE_OFFSET;
    u32GeneratorReg += u32OffsetRegister;

    PWM__vWriteRegister((PWM_nMODULE) u32Module , u32GeneratorReg, u32Feature,
                        u32FeatureMask, u32FeatureBit);
}

uint32_t PWM_Fault__u32GetGeneric(uint32_t u32Module, uint32_t  u32Generator,
                                  uint32_t u32OffsetRegister,
                                  uint32_t u32FeatureMask, uint32_t u32FeatureBit)
{
    uint32_t u32Feature = 0UL;
    uint32_t u32GeneratorReg = 0UL;

    u32GeneratorReg = MCU__u32CheckParams(u32Generator, (uint32_t) PWM_enGEN_MAX);

    u32GeneratorReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
    u32GeneratorReg *= 4UL;
    u32GeneratorReg += PWM_GEN_REGISTER_BASE_OFFSET;
    u32GeneratorReg += u32OffsetRegister;

    u32Feature = PWM__u32ReadRegister((PWM_nMODULE) u32Module , u32GeneratorReg,
                                      u32FeatureMask, u32FeatureBit);
    return (u32Feature);
}



