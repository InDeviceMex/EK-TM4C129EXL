/**
 *
 * @file UART_RegisterPeripheral.h
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

#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_UART_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_UART_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral/xHeader/UART_RegisterPeripheral_Module0.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral/xHeader/UART_RegisterPeripheral_Module1.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral/xHeader/UART_RegisterPeripheral_Module2.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral/xHeader/UART_RegisterPeripheral_Module3.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral/xHeader/UART_RegisterPeripheral_Module4.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral/xHeader/UART_RegisterPeripheral_Module5.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral/xHeader/UART_RegisterPeripheral_Module6.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral/xHeader/UART_RegisterPeripheral_Module7.h>

#define UART    ((UARTS_t*) (UART_BASE))

uintptr_t UART__uptrBlockBaseAddress(UART_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_UART_REGISTERPERIPHERAL_H_ */
