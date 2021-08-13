/**
 *
 * @file UART_RegisterDefines_FR.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_FR_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_FR_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 3 FR *********************************************
******************************************************************************************/

/*--------*/
#define UART_FR_R_CTS_MASK    ((uint32_t) 0x00000001UL)
#define UART_FR_R_CTS_BIT    ((uint32_t) 0UL)
#define UART_FR_R_CTS_NOASSERTED    ((uint32_t) 0x00000000UL)
#define UART_FR_R_CTS_ASSERTED    ((uint32_t) 0x00000001UL)

#define UART_FR_CTS_MASK    ((uint32_t) 0x00000001UL)
#define UART_FR_CTS_NOASSERTED    ((uint32_t) 0x00000000UL)
#define UART_FR_CTS_ASSERTED    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_FR_R_DSR_MASK    ((uint32_t) 0x00000002UL)
#define UART_FR_R_DSR_BIT    ((uint32_t) 1UL)
#define UART_FR_R_DSR_NOASSERTED    ((uint32_t) 0x00000000UL)
#define UART_FR_R_DSR_ASSERTED    ((uint32_t) 0x00000002UL)

#define UART_FR_DSR_MASK    ((uint32_t) 0x00000001UL)
#define UART_FR_DSR_NOASSERTED    ((uint32_t) 0x00000000UL)
#define UART_FR_DSR_ASSERTED    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_FR_R_DCD_MASK    ((uint32_t) 0x00000004UL)
#define UART_FR_R_DCD_BIT    ((uint32_t) 2UL)
#define UART_FR_R_DCD_NOASSERTED    ((uint32_t) 0x00000000UL)
#define UART_FR_R_DCD_ASSERTED    ((uint32_t) 0x00000004UL)

#define UART_FR_DCD_MASK    ((uint32_t) 0x00000001UL)
#define UART_FR_DCD_NOASSERTED    ((uint32_t) 0x00000000UL)
#define UART_FR_DCD_ASSERTED    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_FR_R_BUSY_MASK    ((uint32_t) 0x00000008UL)
#define UART_FR_R_BUSY_BIT    ((uint32_t) 3UL)
#define UART_FR_R_BUSY_IDLE    ((uint32_t) 0x00000000UL)
#define UART_FR_R_BUSY_BUSY    ((uint32_t) 0x00000008UL)

#define UART_FR_BUSY_MASK    ((uint32_t) 0x00000001UL)
#define UART_FR_BUSY_IDLE    ((uint32_t) 0x00000000UL)
#define UART_FR_BUSY_BUSY    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_FR_R_RXFE_MASK    ((uint32_t) 0x00000010UL)
#define UART_FR_R_RXFE_BIT    ((uint32_t) 4UL)
#define UART_FR_R_RXFE_NOEMPTY    ((uint32_t) 0x00000000UL)
#define UART_FR_R_RXFE_EMPTY    ((uint32_t) 0x00000010UL)

#define UART_FR_RXFE_MASK    ((uint32_t) 0x00000001UL)
#define UART_FR_RXFE_NOEMPTY    ((uint32_t) 0x00000000UL)
#define UART_FR_RXFE_EMPTY    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_FR_R_TXFF_MASK    ((uint32_t) 0x00000020UL)
#define UART_FR_R_TXFF_BIT    ((uint32_t) 5UL)
#define UART_FR_R_TXFF_NOFULL    ((uint32_t) 0x00000000UL)
#define UART_FR_R_TXFF_FULL    ((uint32_t) 0x00000020UL)

#define UART_FR_TXFF_MASK    ((uint32_t) 0x00000001UL)
#define UART_FR_TXFF_NOFULL    ((uint32_t) 0x00000000UL)
#define UART_FR_TXFF_FULL    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_FR_R_RXFF_MASK    ((uint32_t) 0x00000040UL)
#define UART_FR_R_RXFF_BIT    ((uint32_t) 6UL)
#define UART_FR_R_RXFF_NOFULL    ((uint32_t) 0x00000000UL)
#define UART_FR_R_RXFF_FULL    ((uint32_t) 0x00000040UL)

#define UART_FR_RXFF_MASK    ((uint32_t) 0x00000001UL)
#define UART_FR_RXFF_NOFULL    ((uint32_t) 0x00000000UL)
#define UART_FR_RXFF_FULL    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_FR_R_TXFE_MASK    ((uint32_t) 0x00000080UL)
#define UART_FR_R_TXFE_BIT    ((uint32_t) 7UL)
#define UART_FR_R_TXFE_NOEMPTY    ((uint32_t) 0x00000000UL)
#define UART_FR_R_TXFE_EMPTY    ((uint32_t) 0x00000080UL)

#define UART_FR_TXFE_MASK    ((uint32_t) 0x00000001UL)
#define UART_FR_TXFE_NOEMPTY    ((uint32_t) 0x00000000UL)
#define UART_FR_TXFE_EMPTY    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_FR_R_RI_MASK    ((uint32_t) 0x00000100UL)
#define UART_FR_R_RI_BIT    ((uint32_t) 8UL)
#define UART_FR_R_RI_NOASSERTED    ((uint32_t) 0x00000000UL)
#define UART_FR_R_RI_ASSERTED    ((uint32_t) 0x00000100UL)

#define UART_FR_RI_MASK    ((uint32_t) 0x00000001UL)
#define UART_FR_RI_NOASSERTED    ((uint32_t) 0x00000000UL)
#define UART_FR_RI_ASSERTED    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_FR_H_ */
