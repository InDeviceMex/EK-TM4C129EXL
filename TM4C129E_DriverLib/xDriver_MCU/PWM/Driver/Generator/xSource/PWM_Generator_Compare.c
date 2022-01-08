/**
 *
 * @file PWM_Generator_Compare.c
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
 * @verbatim 7 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Compare.h>

#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Generator__vSetCompareA(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             uint32_t u32CompareArg)
{
    PWM_Generator__vSetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_CMPA_OFFSET,
                               u32CompareArg, PWM_GEN_CMPA_COMPA_MASK, PWM_GEN_CMPA_R_COMPA_BIT);
}

uint32_t PWM_Generator__u32GetCompareA(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    uint32_t u32CompareReg = 0UL;
    u32CompareReg = PWM_Generator__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CMPA_OFFSET,
                                       PWM_GEN_CMPA_COMPA_MASK,
                                       PWM_GEN_CMPA_R_COMPA_BIT);
    return (u32CompareReg);
}

void PWM_Generator__vSetCompareB(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             uint32_t u32CompareArg)
{
    PWM_Generator__vSetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_CMPB_OFFSET,
                               u32CompareArg, PWM_GEN_CMPB_COMPB_MASK, PWM_GEN_CMPB_R_COMPB_BIT);
}

uint32_t PWM_Generator__u32GetCompareB(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    uint32_t u32CompareReg = 0UL;
    u32CompareReg = PWM_Generator__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CMPB_OFFSET,
                                       PWM_GEN_CMPB_COMPB_MASK,
                                       PWM_GEN_CMPB_R_COMPB_BIT);
    return (u32CompareReg);
}


void PWM_Generator__vSetCompare(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             PWM_nOUTPUT enOutputArg, uint32_t u32CompareArg)
{
    switch(enOutputArg)
    {
        case PWM_enOUTPUT_NONE:
            break;
        case PWM_enOUTPUT_A:
            PWM_Generator__vSetCompareA(enModule, enGenerator, u32CompareArg);
            break;
        case PWM_enOUTPUT_B:
            PWM_Generator__vSetCompareB(enModule, enGenerator, u32CompareArg);
            break;
        case PWM_enOUTPUT_BOTH:
            PWM_Generator__vSetCompareA(enModule, enGenerator, u32CompareArg);
            PWM_Generator__vSetCompareB(enModule, enGenerator, u32CompareArg);
            break;
        default:
            break;
    }
}

uint32_t PWM_Generator__u32GetCompare(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                      PWM_nOUTPUT enOutputArg)
{
    uint32_t u32CompareReg = 0UL;
    switch(enOutputArg)
    {
        case PWM_enOUTPUT_NONE:
            break;
        case PWM_enOUTPUT_A:
            u32CompareReg = PWM_Generator__u32GetCompareA(enModule, enGenerator);
            break;
        case PWM_enOUTPUT_B:
            u32CompareReg = PWM_Generator__u32GetCompareB(enModule, enGenerator);
            break;
        case PWM_enOUTPUT_BOTH:
            break;
        default:
            break;
    }
    return (u32CompareReg);
}
