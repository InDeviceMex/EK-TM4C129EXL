/**
 *
 * @file UART_RegisterPeripheral_Bitbanding.h
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
 * @verbatim 22 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_UART_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_UART_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/UART_RegisterPeripheral_Bitbanding_Module0.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/UART_RegisterPeripheral_Bitbanding_Module1.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/UART_RegisterPeripheral_Bitbanding_Module2.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/UART_RegisterPeripheral_Bitbanding_Module3.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/UART_RegisterPeripheral_Bitbanding_Module4.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/UART_RegisterPeripheral_Bitbanding_Module5.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/UART_RegisterPeripheral_Bitbanding_Module6.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/UART_RegisterPeripheral_Bitbanding_Module7.h>

#define UART_BITBANDING    ((UARTS_BITBANDING_TypeDef*) (UART_BITBANDING_BASE + (UART_OFFSET * 32UL)))

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_UART_REGISTERPERIPHERAL_BITBANDING_H_ */
