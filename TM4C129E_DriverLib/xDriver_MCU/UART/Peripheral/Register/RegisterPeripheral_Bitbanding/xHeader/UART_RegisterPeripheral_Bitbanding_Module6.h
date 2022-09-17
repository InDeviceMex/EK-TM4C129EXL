/**
 *
 * @file UART_RegisterPeripheral_Bitbanding_Module6.h
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

#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_UART_REGISTERPERIPHERAL_BITBANDING_MODULE6_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_UART_REGISTERPERIPHERAL_BITBANDING_MODULE6_H_

#include <xDriver_MCU/UART/Peripheral/Register/xHeader/UART_RegisterAddress.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterDefines/UART_RegisterDefines.h>
#include <xDriver_MCU/UART/Peripheral/Struct/xHeader/UART_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ UART6 *********************************************
******************************************************************************************/
#define UART6_BITBANDING    ((UART_BITBANDING_t*) (UART_BITBANDING_BASE + (UART6_OFFSET * 32U)))

/******************************************************************************************
*********************************** * 1 DR *********************************************
******************************************************************************************/
#define UART6_BITBANDING_DR    ((BITBANDING_UARTDR_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_DR_OFFSET) * 32U)))

#define UART6_BITBANDING_DR_FE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_DR_OFFSET) * 32U) + (UART_DR_R_FE_BIT * 4U))))
#define UART6_BITBANDING_DR_PE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_DR_OFFSET) * 32U) + (UART_DR_R_PE_BIT * 4U))))
#define UART6_BITBANDING_DR_BE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_DR_OFFSET) * 32U) + (UART_DR_R_BE_BIT * 4U))))
#define UART6_BITBANDING_DR_OE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_DR_OFFSET) * 32U) + (UART_DR_R_OE_BIT * 4U))))

/******************************************************************************************
*********************************** * 2 RSR *********************************************
******************************************************************************************/
#define UART6_BITBANDING_RSR    ((BITBANDING_UARTRSR_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RSR_OFFSET) * 32U)))
#define UART6_BITBANDING_ECR    ((BITBANDING_UARTECR_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ECR_OFFSET) * 32U)))

#define UART6_BITBANDING_RSR_FE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RSR_OFFSET) * 32U) + (UART_RSR_R_FE_BIT * 4U))))
#define UART6_BITBANDING_RSR_PE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RSR_OFFSET) * 32U) + (UART_RSR_R_PE_BIT * 4U))))
#define UART6_BITBANDING_RSR_BE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RSR_OFFSET) * 32U) + (UART_RSR_R_BE_BIT * 4U))))
#define UART6_BITBANDING_RSR_OE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RSR_OFFSET) * 32U) + (UART_RSR_R_OE_BIT * 4U))))

/******************************************************************************************
*********************************** * 3 FR *********************************************
******************************************************************************************/
#define UART6_BITBANDING_FR    ((BITBANDING_UARTFR_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_FR_OFFSET) * 32U)))

#define UART6_BITBANDING_FR_CTS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_CTS_BIT * 4U))))
#define UART6_BITBANDING_FR_DSR    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_DSR_BIT * 4U))))
#define UART6_BITBANDING_FR_DCD    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_DCD_BIT * 4U))))
#define UART6_BITBANDING_FR_BUSY    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_BUSY_BIT * 4U))))
#define UART6_BITBANDING_FR_RXFE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_RXFE_BIT * 4U))))
#define UART6_BITBANDING_FR_TXFF    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_TXFF_BIT * 4U))))
#define UART6_BITBANDING_FR_RXFF    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_RXFF_BIT * 4U))))
#define UART6_BITBANDING_FR_TXFE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_TXFE_BIT * 4U))))
#define UART6_BITBANDING_FR_RI    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_FR_OFFSET) * 32U) + (UART_FR_R_RI_BIT * 4U))))

