/**
 *
 * @file I2C_RegisterPeripheral_Bitbanding_Module9.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 31 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 31 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_I2C_REGISTERPERIPHERAL_BITBANDING_MODULE9_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_I2C_REGISTERPERIPHERAL_BITBANDING_MODULE9_H_

#include <xDriver_MCU/I2C/Peripheral/Register/xHeader/I2C_RegisterAddress.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterDefines/I2C_RegisterDefines.h>
#include <xDriver_MCU/I2C/Peripheral/Struct/xHeader/I2C_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ I2C9 *********************************************
******************************************************************************************/
#define I2C9_BITBANDING    ((I2C_BITBANDING_t*) (I2C_BITBANDING_BASE + (I2C9_OFFSET * 32U)))
#define I2C9_MASTER_BITBANDING    ((I2C_MASTER_BITBANDING_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_SA_OFFSET)* 32U)))
#define I2C9_SLAVE_BITBANDING    ((I2C_SLAVE_BITBANDING_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_OAR_OFFSET)* 32U)))
#define I2C9_FIFO_BITBANDING    ((I2C_FIFO_BITBANDING_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_DATA_OFFSET)* 32U)))
#define I2C9_CONTROL_BITBANDING    ((I2C_CONTROL_BITBANDING_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_PP_OFFSET)* 32U)))

/******************************************************************************************
*********************************** * 1 MSA *********************************************
******************************************************************************************/
#define I2C9_MASTER_BITBANDING_SA    ((I2C_MASTER_BITBANDING_SA_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_SA_OFFSET) * 32U)))

#define I2C9_MASTER_BITBANDING_SA_RS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_SA_OFFSET) * 32U) + (I2C_MASTER_SA_R_RS_BIT * 4U))))

/******************************************************************************************
*********************************** * 2 MCS *********************************************
******************************************************************************************/
#define I2C9_MASTER_BITBANDING_STS    ((I2C_MASTER_BITBANDING_STS_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U)))
#define I2C9_MASTER_BITBANDING_CTL    ((I2C_MASTER_BITBANDING_CTL_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U)))

#define I2C9_MASTER_BITBANDING_STS_BUSY    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_BUSY_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_STS_ERROR    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_ERROR_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_STS_ADRACK    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_ADRACK_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_STS_DATACK    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_DATACK_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_STS_ARBLST    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_ARBLST_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_STS_IDLE    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_IDLE_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_STS_BUSBSY    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_BUSBSY_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_STS_CLKTO    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_CLKTO_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_STS_ACTDMATX    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_ACTDMATX_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_STS_ACTDMARX    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_ACTDMARX_BIT * 4U))))

#define I2C9_MASTER_BITBANDING_CTL_RUN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U) + (I2C_MASTER_CTL_R_RUN_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_CTL_START    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U) + (I2C_MASTER_CTL_R_START_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_CTL_STOP    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U) + (I2C_MASTER_CTL_R_STOP_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_CTL_ACK    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U) + (I2C_MASTER_CTL_R_ACK_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_CTL_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U) + (I2C_MASTER_CTL_R_HS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_CTL_QCMD    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U) + (I2C_MASTER_CTL_R_QCMD_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_CTL_BURST    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U) + (I2C_MASTER_CTL_R_BURST_BIT * 4U))))

/******************************************************************************************
*********************************** * 3 MDR *********************************************
******************************************************************************************/
#define I2C9_MASTER_BITBANDING_DATA    ((I2C_MASTER_BITBANDING_DATA_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_DATA_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 4 MTPR *********************************************
******************************************************************************************/
#define I2C9_MASTER_BITBANDING_TPR    ((I2C_MASTER_BITBANDING_TPR_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_TPR_OFFSET) * 32U)))

#define I2C9_MASTER_BITBANDING_TPR_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_TPR_OFFSET) * 32U) + (I2C_MASTER_TPR_R_HS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_TPR_PULSEL_0    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_TPR_OFFSET) * 32U) + ((I2C_MASTER_TPR_R_PULSEL_BIT + 0UL) * 4U))))
#define I2C9_MASTER_BITBANDING_TPR_PULSEL_1    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_TPR_OFFSET) * 32U) + ((I2C_MASTER_TPR_R_PULSEL_BIT + 1UL) * 4U))))
#define I2C9_MASTER_BITBANDING_TPR_PULSEL_2    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_TPR_OFFSET) * 32U) + ((I2C_MASTER_TPR_R_PULSEL_BIT + 2UL) * 4U))))

/******************************************************************************************
*********************************** * 5 MIMR *********************************************
******************************************************************************************/
#define I2C9_MASTER_BITBANDING_IMR    ((I2C_MASTER_BITBANDING_IMR_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U)))

#define I2C9_MASTER_BITBANDING_IMR_IM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_IM_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_IMR_CLKIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_CLKIM_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_IMR_DMARXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_DMARXIM_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_IMR_DMATXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_DMATXIM_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_IMR_NACKIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_NACKIM_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_IMR_STARTIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_STARTIM_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_IMR_STOPIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_STOPIM_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_IMR_ARBLOSTIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_ARBLOSTIM_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_IMR_TXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_TXIM_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_IMR_RXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_RXIM_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_IMR_TXFEIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_TXFEIM_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_IMR_RXFFIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_RXFFIM_BIT * 4U))))

/******************************************************************************************
*********************************** * 6 MRIS *********************************************
******************************************************************************************/
#define I2C9_MASTER_BITBANDING_RIS    ((I2C_MASTER_BITBANDING_RIS_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U)))

