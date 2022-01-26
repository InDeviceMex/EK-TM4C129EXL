/**
 *
 * @file PWM_Fault_Input.c
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
#include <xDriver_MCU/PWM/Driver/Fault/xHeader/PWM_Fault_Input.h>

#include <xDriver_MCU/PWM/Driver/Fault/xHeader/PWM_Fault_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Fault__vSetInputSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                PWM_nFAULT_INPUT enFaultInputSource)
{
    PWM_Fault__vSetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_FLTSRC0_OFFSET,
                           (uint32_t) enFaultInputSource, (uint32_t) PWM_enFAULT_INPUT_ALL, PWM_GEN_FLTSRC0_R_FAULT0_BIT);
}

void PWM_Fault__vEnableInputSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                PWM_nFAULT_INPUT enFaultInputSource, PWM_nFAULT_ENABLE enFaultInputEnable)
{
    PWM_nFAULT_INPUT enFaultInputSourceReg = PWM_enFAULT_INPUT_NONE;
    if(PWM_enFAULT_ENABLE_DIS != enFaultInputEnable)
    {
        enFaultInputSourceReg = enFaultInputSource;
    }
    PWM_Fault__vSetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_FLTSRC0_OFFSET,
                           (uint32_t) enFaultInputSourceReg, (uint32_t) enFaultInputSource, PWM_GEN_FLTSRC0_R_FAULT0_BIT);
}

PWM_nFAULT_INPUT PWM_Fault__enGetInputSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nFAULT_INPUT enFaultInputSourceReg = PWM_enFAULT_INPUT_NONE;
    enFaultInputSourceReg = (PWM_nFAULT_INPUT) PWM_Fault__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_FLTSRC0_OFFSET,
                                       (uint32_t) PWM_enFAULT_INPUT_ALL,
                                       PWM_GEN_FLTSRC0_R_FAULT0_BIT);
    return (enFaultInputSourceReg);
}

void PWM_Fault__vSetInputSenseValue(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                    PWM_nFAULT_INPUT enFaultInputSource,
                                    PWM_nFAULT_INPUT_SENSE enFaultInputSense)
{
    PWM_nFAULT_INPUT enFaultInputSourceReg = PWM_enFAULT_INPUT_NONE;
    if(PWM_enFAULT_INPUT_SENSE_HIGH != enFaultInputSense)
    {
        enFaultInputSourceReg = enFaultInputSource;
    }
    PWM_Fault__vSetGenericExt((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_EXT_FLTSEN_OFFSET,
                           (uint32_t) enFaultInputSourceReg, (uint32_t) enFaultInputSource, PWM_GEN_EXT_FLTSEN_R_FAULT0_BIT);
}

PWM_nFAULT_INPUT_SENSE PWM_Fault__enGetInputSenseValue(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                                       PWM_nFAULT_INPUT enFaultInputSource)
{
    uint32_t u32FaultInputSenseReg = 0UL;
    PWM_nFAULT_INPUT_SENSE enFaultInputSenseReg = PWM_enFAULT_INPUT_SENSE_HIGH;
    u32FaultInputSenseReg = PWM_Fault__u32GetGenericExt((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_EXT_FLTSEN_OFFSET,
                                       (uint32_t) enFaultInputSource,
                                       PWM_GEN_EXT_FLTSEN_R_FAULT0_BIT);
    if(0UL != u32FaultInputSenseReg)
    {
        enFaultInputSenseReg = PWM_enFAULT_INPUT_SENSE_LOW;
    }
    return (enFaultInputSenseReg);
}

void PWM_Fault__vClearInputStatus(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                PWM_nFAULT_INPUT enFaultInputSource)
{
    PWM_Fault__vSetGenericExt((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_EXT_FLTSTAT0_OFFSET,
                           (uint32_t) enFaultInputSource, (uint32_t) PWM_enFAULT_INPUT_ALL, PWM_GEN_EXT_FLTSTAT0_R_FAULT0_BIT);
}

PWM_nFAULT_INPUT PWM_Fault__enGetInputStatus(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                             PWM_nFAULT_INPUT enFaultInputSource)
{
    PWM_nFAULT_INPUT enFaultInputStatusReg = PWM_enFAULT_INPUT_NONE;
    enFaultInputStatusReg = (PWM_nFAULT_INPUT) PWM_Fault__u32GetGenericExt((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_EXT_FLTSTAT0_OFFSET,
                                       (uint32_t) enFaultInputSource,
                                       PWM_GEN_EXT_FLTSTAT0_R_FAULT0_BIT);
    return (enFaultInputStatusReg);
}