/******************************************************************************************
*********************************** * 4 ILPR *********************************************
******************************************************************************************/
#define UART6_BITBANDING_ILPR    ((BITBANDING_UARTILPR_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ILPR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 5 IBRD *********************************************
******************************************************************************************/
#define UART6_BITBANDING_IBRD    ((BITBANDING_UARTIBRD_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IBRD_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 6 FBRD *********************************************
******************************************************************************************/
#define UART6_BITBANDING_FBRD    ((BITBANDING_UARTFBRD_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_FBRD_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 7 LCRH *********************************************
******************************************************************************************/
#define UART6_BITBANDING_LCRH    ((BITBANDING_UARTLCRH_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_LCRH_OFFSET) * 32U)))

#define UART6_BITBANDING_LCRH_BRK    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_BRK_BIT * 4U))))
#define UART6_BITBANDING_LCRH_PEN    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_PEN_BIT * 4U))))
#define UART6_BITBANDING_LCRH_EPS    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_EPS_BIT * 4U))))
#define UART6_BITBANDING_LCRH_STP2    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_STP2_BIT * 4U))))
#define UART6_BITBANDING_LCRH_FEN    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_FEN_BIT * 4U))))
#define UART6_BITBANDING_LCRH_WLEN_1    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_LCRH_OFFSET) * 32U) + ((UART_LCRH_R_WLEN_BIT + 0U) * 4U))))
#define UART6_BITBANDING_LCRH_WLEN_2    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_LCRH_OFFSET) * 32U) + ((UART_LCRH_R_WLEN_BIT + 1U) * 4U))))
#define UART6_BITBANDING_LCRH_SPS    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_LCRH_OFFSET) * 32U) + (UART_LCRH_R_SPS_BIT * 4U))))

/******************************************************************************************
*********************************** * 8 CTL *********************************************
******************************************************************************************/
#define UART6_BITBANDING_CTL    ((BITBANDING_UARTCTL_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CTL_OFFSET) * 32U)))

#define UART6_BITBANDING_CTL_UARTEN    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_UARTEN_BIT * 4U))))
#define UART6_BITBANDING_CTL_SIREN    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_SIREN_BIT * 4U))))
#define UART6_BITBANDING_CTL_SIRLP    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_SIRLP_BIT * 4U))))
#define UART6_BITBANDING_CTL_SMART    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_SMART_BIT * 4U))))
#define UART6_BITBANDING_CTL_EOT    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_EOT_BIT * 4U))))
#define UART6_BITBANDING_CTL_HSE    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_HSE_BIT * 4U))))
#define UART6_BITBANDING_CTL_LBE    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_LBE_BIT * 4U))))
#define UART6_BITBANDING_CTL_TXE    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_TXE_BIT * 4U))))
#define UART6_BITBANDING_CTL_RXE    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_RXE_BIT * 4U))))
#define UART6_BITBANDING_CTL_DTR    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_DTR_BIT * 4U))))
#define UART6_BITBANDING_CTL_RTS    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_RTS_BIT * 4U))))
#define UART6_BITBANDING_CTL_RTSEN    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_RTSEN_BIT * 4U))))
#define UART6_BITBANDING_CTL_CTSEN    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CTL_OFFSET) * 32U) + (UART_CTL_R_CTSEN_BIT * 4U))))

/******************************************************************************************
*********************************** * 9 IFLS *********************************************
******************************************************************************************/
#define UART6_BITBANDING_IFLS    ((BITBANDING_UARTIFLS_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IFLS_OFFSET) * 32U)))

#define UART6_BITBANDING_IFLS_TXIFLSEL_0    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_TXIFLSEL_BIT + 0U) * 4U))))
#define UART6_BITBANDING_IFLS_TXIFLSEL_1    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_TXIFLSEL_BIT + 1U) * 4U))))
#define UART6_BITBANDING_IFLS_TXIFLSEL_2    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_TXIFLSEL_BIT + 2U) * 4U))))
#define UART6_BITBANDING_IFLS_RXIFLSEL_0    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_RXIFLSEL_BIT + 0U) * 4U))))
#define UART6_BITBANDING_IFLS_RXIFLSEL_1    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_RXIFLSEL_BIT + 1U) * 4U))))
#define UART6_BITBANDING_IFLS_RXIFLSEL_2    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IFLS_OFFSET) * 32U) + ((UART_IFLS_R_RXIFLSEL_BIT + 2U) * 4U))))

