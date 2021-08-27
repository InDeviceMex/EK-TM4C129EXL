/**
 *
 * @file I2C_RegisterPeripheral_Bitbanding_Module1.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_I2C_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_I2C_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_

#include <xDriver_MCU/I2C/Peripheral/Register/xHeader/I2C_RegisterAddress.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterDefines/I2C_RegisterDefines.h>
#include <xDriver_MCU/I2C/Peripheral/Struct/xHeader/I2C_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ I2C1 *********************************************
******************************************************************************************/
#define I2C1_BITBANDING    ((I2C_BITBANDING_TypeDef*) (I2C_BITBANDING_BASE + (I2C1_OFFSET * 32U)))

/******************************************************************************************
*********************************** * 1 MSA *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_MSA    ((BITBANDING_I2CMSA_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MSA_OFFSET) * 32U)))

#define I2C1_BITBANDING_MSA_RS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MSA_OFFSET) * 32U) + (I2C_MSA_R_RS_BIT * 4U))))

/******************************************************************************************
*********************************** * 2 MCS *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_MCS_STATUS    ((BITBANDING_I2CMCS_STATUS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U)))
#define I2C1_BITBANDING_MCS_CONTROL    ((BITBANDING_I2CMCS_CONTROL_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U)))

#define I2C1_BITBANDING_MCS_STATUS_BUSY    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_BUSY_BIT * 4U))))
#define I2C1_BITBANDING_MCS_STATUS_ERROR    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_ERROR_BIT * 4U))))
#define I2C1_BITBANDING_MCS_STATUS_ADRACK    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_ADRACK_BIT * 4U))))
#define I2C1_BITBANDING_MCS_STATUS_DATACK    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_DATACK_BIT * 4U))))
#define I2C1_BITBANDING_MCS_STATUS_ARBLST    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_ARBLST_BIT * 4U))))
#define I2C1_BITBANDING_MCS_STATUS_IDLE    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_IDLE_BIT * 4U))))
#define I2C1_BITBANDING_MCS_STATUS_BUSBSY    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_BUSBSY_BIT * 4U))))
#define I2C1_BITBANDING_MCS_STATUS_CLKTO    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_CLKTO_BIT * 4U))))

#define I2C1_BITBANDING_MCS_CONTROL_RUN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_RUN_BIT * 4U))))
#define I2C1_BITBANDING_MCS_CONTROL_START    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_START_BIT * 4U))))
#define I2C1_BITBANDING_MCS_CONTROL_STOP    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_STOP_BIT * 4U))))
#define I2C1_BITBANDING_MCS_CONTROL_ACK    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_ACK_BIT * 4U))))
#define I2C1_BITBANDING_MCS_CONTROL_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCS_OFFSET) * 32U) + (I2C_MCS_R_HS_BIT * 4U))))

/******************************************************************************************
*********************************** * 3 MDR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_MDR    ((BITBANDING_I2CMDR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MDR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 4 MTPR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_MTPR    ((BITBANDING_I2CMTPR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MTPR_OFFSET) * 32U)))

#define I2C1_BITBANDING_MTPR_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MTPR_OFFSET) * 32U) + (I2C_MTPR_R_HS_BIT * 4U))))

/******************************************************************************************
*********************************** * 5 MIMR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_MIMR    ((BITBANDING_I2CMIMR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MIMR_OFFSET) * 32U)))

#define I2C1_BITBANDING_MIMR_IM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MIMR_OFFSET) * 32U) + (I2C_MIMR_R_IM_BIT * 4U))))
#define I2C1_BITBANDING_MIMR_CLKIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MIMR_OFFSET) * 32U) + (I2C_MIMR_R_CLKIM_BIT * 4U))))

/******************************************************************************************
*********************************** * 6 MRIS *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_MRIS    ((BITBANDING_I2CMRIS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MRIS_OFFSET) * 32U)))

#define I2C1_BITBANDING_MRIS_RIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MRIS_OFFSET) * 32U) + (I2C_MRIS_R_RIS_BIT * 4U))))
#define I2C1_BITBANDING_MRIS_CLKRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MRIS_OFFSET) * 32U) + (I2C_MRIS_R_CLKRIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 7 MMIS *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_MMIS    ((BITBANDING_I2CMMIS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MMIS_OFFSET) * 32U)))

#define I2C1_BITBANDING_MMIS_MIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MMIS_OFFSET) * 32U) + (I2C_MMIS_R_MIS_BIT * 4U))))
#define I2C1_BITBANDING_MMIS_CLKMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MMIS_OFFSET) * 32U) + (I2C_MMIS_R_CLKMIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 8 MICR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_MICR    ((BITBANDING_I2CMICR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MICR_OFFSET) * 32U)))

#define I2C1_BITBANDING_MICR_IC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MICR_OFFSET) * 32U) + (I2C_MICR_R_IC_BIT * 4U))))
#define I2C1_BITBANDING_MICR_CLKIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MICR_OFFSET) * 32U) + (I2C_MICR_R_CLKIC_BIT * 4U))))

/******************************************************************************************
*********************************** * 9 MCR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_MCR    ((BITBANDING_I2CMCR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCR_OFFSET) * 32U)))

#define I2C1_BITBANDING_MCR_LPBK    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCR_OFFSET) * 32U) + (I2C_MCR_R_LPBK_BIT * 4U))))
#define I2C1_BITBANDING_MCR_MFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCR_OFFSET) * 32U) + (I2C_MCR_R_MFE_BIT * 4U))))
#define I2C1_BITBANDING_MCR_SFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCR_OFFSET) * 32U) + (I2C_MCR_R_SFE_BIT * 4U))))
#define I2C1_BITBANDING_MCR_GFE    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCR_OFFSET) * 32U) + (I2C_MCR_R_GFE_BIT * 4U))))

/******************************************************************************************
*********************************** * 10 MCLKOCNT *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_MCLKOCNT    ((BITBANDING_I2CMCLKOCNT_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCLKOCNT_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 11 MBMON *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_MBMON    ((BITBANDING_I2CMBMON_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MBMON_OFFSET) * 32U)))

#define I2C1_BITBANDING_MBMON_SCL    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MBMON_OFFSET) * 32U) + (I2C_MBMON_R_SCL_BIT * 4U))))
#define I2C1_BITBANDING_MBMON_SDA    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MBMON_OFFSET) * 32U) + (I2C_MBMON_R_SDA_BIT * 4U))))

/******************************************************************************************
*********************************** * 12 MCR2 *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_MCR2    ((BITBANDING_I2CMCR2_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCR2_OFFSET) * 32U)))

#define I2C1_BITBANDING_MCR2_GFPW_0    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCR2_OFFSET) * 32U) + ((I2C_MCR2_R_GFPW_BIT + 0U) * 4U))))
#define I2C1_BITBANDING_MCR2_GFPW_1    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCR2_OFFSET) * 32U) + ((I2C_MCR2_R_GFPW_BIT + 1U) * 4U))))
#define I2C1_BITBANDING_MCR2_GFPW_2    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_MCR2_OFFSET) * 32U) + ((I2C_MCR2_R_GFPW_BIT + 2U) * 4U))))

/******************************************************************************************
*********************************** * 13 SOAR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_SOAR    ((BITBANDING_I2CSOAR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SOAR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 14 SCSR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_SCSR_STATUS    ((BITBANDING_I2CSCSR_STATUS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SCSR_OFFSET) * 32U)))
#define I2C1_BITBANDING_SCSR_CONTROL    ((BITBANDING_I2CSCSR_CONTROL_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SCSR_OFFSET) * 32U)))

#define I2C1_BITBANDING_SCSR_STATUS_RREQ    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_RREQ_BIT * 4U))))
#define I2C1_BITBANDING_SCSR_STATUS_TREQ    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_TREQ_BIT * 4U))))
#define I2C1_BITBANDING_SCSR_STATUS_FBR    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_FBR_BIT * 4U))))
#define I2C1_BITBANDING_SCSR_STATUS_OAR2SEL    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_OAR2SEL_BIT * 4U))))

#define I2C1_BITBANDING_SCSR_CONTROL_DA    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SCSR_OFFSET) * 32U) + (I2C_SCSR_R_DA_BIT * 4U))))

/******************************************************************************************
*********************************** * 15 SDR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_SDR    ((BITBANDING_I2CSDR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SDR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 16 SIMR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_SIMR    ((BITBANDING_I2CSIMR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SIMR_OFFSET) * 32U)))

#define I2C1_BITBANDING_SIMR_DATAIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_DATAIM_BIT * 4U))))
#define I2C1_BITBANDING_SIMR_STARTIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_STARTIM_BIT * 4U))))
#define I2C1_BITBANDING_SIMR_STOPIM    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_STOPIM_BIT * 4U))))

/******************************************************************************************
*********************************** * 17 SRIS *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_SRIS    ((BITBANDING_I2CSRIS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SRIS_OFFSET) * 32U)))

#define I2C1_BITBANDING_SRIS_DATARIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SRIS_OFFSET) * 32U) + (I2C_SRIS_R_DATARIS_BIT * 4U))))
#define I2C1_BITBANDING_SRIS_STARTRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SRIS_OFFSET) * 32U) + (I2C_SRIS_R_STARTRIS_BIT * 4U))))
#define I2C1_BITBANDING_SIMR_STOPRIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_STOPRIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 18 SMIS *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_SMIS    ((BITBANDING_I2CSMIS_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SMIS_OFFSET) * 32U)))

#define I2C1_BITBANDING_SMIS_DATAMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SMIS_OFFSET) * 32U) + (I2C_SMIS_R_DATAMIS_BIT * 4U))))
#define I2C1_BITBANDING_SMIS_STARTMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SMIS_OFFSET) * 32U) + (I2C_SMIS_R_STARTMIS_BIT * 4U))))
#define I2C1_BITBANDING_SIMR_STOPMIS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_STOPMIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 19 SICR *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_SICR    ((BITBANDING_I2CSICR_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SICR_OFFSET) * 32U)))

#define I2C1_BITBANDING_SICR_DATAIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SICR_OFFSET) * 32U) + (I2C_SICR_R_DATAIC_BIT * 4U))))
#define I2C1_BITBANDING_SICR_STARTIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SICR_OFFSET) * 32U) + (I2C_SICR_R_STARTIC_BIT * 4U))))
#define I2C1_BITBANDING_SIMR_STOPIC    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SIMR_OFFSET) * 32U) + (I2C_SIMR_R_STOPIC_BIT * 4U))))

/******************************************************************************************
*********************************** * 20 SOAR2 *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_SOAR2    ((BITBANDING_I2CSOAR2_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SOAR2_OFFSET) * 32U)))

#define I2C1_BITBANDING_SOAR2_OAR2EN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SOAR2_OFFSET) * 32U) + (I2C_SOAR2_R_OAR2EN_BIT * 4U))))

/******************************************************************************************
*********************************** * 21 SACKCTL *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_SACKCTL    ((BITBANDING_I2CSACKCTL_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SACKCTL_OFFSET) * 32U)))

#define I2C1_BITBANDING_SACKCTL_ACKOEN    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SACKCTL_OFFSET) * 32U) + (I2C_SACKCTL_R_ACKOEN_BIT * 4U))))
#define I2C1_BITBANDING_SACKCTL_ACKOVAL    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_SACKCTL_OFFSET) * 32U) + (I2C_SACKCTL_R_ACKOVAL_BIT * 4U))))

/******************************************************************************************
*********************************** * 22 PP *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_PP    ((BITBANDING_I2CPP_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_PP_OFFSET) * 32U)))

#define I2C1_BITBANDING_PP_HS    (*((volatile const uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_PP_OFFSET) * 32U) + (I2C_PP_R_HS_BIT * 4U))))

/******************************************************************************************
*********************************** * 23 PC *********************************************
******************************************************************************************/
#define I2C1_BITBANDING_PC    ((BITBANDING_I2CPC_TypeDef*) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_PC_OFFSET) * 32U)))

#define I2C1_BITBANDING_PC_HS    (*((volatile uint32_t *) (I2C_BITBANDING_BASE + ((I2C1_OFFSET + I2C_PC_OFFSET) * 32U) + (I2C_PC_R_HS_BIT * 4U))))

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_I2C_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_ */
