/**
 *
 * @file UART_RegisterPeripheral_Bitbanding_Module4.h
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
 * Date           Author     Version     Description * 22 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_UART_REGISTERPERIPHERAL_BITBANDING_MODULE4_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_UART_REGISTERPERIPHERAL_BITBANDING_MODULE4_H_

#include <xDriver_MCU/UART/Peripheral/Register/xHeader/UART_RegisterAddress.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterDefines/UART_RegisterDefines.h>
#include <xDriver_MCU/UART/Peripheral/Struct/xHeader/UART_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ UART4 *********************************************
******************************************************************************************/
#define UART4_BITBANDING    ((UART_BITBANDING_t*) (UART_BITBANDING_BASE + (UART4_OFFSET * 32U)))

/******************************************************************************************
*********************************** * 1 DR *********************************************
******************************************************************************************/
#define UART4_BITBANDING_DR    ((UART_BITBANDING_DR_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_DR_OFFSET) * 32U)))

#define UART4_BITBANDING_DR_FE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_DR_OFFSET) * 32U) + (UART_DR_R_FE_BIT * 4U))))
#define UART4_BITBANDING_DR_PE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_DR_OFFSET) * 32U) + (UART_DR_R_PE_BIT * 4U))))
#define UART4_BITBANDING_DR_BE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_DR_OFFSET) * 32U) + (UART_DR_R_BE_BIT * 4U))))
#define UART4_BITBANDING_DR_OE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_DR_OFFSET) * 32U) + (UART_DR_R_OE_BIT * 4U))))

/******************************************************************************************
*********************************** * 2 RSR *********************************************
******************************************************************************************/
#define UART4_BITBANDING_RSR    ((UART_BITBANDING_RSR_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RSR_OFFSET) * 32U)))
#define UART4_BITBANDING_ECR    ((UART_BITBANDING_ECR_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ECR_OFFSET) * 32U)))

#define UART4_BITBANDING_RSR_FE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RSR_OFFSET) * 32U) + (UART_RSR_R_FE_BIT * 4U))))
#define UART4_BITBANDING_RSR_PE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RSR_OFFSET) * 32U) + (UART_RSR_R_PE_BIT * 4U))))
#define UART4_BITBANDING_RSR_BE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RSR_OFFSET) * 32U) + (UART_RSR_R_BE_BIT * 4U))))
#define UART4_BITBANDING_RSR_OE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RSR_OFFSET) * 32U) + (UART_RSR_R_OE_BIT * 4U))))

/******************************************************************************************
*********************************** * 3 FR *********************************************
******************************************************************************************/
#define UART4_BITBANDING_FR    ((UART_BITBANDING_FR_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_FR_OFFSET) * 32U)))

#define UART4_BITBANDING_FR_CTS    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_CTS_BIT * 4U))))
#define UART4_BITBANDING_FR_DSR    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_DSR_BIT * 4U))))
#define UART4_BITBANDING_FR_DCD    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_DCD_BIT * 4U))))
#define UART4_BITBANDING_FR_BUSY    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_BUSY_BIT * 4U))))
#define UART4_BITBANDING_FR_RXFE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_RXFE_BIT * 4U))))
#define UART4_BITBANDING_FR_TXFF    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_TXFF_BIT * 4U))))
#define UART4_BITBANDING_FR_RXFF    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_RXFF_BIT * 4U))))
#define UART4_BITBANDING_FR_TXFE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_TXFE_BIT * 4U))))
#define UART4_BITBANDING_FR_RI    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_RI_BIT * 4U))))

/******************************************************************************************
*********************************** * 4 ILPR *********************************************
******************************************************************************************/
#define UART4_BITBANDING_ILPR    ((UART_BITBANDING_ILPR_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ILPR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 5 IBRD *********************************************
******************************************************************************************/
#define UART4_BITBANDING_IBRD    ((UART_BITBANDING_IBRD_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IBRD_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 6 FBRD *********************************************
******************************************************************************************/
#define UART4_BITBANDING_FBRD    ((UART_BITBANDING_FBRD_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_FBRD_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 7 LCRH *********************************************
******************************************************************************************/
#define UART4_BITBANDING_LCRH    ((UART_BITBANDING_LCRH_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_LCRH_OFFSET) * 32U)))