#define I2C9_MASTER_BITBANDING_RIS_RIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_RIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_RIS_CLKRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_CLKRIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_RIS_DMARXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_DMARXRIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_RIS_DMATXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_DMATXRIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_RIS_NACKRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_NACKRIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_RIS_STARTRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_STARTRIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_RIS_STOPRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_STOPRIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_RIS_ARBLOSTRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_ARBLOSTRIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_RIS_TXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_TXRIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_RIS_RXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_RXRIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_RIS_TXFERIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_TXFERIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_RIS_RXFFRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_RXFFRIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 7 MMIS *********************************************
******************************************************************************************/
#define I2C9_MASTER_BITBANDING_MIS    ((I2C_MASTER_BITBANDING_MIS_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U)))

#define I2C9_MASTER_BITBANDING_MIS_MIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_MIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_MIS_CLKMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_CLKMIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_MIS_DMARXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_DMARXMIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_MIS_DMATXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_DMATXMIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_MIS_NACKMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_NACKMIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_MIS_STARTMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_STARTMIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_MIS_STOPMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_STOPMIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_MIS_ARBLOSTMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_ARBLOSTMIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_MIS_TXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_TXMIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_MIS_RXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_RXMIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_MIS_TXFEMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_TXFEMIS_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_MIS_RXFFMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_RXFFMIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 8 MICR *********************************************
******************************************************************************************/
#define I2C9_MASTER_BITBANDING_ICR    ((I2C_MASTER_BITBANDING_ICR_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U)))

#define I2C9_MASTER_BITBANDING_ICR_IC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_IC_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_ICR_CLKIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_CLKIC_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_ICR_DMARXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_DMARXIC_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_ICR_DMATXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_DMATXIC_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_ICR_NACKIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_NACKIC_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_ICR_STARTIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_STARTIC_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_ICR_STOPIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_STOPIC_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_ICR_ARBLOSTIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_ARBLOSTIC_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_ICR_TXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_TXIC_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_ICR_RXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_RXIC_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_ICR_TXFEIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_TXFEIC_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_ICR_RXFFIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_RXFFIC_BIT * 4U))))

/******************************************************************************************
*********************************** * 9 MCR *********************************************
******************************************************************************************/
#define I2C9_MASTER_BITBANDING_CR    ((I2C_MASTER_BITBANDING_CR_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CR_OFFSET) * 32U)))

#define I2C9_MASTER_BITBANDING_CR_LPBK    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CR_OFFSET) * 32U) + (I2C_MASTER_CR_R_LPBK_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_CR_MFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CR_OFFSET) * 32U) + (I2C_MASTER_CR_R_MFE_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_CR_SFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CR_OFFSET) * 32U) + (I2C_MASTER_CR_R_SFE_BIT * 4U))))

/******************************************************************************************
*********************************** * 10 MCLKOCNT *********************************************
******************************************************************************************/
#define I2C9_MASTER_BITBANDING_CLKOCNT    ((I2C_MASTER_BITBANDING_CLKOCNT_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CLKOCNT_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 11 MBMON *********************************************
******************************************************************************************/
#define I2C9_MASTER_BITBANDING_BMON    ((I2C_MASTER_BITBANDING_BMON_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_BMON_OFFSET) * 32U)))

#define I2C9_MASTER_BITBANDING_BMON_SCL    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_BMON_OFFSET) * 32U) + (I2C_MASTER_BMON_R_SCL_BIT * 4U))))
#define I2C9_MASTER_BITBANDING_BMON_SDA    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_BMON_OFFSET) * 32U) + (I2C_MASTER_BMON_R_SDA_BIT * 4U))))

/******************************************************************************************
*********************************** * 12 MBLEN *********************************************
******************************************************************************************/
#define I2C9_MASTER_BITBANDING_BLEN    ((I2C_MASTER_BITBANDING_BLEN_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_BLEN_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 13 MBCNT *********************************************
******************************************************************************************/
#define I2C9_MASTER_BITBANDING_BCNT    ((I2C_MASTER_BITBANDING_BCNT_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_BCNT_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 14 SOAR *********************************************
******************************************************************************************/
#define I2C9_SLAVE_BITBANDING_OAR    ((I2C_SLAVE_BITBANDING_OAR_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_OAR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 15 SCSR *********************************************
******************************************************************************************/
#define I2C9_SLAVE_BITBANDING_STS    ((I2C_SLAVE_BITBANDING_STS_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_STS_OFFSET) * 32U)))
#define I2C9_SLAVE_BITBANDING_CTL    ((I2C_SLAVE_BITBANDING_CTL_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_CTL_OFFSET) * 32U)))

#define I2C9_SLAVE_BITBANDING_STS_RREQ    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_RREQ_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_STS_TREQ    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_TREQ_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_STS_FBR    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_FBR_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_STS_OAR2SEL    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_OAR2SEL_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_STS_QCMDST    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_QCMDST_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_STS_QCMDRW    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_QCMDRW_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_STS_ACTDMATX    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_ACTDMATX_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_STS_ACTDMARX    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_ACTDMARX_BIT * 4U))))

#define I2C9_SLAVE_BITBANDING_CTL_DA    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_CTL_OFFSET) * 32U) + (I2C_SLAVE_CTL_R_DA_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_CTL_TXFIFO    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_CTL_OFFSET) * 32U) + (I2C_SLAVE_CTL_R_TXFIFO_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_CTL_RXFIFO    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_CTL_OFFSET) * 32U) + (I2C_SLAVE_CTL_R_RXFIFO_BIT * 4U))))

