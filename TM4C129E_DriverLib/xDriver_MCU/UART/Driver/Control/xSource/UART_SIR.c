/**
 *
 * @file UART_SIR.c
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
 * @verbatim 8 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/Control/xHeader/UART_SIR.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetSIR(UART_nMODULE enModule, UART_nSTATE enSirArg)
{
    UART__vWriteRegister(enModule, UART_CTL_OFFSET, (UBase_t) enSirArg,
                         UART_CTL_SIREN_MASK, UART_CTL_R_SIREN_BIT);
}

UART_nSTATE UART__enGetSIR(UART_nMODULE enModule)
{
    UART_nSTATE enSirReg = UART_enSTATE_DIS;
    enSirReg = (UART_nSTATE) UART__uxReadRegister(enModule, UART_CTL_OFFSET,
                                         UART_CTL_SIREN_MASK, UART_CTL_R_SIREN_BIT);
    return (enSirReg);
}

void UART__vSetSIRLowPower(UART_nMODULE enModule, UART_nSTATE enSirLPArg)
{
    UART__vWriteRegister(enModule, UART_CTL_OFFSET, (UBase_t) enSirLPArg,
                         UART_CTL_SIRLP_MASK, UART_CTL_R_SIRLP_BIT);
}

UART_nSTATE UART__enGetSIRLowPower(UART_nMODULE enModule)
{
    UART_nSTATE enSirLPReg = UART_enSTATE_DIS;
    enSirLPReg = (UART_nSTATE) UART__uxReadRegister(enModule, UART_CTL_OFFSET,
                                          UART_CTL_SIRLP_MASK, UART_CTL_R_SIRLP_BIT);
    return (enSirLPReg);
}
