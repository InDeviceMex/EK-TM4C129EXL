/**
 *
 * @file PWM_Ready.c
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
 * @verbatim 9 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Ready.h>

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Dependencies.h>

#if !defined(Opt_Check)
static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_PWM[(UBase_t) PWM_enMODULE_MAX] =
{SYSCTL_enPWM0};
#endif

void PWM__vSetReady(PWM_nMODULE enModule)
{

#if !defined(Opt_Check)
    PWM_nSTATUS enReady = PWM_enSTATUS_INACTIVE;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enPWM0;
    UBase_t uxModule = 0UL;

    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) PWM_enMODULE_MAX);

    enPeripheral = SYSCTL_VECTOR_PWM[uxModule];
    enReady = PWM__enIsReady((PWM_nMODULE) uxModule);
    if(PWM_enSTATUS_INACTIVE == enReady)
    {
        SYSCTL__vSetReady(enPeripheral);
        SYSCTL__vReset(enPeripheral);
        SYSCTL__vSetReady(enPeripheral);
    }
#endif
}

void PWM__vClearReady(PWM_nMODULE enModule)
{
#if defined(Opt_Check)
    SYSCTL_nPERIPHERAL SYSCTL_VECTOR_PWM[(UBase_t) PWM_enMODULE_MAX] =
    {SYSCTL_enPWM0};
#endif
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enPWM0;
    UBase_t uxModule = 0UL;
    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) PWM_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_PWM[uxModule];
    SYSCTL__vClearReady(enPeripheral);
}

PWM_nSTATUS PWM__enIsReady(PWM_nMODULE enModule)
{
#if !defined(Opt_Check)
    PWM_nSTATUS enReady = PWM_enSTATUS_INACTIVE;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enPWM0;
    UBase_t uxModule =0UL;
    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) PWM_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_PWM[uxModule];
    enReady = (PWM_nSTATUS) SYSCTL__enIsReady(enPeripheral);
#else
    PWM_nSTATUS enReady = PWM_enSTATUS_ACTIVE;
#endif
    return (enReady);
}




