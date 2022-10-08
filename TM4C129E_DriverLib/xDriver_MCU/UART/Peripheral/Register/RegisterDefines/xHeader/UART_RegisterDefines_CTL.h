/**
 *
 * @file UART_RegisterDefines_CTL.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_CTL_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_CTL_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

/******************************************************************************************
************************************ 8 CTL *********************************************
******************************************************************************************/

/*--------*/
#define UART_CTL_R_UARTEN_MASK    ((UBase_t) 0x00000001UL)
#define UART_CTL_R_UARTEN_BIT    ((UBase_t) 0UL)
#define UART_CTL_R_UARTEN_DIS    ((UBase_t) 0x00000000UL)
#define UART_CTL_R_UARTEN_ENA    ((UBase_t) 0x00000001UL)

#define UART_CTL_UARTEN_MASK    ((UBase_t) 0x00000001UL)
#define UART_CTL_UARTEN_DIS    ((UBase_t) 0x00000000UL)
#define UART_CTL_UARTEN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_SIREN_MASK    ((UBase_t) 0x00000002UL)
#define UART_CTL_R_SIREN_BIT    ((UBase_t) 1UL)
#define UART_CTL_R_SIREN_NORMAL    ((UBase_t) 0x00000000UL)
#define UART_CTL_R_SIREN_SIR    ((UBase_t) 0x00000002UL)

#define UART_CTL_SIREN_MASK    ((UBase_t) 0x00000001UL)
#define UART_CTL_SIREN_NORMAL    ((UBase_t) 0x00000000UL)
#define UART_CTL_SIREN_SIR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_SIRLP_MASK    ((UBase_t) 0x00000004UL)
#define UART_CTL_R_SIRLP_BIT    ((UBase_t) 2UL)
#define UART_CTL_R_SIRLP_DIS    ((UBase_t) 0x00000000UL)
#define UART_CTL_R_SIRLP_ENA    ((UBase_t) 0x00000004UL)

#define UART_CTL_SIRLP_MASK    ((UBase_t) 0x00000001UL)
#define UART_CTL_SIRLP_DIS    ((UBase_t) 0x00000000UL)
#define UART_CTL_SIRLP_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_SMART_MASK    ((UBase_t) 0x00000008UL)
#define UART_CTL_R_SMART_BIT    ((UBase_t) 3UL)
#define UART_CTL_R_SMART_NORMAL    ((UBase_t) 0x00000000UL)
#define UART_CTL_R_SMART_SMART    ((UBase_t) 0x00000008UL)

#define UART_CTL_SMART_MASK    ((UBase_t) 0x00000001UL)
#define UART_CTL_SMART_NORMAL    ((UBase_t) 0x00000000UL)
#define UART_CTL_SMART_SMART    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_EOT_MASK    ((UBase_t) 0x00000010UL)
#define UART_CTL_R_EOT_BIT    ((UBase_t) 4UL)
#define UART_CTL_R_EOT_FIFO    ((UBase_t) 0x00000000UL)
#define UART_CTL_R_EOT_ALL    ((UBase_t) 0x00000010UL)

#define UART_CTL_EOT_MASK    ((UBase_t) 0x00000001UL)
#define UART_CTL_EOT_FIFO    ((UBase_t) 0x00000000UL)
#define UART_CTL_EOT_ALL    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_HSE_MASK    ((UBase_t) 0x00000020UL)
#define UART_CTL_R_HSE_BIT    ((UBase_t) 5UL)
#define UART_CTL_R_HSE_DIV16    ((UBase_t) 0x00000000UL)
#define UART_CTL_R_HSE_DIV8    ((UBase_t) 0x00000020UL)

#define UART_CTL_HSE_MASK    ((UBase_t) 0x00000001UL)
#define UART_CTL_HSE_DIV16    ((UBase_t) 0x00000000UL)
#define UART_CTL_HSE_DIV8    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_LBE_MASK    ((UBase_t) 0x00000080UL)
#define UART_CTL_R_LBE_BIT    ((UBase_t) 7UL)
#define UART_CTL_R_LBE_NORMAL    ((UBase_t) 0x00000000UL)
#define UART_CTL_R_LBE_LOOPBACK    ((UBase_t) 0x00000080UL)

