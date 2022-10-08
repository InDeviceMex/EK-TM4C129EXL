/**
 *
 * @file UART_RegisterDefines_LCRH.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_LCRH_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_LCRH_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

/******************************************************************************************
************************************ 7 LCRH *********************************************
******************************************************************************************/

/*--------*/
#define UART_LCRH_R_BRK_MASK    ((UBase_t) 0x00000001UL)
#define UART_LCRH_R_BRK_BIT    ((UBase_t) 0UL)
#define UART_LCRH_R_BRK_NORMAL    ((UBase_t) 0x00000000UL)
#define UART_LCRH_R_BRK_SEND    ((UBase_t) 0x00000001UL)

#define UART_LCRH_BRK_MASK    ((UBase_t) 0x00000001UL)
#define UART_LCRH_BRK_NORMAL    ((UBase_t) 0x00000000UL)
#define UART_LCRH_BRK_SEND    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_LCRH_R_PEN_MASK    ((UBase_t) 0x00000002UL)
#define UART_LCRH_R_PEN_BIT    ((UBase_t) 1UL)
#define UART_LCRH_R_PEN_DIS    ((UBase_t) 0x00000000UL)
#define UART_LCRH_R_PEN_ENA    ((UBase_t) 0x00000002UL)

#define UART_LCRH_PEN_MASK    ((UBase_t) 0x00000001UL)
#define UART_LCRH_PEN_DIS    ((UBase_t) 0x00000000UL)
#define UART_LCRH_PEN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_LCRH_R_EPS_MASK    ((UBase_t) 0x00000004UL)
#define UART_LCRH_R_EPS_BIT    ((UBase_t) 2UL)
#define UART_LCRH_R_EPS_ODD    ((UBase_t) 0x00000000UL)
#define UART_LCRH_R_EPS_EVEN    ((UBase_t) 0x00000004UL)

#define UART_LCRH_EPS_MASK    ((UBase_t) 0x00000001UL)
#define UART_LCRH_EPS_ODD    ((UBase_t) 0x00000000UL)
#define UART_LCRH_EPS_EVEN    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_LCRH_R_STP2_MASK    ((UBase_t) 0x00000008UL)
#define UART_LCRH_R_STP2_BIT    ((UBase_t) 3UL)
#define UART_LCRH_R_STP2_ONE    ((UBase_t) 0x00000000UL)
#define UART_LCRH_R_STP2_TWO    ((UBase_t) 0x00000008UL)

#define UART_LCRH_STP2_MASK    ((UBase_t) 0x00000001UL)
#define UART_LCRH_STP2_ONE    ((UBase_t) 0x00000000UL)
#define UART_LCRH_STP2_TWO    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_LCRH_R_FEN_MASK    ((UBase_t) 0x00000010UL)
#define UART_LCRH_R_FEN_BIT    ((UBase_t) 4UL)
#define UART_LCRH_R_FEN_DIS    ((UBase_t) 0x00000000UL)
#define UART_LCRH_R_FEN_ENA    ((UBase_t) 0x00000010UL)

#define UART_LCRH_FEN_MASK    ((UBase_t) 0x00000001UL)
#define UART_LCRH_FEN_DIS    ((UBase_t) 0x00000000UL)
#define UART_LCRH_FEN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_LCRH_R_WLEN_MASK    ((UBase_t) 0x00000060UL)
#define UART_LCRH_R_WLEN_BIT    ((UBase_t) 5UL)
#define UART_LCRH_R_WLEN_5BITS    ((UBase_t) 0x00000000UL)
#define UART_LCRH_R_WLEN_6BITS    ((UBase_t) 0x00000020UL)
#define UART_LCRH_R_WLEN_7BITS    ((UBase_t) 0x00000040UL)
#define UART_LCRH_R_WLEN_8BITS    ((UBase_t) 0x00000060UL)

#define UART_LCRH_WLEN_MASK    ((UBase_t) 0x00000003UL)
#define UART_LCRH_WLEN_5BITS    ((UBase_t) 0x00000000UL)
#define UART_LCRH_WLEN_6BITS    ((UBase_t) 0x00000001UL)
#define UART_LCRH_WLEN_7BITS    ((UBase_t) 0x00000002UL)
#define UART_LCRH_WLEN_8BITS    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define UART_LCRH_R_SPS_MASK    ((UBase_t) 0x00000080UL)
#define UART_LCRH_R_SPS_BIT    ((UBase_t) 7UL)
#define UART_LCRH_R_SPS_DIS    ((UBase_t) 0x00000000UL)
#define UART_LCRH_R_SPS_ENA    ((UBase_t) 0x00000080UL)

#define UART_LCRH_SPS_MASK    ((UBase_t) 0x00000001UL)
#define UART_LCRH_SPS_DIS    ((UBase_t) 0x00000000UL)
#define UART_LCRH_SPS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_LCRH_H_ */
