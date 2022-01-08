/**
 *
 * @file PWM_Generator_Update.c
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
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Update.h>

#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Generator__vSetLoadUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nGENERATOR_UPDATE enLoadUpdateArg)
{
    uint32_t u32LoadUpdateReg = 0UL;
    if((uint32_t) PWM_enGENERATOR_UPDATE_LOCAL <= (uint32_t) enLoadUpdateArg)
    {
        u32LoadUpdateReg = (uint32_t) enLoadUpdateArg;
        u32LoadUpdateReg -= (uint32_t) PWM_enGENERATOR_UPDATE_LOCAL;
        PWM_Generator__vSetGeneric((uint32_t) enModule,
                                           (uint32_t) enGenerator,
                                           PWM_GEN_CTL_OFFSET,
                                           u32LoadUpdateReg,
                                           PWM_GEN_CTL_LOADUPD_MASK,
                                           PWM_GEN_CTL_R_LOADUPD_BIT);
    }
}

PWM_nGENERATOR_UPDATE PWM_Generator__enGetLoadUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nGENERATOR_UPDATE enLoadUpdateReg = PWM_enGENERATOR_UPDATE_LOCAL;
    uint32_t u32LoadUpdateReg = 0UL;
    u32LoadUpdateReg = PWM_Generator__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       PWM_GEN_CTL_LOADUPD_MASK,
                                       PWM_GEN_CTL_R_LOADUPD_BIT);
    u32LoadUpdateReg += (uint32_t) PWM_enGENERATOR_UPDATE_LOCAL;
    enLoadUpdateReg = (PWM_nGENERATOR_UPDATE) u32LoadUpdateReg;
    return (enLoadUpdateReg);
}


void PWM_Generator__vSetCompareAUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nGENERATOR_UPDATE enCompareUpdateArg)
{
    uint32_t u32CompareUpdateReg = 0UL;
    if((uint32_t) PWM_enGENERATOR_UPDATE_LOCAL <= (uint32_t) enCompareUpdateArg)
    {
        u32CompareUpdateReg = (uint32_t) enCompareUpdateArg;
        u32CompareUpdateReg -= (uint32_t) PWM_enGENERATOR_UPDATE_LOCAL;
        PWM_Generator__vSetGeneric((uint32_t) enModule,
                                           (uint32_t) enGenerator,
                                           PWM_GEN_CTL_OFFSET,
                                           u32CompareUpdateReg,
                                           PWM_GEN_CTL_CMPAUPD_MASK,
                                           PWM_GEN_CTL_R_CMPAUPD_BIT);
    }
}

PWM_nGENERATOR_UPDATE PWM_Generator__enGetCompareAUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nGENERATOR_UPDATE enCompareUpdateReg = PWM_enGENERATOR_UPDATE_LOCAL;
    uint32_t u32CompareUpdateReg = 0UL;
    u32CompareUpdateReg = PWM_Generator__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       PWM_GEN_CTL_CMPAUPD_MASK,
                                       PWM_GEN_CTL_R_CMPAUPD_BIT);
    u32CompareUpdateReg += (uint32_t) PWM_enGENERATOR_UPDATE_LOCAL;
    enCompareUpdateReg = (PWM_nGENERATOR_UPDATE) u32CompareUpdateReg;
    return (enCompareUpdateReg);
}

void PWM_Generator__vSetCompareBUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nGENERATOR_UPDATE enCompareUpdateArg)
{
    uint32_t u32CompareUpdateReg = 0UL;
    if((uint32_t) PWM_enGENERATOR_UPDATE_LOCAL <= (uint32_t) enCompareUpdateArg)
    {
        u32CompareUpdateReg = (uint32_t) enCompareUpdateArg;
        u32CompareUpdateReg -= (uint32_t) PWM_enGENERATOR_UPDATE_LOCAL;
        PWM_Generator__vSetGeneric((uint32_t) enModule,
                                           (uint32_t) enGenerator,
                                           PWM_GEN_CTL_OFFSET,
                                           u32CompareUpdateReg,
                                           PWM_GEN_CTL_CMPBUPD_MASK,
                                           PWM_GEN_CTL_R_CMPBUPD_BIT);
    }
}

PWM_nGENERATOR_UPDATE PWM_Generator__enGetCompareBUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nGENERATOR_UPDATE enCompareUpdateReg = PWM_enGENERATOR_UPDATE_LOCAL;
    uint32_t u32CompareUpdateReg = 0UL;
    u32CompareUpdateReg = PWM_Generator__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       PWM_GEN_CTL_CMPBUPD_MASK,
                                       PWM_GEN_CTL_R_CMPBUPD_BIT);
    u32CompareUpdateReg += (uint32_t) PWM_enGENERATOR_UPDATE_LOCAL;
    enCompareUpdateReg = (PWM_nGENERATOR_UPDATE) u32CompareUpdateReg;
    return (enCompareUpdateReg);
}

void PWM_Generator__vSetCompareUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             PWM_nOUTPUT enOutputArg, PWM_nGENERATOR_UPDATE enCompareUpdateArg)
{
    switch(enOutputArg)
    {
        case PWM_enOUTPUT_NONE:
            break;
        case PWM_enOUTPUT_A:
            PWM_Generator__vSetCompareAUpdate(enModule, enGenerator, enCompareUpdateArg);
            break;
        case PWM_enOUTPUT_B:
            PWM_Generator__vSetCompareBUpdate(enModule, enGenerator, enCompareUpdateArg);
            break;
        case PWM_enOUTPUT_BOTH:
            PWM_Generator__vSetCompareAUpdate(enModule, enGenerator, enCompareUpdateArg);
            PWM_Generator__vSetCompareBUpdate(enModule, enGenerator, enCompareUpdateArg);
            break;
        default:
            break;
    }
}

PWM_nGENERATOR_UPDATE PWM_Generator_enGetCompareUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                      PWM_nOUTPUT enOutputArg)
{
    PWM_nGENERATOR_UPDATE enCompareUpdateReg = PWM_enGENERATOR_UPDATE_LOCAL;
    switch(enOutputArg)
    {
        case PWM_enOUTPUT_NONE:
            break;
        case PWM_enOUTPUT_A:
            enCompareUpdateReg = PWM_Generator__enGetCompareAUpdate(enModule, enGenerator);
            break;
        case PWM_enOUTPUT_B:
            enCompareUpdateReg = PWM_Generator__enGetCompareBUpdate(enModule, enGenerator);
            break;
        case PWM_enOUTPUT_BOTH:
            break;
        default:
            break;
    }
    return (enCompareUpdateReg);
}

void PWM_Generator__vSetActionAUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nGENERATOR_UPDATE enActionUpdateArg)
{
    PWM_Generator__vSetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       (uint32_t) enActionUpdateArg,
                                       PWM_GEN_CTL_GENAUPD_MASK,
                                       PWM_GEN_CTL_R_GENAUPD_BIT);
}

PWM_nGENERATOR_UPDATE PWM_Generator__enGetActionAUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nGENERATOR_UPDATE enActionUpdateReg = PWM_enGENERATOR_UPDATE_IMMEDIATE;
    enActionUpdateReg = (PWM_nGENERATOR_UPDATE) PWM_Generator__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       PWM_GEN_CTL_GENAUPD_MASK,
                                       PWM_GEN_CTL_R_GENAUPD_BIT);
    return (enActionUpdateReg);
}

void PWM_Generator__vSetActionBUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nGENERATOR_UPDATE enActionUpdateArg)
{
    PWM_Generator__vSetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       (uint32_t) enActionUpdateArg,
                                       PWM_GEN_CTL_GENBUPD_MASK,
                                       PWM_GEN_CTL_R_GENBUPD_BIT);
}

PWM_nGENERATOR_UPDATE PWM_Generator__enGetActionBUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nGENERATOR_UPDATE enActionUpdateReg = PWM_enGENERATOR_UPDATE_IMMEDIATE;
    enActionUpdateReg = (PWM_nGENERATOR_UPDATE) PWM_Generator__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_CTL_OFFSET,
                                       PWM_GEN_CTL_GENBUPD_MASK,
                                       PWM_GEN_CTL_R_GENBUPD_BIT);
    return (enActionUpdateReg);
}

void PWM_Generator__vSetActionUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             PWM_nOUTPUT enOutputArg, PWM_nGENERATOR_UPDATE enActionUpdateArg)
{
    switch(enOutputArg)
    {
        case PWM_enOUTPUT_NONE:
            break;
        case PWM_enOUTPUT_A:
            PWM_Generator__vSetActionAUpdate(enModule, enGenerator, enActionUpdateArg);
            break;
        case PWM_enOUTPUT_B:
            PWM_Generator__vSetActionBUpdate(enModule, enGenerator, enActionUpdateArg);
            break;
        case PWM_enOUTPUT_BOTH:
            PWM_Generator__vSetActionAUpdate(enModule, enGenerator, enActionUpdateArg);
            PWM_Generator__vSetActionBUpdate(enModule, enGenerator, enActionUpdateArg);
            break;
        default:
            break;
    }
}

PWM_nGENERATOR_UPDATE PWM_Generator_enGetActionUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                      PWM_nOUTPUT enOutputArg)
{
    PWM_nGENERATOR_UPDATE enActionUpdateReg = PWM_enGENERATOR_UPDATE_IMMEDIATE;
    switch(enOutputArg)
    {
        case PWM_enOUTPUT_NONE:
            break;
        case PWM_enOUTPUT_A:
            enActionUpdateReg = PWM_Generator__enGetActionAUpdate(enModule, enGenerator);
            break;
        case PWM_enOUTPUT_B:
            enActionUpdateReg = PWM_Generator__enGetActionBUpdate(enModule, enGenerator);
            break;
        case PWM_enOUTPUT_BOTH:
            break;
        default:
            break;
    }
    return (enActionUpdateReg);
}

