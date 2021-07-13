/**
 *
 * @file UART_RegisterDefines_FBRD.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_FBRD_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_FBRD_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 6 FBRD *********************************************
******************************************************************************************/

/*--------*/
#define UART_FBRD_R_DIVFRAC_MASK    ((uint32_t) 0x0000003FUL)
#define UART_FBRD_R_DIVFRAC_BIT    ((uint32_t) 0UL)
#define UART_FBRD_R_DIVFRAC_CLEAR    ((uint32_t) 0x0000003FUL)

#define UART_FBRD_DIVFRAC_MASK    ((uint32_t) 0x0000003FUL)
#define UART_FBRD_DIVFRAC_CLEAR    ((uint32_t) 0x0000003FUL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_FBRD_H_ */
