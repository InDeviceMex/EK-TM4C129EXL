/**
 *
 * @file ACMP_Ready.c
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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Ready.h>

#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Dependencies.h>

#if !defined(Opt_Check)
static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_ACMP[(UBase_t) ACMP_enMODULE_MAX] = {SYSCTL_enACMP};
#endif

void ACMP__vSetReady(ACMP_nMODULE enModule)
{
#if !defined(Opt_Check)
    ACMP_nSTATUS enReady = ACMP_enSTATUS_INACTIVE;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enACMP;
    UBase_t uxModule = 0UL;

    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) ACMP_enMODULE_MAX);

    enPeripheral = SYSCTL_VECTOR_ACMP[uxModule];
    enReady = ACMP__enIsReady((ACMP_nMODULE) uxModule);
    if(ACMP_enSTATUS_INACTIVE == enReady)
    {
        SYSCTL__vSetReady(enPeripheral);
        SYSCTL__vReset(enPeripheral);
        SYSCTL__vSetReady(enPeripheral);
    }

#endif
}

void ACMP__vClearReady(ACMP_nMODULE enModule)
{
#if defined(Opt_Check)
    SYSCTL_nPERIPHERAL SYSCTL_VECTOR_ACMP[(UBase_t) ACMP_enMODULE_MAX] = {SYSCTL_enACMP};
#endif
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enACMP;
    UBase_t uxModule = 0UL;
    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) ACMP_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_ACMP[uxModule];
    SYSCTL__vClearReady(enPeripheral);
}

ACMP_nSTATUS ACMP__enIsReady(ACMP_nMODULE enModule)
{
#if !defined(Opt_Check)
    ACMP_nSTATUS enReady = ACMP_enSTATUS_INACTIVE;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enACMP;
    UBase_t uxModule =0UL;
    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) ACMP_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_ACMP[uxModule];
    enReady = (ACMP_nSTATUS) SYSCTL__enIsReady(enPeripheral);
#else
    ACMP_nSTATUS enReady = ACMP_enSTATUS_ACTIVE;
#endif
    return (enReady);
}
