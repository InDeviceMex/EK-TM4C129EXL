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

void UART__vSendRaw(UART_nMODULE enModule, const uint8_t* pu8DataIn, size_t szDataSize)
{
    UART__u32SetFifoDataByte(enModule, pu8DataIn, szDataSize);
}

uint32_t UART__u32ReceiveRaw(UART_nMODULE enModule, uint8_t* pu8DataOut, size_t szDataSize)
{
    uint32_t u32DataReceived = 0UL;
    u32DataReceived = UART__u32GetFifoDataByte(enModule, pu8DataOut, szDataSize);
    return (u32DataReceived);
}
