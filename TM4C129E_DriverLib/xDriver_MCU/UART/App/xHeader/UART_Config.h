/**
 *
 * @file UART_Config.h
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
 * @verbatim 10 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_UART_APP_XHEADER_UART_CONFIG_H_
#define XDRIVER_MCU_UART_APP_XHEADER_UART_CONFIG_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>
#include <xUtils/Standard/Standard.h>

UART_nSTATUS UART__enSetConfig(UART_nMODULE enModule, UART_nMODE enModeArg  , const UART_CONTROL_TypeDef* pstControlConfig, const UART_LINE_CONTROL_TypeDef* pstLineControlConfig, uint32_t u32BaudRateArg, const UART_LINE_TypeDef* pstLineConfig);

#endif /* XDRIVER_MCU_UART_APP_XHEADER_UART_CONFIG_H_ */