#define UART4_BITBANDING_LCRH_BRK    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_BRK_BIT * 4U))))
#define UART4_BITBANDING_LCRH_PEN    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_PEN_BIT * 4U))))
#define UART4_BITBANDING_LCRH_EPS    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_EPS_BIT * 4U))))
#define UART4_BITBANDING_LCRH_STP2    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_STP2_BIT * 4U))))
#define UART4_BITBANDING_LCRH_FEN    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_FEN_BIT * 4U))))
#define UART4_BITBANDING_LCRH_WLEN_1    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_LCRH_OFFSET) * 32U) + ((UART_LCRH_R_WLEN_BIT + 0U) * 4U))))
#define UART4_BITBANDING_LCRH_WLEN_2    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_LCRH_OFFSET) * 32U) + ((UART_LCRH_R_WLEN_BIT + 1U) * 4U))))
#define UART4_BITBANDING_LCRH_SPS    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_SPS_BIT * 4U))))

/******************************************************************************************
*********************************** * 8 CTL *********************************************
******************************************************************************************/
#define UART4_BITBANDING_CTL    ((UART_BITBANDING_CTL_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CTL_OFFSET) * 32U)))

#define UART4_BITBANDING_CTL_UARTEN    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_UARTEN_BIT * 4U))))
#define UART4_BITBANDING_CTL_SIREN    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_SIREN_BIT * 4U))))
#define UART4_BITBANDING_CTL_SIRLP    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_SIRLP_BIT * 4U))))
#define UART4_BITBANDING_CTL_SMART    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_SMART_BIT * 4U))))
#define UART4_BITBANDING_CTL_EOT    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_EOT_BIT * 4U))))
#define UART4_BITBANDING_CTL_HSE    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_HSE_BIT * 4U))))
#define UART4_BITBANDING_CTL_LBE    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_LBE_BIT * 4U))))
#define UART4_BITBANDING_CTL_TXE    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_TXE_BIT * 4U))))
#define UART4_BITBANDING_CTL_RXE    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_RXE_BIT * 4U))))
#define UART4_BITBANDING_CTL_DTR    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_DTR_BIT * 4U))))
#define UART4_BITBANDING_CTL_RTS    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_RTS_BIT * 4U))))
#define UART4_BITBANDING_CTL_RTSEN    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_RTSEN_BIT * 4U))))
#define UART4_BITBANDING_CTL_CTSEN    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_CTSEN_BIT * 4U))))

/******************************************************************************************
*********************************** * 9 IFLS *********************************************
******************************************************************************************/
#define UART4_BITBANDING_IFLS    ((UART_BITBANDING_IFLS_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IFLS_OFFSET) * 32U)))

#define UART4_BITBANDING_IFLS_TXIFLSEL_0    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_TXIFLSEL_BIT + 0U) * 4U))))
#define UART4_BITBANDING_IFLS_TXIFLSEL_1    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_TXIFLSEL_BIT + 1U) * 4U))))
#define UART4_BITBANDING_IFLS_TXIFLSEL_2    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_TXIFLSEL_BIT + 2U) * 4U))))
#define UART4_BITBANDING_IFLS_RXIFLSEL_0    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_RXIFLSEL_BIT + 0U) * 4U))))
#define UART4_BITBANDING_IFLS_RXIFLSEL_1    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_RXIFLSEL_BIT + 1U) * 4U))))
#define UART4_BITBANDING_IFLS_RXIFLSEL_2    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_RXIFLSEL_BIT + 2U) * 4U))))

/******************************************************************************************
*********************************** * 10 IM *********************************************
******************************************************************************************/
#define UART4_BITBANDING_IM    ((UART_BITBANDING_IM_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U)))

