/**
 *
 * @file UART_Config.h
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

#ifndef XAPPLICATION_MCU_UART_XHEADER_UART_CONFIG_H_
#define XAPPLICATION_MCU_UART_XHEADER_UART_CONFIG_H_

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Defines.h>

UART_nERROR UART__enSetConfig(UART_nMODULE enModuleArg,
                              UART_nMODE enModeArg,
                              UBase_t uxBaudRateArg,
                              UBase_t uxOwnAddressArg,
                              UBase_t uxOwnAddressMaskArg,
                              const UART_CONTROL_t* pstControlConfigArg,
                              const UART_LINE_CONTROL_t* pstLineControlConfigArg,
                              const UART_LINE_t* pstLineConfigArg,
                              UBase_t uxTimeoutArg);

#endif /* XAPPLICATION_MCU_UART_XHEADER_UART_CONFIG_H_ */