/******************************************************************************************
*********************************** * 16 SDR *********************************************
******************************************************************************************/
#define I2C9_SLAVE_BITBANDING_DATA    ((I2C_SLAVE_BITBANDING_DATA_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_DATA_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 17 SIMR *********************************************
******************************************************************************************/
#define I2C9_SLAVE_BITBANDING_IMR    ((I2C_SLAVE_BITBANDING_IMR_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U)))

#define I2C9_SLAVE_BITBANDING_IMR_DATAIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_DATAIM_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_IMR_STARTIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_STARTIM_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_IMR_STOPIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_STOPIM_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_IMR_DMARXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_DMARXIM_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_IMR_DMATXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_DMATXIM_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_IMR_TXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_TXIM_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_IMR_RXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_RXIM_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_IMR_TXFEIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_TXFEIM_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_IMR_RXFFIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_RXFFIM_BIT * 4U))))

/******************************************************************************************
*********************************** * 18 SRIS *********************************************
******************************************************************************************/
#define I2C9_SLAVE_BITBANDING_RIS    ((I2C_SLAVE_BITBANDING_RIS_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U)))

#define I2C9_SLAVE_BITBANDING_RIS_DATARIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_DATARIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_RIS_STARTRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_STARTRIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_RIS_STOPRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_STOPRIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_RIS_DMARXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_DMARXRIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_RIS_DMATXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_DMATXRIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_RIS_TXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_TXRIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_RIS_RXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_RXRIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_RIS_TXFERIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_TXFERIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_RIS_RXFFRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_RXFFRIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 19 SMIS *********************************************
******************************************************************************************/
#define I2C9_SLAVE_BITBANDING_MIS    ((I2C_SLAVE_BITBANDING_MIS_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U)))

#define I2C9_SLAVE_BITBANDING_MIS_DATAMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_DATAMIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_MIS_STARTMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_STARTMIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_MIS_STOPMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_STOPMIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_MIS_DMARXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_DMARXMIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_MIS_DMATXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_DMATXMIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_MIS_TXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_TXMIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_MIS_RXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_RXMIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_MIS_TXFEMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_TXFEMIS_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_MIS_RXFFMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_RXFFMIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 20 SICR *********************************************
******************************************************************************************/
#define I2C9_SLAVE_BITBANDING_ICR    ((I2C_SLAVE_BITBANDING_ICR_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U)))

#define I2C9_SLAVE_BITBANDING_ICR_DATAIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_DATAIC_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_ICR_STARTIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_STARTIC_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_ICR_STOPIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_STOPIC_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_ICR_DMARXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_DMARXIC_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_ICR_DMATXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_DMATXIC_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_ICR_TXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_TXIC_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_ICR_RXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_RXIC_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_ICR_TXFEIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_TXFEIC_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_ICR_RXFFIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_RXFFIC_BIT * 4U))))

/******************************************************************************************
*********************************** * 21 SOAR2 *********************************************
******************************************************************************************/
#define I2C9_SLAVE_BITBANDING_OAR2    ((I2C_SLAVE_BITBANDING_OAR2_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_OAR2_OFFSET) * 32U)))

#define I2C9_SLAVE_BITBANDING_OAR2_OAR2EN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_OAR2_OFFSET) * 32U) + (I2C_SLAVE_OAR2_R_OAR2EN_BIT * 4U))))

/******************************************************************************************
*********************************** * 22 SACKCTL *********************************************
******************************************************************************************/
#define I2C9_SLAVE_BITBANDING_ACKCTL    ((I2C_SLAVE_BITBANDING_ACKCTL_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ACKCTL_OFFSET) * 32U)))

#define I2C9_SLAVE_BITBANDING_ACKCTL_ACKOEN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ACKCTL_OFFSET) * 32U) + (I2C_SLAVE_ACKCTL_R_ACKOEN_BIT * 4U))))
#define I2C9_SLAVE_BITBANDING_ACKCTL_ACKOVAL    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ACKCTL_OFFSET) * 32U) + (I2C_SLAVE_ACKCTL_R_ACKOVAL_BIT * 4U))))

/******************************************************************************************
*********************************** * 23 FIFODATA *********************************************
******************************************************************************************/
#define I2C9_FIFO_BITBANDING_DATA    ((I2C_FIFO_BITBANDING_DATA_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_DATA_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 24 FIFOCTL *********************************************
******************************************************************************************/
#define I2C9_FIFO_BITBANDING_CTL    ((I2C_FIFO_BITBANDING_CTL_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U)))

