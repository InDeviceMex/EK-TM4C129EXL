/**
 *
 * @file PWM_InterruptSource_Output.c
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
 * @verbatim 26 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Interrupt/xHeader/PWM_InterruptSource_Output.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Primitives/PWM_Primitives.h>

void PWM_Output__vEnInterruptSource(PWM_nMODULE enModule, PWM_nGENERATOR enGeneratorArg,
                                PWM_nGEN_INT_SOURCE enPwnIntArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32GeneratorReg = 0UL;
    uint32_t u32PwnIntReg = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32GeneratorReg = MCU__u32CheckParams((uint32_t) enGeneratorArg, (uint32_t) PWM_enGEN_MAX);
    u32PwnIntReg = (uint32_t) enPwnIntArg;
    u32PwnIntReg &= (uint32_t) PWM_enGEN_INT_SOURCE_ALL;

    u32GeneratorReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
    u32GeneratorReg *= 4UL;
    u32GeneratorReg += PWM_GEN_REGISTER_BASE_OFFSET;
    u32GeneratorReg += PWM_GEN_INTEN_OFFSET;

    PWM__vWriteRegister((PWM_nMODULE) u32Module , u32GeneratorReg,
                        u32PwnIntReg, u32PwnIntReg, PWM_GEN_INTEN_R_INTCNTZERO_BIT);
}

void PWM_Output__vEnMaskInterruptSource(PWM_nMODULE enModule, PWM_nGENMASK enGenMaskArg,
                                    PWM_nGEN_INT_SOURCE enPwnIntArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32GenMaskReg = 0UL;
    uint32_t u32Generator = 0UL;
    uint32_t u32GeneratorReg = 0UL;
    uint32_t u32PwnIntReg = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32GenMaskReg = (uint32_t) enGenMaskArg;
    u32GenMaskReg &= (uint32_t) PWM_enGENMASK_MAX;
    u32PwnIntReg = (uint32_t) enPwnIntArg;
    u32PwnIntReg &= (uint32_t) PWM_enGEN_INT_SOURCE_ALL;
    while(0UL != u32GenMaskReg)
    {
        if(1UL & u32GenMaskReg)
        {
            u32GeneratorReg *= u32Generator; /*Add offset for input sequencer*/
            u32GeneratorReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
            u32GeneratorReg *= 4UL;
            u32GeneratorReg += PWM_GEN_REGISTER_BASE_OFFSET;
            u32GeneratorReg += PWM_GEN_INTEN_OFFSET;

            PWM__vWriteRegister((PWM_nMODULE) u32Module , u32GeneratorReg,
                                u32PwnIntReg, u32PwnIntReg, PWM_GEN_INTEN_R_INTCNTZERO_BIT);

        }
        u32GenMaskReg >>= 1UL;
        u32Generator++;
    }
}

void PWM_Output__vDisInterruptSource(PWM_nMODULE enModule, PWM_nGENERATOR enGeneratorArg,
                                PWM_nGEN_INT_SOURCE enPwnIntArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32GeneratorReg = 0UL;
    uint32_t u32PwnIntReg = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32GeneratorReg = MCU__u32CheckParams((uint32_t) enGeneratorArg, (uint32_t) PWM_enGEN_MAX);
    u32PwnIntReg = (uint32_t) enPwnIntArg;
    u32PwnIntReg &= (uint32_t) PWM_enGEN_INT_SOURCE_ALL;

    u32GeneratorReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
    u32GeneratorReg *= 4UL;
    u32GeneratorReg += PWM_GEN_REGISTER_BASE_OFFSET;
    u32GeneratorReg += PWM_GEN_INTEN_OFFSET;

    PWM__vWriteRegister((PWM_nMODULE) u32Module , u32GeneratorReg,
                        0UL, u32PwnIntReg, PWM_GEN_INTEN_R_INTCNTZERO_BIT);
}

void PWM_Output__vDisMaskInterruptSource(PWM_nMODULE enModule, PWM_nGENMASK enGenMaskArg,
                                    PWM_nGEN_INT_SOURCE enPwnIntArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32GenMaskReg = 0UL;
    uint32_t u32Generator = 0UL;
    uint32_t u32GeneratorReg = 0UL;
    uint32_t u32PwnIntReg = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32GenMaskReg = (uint32_t) enGenMaskArg;
    u32GenMaskReg &= (uint32_t) PWM_enGENMASK_MAX;
    u32PwnIntReg = (uint32_t) enPwnIntArg;
    u32PwnIntReg &= (uint32_t) PWM_enGEN_INT_SOURCE_ALL;
    while(0UL != u32GenMaskReg)
    {
        if(1UL & u32GenMaskReg)
        {
            u32GeneratorReg *= u32Generator; /*Add offset for input sequencer*/
            u32GeneratorReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
            u32GeneratorReg *= 4UL;
            u32GeneratorReg += PWM_GEN_REGISTER_BASE_OFFSET;
            u32GeneratorReg += PWM_GEN_INTEN_OFFSET;

            PWM__vWriteRegister((PWM_nMODULE) u32Module , u32GeneratorReg,
                                0UL, u32PwnIntReg, PWM_GEN_INTEN_R_INTCNTZERO_BIT);

        }
        u32GenMaskReg >>= 1UL;
        u32Generator++;
    }
}

