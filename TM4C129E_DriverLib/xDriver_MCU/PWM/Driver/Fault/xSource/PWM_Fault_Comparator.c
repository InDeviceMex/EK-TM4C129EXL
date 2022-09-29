/**
 *
 * @file PWM_Fault_Comparator.c
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
#include <xDriver_MCU/PWM/Driver/Fault/xHeader/PWM_Fault_Comparator.h>

#include <xDriver_MCU/PWM/Driver/Fault/xHeader/PWM_Fault_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>


void PWM_Fault__vSetDigitalComparatorSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                PWM_nFAULT_DCOMP enFaultDCompSource)
{
    PWM_Fault__vSetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_FLTSRC1_OFFSET,
                           (uint32_t) enFaultDCompSource, (uint32_t) PWM_enFAULT_DCOMP_ALL, PWM_GEN_FLTSRC1_R_DCMP0_BIT);
}

void PWM_Fault__vEnableDigitalComparatorSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                               PWM_nFAULT_DCOMP enFaultDCompSource,
                                               PWM_nSTATE enFaultDCompEnable)
{
    PWM_nFAULT_DCOMP enFaultDCompSourceReg = PWM_enFAULT_DCOMP_NONE;
    if(PWM_enSTATE_DIS != enFaultDCompEnable)
    {
        enFaultDCompSourceReg = enFaultDCompSource;
    }
    PWM_Fault__vSetGeneric((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_FLTSRC1_OFFSET,
                           (uint32_t) enFaultDCompSourceReg, (uint32_t) enFaultDCompSource, PWM_GEN_FLTSRC1_R_DCMP0_BIT);
}

PWM_nFAULT_DCOMP PWM_Fault__enGetDigitalComparatorSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator)
{
    PWM_nFAULT_DCOMP enFaultDCompSourceReg = PWM_enFAULT_DCOMP_NONE;
    enFaultDCompSourceReg = (PWM_nFAULT_DCOMP) PWM_Fault__u32GetGeneric((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_FLTSRC1_OFFSET,
                                       (uint32_t) PWM_enFAULT_DCOMP_ALL,
                                       PWM_GEN_FLTSRC1_R_DCMP0_BIT);
    return (enFaultDCompSourceReg);
}

void PWM_Fault__vClearDigitalComparatorStatus(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                PWM_nFAULT_DCOMP enFaultDCompSource)
{
    PWM_Fault__vSetGenericExt((uint32_t) enModule, (uint32_t) enGenerator, PWM_GEN_EXT_FLTSTAT1_OFFSET,
                           (uint32_t) enFaultDCompSource, (uint32_t) PWM_enFAULT_DCOMP_ALL, PWM_GEN_EXT_FLTSTAT1_R_DCMP0_BIT);
}

PWM_nFAULT_DCOMP PWM_Fault__enGetDigitalComparatorStatus(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                             PWM_nFAULT_DCOMP enFaultDCompSource)
{
    PWM_nFAULT_DCOMP enFaultDigitalComparatorStatusReg = PWM_enFAULT_DCOMP_NONE;
    enFaultDigitalComparatorStatusReg = (PWM_nFAULT_DCOMP) PWM_Fault__u32GetGenericExt((uint32_t) enModule,
                                       (uint32_t) enGenerator,
                                       PWM_GEN_EXT_FLTSTAT1_OFFSET,
                                       (uint32_t) enFaultDCompSource,
                                       PWM_GEN_EXT_FLTSTAT1_R_DCMP0_BIT);
    return (enFaultDigitalComparatorStatusReg);
}