#define UART4_BITBANDING_IM_RI    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_RI_BIT * 4U))))
#define UART4_BITBANDING_IM_CTS    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_CTS_BIT * 4U))))
#define UART4_BITBANDING_IM_DCD    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_DCD_BIT * 4U))))
#define UART4_BITBANDING_IM_DSR    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_DSR_BIT * 4U))))
#define UART4_BITBANDING_IM_RX    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_RX_BIT * 4U))))
#define UART4_BITBANDING_IM_TX    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_TX_BIT * 4U))))
#define UART4_BITBANDING_IM_RT    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_RT_BIT * 4U))))
#define UART4_BITBANDING_IM_FE    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_FE_BIT * 4U))))
#define UART4_BITBANDING_IM_PE    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_PE_BIT * 4U))))
#define UART4_BITBANDING_IM_BE    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_BE_BIT * 4U))))
#define UART4_BITBANDING_IM_OE    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_OE_BIT * 4U))))
#define UART4_BITBANDING_IM_OET    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_EOT_BIT * 4U))))
#define UART4_BITBANDING_IM_BIT9    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_BIT9_BIT * 4U))))
#define UART4_BITBANDING_IM_DMARX    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_DMARX_BIT * 4U))))
#define UART4_BITBANDING_IM_DMATX    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_DMATX_BIT * 4U))))

/******************************************************************************************
*********************************** * 11 RIS *********************************************
******************************************************************************************/
#define UART4_BITBANDING_RIS    ((UART_BITBANDING_RIS_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U)))

#define UART4_BITBANDING_RIS_RI    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_RI_BIT * 4U))))
#define UART4_BITBANDING_RIS_CTS    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_CTS_BIT * 4U))))
#define UART4_BITBANDING_RIS_DCD    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_DCD_BIT * 4U))))
#define UART4_BITBANDING_RIS_DSR    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_DSR_BIT * 4U))))
#define UART4_BITBANDING_RIS_RX    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_RX_BIT * 4U))))
#define UART4_BITBANDING_RIS_TX    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_TX_BIT * 4U))))
#define UART4_BITBANDING_RIS_RT    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_RT_BIT * 4U))))
#define UART4_BITBANDING_RIS_FE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_FE_BIT * 4U))))
#define UART4_BITBANDING_RIS_PE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_PE_BIT * 4U))))
#define UART4_BITBANDING_RIS_BE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_BE_BIT * 4U))))
#define UART4_BITBANDING_RIS_OE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_OE_BIT * 4U))))
#define UART4_BITBANDING_RIS_OET    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_EOT_BIT * 4U))))
#define UART4_BITBANDING_RIS_BIT9    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_BIT9_BIT * 4U))))
#define UART4_BITBANDING_RIS_DMARX    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_DMARX_BIT * 4U))))
#define UART4_BITBANDING_RIS_DMATX    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_DMATX_BIT * 4U))))

/******************************************************************************************
*********************************** * 12 MIS *********************************************
******************************************************************************************/
#define UART4_BITBANDING_MIS    ((UART_BITBANDING_MIS_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U)))

#define UART4_BITBANDING_MIS_RI    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_RI_BIT * 4U))))
#define UART4_BITBANDING_MIS_CTS    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_CTS_BIT * 4U))))
#define UART4_BITBANDING_MIS_DCD    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_DCD_BIT * 4U))))
#define UART4_BITBANDING_MIS_DSR    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_DSR_BIT * 4U))))
#define UART4_BITBANDING_MIS_RX    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_RX_BIT * 4U))))
#define UART4_BITBANDING_MIS_TX    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_TX_BIT * 4U))))
#define UART4_BITBANDING_MIS_RT    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_RT_BIT * 4U))))
#define UART4_BITBANDING_MIS_FE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_FE_BIT * 4U))))
#define UART4_BITBANDING_MIS_PE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_PE_BIT * 4U))))
#define UART4_BITBANDING_MIS_BE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_BE_BIT * 4U))))
#define UART4_BITBANDING_MIS_OE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_OE_BIT * 4U))))
#define UART4_BITBANDING_MIS_OET    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_EOT_BIT * 4U))))
#define UART4_BITBANDING_MIS_BIT9    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_BIT9_BIT * 4U))))
#define UART4_BITBANDING_MIS_DMARX    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_DMARX_BIT * 4U))))
#define UART4_BITBANDING_MIS_DMATX    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_DMATX_BIT * 4U))))

