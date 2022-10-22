/**
 *
 * @file UART_RegisterDefines_ICR.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_ICR_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_ICR_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

/******************************************************************************************
************************************ 13 ICR *********************************************
******************************************************************************************/

/*--------*/
#define UART_ICR_R_RI_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_R_RI_BIT    ((UBase_t) 0UL)
#define UART_ICR_R_RI_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_RI_ENA    ((UBase_t) 0x00000001UL)

#define UART_ICR_RI_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_RI_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_RI_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_CTS_MASK    ((UBase_t) 0x00000002UL)
#define UART_ICR_R_CTS_BIT    ((UBase_t) 1UL)
#define UART_ICR_R_CTS_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_CTS_ENA    ((UBase_t) 0x00000002UL)

#define UART_ICR_CTS_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_CTS_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_CTS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_DCD_MASK    ((UBase_t) 0x00000004UL)
#define UART_ICR_R_DCD_BIT    ((UBase_t) 2UL)
#define UART_ICR_R_DCD_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_DCD_ENA    ((UBase_t) 0x00000004UL)

#define UART_ICR_DCD_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_DCD_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_DCD_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_DSR_MASK    ((UBase_t) 0x00000008UL)
#define UART_ICR_R_DSR_BIT    ((UBase_t) 3UL)
#define UART_ICR_R_DSR_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_DSR_ENA    ((UBase_t) 0x00000008UL)

#define UART_ICR_DSR_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_DSR_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_DSR_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_RX_MASK    ((UBase_t) 0x00000010UL)
#define UART_ICR_R_RX_BIT    ((UBase_t) 4UL)
#define UART_ICR_R_RX_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_RX_ENA    ((UBase_t) 0x00000010UL)

#define UART_ICR_RX_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_RX_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_RX_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_TX_MASK    ((UBase_t) 0x00000020UL)
#define UART_ICR_R_TX_BIT    ((UBase_t) 5UL)
#define UART_ICR_R_TX_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_TX_ENA    ((UBase_t) 0x00000020UL)

#define UART_ICR_TX_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_TX_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_TX_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_RT_MASK    ((UBase_t) 0x00000040UL)
#define UART_ICR_R_RT_BIT    ((UBase_t) 6UL)
#define UART_ICR_R_RT_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_RT_ENA    ((UBase_t) 0x00000040UL)

#define UART_ICR_RT_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_RT_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_RT_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_FE_MASK    ((UBase_t) 0x00000080UL)
#define UART_ICR_R_FE_BIT    ((UBase_t) 7UL)
#define UART_ICR_R_FE_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_FE_ENA    ((UBase_t) 0x00000080UL)

#define UART_ICR_FE_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_FE_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_FE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_PE_MASK    ((UBase_t) 0x00000100UL)
#define UART_ICR_R_PE_BIT    ((UBase_t) 8UL)
#define UART_ICR_R_PE_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_PE_ENA    ((UBase_t) 0x00000100UL)

#define UART_ICR_PE_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_PE_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_PE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_BE_MASK    ((UBase_t) 0x00000200UL)
#define UART_ICR_R_BE_BIT    ((UBase_t) 9UL)
#define UART_ICR_R_BE_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_BE_ENA    ((UBase_t) 0x00000200UL)

#define UART_ICR_BE_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_BE_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_BE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_OE_MASK    ((UBase_t) 0x00000400UL)
#define UART_ICR_R_OE_BIT    ((UBase_t) 10UL)
#define UART_ICR_R_OE_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_OE_ENA    ((UBase_t) 0x00000400UL)

#define UART_ICR_OE_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_OE_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_OE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_EOT_MASK    ((UBase_t) 0x00000800UL)
#define UART_ICR_R_EOT_BIT    ((UBase_t) 11UL)
#define UART_ICR_R_EOT_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_EOT_ENA    ((UBase_t) 0x00000800UL)

#define UART_ICR_EOT_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_EOT_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_EOT_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_BIT9_MASK    ((UBase_t) 0x00001000UL)
#define UART_ICR_R_BIT9_BIT    ((UBase_t) 12UL)
#define UART_ICR_R_BIT9_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_BIT9_ENA    ((UBase_t) 0x00001000UL)

#define UART_ICR_BIT9_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_BIT9_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_BIT9_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_DMARX_MASK    ((UBase_t) 0x00010000UL)
#define UART_ICR_R_DMARX_BIT    ((UBase_t) 16UL)
#define UART_ICR_R_DMARX_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_DMARX_ENA    ((UBase_t) 0x00010000UL)

#define UART_ICR_DMARX_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_DMARX_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_DMARX_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_ICR_R_DMATX_MASK    ((UBase_t) 0x00020000UL)
#define UART_ICR_R_DMATX_BIT    ((UBase_t) 17UL)
#define UART_ICR_R_DMATX_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_R_DMATX_ENA    ((UBase_t) 0x00020000UL)

#define UART_ICR_DMATX_MASK    ((UBase_t) 0x00000001UL)
#define UART_ICR_DMATX_DIS    ((UBase_t) 0x00000000UL)
#define UART_ICR_DMATX_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_ICR_H_ */
