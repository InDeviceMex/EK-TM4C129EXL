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

void UART__vSendRaw(UART_nMODULE enModule, const uint8_t* pu8DataIn, size_t szDataSize, UBase_t uxTimeout)
{
    UART__uxSetFifoDataByte(enModule, pu8DataIn, szDataSize, uxTimeout);
}

UBase_t UART__uxReceiveRaw(UART_nMODULE enModule, uint8_t* pu8DataOut, size_t szDataSize, UBase_t uxTimeout)
{
    UBase_t uxDataReceived = 0UL;
    uxDataReceived = UART__uxGetFifoDataByte(enModule, pu8DataOut, szDataSize, uxTimeout);
    return (uxDataReceived);
}