/******************************************************************************************
*********************************** * 13 ICR *********************************************
******************************************************************************************/
#define UART4_BITBANDING_ICR    ((UART_BITBANDING_ICR_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U)))

#define UART4_BITBANDING_ICR_RI    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_RI_BIT * 4U))))
#define UART4_BITBANDING_ICR_CTS    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_CTS_BIT * 4U))))
#define UART4_BITBANDING_ICR_DCD    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_DCD_BIT * 4U))))
#define UART4_BITBANDING_ICR_DSR    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_DSR_BIT * 4U))))
#define UART4_BITBANDING_ICR_RX    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_RX_BIT * 4U))))
#define UART4_BITBANDING_ICR_TX    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_TX_BIT * 4U))))
#define UART4_BITBANDING_ICR_RT    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_RT_BIT * 4U))))
#define UART4_BITBANDING_ICR_FE    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_FE_BIT * 4U))))
#define UART4_BITBANDING_ICR_PE    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_PE_BIT * 4U))))
#define UART4_BITBANDING_ICR_BE    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_BE_BIT * 4U))))
#define UART4_BITBANDING_ICR_OE    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_OE_BIT * 4U))))
#define UART4_BITBANDING_ICR_OET    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_EOT_BIT * 4U))))
#define UART4_BITBANDING_ICR_BIT9    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_BIT9_BIT * 4U))))
#define UART4_BITBANDING_ICR_DMARX    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_DMARX_BIT * 4U))))
#define UART4_BITBANDING_ICR_DMATX    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_DMATX_BIT * 4U))))

/******************************************************************************************
*********************************** * 14 DMACTL *********************************************
******************************************************************************************/
#define UART4_BITBANDING_DMACTL    ((UART_BITBANDING_DMACTL_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_DMACTL_OFFSET) * 32U)))

#define UART4_BITBANDING_DMACTL_RXDMAE    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_DMACTL_OFFSET) * 32U) + (UART_DMACTL_R_RXDMAE_BIT * 4U))))
#define UART4_BITBANDING_DMACTL_TXDMAE    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_DMACTL_OFFSET) * 32U) + (UART_DMACTL_R_TXDMAE_BIT * 4U))))
#define UART4_BITBANDING_DMACTL_DMAERR    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_DMACTL_OFFSET) * 32U) + (UART_DMACTL_R_DMAERR_BIT * 4U))))

/******************************************************************************************
*********************************** * 15 BIT9ADDR *********************************************
******************************************************************************************/
#define UART4_BITBANDING_BIT9ADDR    ((UART_BITBANDING_BIT9ADDR_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_BIT9ADDR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 16 BIT9AMASK *********************************************
******************************************************************************************/
#define UART4_BITBANDING_BIT9AMASK    ((UART_BITBANDING_BIT9AMASK_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_BIT9AMASK_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 17 PP *********************************************
******************************************************************************************/
#define UART4_BITBANDING_PP    ((UART_BITBANDING_PP_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PP_OFFSET) * 32U)))

#define UART4_BITBANDING_PP_SC    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PP_OFFSET) * 32U) + (UART_PP_R_SC_BIT * 4U))))
#define UART4_BITBANDING_PP_NB    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PP_OFFSET) * 32U) + (UART_PP_R_NB_BIT * 4U))))
#define UART4_BITBANDING_PP_SC    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PP_OFFSET) * 32U) + (UART_PP_R_SC_BIT * 4U))))
#define UART4_BITBANDING_PP_MSE    (*((volatile const UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PP_OFFSET) * 32U) + (UART_PP_R_MSE_BIT * 4U))))

