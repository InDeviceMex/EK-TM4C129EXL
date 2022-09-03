/**
 *
 * @file UART_RegisterDefines_DR.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_DR_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_DR_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 1 DR *********************************************
******************************************************************************************/
/*--------*/
#define UART_DR_R_DATA_MASK    ((uint32_t) 0x000000FFUL)
#define UART_DR_R_DATA_BIT    ((uint32_t) 0UL)

#define UART_DR_DATA_MASK    ((uint32_t) 0x000000FFUL)
/*--------*/

/*--------*/
#define UART_DR_R_FE_MASK    ((uint32_t) 0x00000100UL)
#define UART_DR_R_FE_BIT    ((uint32_t) 8UL)
#define UART_DR_R_FE_INACTIVE    ((uint32_t) 0x00000000UL)
#define UART_DR_R_FE_ACTIVE    ((uint32_t) 0x00000100UL)

#define UART_DR_FE_MASK    ((uint32_t) 0x00000001UL)
#define UART_DR_FE_INACTIVE    ((uint32_t) 0x00000000UL)
#define UART_DR_FE_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_DR_R_PE_MASK    ((uint32_t) 0x00000200UL)
#define UART_DR_R_PE_BIT    ((uint32_t) 9UL)
#define UART_DR_R_PE_INACTIVE    ((uint32_t) 0x00000000UL)
#define UART_DR_R_PE_ACTIVE    ((uint32_t) 0x00000200UL)

#define UART_DR_PE_MASK    ((uint32_t) 0x00000001UL)
#define UART_DR_PE_INACTIVE    ((uint32_t) 0x00000000UL)
#define UART_DR_PE_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_DR_R_BE_MASK    ((uint32_t) 0x00000400UL)
#define UART_DR_R_BE_BIT    ((uint32_t) 10UL)
#define UART_DR_R_BE_INACTIVE    ((uint32_t) 0x00000000UL)
#define UART_DR_R_BE_ACTIVE    ((uint32_t) 0x00000400UL)

#define UART_DR_BE_MASK    ((uint32_t) 0x00000001UL)
#define UART_DR_BE_INACTIVE    ((uint32_t) 0x00000000UL)
#define UART_DR_BE_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_DR_R_OE_MASK    ((uint32_t) 0x00000800UL)
#define UART_DR_R_OE_BIT    ((uint32_t) 11UL)
#define UART_DR_R_OE_INACTIVE    ((uint32_t) 0x00000000UL)
#define UART_DR_R_OE_ACTIVE    ((uint32_t) 0x00000800UL)

#define UART_DR_OE_MASK    ((uint32_t) 0x00000001UL)
#define UART_DR_OE_INACTIVE    ((uint32_t) 0x00000000UL)
#define UART_DR_OE_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_DR_H_ */
