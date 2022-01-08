/**
 *
 * @file PWM_Output_Invert.c
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
#include <xDriver_MCU/PWM/Driver/Output/xHeader/PWM_Output_Invert.h>

#include <xDriver_MCU/PWM/Driver/Output/xHeader/PWM_Output_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Output__vSetInvert(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                            PWM_nOUTPUT enOutputArg, PWM_nOUTPUT_ENABLE enInvertArg)
{
    uint32_t u32FeatureReg = 0UL;
    u32FeatureReg =  (uint32_t) enOutputArg;
    u32FeatureReg *= (uint32_t) enInvertArg;
    PWM_Output__vSetGenericBit((uint32_t) enModule, PWM_INVERT_OFFSET, (uint32_t) enGenerator,
                               u32FeatureReg, (uint32_t) enOutputArg,
                                 (PWM_INVERT_R_PWM2INV_BIT - PWM_INVERT_R_PWM0INV_BIT),
                                 PWM_INVERT_R_PWM0INV_BIT);
}

PWM_nOUTPUT PWM_Output__enGetInvert(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nOUTPUT enOutputArg)
{
    PWM_nOUTPUT enOutputReg = PWM_enOUTPUT_NONE;

    enOutputReg = (PWM_nOUTPUT) (PWM_Output__u32GetGenericBit((uint32_t) enModule,
                                                 PWM_INVERT_OFFSET, (uint32_t) enGenerator,
                                                 (uint32_t) enOutputArg,
                                                 (PWM_INVERT_R_PWM2INV_BIT - PWM_INVERT_R_PWM0INV_BIT),
                                                 PWM_INVERT_R_PWM0INV_BIT));
    return (enOutputReg);
}

void PWM_Output__vSetInvertByNumber(PWM_nMODULE enModule, PWM_nOUTPUT_NUMBER enOutputNumberArg,
                            PWM_nOUTPUT_ENABLE enInvertArg)
{
    PWM_Output__vSetGeneric((uint32_t) enModule, PWM_INVERT_OFFSET,
                            (uint32_t) enOutputNumberArg, (uint32_t) enInvertArg,
                            PWM_INVERT_R_PWM0INV_BIT);
}

PWM_nOUTPUT_NUMBER PWM_Output__enGetInvertByNumber(PWM_nMODULE enModule, PWM_nOUTPUT_NUMBER enOutputNumberArg)
{
    PWM_nOUTPUT_NUMBER enOutputNumberReg = PWM_enOUTPUT_NUMBER_NONE;
    enOutputNumberReg = (PWM_nOUTPUT_NUMBER) PWM_Output__u32GetGeneric((uint32_t) enModule, PWM_INVERT_OFFSET,
                            (uint32_t) enOutputNumberArg, PWM_INVERT_R_PWM0INV_BIT);
    return (enOutputNumberReg);
}


