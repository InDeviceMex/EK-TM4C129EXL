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

UART_nERROR UART__enSetData(UART_nMODULE enModuleArg, UBase_t uxDataArg);
UART_nERROR UART__enSetDataByte(UART_nMODULE enModuleArg, uint8_t u8DataArg);
UART_nERROR UART__enSetFifoData(UART_nMODULE enModuleArg, const UBase_t* puxDataArg, UBase_t* puxCount);
UART_nERROR UART__enSetFifoDataByte(UART_nMODULE enModuleArg, const uint8_t* pu8DataArg, UBase_t* puxCount);
UART_nERROR UART__enSetFifoDataConst(UART_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t* puxCount);
UART_nERROR UART__enSetFifoDataConstByte(UART_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t* puxCount);

UART_nERROR UART__enSetDataTimeOut(UART_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t uxTimeoutArg);
UART_nERROR UART__enSetDataByteTimeOut(UART_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t uxTimeoutArg);
UART_nERROR UART__enSetFifoDataTimeOut(UART_nMODULE enModuleArg, const UBase_t* puxDataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);
UART_nERROR UART__enSetFifoDataByteTimeOut(UART_nMODULE enModuleArg, const uint8_t* pu8DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);
UART_nERROR UART__enSetFifoDataConstTimeOut(UART_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);
UART_nERROR UART__enSetFifoDataConstByteTimeOut(UART_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);

UART_nERROR UART__enGetDataWithStatus(UART_nMODULE enModuleArg, UBase_t* puxDataArg);
UART_nERROR UART__enGetData(UART_nMODULE enModuleArg, UBase_t* puxDataArg);
UART_nERROR UART__enGetDataByte(UART_nMODULE enModuleArg, uint8_t* pu8DataArg);
UART_nERROR UART__enGetDataWithStatusTimeOut(UART_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t uxTimeoutArg);
UART_nERROR UART__enGetDataTimeOut(UART_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t uxTimeoutArg);
UART_nERROR UART__enGetDataByteTimeOut(UART_nMODULE enModuleArg, uint8_t* pu8DataArg, UBase_t uxTimeoutArg);

UART_nERROR UART__enGetFifoDataWithStatusTimeOut(UART_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);
UART_nERROR UART__enGetFifoDataTimeOut(UART_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);
UART_nERROR UART__enGetFifoDataByteTimeOut(UART_nMODULE enModuleArg, uint8_t* pu8DataArg, UBase_t* puxCount, UBase_t uxTimeoutArg);
UART_nERROR UART__enGetFifoDataWithStatus(UART_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t* puxCount);
UART_nERROR UART__enGetFifoData(UART_nMODULE enModuleArg, UBase_t* puxDataArg, UBase_t* puxCount);
UART_nERROR UART__enGetFifoDataByte(UART_nMODULE enModuleArg, uint8_t* pu8DataArg, UBase_t* puxCount);

#endif /* XDRIVER_MCU_UART_DRIVER_XHEADER_UART_DATA_H_ */
