/**
 *
 * @file UART_RegisterPeripheral.c
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
#include <xDriver_MCU/UART/Peripheral/Register/RegisterPeripheral/UART_RegisterPeripheral.h>

uint32_t UART__u32BlockBaseAddress(UART_nMODULE enModuleArg)
{
    uint32_t UART_BLOCK_BASE[(uint32_t) UART_enMODULE_MAX] =
    {
     UART0_BASE, UART1_BASE, UART2_BASE, UART3_BASE,
     UART4_BASE, UART5_BASE, UART6_BASE, UART7_BASE
    };
    return UART_BLOCK_BASE[(uint32_t) enModuleArg];
}
