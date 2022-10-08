/**
 *
 * @file UART_RegisterDefines_IBRD.h
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_IBRD_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_IBRD_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

/******************************************************************************************
************************************ 5 IBRD *********************************************
******************************************************************************************/

/*--------*/
#define UART_IBRD_R_DIVINT_MASK    ((UBase_t) 0x0000FFFFUL)
#define UART_IBRD_R_DIVINT_BIT    ((UBase_t) 0UL)
#define UART_IBRD_R_DIVINT_CLEAR    ((UBase_t) 0x0000FFFFUL)

#define UART_IBRD_DIVINT_MASK    ((UBase_t) 0x0000FFFFUL)
#define UART_IBRD_DIVINT_CLEAR    ((UBase_t) 0x0000FFFFUL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_IBRD_H_ */
