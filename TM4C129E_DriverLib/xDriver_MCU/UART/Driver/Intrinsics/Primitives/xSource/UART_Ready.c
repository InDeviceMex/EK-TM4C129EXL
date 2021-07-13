/**
 *
 * @file UART_Ready.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/xHeader/UART_Ready.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Dependencies.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

#if !defined(Opt_Check)
static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_UART[(uint32_t) UART_enMODULE_MAX] =
{
 SYSCTL_enUART0, SYSCTL_enUART1, SYSCTL_enUART2, SYSCTL_enUART3,
 SYSCTL_enUART4, SYSCTL_enUART5, SYSCTL_enUART6, SYSCTL_enUART7
};
#endif

void UART__vSetReady(UART_nMODULE enModule)
{
#if !defined(Opt_Check)
    UART_nREADY enReady = UART_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enUART0;
    uint32_t u32Module = 0UL;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) UART_enMODULE_MAX);

    enPeripheral = SYSCTL_VECTOR_UART[u32Module];
    enReady = UART__enIsReady((UART_nMODULE) u32Module);
    if(UART_enNOREADY == enReady)
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
    SYSCTL_nPERIPHERAL SYSCTL_VECTOR_UART[(uint32_t) UART_enMODULE_MAX] =
    {SYSCTL_enUART0, SYSCTL_enUART1, SYSCTL_enUART2, SYSCTL_enUART3, SYSCTL_enUART4, SYSCTL_enUART5, SYSCTL_enUART6, SYSCTL_enUART7};
#endif
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enUART0;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) UART_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_UART[u32Module];
    SYSCTL__vClearReady(enPeripheral);
}

UART_nREADY UART__enIsReady(UART_nMODULE enModule)
{
#if !defined(Opt_Check)
    UART_nREADY enReady = UART_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enUART0;
    uint32_t u32Module =0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) UART_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_UART[u32Module];
    enReady = (UART_nREADY) SYSCTL__enIsReady(enPeripheral);
#else
    UART_nREADY enReady = UART_enREADY;
#endif
    return enReady;
}
