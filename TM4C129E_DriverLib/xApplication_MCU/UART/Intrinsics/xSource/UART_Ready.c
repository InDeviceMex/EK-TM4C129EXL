/**
 *
 * @file UART_Ready.c
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
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Ready.h>

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

#if !defined(Opt_Check)
static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_UART[(UBase_t) UART_enMODULE_MAX] =
{
 SYSCTL_enUART0, SYSCTL_enUART1, SYSCTL_enUART2, SYSCTL_enUART3,
 SYSCTL_enUART4, SYSCTL_enUART5, SYSCTL_enUART6, SYSCTL_enUART7
};
#endif

void UART__vSetReady(UART_nMODULE enModule)
{
#if !defined(Opt_Check)
    UART_nSTATUS enReady = UART_enSTATUS_INACTIVE;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enUART0;
    UBase_t uxModule = 0UL;

    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) UART_enMODULE_MAX);

    enPeripheral = SYSCTL_VECTOR_UART[uxModule];
    enReady = UART__enIsReady((UART_nMODULE) uxModule);
    if(UART_enSTATUS_INACTIVE == enReady)
    {
        SYSCTL__vSetReady(enPeripheral);
        SYSCTL__vReset(enPeripheral);
        SYSCTL__vSetReady(enPeripheral);
    }
#endif
}

void UART__vClearReady(UART_nMODULE enModule)
{
#if defined(Opt_Check)
    SYSCTL_nPERIPHERAL SYSCTL_VECTOR_UART[(UBase_t) UART_enMODULE_MAX] =
    {SYSCTL_enUART0, SYSCTL_enUART1, SYSCTL_enUART2, SYSCTL_enUART3, SYSCTL_enUART4, SYSCTL_enUART5, SYSCTL_enUART6, SYSCTL_enUART7};
#endif
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enUART0;
    UBase_t uxModule = 0UL;
    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) UART_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_UART[uxModule];
    SYSCTL__vClearReady(enPeripheral);
}

UART_nSTATUS UART__enIsReady(UART_nMODULE enModule)
{
#if !defined(Opt_Check)
    UART_nSTATUS enReady = UART_enSTATUS_INACTIVE;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enUART0;
    UBase_t uxModule =0UL;
    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) UART_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_UART[uxModule];
    enReady = (UART_nSTATUS) SYSCTL__enIsReady(enPeripheral);
#else
    UART_nSTATUS enReady = UART_enSTATUS_ACTIVE;
#endif
    return (enReady);
}




