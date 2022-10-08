/**
 *
 * @file ADC_Ready.c
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
 * @verbatim 10 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Ready.h>

#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Dependencies.h>

#if !defined(Opt_Check)
static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_ADC[(UBase_t) ADC_enMODULE_MAX] =
{SYSCTL_enADC0, SYSCTL_enADC1};
#endif

void ADC__vSetReady(ADC_nMODULE enModule)
{

#if !defined(Opt_Check)
    ADC_nSTATUS enReady = ADC_enSTATUS_INACTIVE;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enADC0;
    UBase_t uxModule = 0UL;

    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) ADC_enMODULE_MAX);

    enPeripheral = SYSCTL_VECTOR_ADC[uxModule];
    enReady = ADC__enIsReady((ADC_nMODULE) uxModule);
    if(ADC_enSTATUS_INACTIVE == enReady)
    {
        SYSCTL__vSetReady(enPeripheral);
        SYSCTL__vReset(enPeripheral);
        SYSCTL__vSetReady(enPeripheral);
    }
#endif
}

void ADC__vClearReady(ADC_nMODULE enModule)
{
#if defined(Opt_Check)
    SYSCTL_nPERIPHERAL SYSCTL_VECTOR_ADC[(UBase_t) ADC_enMODULE_MAX] =
    {SYSCTL_enADC0, SYSCTL_enADC1};
#endif
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enADC0;
    UBase_t uxModule = 0UL;
    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) ADC_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_ADC[uxModule];
    SYSCTL__vClearReady(enPeripheral);
}

ADC_nSTATUS ADC__enIsReady(ADC_nMODULE enModule)
{
#if !defined(Opt_Check)
    ADC_nSTATUS enReady = ADC_enSTATUS_INACTIVE;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enADC0;
    UBase_t uxModule =0UL;
    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) ADC_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_ADC[uxModule];
    enReady = (ADC_nSTATUS) SYSCTL__enIsReady(enPeripheral);
#else
    ADC_nSTATUS enReady = ADC_enSTATUS_ACTIVE;
#endif
    return (enReady);
}