/******************************************************************************************
*********************************** * 10 IM *********************************************
******************************************************************************************/
#define UART6_BITBANDING_IM    ((BITBANDING_UARTIM_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U)))

#define UART6_BITBANDING_IM_RIIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_RIIM_BIT * 4U))))
#define UART6_BITBANDING_IM_CTSIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_CTSIM_BIT * 4U))))
#define UART6_BITBANDING_IM_DCDIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_DCDIM_BIT * 4U))))
#define UART6_BITBANDING_IM_DSRIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_DSRIM_BIT * 4U))))
#define UART6_BITBANDING_IM_RXIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_RXIM_BIT * 4U))))
#define UART6_BITBANDING_IM_TXIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_TXIM_BIT * 4U))))
#define UART6_BITBANDING_IM_RTIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_RTIM_BIT * 4U))))
#define UART6_BITBANDING_IM_FEIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_FEIM_BIT * 4U))))
#define UART6_BITBANDING_IM_PEIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_PEIM_BIT * 4U))))
#define UART6_BITBANDING_IM_BEIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_BEIM_BIT * 4U))))
#define UART6_BITBANDING_IM_OEIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_OEIM_BIT * 4U))))
#define UART6_BITBANDING_IM_OETIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_OETIM_BIT * 4U))))
#define UART6_BITBANDING_IM_BIT9IM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_BIT9IM_BIT * 4U))))
#define UART6_BITBANDING_IM_DMARXIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_DMARXIM_BIT * 4U))))
#define UART6_BITBANDING_IM_DMATXIM    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_IM_OFFSET) * 32U) + (UART_IM_R_DMATXIM_BIT * 4U))))

/******************************************************************************************
*********************************** * 11 RIS *********************************************
******************************************************************************************/
#define UART6_BITBANDING_RIS    ((BITBANDING_UARTRIS_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U)))

#define UART6_BITBANDING_RIS_RIRIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_RIRIS_BIT * 4U))))
#define UART6_BITBANDING_RIS_CTSRIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_CTSRIS_BIT * 4U))))
#define UART6_BITBANDING_RIS_DCDRIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_DCDRIS_BIT * 4U))))
#define UART6_BITBANDING_RIS_DSRRIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_DSRRIS_BIT * 4U))))
#define UART6_BITBANDING_RIS_RXRIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_RXRIS_BIT * 4U))))
#define UART6_BITBANDING_RIS_TXRIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_TXRIS_BIT * 4U))))
#define UART6_BITBANDING_RIS_RTRIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_RTRIS_BIT * 4U))))
#define UART6_BITBANDING_RIS_FERIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_FERIS_BIT * 4U))))
#define UART6_BITBANDING_RIS_PERIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_PERIS_BIT * 4U))))
#define UART6_BITBANDING_RIS_BERIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_BERIS_BIT * 4U))))
#define UART6_BITBANDING_RIS_OERIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_OERIS_BIT * 4U))))
#define UART6_BITBANDING_RIS_OETRIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_OETRIS_BIT * 4U))))
#define UART6_BITBANDING_RIS_BIT9RIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_BIT9RIS_BIT * 4U))))
#define UART6_BITBANDING_RIS_DMARXRIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_DMARXRIS_BIT * 4U))))
#define UART6_BITBANDING_RIS_DMATXRIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_RIS_OFFSET) * 32U) + (UART_RIS_R_DMATXRIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 12 MIS *********************************************
******************************************************************************************/
#define UART6_BITBANDING_MIS    ((BITBANDING_UARTMIS_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U)))

