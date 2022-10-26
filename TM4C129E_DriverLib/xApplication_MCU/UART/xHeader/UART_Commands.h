/**
 *
 * @file UART_Commands.h
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

#ifndef XAPPLICATION_MCU_UART_XHEADER_UART_COMMANDS_H_
#define XAPPLICATION_MCU_UART_XHEADER_UART_COMMANDS_H_

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Defines.h>
typedef enum
{
    /**
     *  0x34,
     * 0xYZ (Y= compress, Z= encoded),
     * 0xHH 0xLH 0xHL 0xLL (MemoryAdress),
     * 0xHH 0xLH 0xHL 0xLL (MemorySize)
     * */
    UART_Commands_enType_RequestDowload = 0x34,
    /**
     *  0x36,
     * 0xYY (Block Sequence Counter),
     * 0xZZ0 -> 0xZZn (Record)
     * */
    UART_Commands_enType_TransferData = 0x36,
    /**
     * 0x37
     */
    UART_Commands_enType_RequestTransferExit = 0x37,
}UART_Commands_nType;

UART_nERROR UART__enSendRaw(UART_nMODULE enModule, const uint8_t* pu8DataIn, size_t* pszDataSize, UBase_t uxTimeout);
UART_nERROR UART__enReceiveRaw(UART_nMODULE enModule, uint8_t* pu8DataOut, size_t* pszDataSize, UBase_t uxTimeout);
#endif /* XAPPLICATION_MCU_UART_XHEADER_UART_COMMANDS_H_ */
