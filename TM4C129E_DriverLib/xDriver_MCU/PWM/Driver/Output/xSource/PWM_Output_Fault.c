/**
 *
 * @file PWM_Output_Fault.c
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
#include <xDriver_MCU/PWM/Driver/Output/xHeader/PWM_Output_Fault.h>

#include <xDriver_MCU/PWM/Driver/Output/xHeader/PWM_Output_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Output__vSetFaultCondition(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nOUTPUT enOutputArg, PWM_nOUTPUT_ENABLE enEnableArg)
{
    uint32_t u32FeatureReg = 0UL;
    u32FeatureReg =  (uint32_t) enOutputArg;
    u32FeatureReg *= (uint32_t) enEnableArg;
    PWM_Output__vSetGenericBit((uint32_t) enModule, PWM_FAULT_OFFSET, (uint32_t) enGenerator,
                                 u32FeatureReg, (uint32_t) enOutputArg,
                                 (PWM_FAULT_R_FAULT2_BIT - PWM_FAULT_R_FAULT0_BIT),
                                 PWM_FAULT_R_FAULT0_BIT);
}

PWM_nOUTPUT PWM_Output__enGetFaultCondition(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                            PWM_nOUTPUT enOutputArg)
{
    PWM_nOUTPUT enOutputReg = PWM_enOUTPUT_NONE;

    enOutputReg = (PWM_nOUTPUT) (PWM_Output__u32GetGenericBit((uint32_t) enModule,
                                                 PWM_FAULT_OFFSET, (uint32_t) enGenerator,
                                                 (uint32_t) enOutputArg,
                                                 (PWM_FAULT_R_FAULT2_BIT - PWM_FAULT_R_FAULT0_BIT),
                                                 PWM_FAULT_R_FAULT0_BIT));
    return (enOutputReg);
}

void PWM_Output__vSetFaultConditionByNumber(PWM_nMODULE enModule, PWM_nOUTPUT_NUMBER enOutputNumberArg,
                            PWM_nOUTPUT_ENABLE enFaultConditionArg)
{
    PWM_Output__vSetGeneric((uint32_t) enModule, PWM_FAULT_OFFSET,
                            (uint32_t) enOutputNumberArg, (uint32_t) enFaultConditionArg,
                            PWM_FAULT_R_FAULT0_BIT);
}

PWM_nOUTPUT_NUMBER PWM_Output__enGetFaultConditionByNumber(PWM_nMODULE enModule, PWM_nOUTPUT_NUMBER enOutputNumberArg)
{
    PWM_nOUTPUT_NUMBER enOutputNumberReg = PWM_enOUTPUT_NUMBER_NONE;
    enOutputNumberReg = (PWM_nOUTPUT_NUMBER) PWM_Output__u32GetGeneric((uint32_t) enModule, PWM_FAULT_OFFSET,
                            (uint32_t) enOutputNumberArg, PWM_FAULT_R_FAULT0_BIT);
    return (enOutputNumberReg);
}



