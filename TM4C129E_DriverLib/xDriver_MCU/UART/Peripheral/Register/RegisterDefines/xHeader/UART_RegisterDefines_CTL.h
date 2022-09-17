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
#define UART_CTL_R_UARTEN_MASK    ((uint32_t) 0x00000001UL)
#define UART_CTL_R_UARTEN_BIT    ((uint32_t) 0UL)
#define UART_CTL_R_UARTEN_DIS    ((uint32_t) 0x00000000UL)
#define UART_CTL_R_UARTEN_ENA    ((uint32_t) 0x00000001UL)

#define UART_CTL_UARTEN_MASK    ((uint32_t) 0x00000001UL)
#define UART_CTL_UARTEN_DIS    ((uint32_t) 0x00000000UL)
#define UART_CTL_UARTEN_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_SIREN_MASK    ((uint32_t) 0x00000002UL)
#define UART_CTL_R_SIREN_BIT    ((uint32_t) 1UL)
#define UART_CTL_R_SIREN_NORMAL    ((uint32_t) 0x00000000UL)
#define UART_CTL_R_SIREN_SIR    ((uint32_t) 0x00000002UL)

#define UART_CTL_SIREN_MASK    ((uint32_t) 0x00000001UL)
#define UART_CTL_SIREN_NORMAL    ((uint32_t) 0x00000000UL)
#define UART_CTL_SIREN_SIR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_SIRLP_MASK    ((uint32_t) 0x00000004UL)
#define UART_CTL_R_SIRLP_BIT    ((uint32_t) 2UL)
#define UART_CTL_R_SIRLP_DIS    ((uint32_t) 0x00000000UL)
#define UART_CTL_R_SIRLP_ENA    ((uint32_t) 0x00000004UL)

#define UART_CTL_SIRLP_MASK    ((uint32_t) 0x00000001UL)
#define UART_CTL_SIRLP_DIS    ((uint32_t) 0x00000000UL)
#define UART_CTL_SIRLP_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_SMART_MASK    ((uint32_t) 0x00000008UL)
#define UART_CTL_R_SMART_BIT    ((uint32_t) 3UL)
#define UART_CTL_R_SMART_NORMAL    ((uint32_t) 0x00000000UL)
#define UART_CTL_R_SMART_SMART    ((uint32_t) 0x00000008UL)

#define UART_CTL_SMART_MASK    ((uint32_t) 0x00000001UL)
#define UART_CTL_SMART_NORMAL    ((uint32_t) 0x00000000UL)
#define UART_CTL_SMART_SMART    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_EOT_MASK    ((uint32_t) 0x00000010UL)
#define UART_CTL_R_EOT_BIT    ((uint32_t) 4UL)
#define UART_CTL_R_EOT_FIFO    ((uint32_t) 0x00000000UL)
#define UART_CTL_R_EOT_ALL    ((uint32_t) 0x00000010UL)

#define UART_CTL_EOT_MASK    ((uint32_t) 0x00000001UL)
#define UART_CTL_EOT_FIFO    ((uint32_t) 0x00000000UL)
#define UART_CTL_EOT_ALL    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_HSE_MASK    ((uint32_t) 0x00000020UL)
#define UART_CTL_R_HSE_BIT    ((uint32_t) 5UL)
#define UART_CTL_R_HSE_DIV16    ((uint32_t) 0x00000000UL)
#define UART_CTL_R_HSE_DIV8    ((uint32_t) 0x00000020UL)

#define UART_CTL_HSE_MASK    ((uint32_t) 0x00000001UL)
#define UART_CTL_HSE_DIV16    ((uint32_t) 0x00000000UL)
#define UART_CTL_HSE_DIV8    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_LBE_MASK    ((uint32_t) 0x00000080UL)
#define UART_CTL_R_LBE_BIT    ((uint32_t) 7UL)
#define UART_CTL_R_LBE_NORMAL    ((uint32_t) 0x00000000UL)
#define UART_CTL_R_LBE_LOOPBACK    ((uint32_t) 0x00000080UL)

#define UART_CTL_LBE_MASK    ((uint32_t) 0x00000001UL)
#define UART_CTL_LBE_NORMAL    ((uint32_t) 0x00000000UL)
#define UART_CTL_LBE_LOOPBACK    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_TXE_MASK    ((uint32_t) 0x00000100UL)
#define UART_CTL_R_TXE_BIT    ((uint32_t) 8UL)
#define UART_CTL_R_TXE_DIS    ((uint32_t) 0x00000000UL)
#define UART_CTL_R_TXE_ENA    ((uint32_t) 0x00000100UL)

#define UART_CTL_TXE_MASK    ((uint32_t) 0x00000001UL)
#define UART_CTL_TXE_DIS    ((uint32_t) 0x00000000UL)
#define UART_CTL_TXE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_RXE_MASK    ((uint32_t) 0x00000200UL)
#define UART_CTL_R_RXE_BIT    ((uint32_t) 9UL)
#define UART_CTL_R_RXE_DIS    ((uint32_t) 0x00000000UL)
#define UART_CTL_R_RXE_ENA    ((uint32_t) 0x00000200UL)

#define UART_CTL_RXE_MASK    ((uint32_t) 0x00000001UL)
#define UART_CTL_RXE_DIS    ((uint32_t) 0x00000000UL)
#define UART_CTL_RXE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_DTR_MASK    ((uint32_t) 0x00000400UL)
#define UART_CTL_R_DTR_BIT    ((uint32_t) 10UL)
#define UART_CTL_R_DTR_LOW    ((uint32_t) 0x00000000UL)
#define UART_CTL_R_DTR_HIGH    ((uint32_t) 0x00000400UL)

#define UART_CTL_DTR_MASK    ((uint32_t) 0x00000001UL)
#define UART_CTL_DTR_LOW    ((uint32_t) 0x00000000UL)
#define UART_CTL_DTR_HIGH    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_RTS_MASK    ((uint32_t) 0x00000800UL)
#define UART_CTL_R_RTS_BIT    ((uint32_t) 11UL)
#define UART_CTL_R_RTS_LOW    ((uint32_t) 0x00000000UL)
#define UART_CTL_R_RTS_HIGH    ((uint32_t) 0x00000800UL)

#define UART_CTL_RTS_MASK    ((uint32_t) 0x00000001UL)
#define UART_CTL_RTS_LOW    ((uint32_t) 0x00000000UL)
#define UART_CTL_RTS_HIGH    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_RTSEN_MASK    ((uint32_t) 0x00004000UL)
#define UART_CTL_R_RTSEN_BIT    ((uint32_t) 14UL)
#define UART_CTL_R_RTSEN_SOFT    ((uint32_t) 0x00000000UL)
#define UART_CTL_R_RTSEN_HARD    ((uint32_t) 0x00004000UL)

#define UART_CTL_RTSEN_MASK    ((uint32_t) 0x00000001UL)
#define UART_CTL_RTSEN_SOFT    ((uint32_t) 0x00000000UL)
#define UART_CTL_RTSEN_HARD    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_CTL_R_CTSEN_MASK    ((uint32_t) 0x00008000UL)
#define UART_CTL_R_CTSEN_BIT    ((uint32_t) 15UL)
#define UART_CTL_R_CTSEN_SOFT    ((uint32_t) 0x00000000UL)
#define UART_CTL_R_CTSEN_HARD    ((uint32_t) 0x00008000UL)

#define UART_CTL_CTSEN_MASK    ((uint32_t) 0x00000001UL)
#define UART_CTL_CTSEN_SOFT    ((uint32_t) 0x00000000UL)
#define UART_CTL_CTSEN_HARD    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_CTL_H_ */
