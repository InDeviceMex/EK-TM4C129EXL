/**
 *
 * @file PWM_Output_FaultValue.c
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
 * @verbatim 6 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Output/xHeader/PWM_Output_FaultValue.h>

#include <xDriver_MCU/PWM/Driver/Output/xHeader/PWM_Output_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Output__vSetFaultConditionValue(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                            PWM_nOUTPUT enOutputArg,
                            PWM_nOUTPUT_FAULT enFaultConditionValueArg)
{
    uint32_t u32FeatureReg = 0UL;
    u32FeatureReg =  (uint32_t) enOutputArg;
    u32FeatureReg *= (uint32_t) enFaultConditionValueArg;
    PWM_Output__vSetGenericBit((uint32_t) enModule, PWM_FAULTVAL_OFFSET, (uint32_t) enGenerator,
                               u32FeatureReg, (uint32_t) enOutputArg,
                                 (PWM_FAULTVAL_R_PWM2_BIT - PWM_FAULTVAL_R_PWM0_BIT),
                                 PWM_FAULTVAL_R_PWM0_BIT);
}

PWM_nOUTPUT PWM_Output__enGetFaultConditionValue(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                                 PWM_nOUTPUT enOutputArg)
{
    PWM_nOUTPUT enOutputReg = PWM_enOUTPUT_NONE;

    enOutputReg = (PWM_nOUTPUT) (PWM_Output__u32GetGenericBit((uint32_t) enModule,
                                                 PWM_FAULTVAL_OFFSET, (uint32_t) enGenerator,
                                                 (uint32_t) enOutputArg,
                                                 (PWM_FAULTVAL_R_PWM2_BIT - PWM_FAULTVAL_R_PWM0_BIT),
                                                 PWM_FAULTVAL_R_PWM0_BIT));
    return (enOutputReg);
}

void PWM_Output__vSetFaultConditionValueByNumber(PWM_nMODULE enModule, PWM_nOUTPUT_NUMBER enOutputNumberArg,
                            PWM_nOUTPUT_FAULT enFaultConditionValueArg)
{
    PWM_Output__vSetGeneric((uint32_t) enModule, PWM_FAULTVAL_OFFSET,
                            (uint32_t) enOutputNumberArg, (uint32_t) enFaultConditionValueArg,
                            PWM_FAULTVAL_R_PWM0_BIT);
}

PWM_nOUTPUT_NUMBER PWM_Output__enGetFaultConditionValueByNumber(PWM_nMODULE enModule, PWM_nOUTPUT_NUMBER enOutputNumberArg)
{
    PWM_nOUTPUT_NUMBER enOutputNumberReg = PWM_enOUTPUT_NUMBER_NONE;
    enOutputNumberReg = (PWM_nOUTPUT_NUMBER) PWM_Output__u32GetGeneric((uint32_t) enModule, PWM_FAULTVAL_OFFSET,
                            (uint32_t) enOutputNumberArg, PWM_FAULTVAL_R_PWM0_BIT);
    return (enOutputNumberReg);
}




