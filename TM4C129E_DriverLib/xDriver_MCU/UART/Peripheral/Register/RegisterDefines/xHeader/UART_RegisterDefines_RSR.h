/**
 *
 * @file UART_RegisterDefines_RSR.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_RSR_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_RSR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 2 RSR *********************************************
******************************************************************************************/

/*--------*/
#define UART_RSR_R_FE_MASK    ((uint32_t) 0x00000001UL)
#define UART_RSR_R_FE_BIT    ((uint32_t) 0UL)
#define UART_RSR_R_FE_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_RSR_R_FE_OCCUR    ((uint32_t) 0x00000001UL)

#define UART_RSR_FE_MASK    ((uint32_t) 0x00000001UL)
#define UART_RSR_FE_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_RSR_FE_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RSR_R_PE_MASK    ((uint32_t) 0x00000002UL)
#define UART_RSR_R_PE_BIT    ((uint32_t) 1UL)
#define UART_RSR_R_PE_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_RSR_R_PE_OCCUR    ((uint32_t) 0x00000002UL)

#define UART_RSR_PE_MASK    ((uint32_t) 0x00000001UL)
#define UART_RSR_PE_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_RSR_PE_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RSR_R_BE_MASK    ((uint32_t) 0x00000004UL)
#define UART_RSR_R_BE_BIT    ((uint32_t) 2UL)
#define UART_RSR_R_BE_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_RSR_R_BE_OCCUR    ((uint32_t) 0x00000004UL)

#define UART_RSR_BE_MASK    ((uint32_t) 0x00000001UL)
#define UART_RSR_BE_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_RSR_BE_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RSR_R_OE_MASK    ((uint32_t) 0x00000008UL)
#define UART_RSR_R_OE_BIT    ((uint32_t) 3UL)
#define UART_RSR_R_OE_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_RSR_R_OE_OCCUR    ((uint32_t) 0x00000008UL)

#define UART_RSR_OE_MASK    ((uint32_t) 0x00000001UL)
#define UART_RSR_OE_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_RSR_OE_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_RSR_H_ */