#define UART_CTL_LBE_MASK    ((UBase_t) 0x00000001UL)
#define UART_CTL_LBE_NORMAL    ((UBase_t) 0x00000000UL)
#define UART_CTL_LBE_LOOPBACK    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_TXE_MASK    ((UBase_t) 0x00000100UL)
#define UART_CTL_R_TXE_BIT    ((UBase_t) 8UL)
#define UART_CTL_R_TXE_DIS    ((UBase_t) 0x00000000UL)
#define UART_CTL_R_TXE_ENA    ((UBase_t) 0x00000100UL)

#define UART_CTL_TXE_MASK    ((UBase_t) 0x00000001UL)
#define UART_CTL_TXE_DIS    ((UBase_t) 0x00000000UL)
#define UART_CTL_TXE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_RXE_MASK    ((UBase_t) 0x00000200UL)
#define UART_CTL_R_RXE_BIT    ((UBase_t) 9UL)
#define UART_CTL_R_RXE_DIS    ((UBase_t) 0x00000000UL)
#define UART_CTL_R_RXE_ENA    ((UBase_t) 0x00000200UL)

#define UART_CTL_RXE_MASK    ((UBase_t) 0x00000001UL)
#define UART_CTL_RXE_DIS    ((UBase_t) 0x00000000UL)
#define UART_CTL_RXE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_DTR_MASK    ((UBase_t) 0x00000400UL)
#define UART_CTL_R_DTR_BIT    ((UBase_t) 10UL)
#define UART_CTL_R_DTR_LOW    ((UBase_t) 0x00000000UL)
#define UART_CTL_R_DTR_HIGH    ((UBase_t) 0x00000400UL)

#define UART_CTL_DTR_MASK    ((UBase_t) 0x00000001UL)
#define UART_CTL_DTR_LOW    ((UBase_t) 0x00000000UL)
#define UART_CTL_DTR_HIGH    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_RTS_MASK    ((UBase_t) 0x00000800UL)
#define UART_CTL_R_RTS_BIT    ((UBase_t) 11UL)
#define UART_CTL_R_RTS_LOW    ((UBase_t) 0x00000000UL)
#define UART_CTL_R_RTS_HIGH    ((UBase_t) 0x00000800UL)

#define UART_CTL_RTS_MASK    ((UBase_t) 0x00000001UL)
#define UART_CTL_RTS_LOW    ((UBase_t) 0x00000000UL)
#define UART_CTL_RTS_HIGH    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_RTSEN_MASK    ((UBase_t) 0x00004000UL)
#define UART_CTL_R_RTSEN_BIT    ((UBase_t) 14UL)
#define UART_CTL_R_RTSEN_SOFT    ((UBase_t) 0x00000000UL)
#define UART_CTL_R_RTSEN_HARD    ((UBase_t) 0x00004000UL)

#define UART_CTL_RTSEN_MASK    ((UBase_t) 0x00000001UL)
#define UART_CTL_RTSEN_SOFT    ((UBase_t) 0x00000000UL)
#define UART_CTL_RTSEN_HARD    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_CTSEN_MASK    ((UBase_t) 0x00008000UL)
#define UART_CTL_R_CTSEN_BIT    ((UBase_t) 15UL)
#define UART_CTL_R_CTSEN_SOFT    ((UBase_t) 0x00000000UL)
#define UART_CTL_R_CTSEN_HARD    ((UBase_t) 0x00008000UL)

#define UART_CTL_CTSEN_MASK    ((UBase_t) 0x00000001UL)
#define UART_CTL_CTSEN_SOFT    ((UBase_t) 0x00000000UL)
#define UART_CTL_CTSEN_HARD    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_CTL_H_ */
