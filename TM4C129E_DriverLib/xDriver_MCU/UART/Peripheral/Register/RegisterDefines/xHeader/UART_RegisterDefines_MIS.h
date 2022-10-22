/**
 *
 * @file UART_RegisterDefines_MIS.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_MIS_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_MIS_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

/******************************************************************************************
************************************ 12 MIS *********************************************
******************************************************************************************/

/*--------*/
#define UART_MIS_R_RI_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_R_RI_BIT    ((UBase_t) 0UL)
#define UART_MIS_R_RI_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_RI_ENA    ((UBase_t) 0x00000001UL)

#define UART_MIS_RI_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_RI_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_RI_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_CTS_MASK    ((UBase_t) 0x00000002UL)
#define UART_MIS_R_CTS_BIT    ((UBase_t) 1UL)
#define UART_MIS_R_CTS_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_CTS_ENA    ((UBase_t) 0x00000002UL)

#define UART_MIS_CTS_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_CTS_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_CTS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_DCD_MASK    ((UBase_t) 0x00000004UL)
#define UART_MIS_R_DCD_BIT    ((UBase_t) 2UL)
#define UART_MIS_R_DCD_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_DCD_ENA    ((UBase_t) 0x00000004UL)

#define UART_MIS_DCD_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_DCD_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_DCD_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_DSR_MASK    ((UBase_t) 0x00000008UL)
#define UART_MIS_R_DSR_BIT    ((UBase_t) 3UL)
#define UART_MIS_R_DSR_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_DSR_ENA    ((UBase_t) 0x00000008UL)

#define UART_MIS_DSR_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_DSR_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_DSR_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_RX_MASK    ((UBase_t) 0x00000010UL)
#define UART_MIS_R_RX_BIT    ((UBase_t) 4UL)
#define UART_MIS_R_RX_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_RX_ENA    ((UBase_t) 0x00000010UL)

#define UART_MIS_RX_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_RX_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_RX_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_TX_MASK    ((UBase_t) 0x00000020UL)
#define UART_MIS_R_TX_BIT    ((UBase_t) 5UL)
#define UART_MIS_R_TX_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_TX_ENA    ((UBase_t) 0x00000020UL)

#define UART_MIS_TX_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_TX_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_TX_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_RT_MASK    ((UBase_t) 0x00000040UL)
#define UART_MIS_R_RT_BIT    ((UBase_t) 6UL)
#define UART_MIS_R_RT_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_RT_ENA    ((UBase_t) 0x00000040UL)

#define UART_MIS_RT_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_RT_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_RT_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_FE_MASK    ((UBase_t) 0x00000080UL)
#define UART_MIS_R_FE_BIT    ((UBase_t) 7UL)
#define UART_MIS_R_FE_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_FE_ENA    ((UBase_t) 0x00000080UL)

#define UART_MIS_FE_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_FE_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_FE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_PE_MASK    ((UBase_t) 0x00000100UL)
#define UART_MIS_R_PE_BIT    ((UBase_t) 8UL)
#define UART_MIS_R_PE_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_PE_ENA    ((UBase_t) 0x00000100UL)

#define UART_MIS_PE_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_PE_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_PE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_BE_MASK    ((UBase_t) 0x00000200UL)
#define UART_MIS_R_BE_BIT    ((UBase_t) 9UL)
#define UART_MIS_R_BE_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_BE_ENA    ((UBase_t) 0x00000200UL)

#define UART_MIS_BE_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_BE_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_BE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_OE_MASK    ((UBase_t) 0x00000400UL)
#define UART_MIS_R_OE_BIT    ((UBase_t) 10UL)
#define UART_MIS_R_OE_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_OE_ENA    ((UBase_t) 0x00000400UL)

#define UART_MIS_OE_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_OE_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_OE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_EOT_MASK    ((UBase_t) 0x00000800UL)
#define UART_MIS_R_EOT_BIT    ((UBase_t) 11UL)
#define UART_MIS_R_EOT_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_EOT_ENA    ((UBase_t) 0x00000800UL)

#define UART_MIS_EOT_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_EOT_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_EOT_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_BIT9_MASK    ((UBase_t) 0x00001000UL)
#define UART_MIS_R_BIT9_BIT    ((UBase_t) 12UL)
#define UART_MIS_R_BIT9_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_BIT9_ENA    ((UBase_t) 0x00001000UL)

#define UART_MIS_BIT9_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_BIT9_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_BIT9_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_DMARX_MASK    ((UBase_t) 0x00010000UL)
#define UART_MIS_R_DMARX_BIT    ((UBase_t) 16UL)
#define UART_MIS_R_DMARX_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_DMARX_ENA    ((UBase_t) 0x00010000UL)

#define UART_MIS_DMARX_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_DMARX_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_DMARX_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_MIS_R_DMATX_MASK    ((UBase_t) 0x00020000UL)
#define UART_MIS_R_DMATX_BIT    ((UBase_t) 17UL)
#define UART_MIS_R_DMATX_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_R_DMATX_ENA    ((UBase_t) 0x00020000UL)

#define UART_MIS_DMATX_MASK    ((UBase_t) 0x00000001UL)
#define UART_MIS_DMATX_DIS    ((UBase_t) 0x00000000UL)
#define UART_MIS_DMATX_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_MIS_H_ */
