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

void UART__vSetData(UART_nMODULE enModule, UBase_t uxData);
UBase_t UART__uxGetData(UART_nMODULE enModule);
UBase_t UART__uxGetDataWithStatus(UART_nMODULE enModule);

UBase_t UART__uxGetFifoData(UART_nMODULE enModule, UBase_t* puxFifoArray,
                              UBase_t uxSizeBuffer, UBase_t uxTimeout);
UBase_t UART__uxGetFifoDataByte(UART_nMODULE enModule, uint8_t* pu8FifoArray,
                                  UBase_t uxSizeBuffer, UBase_t uxTimeout);

UBase_t UART__uxSetFifoData(UART_nMODULE enModule, const UBase_t* puxFifoArray,
                              UBase_t uxSizeBuffer, UBase_t uxTimeout);
UBase_t UART__uxSetFifoDataByte(UART_nMODULE enModule, const uint8_t* pu8FifoArray,
                                  UBase_t uxSizeBuffer, UBase_t uxTimeout);

#endif /* XDRIVER_MCU_UART_DRIVER_XHEADER_UART_DATA_H_ */
