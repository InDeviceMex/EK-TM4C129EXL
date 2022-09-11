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
static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_ADC[(uint32_t) ADC_enMODULE_MAX] =
{SYSCTL_enADC0, SYSCTL_enADC1};
#endif

void ADC__vSetReady(ADC_nMODULE enModule)
{

#if !defined(Opt_Check)
    ADC_nSTATUS enReady = ADC_enSTATUS_INACTIVE;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enADC0;
    uint32_t u32Module = 0UL;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ADC_enMODULE_MAX);

    enPeripheral = SYSCTL_VECTOR_ADC[u32Module];
    enReady = ADC__enIsReady((ADC_nMODULE) u32Module);
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
    SYSCTL_nPERIPHERAL SYSCTL_VECTOR_ADC[(uint32_t) ADC_enMODULE_MAX] =
    {SYSCTL_enADC0, SYSCTL_enADC1};
#endif
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enADC0;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ADC_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_ADC[u32Module];
    SYSCTL__vClearReady(enPeripheral);
}

ADC_nSTATUS ADC__enIsReady(ADC_nMODULE enModule)
{
#if !defined(Opt_Check)
    ADC_nSTATUS enReady = ADC_enSTATUS_INACTIVE;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enADC0;
    uint32_t u32Module =0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ADC_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_ADC[u32Module];
    enReady = (ADC_nSTATUS) SYSCTL__enIsReady(enPeripheral);
#else
    ADC_nSTATUS enReady = ADC_enSTATUS_ACTIVE;
#endif
    return (enReady);
}




