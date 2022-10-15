/**
 *
 * @file SSI_Ready.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Ready.h>

#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Dependencies.h>

#if !defined(Opt_Check)
static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_SSI[(UBase_t) SSI_enMODULE_MAX] =
{SYSCTL_enSSI0, SYSCTL_enSSI1, SYSCTL_enSSI2, SYSCTL_enSSI3};
#endif

void SSI__vSetReady(SSI_nMODULE enModule)
{
#if !defined(Opt_Check)
    SSI_nSTATUS enReady = SSI_enSTATUS_INACTIVE;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enSSI0;
    UBase_t uxModule = 0UL;

    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) SSI_enMODULE_MAX);

    enPeripheral = SYSCTL_VECTOR_SSI[uxModule];
    enReady = SSI__enIsReady((SSI_nMODULE) uxModule);
    if(SSI_enSTATUS_INACTIVE == enReady)
    {
        SYSCTL__vSetReady(enPeripheral);
        SYSCTL__vReset(enPeripheral);
        SYSCTL__vSetReady(enPeripheral);
    }
#endif
}

void SSI__vClearReady(SSI_nMODULE enModule)
{
#if defined(Opt_Check)
    SYSCTL_nPERIPHERAL SYSCTL_VECTOR_SSI[(UBase_t) SSI_enMODULE_MAX] =
    {SYSCTL_enSSI0, SYSCTL_enSSI1, SYSCTL_enSSI2, SYSCTL_enSSI3};
#endif
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enSSI0;
    UBase_t uxModule = 0UL;
    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) SSI_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_SSI[uxModule];
    SYSCTL__vClearReady(enPeripheral);
}

SSI_nSTATUS SSI__enIsReady(SSI_nMODULE enModule)
{
#if !defined(Opt_Check)
    SSI_nSTATUS enReady = SSI_enSTATUS_INACTIVE;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enSSI0;
    UBase_t uxModule =0UL;
    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) SSI_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_SSI[uxModule];
    enReady = (SSI_nSTATUS) SYSCTL__enIsReady(enPeripheral);
#else
    SSI_nSTATUS enReady = SSI_enSTATUS_ACTIVE;
#endif
    return (enReady);
}
