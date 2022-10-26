/**
 *
 * @file UART_Commands.c
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
 * @verbatim 2 nov. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 nov. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/UART/xHeader/UART_Commands.h>

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

UART_nERROR UART__enSendRaw(UART_nMODULE enModule, const uint8_t* pu8DataIn, size_t* pszDataSize, UBase_t uxTimeout)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enSetFifoDataByteTimeOut(enModule, pu8DataIn, pszDataSize, uxTimeout);
    return (enErrorReg);
}

UART_nERROR UART__enReceiveRaw(UART_nMODULE enModule, uint8_t* pu8DataOut, size_t* pszDataSize, UBase_t uxTimeout)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART__enGetFifoDataByteTimeOut(enModule, pu8DataOut, pszDataSize, uxTimeout);
    return (enErrorReg);
}