#define UART6_BITBANDING_MIS_RIMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_RIMIS_BIT * 4U))))
#define UART6_BITBANDING_MIS_CTSMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_CTSMIS_BIT * 4U))))
#define UART6_BITBANDING_MIS_DCDMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_DCDMIS_BIT * 4U))))
#define UART6_BITBANDING_MIS_DSRMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_DSRMIS_BIT * 4U))))
#define UART6_BITBANDING_MIS_RXMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_RXMIS_BIT * 4U))))
#define UART6_BITBANDING_MIS_TXMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_TXMIS_BIT * 4U))))
#define UART6_BITBANDING_MIS_RTMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_RTMIS_BIT * 4U))))
#define UART6_BITBANDING_MIS_FEMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_FEMIS_BIT * 4U))))
#define UART6_BITBANDING_MIS_PEMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_PEMIS_BIT * 4U))))
#define UART6_BITBANDING_MIS_BEMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_BEMIS_BIT * 4U))))
#define UART6_BITBANDING_MIS_OEMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_OEMIS_BIT * 4U))))
#define UART6_BITBANDING_MIS_OETMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_OETMIS_BIT * 4U))))
#define UART6_BITBANDING_MIS_BIT9MIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_BIT9MIS_BIT * 4U))))
#define UART6_BITBANDING_MIS_DMARXMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_DMARXMIS_BIT * 4U))))
#define UART6_BITBANDING_MIS_DMATXMIS    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_MIS_OFFSET) * 32U) + (UART_MIS_R_DMATXMIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 13 ICR *********************************************
******************************************************************************************/
#define UART6_BITBANDING_ICR    ((BITBANDING_UARTICR_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U)))

#define UART6_BITBANDING_ICR_RIIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_RIIC_BIT * 4U))))
#define UART6_BITBANDING_ICR_CTSIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_CTSIC_BIT * 4U))))
#define UART6_BITBANDING_ICR_DCDIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_DCDIC_BIT * 4U))))
#define UART6_BITBANDING_ICR_DSRIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_DSRIC_BIT * 4U))))
#define UART6_BITBANDING_ICR_RXIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_RXIC_BIT * 4U))))
#define UART6_BITBANDING_ICR_TXIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_TXIC_BIT * 4U))))
#define UART6_BITBANDING_ICR_RTIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_RTIC_BIT * 4U))))
#define UART6_BITBANDING_ICR_FEIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_FEIC_BIT * 4U))))
#define UART6_BITBANDING_ICR_PEIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_PEIC_BIT * 4U))))
#define UART6_BITBANDING_ICR_BEIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_BEIC_BIT * 4U))))
#define UART6_BITBANDING_ICR_OEIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_OEIC_BIT * 4U))))
#define UART6_BITBANDING_ICR_OETIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_OETIC_BIT * 4U))))
#define UART6_BITBANDING_ICR_BIT9IC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_BIT9IC_BIT * 4U))))
#define UART6_BITBANDING_ICR_DMARXIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_DMARXIC_BIT * 4U))))
#define UART6_BITBANDING_ICR_DMATXIC    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_ICR_OFFSET) * 32U) + (UART_ICR_R_DMATXIC_BIT * 4U))))

/******************************************************************************************
*********************************** * 14 DMACTL *********************************************
******************************************************************************************/
#define UART6_BITBANDING_DMACTL    ((BITBANDING_UARTDMACTL_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_DMACTL_OFFSET) * 32U)))

#define UART6_BITBANDING_DMACTL_RXDMAE    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_DMACTL_OFFSET) * 32U) + (UART_DMACTL_R_RXDMAE_BIT * 4U))))
#define UART6_BITBANDING_DMACTL_TXDMAE    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_DMACTL_OFFSET) * 32U) + (UART_DMACTL_R_TXDMAE_BIT * 4U))))
#define UART6_BITBANDING_DMACTL_DMAERR    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_DMACTL_OFFSET) * 32U) + (UART_DMACTL_R_DMAERR_BIT * 4U))))

/******************************************************************************************
*********************************** * 15 9BITADDR *********************************************
******************************************************************************************/
#define UART6_BITBANDING_9BITADDR    ((BITBANDING_9BITADDR_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_9BITADDR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 16 9BITAMASK *********************************************
******************************************************************************************/
#define UART6_BITBANDING_9BITAMASK    ((BITBANDING_9BITAMASK_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_9BITAMASK_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 17 PP *********************************************
******************************************************************************************/
#define UART6_BITBANDING_PP    ((BITBANDING_UARTPP_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PP_OFFSET) * 32U)))