#define I2C9_FIFO_BITBANDING_CTL_TXTRIG_0    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + ((I2C_FIFO_CTL_R_TXTRIG_BIT + 0UL) * 4U))))
#define I2C9_FIFO_BITBANDING_CTL_TXTRIG_1    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + ((I2C_FIFO_CTL_R_TXTRIG_BIT + 1UL) * 4U))))
#define I2C9_FIFO_BITBANDING_CTL_TXTRIG_2    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + ((I2C_FIFO_CTL_R_TXTRIG_BIT + 2UL) * 4U))))
#define I2C9_FIFO_BITBANDING_CTL_DMATXENA    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + (I2C_FIFO_CTL_R_DMATXENA_BIT * 4U))))
#define I2C9_FIFO_BITBANDING_CTL_TXFLUSH    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + (I2C_FIFO_CTL_R_TXFLUSH_BIT * 4U))))
#define I2C9_FIFO_BITBANDING_CTL_TXASGNMT    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + (I2C_FIFO_CTL_R_TXASGNMT_BIT * 4U))))
#define I2C9_FIFO_BITBANDING_CTL_RXTRIG_0    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + ((I2C_FIFO_CTL_R_RXTRIG_BIT + 0UL) * 4U))))
#define I2C9_FIFO_BITBANDING_CTL_RXTRIG_1    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + ((I2C_FIFO_CTL_R_RXTRIG_BIT + 1UL) * 4U))))
#define I2C9_FIFO_BITBANDING_CTL_RXTRIG_2    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + ((I2C_FIFO_CTL_R_RXTRIG_BIT + 2UL) * 4U))))
#define I2C9_FIFO_BITBANDING_CTL_DMARXENA    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + (I2C_FIFO_CTL_R_DMARXENA_BIT * 4U))))
#define I2C9_FIFO_BITBANDING_CTL_RXFLUSH    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + (I2C_FIFO_CTL_R_RXFLUSH_BIT * 4U))))
#define I2C9_FIFO_BITBANDING_CTL_RXASGNMT    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + (I2C_FIFO_CTL_R_RXASGNMT_BIT * 4U))))

/******************************************************************************************
*********************************** * 25 FIFOSTATUS *********************************************
******************************************************************************************/
#define I2C9_FIFO_BITBANDING_STS    ((I2C_FIFO_BITBANDING_STS_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_STS_OFFSET) * 32U)))

#define I2C9_FIFO_BITBANDING_STS_TXFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_STS_OFFSET) * 32U) + (I2C_FIFO_STS_R_TXFE_BIT * 4U))))
#define I2C9_FIFO_BITBANDING_STS_TXFF    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_STS_OFFSET) * 32U) + (I2C_FIFO_STS_R_TXFF_BIT * 4U))))
#define I2C9_FIFO_BITBANDING_STS_TXBLWTRIG    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_STS_OFFSET) * 32U) + (I2C_FIFO_STS_R_TXBLWTRIG_BIT * 4U))))
#define I2C9_FIFO_BITBANDING_STS_RXFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_STS_OFFSET) * 32U) + (I2C_FIFO_STS_R_RXFE_BIT * 4U))))
#define I2C9_FIFO_BITBANDING_STS_RXFF    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_STS_OFFSET) * 32U) + (I2C_FIFO_STS_R_RXFF_BIT * 4U))))
#define I2C9_FIFO_BITBANDING_STS_RXBLWTRIG    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_STS_OFFSET) * 32U) + (I2C_FIFO_STS_R_RXBLWTRIG_BIT * 4U))))

/******************************************************************************************
*********************************** * 26 PP *********************************************
******************************************************************************************/
#define I2C9_CONTROL_BITBANDING_PP    ((I2C_BITBANDING_PP_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_PP_OFFSET) * 32U)))

#define I2C9_CONTROL_BITBANDING_PP_HS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_PP_OFFSET) * 32U) + (I2C_PP_R_HS_BIT * 4U))))

/******************************************************************************************
*********************************** * 27 PC *********************************************
******************************************************************************************/
#define I2C9_CONTROL_BITBANDING_PC    ((I2C_BITBANDING_PC_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_PC_OFFSET) * 32U)))

#define I2C9_CONTROL_BITBANDING_PC_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_PC_OFFSET) * 32U) + (I2C_PC_R_HS_BIT * 4U))))