void PWM_Output__vClearInterruptSource(PWM_nMODULE enModule, PWM_nGENERATOR enGeneratorArg,
                                PWM_nGEN_INT_SOURCE enPwnIntArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32GeneratorReg = 0UL;
    uint32_t u32PwnIntReg = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32GeneratorReg = MCU__u32CheckParams((uint32_t) enGeneratorArg, (uint32_t) PWM_enGEN_MAX);
    u32PwnIntReg = (uint32_t) enPwnIntArg;
    u32PwnIntReg &= (uint32_t) PWM_enGEN_INT_SOURCE_ALL;

    u32GeneratorReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
    u32GeneratorReg *= 4UL;
    u32GeneratorReg += PWM_GEN_REGISTER_BASE_OFFSET;
    u32GeneratorReg += PWM_GEN_ISC_OFFSET;

    PWM__vWriteRegister((PWM_nMODULE) u32Module , u32GeneratorReg,
                        u32PwnIntReg, u32PwnIntReg, PWM_GEN_ISC_R_INTCNTZERO_BIT);
}

void PWM_Output__vClearMaskInterruptSource(PWM_nMODULE enModule, PWM_nGENMASK enGenMaskArg,
                                    PWM_nGEN_INT_SOURCE enPwnIntArg)
{
    uint32_t u32Module = 0UL;
    uint32_t u32GenMaskReg = 0UL;
    uint32_t u32Generator = 0UL;
    uint32_t u32GeneratorReg = 0UL;
    uint32_t u32PwnIntReg = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32GenMaskReg = (uint32_t) enGenMaskArg;
    u32GenMaskReg &= (uint32_t) PWM_enGENMASK_MAX;
    u32PwnIntReg = (uint32_t) enPwnIntArg;
    u32PwnIntReg &= (uint32_t) PWM_enGEN_INT_SOURCE_ALL;
    while(0UL != u32GenMaskReg)
    {
        if(1UL & u32GenMaskReg)
        {
            u32GeneratorReg *= u32Generator; /*Add offset for input sequencer*/
            u32GeneratorReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
            u32GeneratorReg *= 4UL;
            u32GeneratorReg += PWM_GEN_REGISTER_BASE_OFFSET;
            u32GeneratorReg += PWM_GEN_ISC_OFFSET;

            PWM__vWriteRegister((PWM_nMODULE) u32Module , u32GeneratorReg,
                                u32PwnIntReg, u32PwnIntReg, PWM_GEN_ISC_R_INTCNTZERO_BIT);

        }
        u32GenMaskReg >>= 1UL;
        u32Generator++;
    }
}

PWM_nGEN_INT_SOURCE PWM_Output__enStatusInterruptSource(PWM_nMODULE enModule, PWM_nGENERATOR enGeneratorArg,
                                PWM_nGEN_INT_SOURCE enPwnIntArg)
{
    PWM_nGEN_INT_SOURCE enInterruptReg = PWM_enGEN_INT_SOURCE_NONE;
    uint32_t u32Register = 0UL;
    uint32_t u32Module = 0UL;
    uint32_t u32GeneratorReg = 0UL;
    uint32_t u32PwnIntReg = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);
    u32GeneratorReg = MCU__u32CheckParams((uint32_t) enGeneratorArg, (uint32_t) PWM_enGEN_MAX);
    u32PwnIntReg = (uint32_t) enPwnIntArg;
    u32PwnIntReg &= (uint32_t) PWM_enGEN_INT_SOURCE_ALL;

    u32GeneratorReg *= PWM_GEN_REGISTER_NUM; /*Add offset for input sequencer*/
    u32GeneratorReg *= 4UL;
    u32GeneratorReg += PWM_GEN_REGISTER_BASE_OFFSET;
    u32GeneratorReg += PWM_GEN_RIS_OFFSET;

    u32Register = PWM__u32ReadRegister((PWM_nMODULE) u32Module , u32GeneratorReg,
                        u32PwnIntReg, PWM_GEN_RIS_R_INTCNTZERO_BIT);
    enInterruptReg = (PWM_nGEN_INT_SOURCE) u32Register;
    return (enInterruptReg);
}