/******************************************************************************************
*********************************** * 18 CC *********************************************
******************************************************************************************/
#define UART4_BITBANDING_CC    ((UART_BITBANDING_CC_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CC_OFFSET) * 32U)))

#define UART4_BITBANDING_CC_CS_0    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CC_OFFSET) * 32U) + ((UART_CC_R_CS_BIT + 0U) * 4U))))
#define UART4_BITBANDING_CC_CS_1    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CC_OFFSET) * 32U) + ((UART_CC_R_CS_BIT + 1U) * 4U))))
#define UART4_BITBANDING_CC_CS_2    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CC_OFFSET) * 32U) + ((UART_CC_R_CS_BIT + 2U) * 4U))))
#define UART4_BITBANDING_CC_CS_3    (*((volatile UBase_t *) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_CC_OFFSET) * 32U) + ((UART_CC_R_CS_BIT + 3U) * 4U))))

/******************************************************************************************
 *********************************** * 19 PeriphID4 *********************************************
 ******************************************************************************************/
/* UART4 PID4*/
#define UART4_BITBANDING_PeriphID4    ((UART_BITBANDING_PeriphID4_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PeriphID4_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 20 PeriphID5 *********************************************
 ******************************************************************************************/
/* UART4 PID5*/
#define UART4_BITBANDING_PeriphID5    ((UART_BITBANDING_PeriphID5_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PeriphID5_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 21 PeriphID6 *********************************************
 ******************************************************************************************/
/* UART4 PID6*/
#define UART4_BITBANDING_PeriphID6    ((UART_BITBANDING_PeriphID6_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PeriphID6_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 22 PeriphID7 *********************************************
 ******************************************************************************************/
/* UART4 PID7*/
#define UART4_BITBANDING_PeriphID7    ((UART_BITBANDING_PeriphID7_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PeriphID7_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 23 PeriphID0 *********************************************
 ******************************************************************************************/
/* UART4 PID0*/
#define UART4_BITBANDING_PeriphID0    ((UART_BITBANDING_PeriphID0_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PeriphID0_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 24 PeriphID1 *********************************************
 ******************************************************************************************/
/* UART4 PID1*/
#define UART4_BITBANDING_PeriphID1    ((UART_BITBANDING_PeriphID1_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PeriphID1_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 25 PeriphID2 *********************************************
 ******************************************************************************************/
/* UART4 PID2*/
#define UART4_BITBANDING_PeriphID2    ((UART_BITBANDING_PeriphID2_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PeriphID2_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 26 PeriphID3 *********************************************
 ******************************************************************************************/
/* UART4 PID3*/
#define UART4_BITBANDING_PeriphID3    ((UART_BITBANDING_PeriphID3_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PeriphID3_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 27 CellID0 *********************************************
 ******************************************************************************************/
/* UART4 CID0*/
#define UART4_BITBANDING_PCellID0    ((UART_BITBANDING_PCellID0_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PCellID0_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 28 CellID1 *********************************************
 ******************************************************************************************/
/* UART4 CID1*/
#define UART4_BITBANDING_PCellID1    ((UART_BITBANDING_PCellID1_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PCellID1_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 29 CellID2 *********************************************
 ******************************************************************************************/
/* UART4 CID2*/
#define UART4_BITBANDING_PCellID2    ((UART_BITBANDING_PCellID2_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PCellID2_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 30 CellID3 *********************************************
 ******************************************************************************************/
/* UART4 CID3*/
#define UART4_BITBANDING_PCellID3    ((UART_BITBANDING_PCellID3_t*) (UART_BITBANDING_BASE + ((UART4_OFFSET + UART_PCellID3_OFFSET) * 32U)))

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_UART_REGISTERPERIPHERAL_BITBANDING_MODULE4_H_ */
