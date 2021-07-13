/**
 *
 * @file UART_Data.h
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_DRIVER_XHEADER_UART_DATA_H_
#define XDRIVER_MCU_UART_DRIVER_XHEADER_UART_DATA_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>
#include <xUtils/Standard/Standard.h>

void UART__vSetData(UART_nMODULE enModule, uint32_t u32Data);
uint32_t UART__u32GetData(UART_nMODULE enModule);
uint32_t UART__u32GetDataWithStatus(UART_nMODULE enModule);

uint32_t UART__u32GetFifoData(UART_nMODULE enModule, uint32_t* pu32FifoArray);
uint32_t UART__u32GetFifoDataByte(UART_nMODULE enModule, uint8_t* pu8FifoArray);

uint32_t UART__u32SetFifoData(UART_nMODULE enModule, const uint32_t* pu32FifoArray, uint32_t u32SizeBuffer);
uint32_t UART__u32SetFifoDataByte(UART_nMODULE enModule, const uint8_t* pu8FifoArray, uint32_t u32SizeBuffer);

#endif /* XDRIVER_MCU_UART_DRIVER_XHEADER_UART_DATA_H_ */