/******************************************************************************************
*********************************** * 1 MSA *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_MSA    ((I2C_MASTER_BITBANDING_SA_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_SA_OFFSET) * 32U)))

#define I2C9_BITBANDING_MSA_RS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_SA_OFFSET) * 32U) + (I2C_MASTER_SA_R_RS_BIT * 4U))))

/******************************************************************************************
*********************************** * 2 MCS *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_MCS_STATUS    ((I2C_MASTER_BITBANDING_STS_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U)))
#define I2C9_BITBANDING_MCS_CONTROL    ((I2C_MASTER_BITBANDING_CTL_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U)))

#define I2C9_BITBANDING_MCS_STATUS_BUSY    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_BUSY_BIT * 4U))))
#define I2C9_BITBANDING_MCS_STATUS_ERROR    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_ERROR_BIT * 4U))))
#define I2C9_BITBANDING_MCS_STATUS_ADRACK    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_ADRACK_BIT * 4U))))
#define I2C9_BITBANDING_MCS_STATUS_DATACK    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_DATACK_BIT * 4U))))
#define I2C9_BITBANDING_MCS_STATUS_ARBLST    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_ARBLST_BIT * 4U))))
#define I2C9_BITBANDING_MCS_STATUS_IDLE    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_IDLE_BIT * 4U))))
#define I2C9_BITBANDING_MCS_STATUS_BUSBSY    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_BUSBSY_BIT * 4U))))
#define I2C9_BITBANDING_MCS_STATUS_CLKTO    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_CLKTO_BIT * 4U))))
#define I2C9_BITBANDING_MCS_STATUS_ACTDMATX    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_ACTDMATX_BIT * 4U))))
#define I2C9_BITBANDING_MCS_STATUS_ACTDMARX    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_STS_OFFSET) * 32U) + (I2C_MASTER_STS_R_ACTDMARX_BIT * 4U))))

#define I2C9_BITBANDING_MCS_CONTROL_RUN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U) + (I2C_MASTER_CTL_R_RUN_BIT * 4U))))
#define I2C9_BITBANDING_MCS_CONTROL_START    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U) + (I2C_MASTER_CTL_R_START_BIT * 4U))))
#define I2C9_BITBANDING_MCS_CONTROL_STOP    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U) + (I2C_MASTER_CTL_R_STOP_BIT * 4U))))
#define I2C9_BITBANDING_MCS_CONTROL_ACK    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U) + (I2C_MASTER_CTL_R_ACK_BIT * 4U))))
#define I2C9_BITBANDING_MCS_CONTROL_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U) + (I2C_MASTER_CTL_R_HS_BIT * 4U))))
#define I2C9_BITBANDING_MCS_CONTROL_QCMD    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U) + (I2C_MASTER_CTL_R_QCMD_BIT * 4U))))
#define I2C9_BITBANDING_MCS_CONTROL_BURST    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CTL_OFFSET) * 32U) + (I2C_MASTER_CTL_R_BURST_BIT * 4U))))

/******************************************************************************************
*********************************** * 3 MDR *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_MDR    ((I2C_MASTER_BITBANDING_DATA_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_DATA_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 4 MTPR *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_MTPR    ((I2C_MASTER_BITBANDING_TPR_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_TPR_OFFSET) * 32U)))

#define I2C9_BITBANDING_MTPR_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_TPR_OFFSET) * 32U) + (I2C_MASTER_TPR_R_HS_BIT * 4U))))
#define I2C9_BITBANDING_MTPR_PULSEL_0    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_TPR_OFFSET) * 32U) + ((I2C_MASTER_TPR_R_PULSEL_BIT + 0UL) * 4U))))
#define I2C9_BITBANDING_MTPR_PULSEL_1    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_TPR_OFFSET) * 32U) + ((I2C_MASTER_TPR_R_PULSEL_BIT + 1UL) * 4U))))
#define I2C9_BITBANDING_MTPR_PULSEL_2    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_TPR_OFFSET) * 32U) + ((I2C_MASTER_TPR_R_PULSEL_BIT + 2UL) * 4U))))

/******************************************************************************************
*********************************** * 5 MIMR *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_MIMR    ((I2C_MASTER_BITBANDING_IMR_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U)))

#define I2C9_BITBANDING_MIMR_IM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_IM_BIT * 4U))))
#define I2C9_BITBANDING_MIMR_CLKIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_CLKIM_BIT * 4U))))
#define I2C9_BITBANDING_MIMR_DMARXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_DMARXIM_BIT * 4U))))
#define I2C9_BITBANDING_MIMR_DMATXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_DMATXIM_BIT * 4U))))
#define I2C9_BITBANDING_MIMR_NACKIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_NACKIM_BIT * 4U))))
#define I2C9_BITBANDING_MIMR_STARTIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_STARTIM_BIT * 4U))))
#define I2C9_BITBANDING_MIMR_STOPIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_STOPIM_BIT * 4U))))
#define I2C9_BITBANDING_MIMR_ARBLOSTIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_ARBLOSTIM_BIT * 4U))))
#define I2C9_BITBANDING_MIMR_TXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_TXIM_BIT * 4U))))
#define I2C9_BITBANDING_MIMR_RXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_RXIM_BIT * 4U))))
#define I2C9_BITBANDING_MIMR_TXFEIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_TXFEIM_BIT * 4U))))
#define I2C9_BITBANDING_MIMR_RXFFIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_IMR_OFFSET) * 32U) + (I2C_MASTER_IMR_R_RXFFIM_BIT * 4U))))

/******************************************************************************************
*********************************** * 6 MRIS *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_MRIS    ((I2C_MASTER_BITBANDING_RIS_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U)))

#define I2C9_BITBANDING_MRIS_RIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_RIS_BIT * 4U))))
#define I2C9_BITBANDING_MRIS_CLKRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_CLKRIS_BIT * 4U))))
#define I2C9_BITBANDING_MRIS_DMARXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_DMARXRIS_BIT * 4U))))
#define I2C9_BITBANDING_MRIS_DMATXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_DMATXRIS_BIT * 4U))))
#define I2C9_BITBANDING_MRIS_NACKRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_NACKRIS_BIT * 4U))))
#define I2C9_BITBANDING_MRIS_STARTRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_STARTRIS_BIT * 4U))))
#define I2C9_BITBANDING_MRIS_STOPRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_STOPRIS_BIT * 4U))))
#define I2C9_BITBANDING_MRIS_ARBLOSTRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_ARBLOSTRIS_BIT * 4U))))
#define I2C9_BITBANDING_MRIS_TXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_TXRIS_BIT * 4U))))
#define I2C9_BITBANDING_MRIS_RXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_RXRIS_BIT * 4U))))
#define I2C9_BITBANDING_MRIS_TXFERIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_TXFERIS_BIT * 4U))))
#define I2C9_BITBANDING_MRIS_RXFFRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_RIS_OFFSET) * 32U) + (I2C_MASTER_RIS_R_RXFFRIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 7 MMIS *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_MMIS    ((I2C_MASTER_BITBANDING_MIS_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U)))

#define I2C9_BITBANDING_MMIS_MIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_MIS_BIT * 4U))))
#define I2C9_BITBANDING_MMIS_CLKMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_CLKMIS_BIT * 4U))))
#define I2C9_BITBANDING_MMIS_DMARXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_DMARXMIS_BIT * 4U))))
#define I2C9_BITBANDING_MMIS_DMATXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_DMATXMIS_BIT * 4U))))
#define I2C9_BITBANDING_MMIS_NACKMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_NACKMIS_BIT * 4U))))
#define I2C9_BITBANDING_MMIS_STARTMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_STARTMIS_BIT * 4U))))
#define I2C9_BITBANDING_MMIS_STOPMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_STOPMIS_BIT * 4U))))
#define I2C9_BITBANDING_MMIS_ARBLOSTMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_ARBLOSTMIS_BIT * 4U))))
#define I2C9_BITBANDING_MMIS_TXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_TXMIS_BIT * 4U))))
#define I2C9_BITBANDING_MMIS_RXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_RXMIS_BIT * 4U))))
#define I2C9_BITBANDING_MMIS_TXFEMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_TXFEMIS_BIT * 4U))))
#define I2C9_BITBANDING_MMIS_RXFFMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_MIS_OFFSET) * 32U) + (I2C_MASTER_MIS_R_RXFFMIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 8 MICR *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_MICR    ((I2C_MASTER_BITBANDING_ICR_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U)))

#define I2C9_BITBANDING_MICR_IC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_IC_BIT * 4U))))
#define I2C9_BITBANDING_MICR_CLKIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_CLKIC_BIT * 4U))))
#define I2C9_BITBANDING_MICR_DMARXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_DMARXIC_BIT * 4U))))
#define I2C9_BITBANDING_MICR_DMATXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_DMATXIC_BIT * 4U))))
#define I2C9_BITBANDING_MICR_NACKIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_NACKIC_BIT * 4U))))
#define I2C9_BITBANDING_MICR_STARTIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_STARTIC_BIT * 4U))))
#define I2C9_BITBANDING_MICR_STOPIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_STOPIC_BIT * 4U))))
#define I2C9_BITBANDING_MICR_ARBLOSTIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_ARBLOSTIC_BIT * 4U))))
#define I2C9_BITBANDING_MICR_TXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_TXIC_BIT * 4U))))
#define I2C9_BITBANDING_MICR_RXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_RXIC_BIT * 4U))))
#define I2C9_BITBANDING_MICR_TXFEIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_TXFEIC_BIT * 4U))))
#define I2C9_BITBANDING_MICR_RXFFIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_ICR_OFFSET) * 32U) + (I2C_MASTER_ICR_R_RXFFIC_BIT * 4U))))

/******************************************************************************************
*********************************** * 9 MCR *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_MCR    ((I2C_MASTER_BITBANDING_CR_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CR_OFFSET) * 32U)))

#define I2C9_BITBANDING_MCR_LPBK    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CR_OFFSET) * 32U) + (I2C_MASTER_CR_R_LPBK_BIT * 4U))))
#define I2C9_BITBANDING_MCR_MFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CR_OFFSET) * 32U) + (I2C_MASTER_CR_R_MFE_BIT * 4U))))
#define I2C9_BITBANDING_MCR_SFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CR_OFFSET) * 32U) + (I2C_MASTER_CR_R_SFE_BIT * 4U))))

/******************************************************************************************
*********************************** * 10 MCLKOCNT *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_MCLKOCNT    ((I2C_MASTER_BITBANDING_CLKOCNT_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_CLKOCNT_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 11 MBMON *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_MBMON    ((I2C_MASTER_BITBANDING_BMON_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_BMON_OFFSET) * 32U)))

#define I2C9_BITBANDING_MBMON_SCL    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_BMON_OFFSET) * 32U) + (I2C_MASTER_BMON_R_SCL_BIT * 4U))))
#define I2C9_BITBANDING_MBMON_SDA    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_BMON_OFFSET) * 32U) + (I2C_MASTER_BMON_R_SDA_BIT * 4U))))

/******************************************************************************************
*********************************** * 12 MBLEN *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_MBLEN    ((I2C_MASTER_BITBANDING_BLEN_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_BLEN_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 13 MBCNT *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_MBCNT    ((I2C_MASTER_BITBANDING_BCNT_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_MASTER_BCNT_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 14 SOAR *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_SOAR    ((I2C_SLAVE_BITBANDING_OAR_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_OAR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 15 SCSR *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_SCSR_STATUS    ((I2C_SLAVE_BITBANDING_STS_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_STS_OFFSET) * 32U)))
#define I2C9_BITBANDING_SCSR_CONTROL    ((I2C_SLAVE_BITBANDING_CTL_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_CTL_OFFSET) * 32U)))

#define I2C9_BITBANDING_SCSR_STATUS_RREQ    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_RREQ_BIT * 4U))))
#define I2C9_BITBANDING_SCSR_STATUS_TREQ    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_TREQ_BIT * 4U))))
#define I2C9_BITBANDING_SCSR_STATUS_FBR    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_FBR_BIT * 4U))))
#define I2C9_BITBANDING_SCSR_STATUS_OAR2SEL    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_OAR2SEL_BIT * 4U))))
#define I2C9_BITBANDING_SCSR_STATUS_QCMDST    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_QCMDST_BIT * 4U))))
#define I2C9_BITBANDING_SCSR_STATUS_QCMDRW    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_QCMDRW_BIT * 4U))))
#define I2C9_BITBANDING_SCSR_STATUS_ACTDMATX    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_ACTDMATX_BIT * 4U))))
#define I2C9_BITBANDING_SCSR_STATUS_ACTDMARX    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_STS_OFFSET) * 32U) + (I2C_SLAVE_STS_R_ACTDMARX_BIT * 4U))))

#define I2C9_BITBANDING_SCSR_CONTROL_DA    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_CTL_OFFSET) * 32U) + (I2C_SLAVE_CTL_R_DA_BIT * 4U))))
#define I2C9_BITBANDING_SCSR_CONTROL_TXFIFO    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_CTL_OFFSET) * 32U) + (I2C_SLAVE_CTL_R_TXFIFO_BIT * 4U))))
#define I2C9_BITBANDING_SCSR_CONTROL_RXFIFO    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_CTL_OFFSET) * 32U) + (I2C_SLAVE_CTL_R_RXFIFO_BIT * 4U))))

/******************************************************************************************
*********************************** * 16 SDR *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_SDR    ((I2C_SLAVE_BITBANDING_DATA_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_DATA_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 17 SIMR *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_SIMR    ((I2C_SLAVE_BITBANDING_IMR_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U)))

#define I2C9_BITBANDING_SIMR_DATAIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_DATAIM_BIT * 4U))))
#define I2C9_BITBANDING_SIMR_STARTIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_STARTIM_BIT * 4U))))
#define I2C9_BITBANDING_SIMR_STOPIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_STOPIM_BIT * 4U))))
#define I2C9_BITBANDING_SIMR_DMARXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_DMARXIM_BIT * 4U))))
#define I2C9_BITBANDING_SIMR_DMATXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_DMATXIM_BIT * 4U))))
#define I2C9_BITBANDING_SIMR_TXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_TXIM_BIT * 4U))))
#define I2C9_BITBANDING_SIMR_RXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_RXIM_BIT * 4U))))
#define I2C9_BITBANDING_SIMR_TXFEIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_TXFEIM_BIT * 4U))))
#define I2C9_BITBANDING_SIMR_RXFFIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_IMR_OFFSET) * 32U) + (I2C_SLAVE_IMR_R_RXFFIM_BIT * 4U))))

/******************************************************************************************
*********************************** * 18 SRIS *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_SRIS    ((I2C_SLAVE_BITBANDING_RIS_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U)))

#define I2C9_BITBANDING_SRIS_DATARIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_DATARIS_BIT * 4U))))
#define I2C9_BITBANDING_SRIS_STARTRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_STARTRIS_BIT * 4U))))
#define I2C9_BITBANDING_SRIS_STOPRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_STOPRIS_BIT * 4U))))
#define I2C9_BITBANDING_SRIS_DMARXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_DMARXRIS_BIT * 4U))))
#define I2C9_BITBANDING_SRIS_DMATXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_DMATXRIS_BIT * 4U))))
#define I2C9_BITBANDING_SRIS_TXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_TXRIS_BIT * 4U))))
#define I2C9_BITBANDING_SRIS_RXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_RXRIS_BIT * 4U))))
#define I2C9_BITBANDING_SRIS_TXFERIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_TXFERIS_BIT * 4U))))
#define I2C9_BITBANDING_SRIS_RXFFRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_RIS_OFFSET) * 32U) + (I2C_SLAVE_RIS_R_RXFFRIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 19 SMIS *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_SMIS    ((I2C_SLAVE_BITBANDING_MIS_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U)))

#define I2C9_BITBANDING_SMIS_DATAMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_DATAMIS_BIT * 4U))))
#define I2C9_BITBANDING_SMIS_STARTMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_STARTMIS_BIT * 4U))))
#define I2C9_BITBANDING_SMIS_STOPMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_STOPMIS_BIT * 4U))))
#define I2C9_BITBANDING_SMIS_DMARXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_DMARXMIS_BIT * 4U))))
#define I2C9_BITBANDING_SMIS_DMATXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_DMATXMIS_BIT * 4U))))
#define I2C9_BITBANDING_SMIS_TXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_TXMIS_BIT * 4U))))
#define I2C9_BITBANDING_SMIS_RXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_RXMIS_BIT * 4U))))
#define I2C9_BITBANDING_SMIS_TXFEMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_TXFEMIS_BIT * 4U))))
#define I2C9_BITBANDING_SMIS_RXFFMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_MIS_OFFSET) * 32U) + (I2C_SLAVE_MIS_R_RXFFMIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 20 SICR *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_SICR    ((I2C_SLAVE_BITBANDING_ICR_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U)))

#define I2C9_BITBANDING_SICR_DATAIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_DATAIC_BIT * 4U))))
#define I2C9_BITBANDING_SICR_STARTIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_STARTIC_BIT * 4U))))
#define I2C9_BITBANDING_SICR_STOPIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_STOPIC_BIT * 4U))))
#define I2C9_BITBANDING_SICR_DMARXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_DMARXIC_BIT * 4U))))
#define I2C9_BITBANDING_SICR_DMATXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_DMATXIC_BIT * 4U))))
#define I2C9_BITBANDING_SICR_TXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_TXIC_BIT * 4U))))
#define I2C9_BITBANDING_SICR_RXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_RXIC_BIT * 4U))))
#define I2C9_BITBANDING_SICR_TXFEIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_TXFEIC_BIT * 4U))))
#define I2C9_BITBANDING_SICR_RXFFIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ICR_OFFSET) * 32U) + (I2C_SLAVE_ICR_R_RXFFIC_BIT * 4U))))

/******************************************************************************************
*********************************** * 21 SOAR2 *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_SOAR2    ((I2C_SLAVE_BITBANDING_OAR2_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_OAR2_OFFSET) * 32U)))

#define I2C9_BITBANDING_SOAR2_OAR2EN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_OAR2_OFFSET) * 32U) + (I2C_SLAVE_OAR2_R_OAR2EN_BIT * 4U))))

/******************************************************************************************
*********************************** * 22 SACKCTL *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_SACKCTL    ((I2C_SLAVE_BITBANDING_ACKCTL_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ACKCTL_OFFSET) * 32U)))

#define I2C9_BITBANDING_SACKCTL_ACKOEN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ACKCTL_OFFSET) * 32U) + (I2C_SLAVE_ACKCTL_R_ACKOEN_BIT * 4U))))
#define I2C9_BITBANDING_SACKCTL_ACKOVAL    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_SLAVE_ACKCTL_OFFSET) * 32U) + (I2C_SLAVE_ACKCTL_R_ACKOVAL_BIT * 4U))))

/******************************************************************************************
*********************************** * 23 FIFODATA *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_FIFODATA    ((I2C_FIFO_BITBANDING_DATA_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_DATA_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 24 FIFOCTL *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_FIFOCTL    ((I2C_FIFO_BITBANDING_CTL_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U)))

#define I2C9_BITBANDING_FIFOCTL_TXTRIG_0    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + ((I2C_FIFO_CTL_R_TXTRIG_BIT + 0UL) * 4U))))
#define I2C9_BITBANDING_FIFOCTL_TXTRIG_1    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + ((I2C_FIFO_CTL_R_TXTRIG_BIT + 1UL) * 4U))))
#define I2C9_BITBANDING_FIFOCTL_TXTRIG_2    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + ((I2C_FIFO_CTL_R_TXTRIG_BIT + 2UL) * 4U))))
#define I2C9_BITBANDING_FIFOCTL_DMATXENA    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + (I2C_FIFO_CTL_R_DMATXENA_BIT * 4U))))
#define I2C9_BITBANDING_FIFOCTL_TXFLUSH    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + (I2C_FIFO_CTL_R_TXFLUSH_BIT * 4U))))
#define I2C9_BITBANDING_FIFOCTL_TXASGNMT    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + (I2C_FIFO_CTL_R_TXASGNMT_BIT * 4U))))
#define I2C9_BITBANDING_FIFOCTL_RXTRIG_0    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + ((I2C_FIFO_CTL_R_RXTRIG_BIT + 0UL) * 4U))))
#define I2C9_BITBANDING_FIFOCTL_RXTRIG_1    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + ((I2C_FIFO_CTL_R_RXTRIG_BIT + 1UL) * 4U))))
#define I2C9_BITBANDING_FIFOCTL_RXTRIG_2    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + ((I2C_FIFO_CTL_R_RXTRIG_BIT + 2UL) * 4U))))
#define I2C9_BITBANDING_FIFOCTL_DMARXENA    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + (I2C_FIFO_CTL_R_DMARXENA_BIT * 4U))))
#define I2C9_BITBANDING_FIFOCTL_RXFLUSH    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + (I2C_FIFO_CTL_R_RXFLUSH_BIT * 4U))))
#define I2C9_BITBANDING_FIFOCTL_RXASGNMT    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_CTL_OFFSET) * 32U) + (I2C_FIFO_CTL_R_RXASGNMT_BIT * 4U))))

/******************************************************************************************
*********************************** * 25 FIFOSTATUS *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_FIFOSTS    ((I2C_FIFO_BITBANDING_STS_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_STS_OFFSET) * 32U)))

#define I2C9_BITBANDING_FIFOSTS_TXFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_STS_OFFSET) * 32U) + (I2C_FIFO_STS_R_TXFE_BIT * 4U))))
#define I2C9_BITBANDING_FIFOSTS_TXFF    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_STS_OFFSET) * 32U) + (I2C_FIFO_STS_R_TXFF_BIT * 4U))))
#define I2C9_BITBANDING_FIFOSTS_TXBLWTRIG    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_STS_OFFSET) * 32U) + (I2C_FIFO_STS_R_TXBLWTRIG_BIT * 4U))))
#define I2C9_BITBANDING_FIFOSTS_RXFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_STS_OFFSET) * 32U) + (I2C_FIFO_STS_R_RXFE_BIT * 4U))))
#define I2C9_BITBANDING_FIFOSTS_RXFF    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_STS_OFFSET) * 32U) + (I2C_FIFO_STS_R_RXFF_BIT * 4U))))
#define I2C9_BITBANDING_FIFOSTS_RXBLWTRIG    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_FIFO_STS_OFFSET) * 32U) + (I2C_FIFO_STS_R_RXBLWTRIG_BIT * 4U))))

/******************************************************************************************
*********************************** * 26 PP *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_PP    ((I2C_BITBANDING_PP_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_PP_OFFSET) * 32U)))

#define I2C9_BITBANDING_PP_HS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_PP_OFFSET) * 32U) + (I2C_PP_R_HS_BIT * 4U))))

/******************************************************************************************
*********************************** * 27 PC *********************************************
******************************************************************************************/
#define I2C9_BITBANDING_PC    ((I2C_BITBANDING_PC_t*) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_PC_OFFSET) * 32U)))

#define I2C9_BITBANDING_PC_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C9_OFFSET + I2C_PC_OFFSET) * 32U) + (I2C_PC_R_HS_BIT * 4U))))

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_I2C_REGISTERPERIPHERAL_BITBANDING_MODULE9_H_ */
