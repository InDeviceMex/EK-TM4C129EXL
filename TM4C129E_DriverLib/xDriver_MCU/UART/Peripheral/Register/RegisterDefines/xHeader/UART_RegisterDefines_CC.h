/**
 *
 * @file UART_RegisterDefines_CC.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_CC_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_CC_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

/******************************************************************************************
************************************ 18 CC *********************************************
******************************************************************************************/
/*--------*/
#define UART_CC_R_CS_MASK    ((UBase_t) 0x0000000FUL)
#define UART_CC_R_CS_BIT    ((UBase_t) 0UL)
#define UART_CC_R_CS_SYSCLK    ((UBase_t) 0x00000000UL)
#define UART_CC_R_CS_ALTCLK    ((UBase_t) 0x00000005UL)

#define UART_CC_CS_MASK    ((UBase_t) 0x0000000FUL)
#define UART_CC_CS_SYSCLK    ((UBase_t) 0x00000000UL)
#define UART_CC_CS_ALTCLK    ((UBase_t) 0x00000005UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_CC_H_ */
