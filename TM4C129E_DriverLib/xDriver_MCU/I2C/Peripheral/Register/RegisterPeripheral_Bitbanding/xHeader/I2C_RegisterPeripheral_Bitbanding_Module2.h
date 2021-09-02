/**
 *
 * @file I2C_RegisterPeripheral_Bitbanding_Module2.h
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
 * @verbatim 7 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_I2C_REGISTERPERIPHERAL_BITBANDING_MODULE2_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_I2C_REGISTERPERIPHERAL_BITBANDING_MODULE2_H_

#include <xDriver_MCU/I2C/Peripheral/Register/xHeader/I2C_RegisterAddress.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterDefines/I2C_RegisterDefines.h>
#include <xDriver_MCU/I2C/Peripheral/Struct/xHeader/I2C_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ I2C2 *********************************************
******************************************************************************************/
#define I2C2_BITBANDING    ((I2C_BITBANDING_TypeDef*) (I2C_BITBANDING_BASE + (I2C2_OFFSET * 32U)))

/******************************************************************************************
*********************************** * 1 MSA *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_MSA    ((BITBANDING_I2CMSA_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MSA_OFFSET) * 32U)))

#define I2C2_BITBANDING_MSA_RS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MSA_OFFSET) * 32U) + (I2C_MSA_R_RS_BIT * 4U))))

/******************************************************************************************
*********************************** * 2 MCS *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_MCS_STATUS    ((BITBANDING_I2CMCS_STATUS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U)))
#define I2C2_BITBANDING_MCS_CONTROL    ((BITBANDING_I2CMCS_CONTROL_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U)))

#define I2C2_BITBANDING_MCS_STATUS_BUSY    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_BUSY_BIT * 4U))))
#define I2C2_BITBANDING_MCS_STATUS_ERROR    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_ERROR_BIT * 4U))))
#define I2C2_BITBANDING_MCS_STATUS_ADRACK    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_ADRACK_BIT * 4U))))
#define I2C2_BITBANDING_MCS_STATUS_DATACK    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_DATACK_BIT * 4U))))
#define I2C2_BITBANDING_MCS_STATUS_ARBLST    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_ARBLST_BIT * 4U))))
#define I2C2_BITBANDING_MCS_STATUS_IDLE    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_IDLE_BIT * 4U))))
#define I2C2_BITBANDING_MCS_STATUS_BUSBSY    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_BUSBSY_BIT * 4U))))
#define I2C2_BITBANDING_MCS_STATUS_CLKTO    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_CLKTO_BIT * 4U))))
#define I2C2_BITBANDING_MCS_STATUS_ACTDMATX    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_ACTDMATX_BIT * 4U))))
#define I2C2_BITBANDING_MCS_STATUS_ACTDMARX    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_ACTDMARX_BIT * 4U))))

#define I2C2_BITBANDING_MCS_CONTROL_RUN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_RUN_BIT * 4U))))
#define I2C2_BITBANDING_MCS_CONTROL_START    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_START_BIT * 4U))))
#define I2C2_BITBANDING_MCS_CONTROL_STOP    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_STOP_BIT * 4U))))
#define I2C2_BITBANDING_MCS_CONTROL_ACK    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_ACK_BIT * 4U))))
#define I2C2_BITBANDING_MCS_CONTROL_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_HS_BIT * 4U))))
#define I2C2_BITBANDING_MCS_CONTROL_QCMD    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_QCMD_BIT * 4U))))
#define I2C2_BITBANDING_MCS_CONTROL_BURST    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_BURST_BIT * 4U))))

/******************************************************************************************
*********************************** * 3 MDR *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_MDR    ((BITBANDING_I2CMDR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MDR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 4 MTPR *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_MTPR    ((BITBANDING_I2CMTPR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MTPR_OFFSET) * 32U)))

#define I2C2_BITBANDING_MTPR_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MTPR_OFFSET) * 32U) + (I2C_MTPR_R_HS_BIT * 4U))))
#define I2C2_BITBANDING_MTPR_PULSEL_0    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MTPR_OFFSET) * 32U) + ((I2C_MTPR_R_PULSEL_BIT + 0UL) * 4U))))
#define I2C2_BITBANDING_MTPR_PULSEL_1    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MTPR_OFFSET) * 32U) + ((I2C_MTPR_R_PULSEL_BIT + 1UL) * 4U))))
#define I2C2_BITBANDING_MTPR_PULSEL_2    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MTPR_OFFSET) * 32U) + ((I2C_MTPR_R_PULSEL_BIT + 2UL) * 4U))))

/******************************************************************************************
*********************************** * 5 MIMR *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_MIMR    ((BITBANDING_I2CMIMR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MIMR_OFFSET) * 32U)))

#define I2C2_BITBANDING_MIMR_IM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MIMR_OFFSET) * 32U) + (I2C_MIMR_R_IM_BIT * 4U))))
#define I2C2_BITBANDING_MIMR_CLKIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MIMR_OFFSET) * 32U) + (I2C_MIMR_R_CLKIM_BIT * 4U))))
#define I2C2_BITBANDING_MIMR_DMARXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MIMR_OFFSET) * 32U) + (I2C_MIMR_R_DMARXIM_BIT * 4U))))
#define I2C2_BITBANDING_MIMR_DMATXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MIMR_OFFSET) * 32U) + (I2C_MIMR_R_DMATXIM_BIT * 4U))))
#define I2C2_BITBANDING_MIMR_NACKIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MIMR_OFFSET) * 32U) + (I2C_MIMR_R_NACKIM_BIT * 4U))))
#define I2C2_BITBANDING_MIMR_STARTIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MIMR_OFFSET) * 32U) + (I2C_MIMR_R_STARTIM_BIT * 4U))))
#define I2C2_BITBANDING_MIMR_STOPIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MIMR_OFFSET) * 32U) + (I2C_MIMR_R_STOPIM_BIT * 4U))))
#define I2C2_BITBANDING_MIMR_ARBLOSTIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MIMR_OFFSET) * 32U) + (I2C_MIMR_R_ARBLOSTIM_BIT * 4U))))
#define I2C2_BITBANDING_MIMR_TXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MIMR_OFFSET) * 32U) + (I2C_MIMR_R_TXIM_BIT * 4U))))
#define I2C2_BITBANDING_MIMR_RXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MIMR_OFFSET) * 32U) + (I2C_MIMR_R_RXIM_BIT * 4U))))
#define I2C2_BITBANDING_MIMR_TXFEIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MIMR_OFFSET) * 32U) + (I2C_MIMR_R_TXFEIM_BIT * 4U))))
#define I2C2_BITBANDING_MIMR_RXFFIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MIMR_OFFSET) * 32U) + (I2C_MIMR_R_RXFFIM_BIT * 4U))))

/******************************************************************************************
*********************************** * 6 MRIS *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_MRIS    ((BITBANDING_I2CMRIS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MRIS_OFFSET) * 32U)))

#define I2C2_BITBANDING_MRIS_RIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MRIS_OFFSET) * 32U) + (I2C_MRIS_R_RIS_BIT * 4U))))
#define I2C2_BITBANDING_MRIS_CLKRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MRIS_OFFSET) * 32U) + (I2C_MRIS_R_CLKRIS_BIT * 4U))))
#define I2C2_BITBANDING_MRIS_DMARXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MRIS_OFFSET) * 32U) + (I2C_MRIS_R_DMARXRIS_BIT * 4U))))
#define I2C2_BITBANDING_MRIS_DMATXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MRIS_OFFSET) * 32U) + (I2C_MRIS_R_DMATXRIS_BIT * 4U))))
#define I2C2_BITBANDING_MRIS_NACKRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MRIS_OFFSET) * 32U) + (I2C_MRIS_R_NACKRIS_BIT * 4U))))
#define I2C2_BITBANDING_MRIS_STARTRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MRIS_OFFSET) * 32U) + (I2C_MRIS_R_STARTRIS_BIT * 4U))))
#define I2C2_BITBANDING_MRIS_STOPRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MRIS_OFFSET) * 32U) + (I2C_MRIS_R_STOPRIS_BIT * 4U))))
#define I2C2_BITBANDING_MRIS_ARBLOSTRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MRIS_OFFSET) * 32U) + (I2C_MRIS_R_ARBLOSTRIS_BIT * 4U))))
#define I2C2_BITBANDING_MRIS_TXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MRIS_OFFSET) * 32U) + (I2C_MRIS_R_TXRIS_BIT * 4U))))
#define I2C2_BITBANDING_MRIS_RXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MRIS_OFFSET) * 32U) + (I2C_MRIS_R_RXRIS_BIT * 4U))))
#define I2C2_BITBANDING_MRIS_TXFERIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MRIS_OFFSET) * 32U) + (I2C_MRIS_R_TXFERIS_BIT * 4U))))
#define I2C2_BITBANDING_MRIS_RXFFRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MRIS_OFFSET) * 32U) + (I2C_MRIS_R_RXFFRIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 7 MMIS *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_MMIS    ((BITBANDING_I2CMMIS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MMIS_OFFSET) * 32U)))

#define I2C2_BITBANDING_MMIS_MIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MMIS_OFFSET) * 32U) + (I2C_MMIS_R_MIS_BIT * 4U))))
#define I2C2_BITBANDING_MMIS_CLKMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MMIS_OFFSET) * 32U) + (I2C_MMIS_R_CLKMIS_BIT * 4U))))
#define I2C2_BITBANDING_MMIS_DMARXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MMIS_OFFSET) * 32U) + (I2C_MMIS_R_DMARXMIS_BIT * 4U))))
#define I2C2_BITBANDING_MMIS_DMATXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MMIS_OFFSET) * 32U) + (I2C_MMIS_R_DMATXMIS_BIT * 4U))))
#define I2C2_BITBANDING_MMIS_NACKMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MMIS_OFFSET) * 32U) + (I2C_MMIS_R_NACKMIS_BIT * 4U))))
#define I2C2_BITBANDING_MMIS_STARTMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MMIS_OFFSET) * 32U) + (I2C_MMIS_R_STARTMIS_BIT * 4U))))
#define I2C2_BITBANDING_MMIS_STOPMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MMIS_OFFSET) * 32U) + (I2C_MMIS_R_STOPMIS_BIT * 4U))))
#define I2C2_BITBANDING_MMIS_ARBLOSTMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MMIS_OFFSET) * 32U) + (I2C_MMIS_R_ARBLOSTMIS_BIT * 4U))))
#define I2C2_BITBANDING_MMIS_TXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MMIS_OFFSET) * 32U) + (I2C_MMIS_R_TXMIS_BIT * 4U))))
#define I2C2_BITBANDING_MMIS_RXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MMIS_OFFSET) * 32U) + (I2C_MMIS_R_RXMIS_BIT * 4U))))
#define I2C2_BITBANDING_MMIS_TXFEMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MMIS_OFFSET) * 32U) + (I2C_MMIS_R_TXFEMIS_BIT * 4U))))
#define I2C2_BITBANDING_MMIS_RXFFMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MMIS_OFFSET) * 32U) + (I2C_MMIS_R_RXFFMIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 8 MICR *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_MICR    ((BITBANDING_I2CMICR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MICR_OFFSET) * 32U)))

#define I2C2_BITBANDING_MICR_IC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MICR_OFFSET) * 32U) + (I2C_MICR_R_IC_BIT * 4U))))
#define I2C2_BITBANDING_MICR_CLKIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MICR_OFFSET) * 32U) + (I2C_MICR_R_CLKIC_BIT * 4U))))
#define I2C2_BITBANDING_MICR_DMARXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MICR_OFFSET) * 32U) + (I2C_MICR_R_DMARXIC_BIT * 4U))))
#define I2C2_BITBANDING_MICR_DMATXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MICR_OFFSET) * 32U) + (I2C_MICR_R_DMATXIC_BIT * 4U))))
#define I2C2_BITBANDING_MICR_NACKIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MICR_OFFSET) * 32U) + (I2C_MICR_R_NACKIC_BIT * 4U))))
#define I2C2_BITBANDING_MICR_STARTIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MICR_OFFSET) * 32U) + (I2C_MICR_R_STARTIC_BIT * 4U))))
#define I2C2_BITBANDING_MICR_STOPIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MICR_OFFSET) * 32U) + (I2C_MICR_R_STOPIC_BIT * 4U))))
#define I2C2_BITBANDING_MICR_ARBLOSTIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MICR_OFFSET) * 32U) + (I2C_MICR_R_ARBLOSTIC_BIT * 4U))))
#define I2C2_BITBANDING_MICR_TXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MICR_OFFSET) * 32U) + (I2C_MICR_R_TXIC_BIT * 4U))))
#define I2C2_BITBANDING_MICR_RXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MICR_OFFSET) * 32U) + (I2C_MICR_R_RXIC_BIT * 4U))))
#define I2C2_BITBANDING_MICR_TXFEIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MICR_OFFSET) * 32U) + (I2C_MICR_R_TXFEIC_BIT * 4U))))
#define I2C2_BITBANDING_MICR_RXFFIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MICR_OFFSET) * 32U) + (I2C_MICR_R_RXFFIC_BIT * 4U))))

/******************************************************************************************
*********************************** * 9 MCR *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_MCR    ((BITBANDING_I2CMCR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCR_OFFSET) * 32U)))

#define I2C2_BITBANDING_MCR_LPBK    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCR_OFFSET) * 32U) + (I2C_MCR_R_LPBK_BIT * 4U))))
#define I2C2_BITBANDING_MCR_MFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCR_OFFSET) * 32U) + (I2C_MCR_R_MFE_BIT * 4U))))
#define I2C2_BITBANDING_MCR_SFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCR_OFFSET) * 32U) + (I2C_MCR_R_SFE_BIT * 4U))))

/******************************************************************************************
*********************************** * 10 MCLKOCNT *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_MCLKOCNT    ((BITBANDING_I2CMCLKOCNT_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MCLKOCNT_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 11 MBMON *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_MBMON    ((BITBANDING_I2CMBMON_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MBMON_OFFSET) * 32U)))

#define I2C2_BITBANDING_MBMON_SCL    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MBMON_OFFSET) * 32U) + (I2C_MBMON_R_SCL_BIT * 4U))))
#define I2C2_BITBANDING_MBMON_SDA    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MBMON_OFFSET) * 32U) + (I2C_MBMON_R_SDA_BIT * 4U))))

/******************************************************************************************
*********************************** * 12 MBLEN *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_MBLEN    ((BITBANDING_I2CMBLEN_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MBLEN_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 13 MBCNT *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_MBCNT    ((BITBANDING_I2CMBCNT_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_MBCNT_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 14 SOAR *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_SOAR    ((BITBANDING_I2CSOAR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SOAR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 15 SCSR *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_SCSR_STATUS    ((BITBANDING_I2CSCSR_STATUS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SCSR_OFFSET) * 32U)))
#define I2C2_BITBANDING_SCSR_CONTROL    ((BITBANDING_I2CSCSR_CONTROL_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SCSR_OFFSET) * 32U)))

#define I2C2_BITBANDING_SCSR_STATUS_RREQ    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_RREQ_BIT * 4U))))
#define I2C2_BITBANDING_SCSR_STATUS_TREQ    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_TREQ_BIT * 4U))))
#define I2C2_BITBANDING_SCSR_STATUS_FBR    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_FBR_BIT * 4U))))
#define I2C2_BITBANDING_SCSR_STATUS_OAR2SEL    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_OAR2SEL_BIT * 4U))))
#define I2C2_BITBANDING_SCSR_STATUS_QCMDST    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_QCMDST_BIT * 4U))))
#define I2C2_BITBANDING_SCSR_STATUS_QCMDRW    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_QCMDRW_BIT * 4U))))
#define I2C2_BITBANDING_SCSR_STATUS_ACTDMATX    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_ACTDMATX_BIT * 4U))))
#define I2C2_BITBANDING_SCSR_STATUS_ACTDMARX    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_ACTDMARX_BIT * 4U))))

#define I2C2_BITBANDING_SCSR_CONTROL_DA    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_DA_BIT * 4U))))
#define I2C2_BITBANDING_SCSR_CONTROL_TXFIFO    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_TXFIFO_BIT * 4U))))
#define I2C2_BITBANDING_SCSR_CONTROL_RXFIFO    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_RXFIFO_BIT * 4U))))

/******************************************************************************************
*********************************** * 16 SDR *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_SDR    ((BITBANDING_I2CSDR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SDR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 17 SIMR *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_SIMR    ((BITBANDING_I2CSIMR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SIMR_OFFSET) * 32U)))

#define I2C2_BITBANDING_SIMR_DATAIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_DATAIM_BIT * 4U))))
#define I2C2_BITBANDING_SIMR_STARTIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_STARTIM_BIT * 4U))))
#define I2C2_BITBANDING_SIMR_STOPIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_STOPIM_BIT * 4U))))
#define I2C2_BITBANDING_SIMR_DMARXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_DMARXIM_BIT * 4U))))
#define I2C2_BITBANDING_SIMR_DMATXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_DMATXIM_BIT * 4U))))
#define I2C2_BITBANDING_SIMR_TXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_TXIM_BIT * 4U))))
#define I2C2_BITBANDING_SIMR_RXIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_RXIM_BIT * 4U))))
#define I2C2_BITBANDING_SIMR_TXFEIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_TXFEIM_BIT * 4U))))
#define I2C2_BITBANDING_SIMR_RXFFIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_RXFFIM_BIT * 4U))))

/******************************************************************************************
*********************************** * 18 SRIS *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_SRIS    ((BITBANDING_I2CSRIS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SRIS_OFFSET) * 32U)))

#define I2C2_BITBANDING_SRIS_DATARIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SRIS_OFFSET) * 32U) + (I2C_SRIS_R_DATARIS_BIT * 4U))))
#define I2C2_BITBANDING_SRIS_STARTRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SRIS_OFFSET) * 32U) + (I2C_SRIS_R_STARTRIS_BIT * 4U))))
#define I2C2_BITBANDING_SRIS_STOPRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SRIS_OFFSET) * 32U) + (I2C_SRIS_R_STOPRIS_BIT * 4U))))
#define I2C2_BITBANDING_SRIS_DMARXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SRIS_OFFSET) * 32U) + (I2C_SRIS_R_DMARXRIS_BIT * 4U))))
#define I2C2_BITBANDING_SRIS_DMATXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SRIS_OFFSET) * 32U) + (I2C_SRIS_R_DMATXRIS_BIT * 4U))))
#define I2C2_BITBANDING_SRIS_TXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SRIS_OFFSET) * 32U) + (I2C_SRIS_R_TXRIS_BIT * 4U))))
#define I2C2_BITBANDING_SRIS_RXRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SRIS_OFFSET) * 32U) + (I2C_SRIS_R_RXRIS_BIT * 4U))))
#define I2C2_BITBANDING_SRIS_TXFERIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SRIS_OFFSET) * 32U) + (I2C_SRIS_R_TXFERIS_BIT * 4U))))
#define I2C2_BITBANDING_SRIS_RXFFRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SRIS_OFFSET) * 32U) + (I2C_SRIS_R_RXFFRIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 19 SMIS *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_SMIS    ((BITBANDING_I2CSMIS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SMIS_OFFSET) * 32U)))

#define I2C2_BITBANDING_SMIS_DATAMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SMIS_OFFSET) * 32U) + (I2C_SMIS_R_DATAMIS_BIT * 4U))))
#define I2C2_BITBANDING_SMIS_STARTMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SMIS_OFFSET) * 32U) + (I2C_SMIS_R_STARTMIS_BIT * 4U))))
#define I2C2_BITBANDING_SMIS_STOPMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SMIS_OFFSET) * 32U) + (I2C_SMIS_R_STOPMIS_BIT * 4U))))
#define I2C2_BITBANDING_SMIS_DMARXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SMIS_OFFSET) * 32U) + (I2C_SMIS_R_DMARXMIS_BIT * 4U))))
#define I2C2_BITBANDING_SMIS_DMATXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SMIS_OFFSET) * 32U) + (I2C_SMIS_R_DMATXMIS_BIT * 4U))))
#define I2C2_BITBANDING_SMIS_TXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SMIS_OFFSET) * 32U) + (I2C_SMIS_R_TXMIS_BIT * 4U))))
#define I2C2_BITBANDING_SMIS_RXMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SMIS_OFFSET) * 32U) + (I2C_SMIS_R_RXMIS_BIT * 4U))))
#define I2C2_BITBANDING_SMIS_TXFEMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SMIS_OFFSET) * 32U) + (I2C_SMIS_R_TXFEMIS_BIT * 4U))))
#define I2C2_BITBANDING_SMIS_RXFFMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SMIS_OFFSET) * 32U) + (I2C_SMIS_R_RXFFMIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 20 SICR *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_SICR    ((BITBANDING_I2CSICR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SICR_OFFSET) * 32U)))

#define I2C2_BITBANDING_SICR_DATAIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SICR_OFFSET) * 32U) + (I2C_SICR_R_DATAIC_BIT * 4U))))
#define I2C2_BITBANDING_SICR_STARTIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SICR_OFFSET) * 32U) + (I2C_SICR_R_STARTIC_BIT * 4U))))
#define I2C2_BITBANDING_SICR_STOPIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SICR_OFFSET) * 32U) + (I2C_SICR_R_STOPIC_BIT * 4U))))
#define I2C2_BITBANDING_SICR_DMARXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SICR_OFFSET) * 32U) + (I2C_SICR_R_DMARXIC_BIT * 4U))))
#define I2C2_BITBANDING_SICR_DMATXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SICR_OFFSET) * 32U) + (I2C_SICR_R_DMATXIC_BIT * 4U))))
#define I2C2_BITBANDING_SICR_TXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SICR_OFFSET) * 32U) + (I2C_SICR_R_TXIC_BIT * 4U))))
#define I2C2_BITBANDING_SICR_RXIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SICR_OFFSET) * 32U) + (I2C_SICR_R_RXIC_BIT * 4U))))
#define I2C2_BITBANDING_SICR_TXFEIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SICR_OFFSET) * 32U) + (I2C_SICR_R_TXFEIC_BIT * 4U))))
#define I2C2_BITBANDING_SICR_RXFFIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SICR_OFFSET) * 32U) + (I2C_SICR_R_RXFFIC_BIT * 4U))))

/******************************************************************************************
*********************************** * 21 SOAR2 *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_SOAR2    ((BITBANDING_I2CSOAR2_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SOAR2_OFFSET) * 32U)))

#define I2C2_BITBANDING_SOAR2_OAR2EN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SOAR2_OFFSET) * 32U) + (I2C_SOAR2_R_OAR2EN_BIT * 4U))))

/******************************************************************************************
*********************************** * 22 SACKCTL *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_SACKCTL    ((BITBANDING_I2CSACKCTL_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SACKCTL_OFFSET) * 32U)))

#define I2C2_BITBANDING_SACKCTL_ACKOEN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SACKCTL_OFFSET) * 32U) + (I2C_SACKCTL_R_ACKOEN_BIT * 4U))))
#define I2C2_BITBANDING_SACKCTL_ACKOVAL    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_SACKCTL_OFFSET) * 32U) + (I2C_SACKCTL_R_ACKOVAL_BIT * 4U))))

/******************************************************************************************
*********************************** * 23 FIFODATA *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_FIFODATA    ((BITBANDING_I2CFIFODATA_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFODATA_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 24 FIFOCTL *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_FIFOCTL    ((BITBANDING_I2CFIFOCTL_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOCTL_OFFSET) * 32U)))

#define I2C2_BITBANDING_FIFOCTL_TXTRIG_0    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOCTL_OFFSET) * 32U) + ((I2C_FIFOCTL_R_TXTRIG_BIT + 0UL) * 4U))))
#define I2C2_BITBANDING_FIFOCTL_TXTRIG_1    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOCTL_OFFSET) * 32U) + ((I2C_FIFOCTL_R_TXTRIG_BIT + 1UL) * 4U))))
#define I2C2_BITBANDING_FIFOCTL_TXTRIG_2    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOCTL_OFFSET) * 32U) + ((I2C_FIFOCTL_R_TXTRIG_BIT + 2UL) * 4U))))
#define I2C2_BITBANDING_FIFOCTL_DMATXENA    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOCTL_OFFSET) * 32U) + (I2C_FIFOCTL_R_DMATXENA_BIT * 4U))))
#define I2C2_BITBANDING_FIFOCTL_TXFLUSH    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOCTL_OFFSET) * 32U) + (I2C_FIFOCTL_R_TXFLUSH_BIT * 4U))))
#define I2C2_BITBANDING_FIFOCTL_TXASGNMT    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOCTL_OFFSET) * 32U) + (I2C_FIFOCTL_R_TXASGNMT_BIT * 4U))))
#define I2C2_BITBANDING_FIFOCTL_RXTRIG_0    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOCTL_OFFSET) * 32U) + ((I2C_FIFOCTL_R_RXTRIG_BIT + 0UL) * 4U))))
#define I2C2_BITBANDING_FIFOCTL_RXTRIG_1    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOCTL_OFFSET) * 32U) + ((I2C_FIFOCTL_R_RXTRIG_BIT + 1UL) * 4U))))
#define I2C2_BITBANDING_FIFOCTL_RXTRIG_2    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOCTL_OFFSET) * 32U) + ((I2C_FIFOCTL_R_RXTRIG_BIT + 2UL) * 4U))))
#define I2C2_BITBANDING_FIFOCTL_DMARXENA    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOCTL_OFFSET) * 32U) + (I2C_FIFOCTL_R_DMARXENA_BIT * 4U))))
#define I2C2_BITBANDING_FIFOCTL_RXFLUSH    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOCTL_OFFSET) * 32U) + (I2C_FIFOCTL_R_RXFLUSH_BIT * 4U))))
#define I2C2_BITBANDING_FIFOCTL_RXASGNMT    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOCTL_OFFSET) * 32U) + (I2C_FIFOCTL_R_RXASGNMT_BIT * 4U))))

/******************************************************************************************
*********************************** * 25 FIFOSTATUS *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_FIFOSTATUS    ((BITBANDING_I2CFIFOSTATUS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOSTATUS_OFFSET) * 32U)))

#define I2C2_BITBANDING_FIFOSTATUS_TXFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOSTATUS_OFFSET) * 32U) + (I2C_FIFOSTATUS_R_TXFE_BIT * 4U))))
#define I2C2_BITBANDING_FIFOSTATUS_TXFF    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOSTATUS_OFFSET) * 32U) + (I2C_FIFOSTATUS_R_TXFF_BIT * 4U))))
#define I2C2_BITBANDING_FIFOSTATUS_TXBLWTRIG    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOSTATUS_OFFSET) * 32U) + (I2C_FIFOSTATUS_R_TXBLWTRIG_BIT * 4U))))
#define I2C2_BITBANDING_FIFOSTATUS_RXFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOSTATUS_OFFSET) * 32U) + (I2C_FIFOSTATUS_R_RXFE_BIT * 4U))))
#define I2C2_BITBANDING_FIFOSTATUS_RXFF    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOSTATUS_OFFSET) * 32U) + (I2C_FIFOSTATUS_R_RXFF_BIT * 4U))))
#define I2C2_BITBANDING_FIFOSTATUS_RXBLWTRIG    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_FIFOSTATUS_OFFSET) * 32U) + (I2C_FIFOSTATUS_R_RXBLWTRIG_BIT * 4U))))

/******************************************************************************************
*********************************** * 26 PP *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_PP    ((BITBANDING_I2CPP_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_PP_OFFSET) * 32U)))

#define I2C2_BITBANDING_PP_HS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_PP_OFFSET) * 32U) + (I2C_PP_R_HS_BIT * 4U))))

/******************************************************************************************
*********************************** * 27 PC *********************************************
******************************************************************************************/
#define I2C2_BITBANDING_PC    ((BITBANDING_I2CPC_TypeDef*) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_PC_OFFSET) * 32U)))

#define I2C2_BITBANDING_PC_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C2_OFFSET + I2C_PC_OFFSET) * 32U) + (I2C_PC_R_HS_BIT * 4U))))

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_I2C_REGISTERPERIPHERAL_BITBANDING_MODULE2_H_ */
