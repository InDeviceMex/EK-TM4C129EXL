/**
 *
 * @file PWM_Compare.c
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
 * @verbatim 27 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/PWM/xHeader/PWM_Compare.h>

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Dependencies.h>

void PWM_Generator__vSetCompareAPercentage(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             uint32_t u32CompareArg)
{
    uint32_t u32PercentageReg = 0UL;
    uint32_t u32LoadReg = 0UL;
    uint32_t u32CompareReg = 0UL;

    u32PercentageReg = MCU__u32CheckParams(u32CompareArg, 100UL + 1UL);
    u32LoadReg = PWM_Generator__u32GetLoad(enModule, enGenerator);
    u32LoadReg++;
    u32CompareReg = u32PercentageReg;
    u32CompareReg *= u32LoadReg;
    u32CompareReg /= 100UL;
    u32CompareReg--;
    PWM_Generator__vSetCompareA(enModule, enGenerator, u32CompareReg);
}

uint32_t PWM_Generator__u32GetCompareAPercentage(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    uint32_t u32PercentageReg = 0UL;
    uint32_t u32LoadReg = 0UL;
    uint32_t u32CompareReg = 0UL;

    u32LoadReg = PWM_Generator__u32GetLoad(enModule, enGenerator);
    u32LoadReg++;
    u32CompareReg = PWM_Generator__u32GetCompareA(enModule, enGenerator);
    u32CompareReg++;
    u32PercentageReg = u32CompareReg;
    u32PercentageReg *= 100UL;
    u32PercentageReg /= u32LoadReg;
    return (u32PercentageReg);
}

void PWM_Generator__vSetCompareBPercentage(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             uint32_t u32CompareArg)
{
    uint32_t u32PercentageReg = 0UL;
    uint32_t u32LoadReg = 0UL;
    uint32_t u32CompareReg = 0UL;

    u32PercentageReg = MCU__u32CheckParams(u32CompareArg, 100UL + 1UL);
    u32LoadReg = PWM_Generator__u32GetLoad(enModule, enGenerator);
    u32LoadReg++;
    u32CompareReg = u32PercentageReg;
    u32CompareReg *= u32LoadReg;
    u32CompareReg /= 100UL;
    u32CompareReg--;
    PWM_Generator__vSetCompareB(enModule, enGenerator, u32CompareReg);
}

uint32_t PWM_Generator__u32GetCompareBPercentage(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    uint32_t u32PercentageReg = 0UL;
    uint32_t u32LoadReg = 0UL;
    uint32_t u32CompareReg = 0UL;

    u32LoadReg = PWM_Generator__u32GetLoad(enModule, enGenerator);
    u32LoadReg++;
    u32CompareReg = PWM_Generator__u32GetCompareB(enModule, enGenerator);
    u32CompareReg++;
    u32PercentageReg = u32CompareReg;
    u32PercentageReg *= 100UL;
    u32PercentageReg /= u32LoadReg;
    return (u32PercentageReg);
}


void PWM_Generator__vSetComparePercentage(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             PWM_nOUTPUT enOutputArg, uint32_t u32CompareArg)
{
    switch(enOutputArg)
    {
        case PWM_enOUTPUT_NONE:
            break;
        case PWM_enOUTPUT_A:
            PWM_Generator__vSetCompareAPercentage(enModule, enGenerator, u32CompareArg);
            break;
        case PWM_enOUTPUT_B:
            PWM_Generator__vSetCompareBPercentage(enModule, enGenerator, u32CompareArg);
            break;
        case PWM_enOUTPUT_BOTH:
            PWM_Generator__vSetCompareAPercentage(enModule, enGenerator, u32CompareArg);
            PWM_Generator__vSetCompareBPercentage(enModule, enGenerator, u32CompareArg);
            break;
        default:
            break;
    }
}

uint32_t PWM_Generator__u32GetComparePercentage(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                      PWM_nOUTPUT enOutputArg)
{
    uint32_t u32CompareReg = 0UL;
    switch(enOutputArg)
    {
        case PWM_enOUTPUT_NONE:
            break;
        case PWM_enOUTPUT_A:
            u32CompareReg = PWM_Generator__u32GetCompareAPercentage(enModule, enGenerator);
            break;
        case PWM_enOUTPUT_B:
            u32CompareReg = PWM_Generator__u32GetCompareBPercentage(enModule, enGenerator);
            break;
        case PWM_enOUTPUT_BOTH:
            break;
        default:
            break;
    }
    return (u32CompareReg);
}
