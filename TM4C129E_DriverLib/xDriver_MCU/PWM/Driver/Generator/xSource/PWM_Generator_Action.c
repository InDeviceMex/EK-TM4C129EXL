/**
 *
 * @file PWM_Generator_Action.c
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
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Action.h>

#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Generator__vSetOutputActionA(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nEVENT enEventArg, PWM_nACTION enActionArg)
{
    uint32_t u32BitOffset = 0UL;

    u32BitOffset = (uint32_t) enEventArg;
    u32BitOffset *= PWM_GEN_GENA_R_ACTLOAD_BIT;
    PWM_Generator__vSetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_GENA_OFFSET,
                               (uint32_t) enActionArg, PWM_GEN_GENA_ACTLOAD_MASK, u32BitOffset);
}

PWM_nACTION PWM_Generator__enGetOutputActionA(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nEVENT enEventArg)
{
    PWM_nACTION enActionReg = PWM_enACTION_NOTHING;
    uint32_t u32BitOffset = 0UL;

    u32BitOffset = (uint32_t) enEventArg;
    u32BitOffset *= PWM_GEN_GENA_R_ACTLOAD_BIT;
    enActionReg = (PWM_nACTION) PWM_Generator__u32GetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_GENA_OFFSET,
                                PWM_GEN_GENA_ACTLOAD_MASK, u32BitOffset);
    return (enActionReg);
}

void PWM_Generator__vSetOutputActionB(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nEVENT enEventArg, PWM_nACTION enActionArg)
{
    uint32_t u32BitOffset = 0UL;

    u32BitOffset = (uint32_t) enEventArg;
    u32BitOffset *= PWM_GEN_GENB_R_ACTLOAD_BIT;
    PWM_Generator__vSetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_GENB_OFFSET,
                               (uint32_t) enActionArg, PWM_GEN_GENB_ACTLOAD_MASK, u32BitOffset);
}

PWM_nACTION PWM_Generator__enGetOutputActionB(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nEVENT enEventArg)
{
    PWM_nACTION enActionReg = PWM_enACTION_NOTHING;
    uint32_t u32BitOffset = 0UL;

    u32BitOffset = (uint32_t) enEventArg;
    u32BitOffset *= PWM_GEN_GENB_R_ACTLOAD_BIT;
    enActionReg = (PWM_nACTION) PWM_Generator__u32GetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_GENB_OFFSET,
                                PWM_GEN_GENB_ACTLOAD_MASK, u32BitOffset);
    return (enActionReg);
}


void PWM_Generator__vSetOutputAction(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             PWM_nOUTPUT enOutputArg, PWM_nEVENT enEventArg, PWM_nACTION enActionArg)
{
    switch(enOutputArg)
    {
        case PWM_enOUTPUT_NONE:
            break;
        case PWM_enOUTPUT_A:
            PWM_Generator__vSetOutputActionA(enModule, enGenerator, enEventArg, enActionArg);
            break;
        case PWM_enOUTPUT_B:
            PWM_Generator__vSetOutputActionB(enModule, enGenerator, enEventArg, enActionArg);
            break;
        case PWM_enOUTPUT_BOTH:
            PWM_Generator__vSetOutputActionA(enModule, enGenerator, enEventArg, enActionArg);
            PWM_Generator__vSetOutputActionB(enModule, enGenerator, enEventArg, enActionArg);
            break;
        default:
            break;
    }
}

PWM_nACTION PWM_Generator__enGetOutputAction(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                      PWM_nOUTPUT enOutputArg, PWM_nEVENT enActionArg)
{
    PWM_nACTION enOutputActionReg = PWM_enACTION_NOTHING;
    switch(enOutputArg)
    {
        case PWM_enOUTPUT_NONE:
            break;
        case PWM_enOUTPUT_A:
            enOutputActionReg = PWM_Generator__enGetOutputActionA(enModule, enGenerator, enActionArg);
            break;
        case PWM_enOUTPUT_B:
            enOutputActionReg = PWM_Generator__enGetOutputActionB(enModule, enGenerator, enActionArg);
            break;
        case PWM_enOUTPUT_BOTH:
            break;
        default:
            break;
    }
    return (enOutputActionReg);
}