#define UART6_BITBANDING_PP_SC    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PP_OFFSET) * 32U) + (UART_PP_R_SC_BIT * 4U))))
#define UART6_BITBANDING_PP_NB    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PP_OFFSET) * 32U) + (UART_PP_R_NB_BIT * 4U))))
#define UART6_BITBANDING_PP_SC    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PP_OFFSET) * 32U) + (UART_PP_R_SC_BIT * 4U))))
#define UART6_BITBANDING_PP_MSE    (*((volatile const uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PP_OFFSET) * 32U) + (UART_PP_R_MSE_BIT * 4U))))

/******************************************************************************************
*********************************** * 18 CC *********************************************
******************************************************************************************/
#define UART6_BITBANDING_CC    ((BITBANDING_UARTCC_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CC_OFFSET) * 32U)))

#define UART6_BITBANDING_CC_CS_0    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CC_OFFSET) * 32U) + ((UART_CC_R_CS_BIT + 0U) * 4U))))
#define UART6_BITBANDING_CC_CS_1    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CC_OFFSET) * 32U) + ((UART_CC_R_CS_BIT + 1U) * 4U))))
#define UART6_BITBANDING_CC_CS_2    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CC_OFFSET) * 32U) + ((UART_CC_R_CS_BIT + 2U) * 4U))))
#define UART6_BITBANDING_CC_CS_3    (*((volatile uint32_t *) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_CC_OFFSET) * 32U) + ((UART_CC_R_CS_BIT + 3U) * 4U))))

/******************************************************************************************
 *********************************** * 19 PeriphID4 *********************************************
 ******************************************************************************************/
/* UART6 PID4*/
#define UART6_BITBANDING_PeriphID4    ((BITBANDING_UARTPeriphID4_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PeriphID4_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 20 PeriphID5 *********************************************
 ******************************************************************************************/
/* UART6 PID5*/
#define UART6_BITBANDING_PeriphID5    ((BITBANDING_UARTPeriphID5_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PeriphID5_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 21 PeriphID6 *********************************************
 ******************************************************************************************/
/* UART6 PID6*/
#define UART6_BITBANDING_PeriphID6    ((BITBANDING_UARTPeriphID6_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PeriphID6_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 22 PeriphID7 *********************************************
 ******************************************************************************************/
/* UART6 PID7*/
#define UART6_BITBANDING_PeriphID7    ((BITBANDING_UARTPeriphID7_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PeriphID7_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 23 PeriphID0 *********************************************
 ******************************************************************************************/
/* UART6 PID0*/
#define UART6_BITBANDING_PeriphID0    ((BITBANDING_UARTPeriphID0_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PeriphID0_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 24 PeriphID1 *********************************************
 ******************************************************************************************/
/* UART6 PID1*/
#define UART6_BITBANDING_PeriphID1    ((BITBANDING_UARTPeriphID1_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PeriphID1_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 25 PeriphID2 *********************************************
 ******************************************************************************************/
/* UART6 PID2*/
#define UART6_BITBANDING_PeriphID2    ((BITBANDING_UARTPeriphID2_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PeriphID2_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 26 PeriphID3 *********************************************
 ******************************************************************************************/
/* UART6 PID3*/
#define UART6_BITBANDING_PeriphID3    ((BITBANDING_UARTPeriphID3_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PeriphID3_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 27 CellID0 *********************************************
 ******************************************************************************************/
/* UART6 CID0*/
#define UART6_BITBANDING_PCellID0    ((BITBANDING_UARTCellID0_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PCellID0_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 28 CellID1 *********************************************
 ******************************************************************************************/
/* UART6 CID1*/
#define UART6_BITBANDING_PCellID1    ((BITBANDING_UARTCellID1_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PCellID1_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 29 CellID2 *********************************************
 ******************************************************************************************/
/* UART6 CID2*/
#define UART6_BITBANDING_PCellID2    ((BITBANDING_UARTCellID2_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PCellID2_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 30 CellID3 *********************************************
 ******************************************************************************************/
/* UART6 CID3*/
#define UART6_BITBANDING_PCellID3    ((BITBANDING_UARTCellID3_t*) (UART_BITBANDING_BASE + ((UART6_OFFSET + UART_PCellID3_OFFSET) * 32U)))

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_UART_REGISTERPERIPHERAL_BITBANDING_MODULE6_H_ */
