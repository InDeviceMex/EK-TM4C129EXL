/**
 *
 * @file SSI_RegisterPeripheral_Bitbanding_Module1.h
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_SSI_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_SSI_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_

#include <xDriver_MCU/SSI/Peripheral/Register/xHeader/SSI_RegisterAddress.h>
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterDefines/SSI_RegisterDefines.h>
#include <xDriver_MCU/SSI/Peripheral/Struct/xHeader/SSI_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ SSI1 *********************************************
******************************************************************************************/
#define SSI1_BITBANDING    ((SSI_BITBANDING_t*) (SSI_BITBANDING_BASE + (SSI1_OFFSET * 32U)))

/******************************************************************************************
*********************************** * 1 CR0 *********************************************
******************************************************************************************/
#define SSI1_BITBANDING_CR0    ((SSI_BITBANDING_CR0_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U)))

#define SSI1_BITBANDING_CR0_DSS_0    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 0UL) * 4U))))
#define SSI1_BITBANDING_CR0_DSS_1    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 1UL) * 4U))))
#define SSI1_BITBANDING_CR0_DSS_2    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 2UL) * 4U))))
#define SSI1_BITBANDING_CR0_DSS_3    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_DSS_BIT + 3UL) * 4U))))
#define SSI1_BITBANDING_CR0_FRF_0    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_FRF_BIT + 0UL) * 4U))))
#define SSI1_BITBANDING_CR0_FRF_1    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_FRF_BIT + 1UL) * 4U))))
#define SSI1_BITBANDING_CR0_SPO    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + (SSI_CR0_R_SPO_BIT * 4U))))
#define SSI1_BITBANDING_CR0_SPH    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + (SSI_CR0_R_SPH_BIT * 4U))))
#define SSI1_BITBANDING_CR0_SCR_4    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_SCR_BIT + 0UL) * 4U))))
#define SSI1_BITBANDING_CR0_SCR_5    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_SCR_BIT + 1UL) * 4U))))
#define SSI1_BITBANDING_CR0_SCR_6    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_SCR_BIT + 2UL) * 4U))))
#define SSI1_BITBANDING_CR0_SCR_7    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_SCR_BIT + 3UL) * 4U))))
#define SSI1_BITBANDING_CR0_SCR_8    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_SCR_BIT + 4UL) * 4U))))
#define SSI1_BITBANDING_CR0_SCR_9    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_SCR_BIT + 5UL) * 4U))))
#define SSI1_BITBANDING_CR0_SCR_10    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_SCR_BIT + 6UL) * 4U))))
#define SSI1_BITBANDING_CR0_SCR_11    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR0_OFFSET) * 32U) + ((SSI_CR0_R_SCR_BIT + 7UL) * 4U))))

/******************************************************************************************
*********************************** * 2 CR1 *********************************************
******************************************************************************************/
#define SSI1_BITBANDING_CR1    ((SSI_BITBANDING_CR1_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR1_OFFSET) * 32U)))

#define SSI1_BITBANDING_CR1_LBM    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR1_OFFSET) * 32U) + (SSI_CR1_R_LBM_BIT * 4U))))
#define SSI1_BITBANDING_CR1_SSE    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR1_OFFSET) * 32U) + (SSI_CR1_R_SSE_BIT * 4U))))
#define SSI1_BITBANDING_CR1_MS    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR1_OFFSET) * 32U) + (SSI_CR1_R_MS_BIT * 4U))))
#define SSI1_BITBANDING_CR1_MODE_0    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR1_OFFSET) * 32U) + ((SSI_CR1_R_MODE_BIT + 0UL) * 4U))))
#define SSI1_BITBANDING_CR1_MODE_1    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR1_OFFSET) * 32U) + ((SSI_CR1_R_MODE_BIT + 1UL) * 4U))))
#define SSI1_BITBANDING_CR1_DIR    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR1_OFFSET) * 32U) + (SSI_CR1_R_DIR_BIT * 4U))))
#define SSI1_BITBANDING_CR1_HSCLKEN    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR1_OFFSET) * 32U) + (SSI_CR1_R_HSCLKEN_BIT * 4U))))
#define SSI1_BITBANDING_CR1_FSSHLDFRM    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR1_OFFSET) * 32U) + (SSI_CR1_R_FSSHLDFRM_BIT * 4U))))
#define SSI1_BITBANDING_CR1_EOM    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CR1_OFFSET) * 32U) + (SSI_CR1_R_EOM_BIT * 4U))))

/******************************************************************************************
*********************************** * 3 DR *********************************************
******************************************************************************************/
#define SSI1_BITBANDING_DR    ((SSI_BITBANDING_DR_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_DR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 4 SR *********************************************
******************************************************************************************/
#define SSI1_BITBANDING_SR    ((SSI_BITBANDING_SR_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_SR_OFFSET) * 32U)))

#define SSI1_BITBANDING_SR_TFE    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_SR_OFFSET) * 32U) + (SSI_SR_R_TFE_BIT * 4U))))
#define SSI1_BITBANDING_SR_TNF    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_SR_OFFSET) * 32U) + (SSI_SR_R_TNF_BIT * 4U))))
#define SSI1_BITBANDING_SR_RNE    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_SR_OFFSET) * 32U) + (SSI_SR_R_RNE_BIT * 4U))))
#define SSI1_BITBANDING_SR_RFF    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_SR_OFFSET) * 32U) + (SSI_SR_R_RFF_BIT * 4U))))
#define SSI1_BITBANDING_SR_BSY    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_SR_OFFSET) * 32U) + (SSI_SR_R_BSY_BIT * 4U))))

/******************************************************************************************
*********************************** * 5 CPSR *********************************************
******************************************************************************************/
#define SSI1_BITBANDING_CPSR    ((SSI_BITBANDING_CPSR_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CPSR_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 6 IM *********************************************
******************************************************************************************/
#define SSI1_BITBANDING_IM    ((SSI_BITBANDING_IM_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_IM_OFFSET) * 32U)))

#define SSI1_BITBANDING_IM_RORIM    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_IM_OFFSET) * 32U) + (SSI_IM_R_RORIM_BIT * 4U))))
#define SSI1_BITBANDING_IM_RTIM    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_IM_OFFSET) * 32U) + (SSI_IM_R_RTIM_BIT * 4U))))
#define SSI1_BITBANDING_IM_RXIM    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_IM_OFFSET) * 32U) + (SSI_IM_R_RXIM_BIT * 4U))))
#define SSI1_BITBANDING_IM_TXIM    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_IM_OFFSET) * 32U) + (SSI_IM_R_TXIM_BIT * 4U))))
#define SSI1_BITBANDING_IM_DMARXIM    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_IM_OFFSET) * 32U) + (SSI_IM_R_DMARXIM_BIT * 4U))))
#define SSI1_BITBANDING_IM_DMATXIM    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_IM_OFFSET) * 32U) + (SSI_IM_R_DMATXIM_BIT * 4U))))
#define SSI1_BITBANDING_IM_EOTIM    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_IM_OFFSET) * 32U) + (SSI_IM_R_EOTIM_BIT * 4U))))

/******************************************************************************************
*********************************** * 7 RIS *********************************************
******************************************************************************************/
#define SSI1_BITBANDING_RIS    ((SSI_BITBANDING_RIS_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_RIS_OFFSET) * 32U)))

#define SSI1_BITBANDING_RIS_RORRIS    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_RIS_OFFSET) * 32U) + (SSI_RIS_R_RORRIS_BIT * 4U))))
#define SSI1_BITBANDING_RIS_RTRIS    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_RIS_OFFSET) * 32U) + (SSI_RIS_R_RTRIS_BIT * 4U))))
#define SSI1_BITBANDING_RIS_RXRIS    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_RIS_OFFSET) * 32U) + (SSI_RIS_R_RXRIS_BIT * 4U))))
#define SSI1_BITBANDING_RIS_TXRIS    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_RIS_OFFSET) * 32U) + (SSI_RIS_R_TXRIS_BIT * 4U))))
#define SSI1_BITBANDING_RIS_DMARXRIS    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_RIS_OFFSET) * 32U) + (SSI_RIS_R_DMARXRIS_BIT * 4U))))
#define SSI1_BITBANDING_RIS_DMATXRIS    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_RIS_OFFSET) * 32U) + (SSI_RIS_R_DMATXRIS_BIT * 4U))))
#define SSI1_BITBANDING_RIS_EOTRIS    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_RIS_OFFSET) * 32U) + (SSI_RIS_R_EOTRIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 8 MIS *********************************************
******************************************************************************************/
#define SSI1_BITBANDING_MIS    ((SSI_BITBANDING_MIS_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_MIS_OFFSET) * 32U)))

#define SSI1_BITBANDING_MIS_RORMIS    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_MIS_OFFSET) * 32U) + (SSI_MIS_R_RORMIS_BIT * 4U))))
#define SSI1_BITBANDING_MIS_RTMIS    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_MIS_OFFSET) * 32U) + (SSI_MIS_R_RTMIS_BIT * 4U))))
#define SSI1_BITBANDING_MIS_RXMIS    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_MIS_OFFSET) * 32U) + (SSI_MIS_R_RXMIS_BIT * 4U))))
#define SSI1_BITBANDING_MIS_TXMIS    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_MIS_OFFSET) * 32U) + (SSI_MIS_R_TXMIS_BIT * 4U))))
#define SSI1_BITBANDING_MIS_DMARXMIS    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_MIS_OFFSET) * 32U) + (SSI_MIS_R_DMARXMIS_BIT * 4U))))
#define SSI1_BITBANDING_MIS_DMATXMIS    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_MIS_OFFSET) * 32U) + (SSI_MIS_R_DMATXMIS_BIT * 4U))))
#define SSI1_BITBANDING_MIS_EOTMIS    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_MIS_OFFSET) * 32U) + (SSI_MIS_R_EOTMIS_BIT * 4U))))

/******************************************************************************************
*********************************** * 9 ICR *********************************************
******************************************************************************************/
#define SSI1_BITBANDING_ICR    ((SSI_BITBANDING_ICR_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_ICR_OFFSET) * 32U)))

#define SSI1_BITBANDING_ICR_RORMIC    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_ICR_OFFSET) * 32U) + (SSI_ICR_R_RORMIC_BIT * 4U))))
#define SSI1_BITBANDING_ICR_RTIC    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_ICR_OFFSET) * 32U) + (SSI_ICR_R_RTIC_BIT * 4U))))
#define SSI1_BITBANDING_ICR_DMARXIC    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_ICR_OFFSET) * 32U) + (SSI_ICR_R_DMARXIC_BIT * 4U))))
#define SSI1_BITBANDING_ICR_DMATXIC    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_ICR_OFFSET) * 32U) + (SSI_ICR_R_DMATXIC_BIT * 4U))))
#define SSI1_BITBANDING_ICR_EOTIC    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_ICR_OFFSET) * 32U) + (SSI_ICR_R_EOTIC_BIT * 4U))))

/******************************************************************************************
*********************************** * 10 DMACTL *********************************************
******************************************************************************************/
#define SSI1_BITBANDING_DMACTL    ((SSI_BITBANDING_DMACTL_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_DMACTL_OFFSET) * 32U)))

#define SSI1_BITBANDING_DMACTL_RXDMAE    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_DMACTL_OFFSET) * 32U) + (SSI_DMACTL_R_RXDMAE_BIT * 4U))))
#define SSI1_BITBANDING_DMACTL_TXDMAE    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_DMACTL_OFFSET) * 32U) + (SSI_DMACTL_R_TXDMAE_BIT * 4U))))

/******************************************************************************************
*********************************** * 11 PP *********************************************
******************************************************************************************/
#define SSI1_BITBANDING_PP    ((SSI_BITBANDING_PP_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PP_OFFSET) * 32U)))

#define SSI1_BITBANDING_PP_HSCLK    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PP_OFFSET) * 32U) + (SSI_PP_R_HSCLK_BIT * 4U))))
#define SSI1_BITBANDING_PP_MODE_0    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PP_OFFSET) * 32U) + ((SSI_PP_R_MODE_BIT + 0U) * 4U))))
#define SSI1_BITBANDING_PP_MODE_1    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PP_OFFSET) * 32U) + ((SSI_PP_R_MODE_BIT + 1U) * 4U))))
#define SSI1_BITBANDING_PP_FSSHLDFRM    (*((volatile const UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PP_OFFSET) * 32U) + (SSI_PP_R_FSSHLDFRM_BIT * 4U))))

/******************************************************************************************
*********************************** * 11 CC *********************************************
******************************************************************************************/
#define SSI1_BITBANDING_CC    ((SSI_BITBANDING_CC_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CC_OFFSET) * 32U)))

#define SSI1_BITBANDING_CC_CS_0    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CC_OFFSET) * 32U) + ((SSI_CC_R_CS_BIT + 0U) * 4U))))
#define SSI1_BITBANDING_CC_CS_1    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CC_OFFSET) * 32U) + ((SSI_CC_R_CS_BIT + 1U) * 4U))))
#define SSI1_BITBANDING_CC_CS_2    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CC_OFFSET) * 32U) + ((SSI_CC_R_CS_BIT + 2U) * 4U))))
#define SSI1_BITBANDING_CC_CS_3    (*((volatile UBase_t *) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_CC_OFFSET) * 32U) + ((SSI_CC_R_CS_BIT + 3U) * 4U))))

/******************************************************************************************
 *********************************** * 19 PeriphID4 *********************************************
 ******************************************************************************************/
/* SSI1 APB PID4*/
#define SSI1_BITBANDING_PeriphID4    ((SSI_BITBANDING_PeriphID4_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PeriphID4_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 20 PeriphID5 *********************************************
 ******************************************************************************************/
/* SSI1 APB PID5*/
#define SSI1_BITBANDING_PeriphID5    ((SSI_BITBANDING_PeriphID5_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PeriphID5_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 21 PeriphID6 *********************************************
 ******************************************************************************************/
/* SSI1 APB PID6*/
#define SSI1_BITBANDING_PeriphID6    ((SSI_BITBANDING_PeriphID6_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PeriphID6_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 22 PeriphID7 *********************************************
 ******************************************************************************************/
/* SSI1 APB PID7*/
#define SSI1_BITBANDING_PeriphID7    ((SSI_BITBANDING_PeriphID7_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PeriphID7_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 23 PeriphID0 *********************************************
 ******************************************************************************************/
/* SSI1 APB PID0*/
#define SSI1_BITBANDING_PeriphID0    ((SSI_BITBANDING_PeriphID0_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PeriphID0_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 24 PeriphID1 *********************************************
 ******************************************************************************************/
/* SSI1 APB PID1*/
#define SSI1_BITBANDING_PeriphID1    ((SSI_BITBANDING_PeriphID1_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PeriphID1_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 25 PeriphID2 *********************************************
 ******************************************************************************************/
/* SSI1 APB PID2*/
#define SSI1_BITBANDING_PeriphID2    ((SSI_BITBANDING_PeriphID2_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PeriphID2_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 26 PeriphID3 *********************************************
 ******************************************************************************************/
/* SSI1 APB PID3*/
#define SSI1_BITBANDING_PeriphID3    ((SSI_BITBANDING_PeriphID3_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PeriphID3_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 27 CellID0 *********************************************
 ******************************************************************************************/
/* SSI1 APB CID0*/
#define SSI1_BITBANDING_PCellID0    ((SSI_BITBANDING_PCellID0_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PCellID0_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 28 CellID1 *********************************************
 ******************************************************************************************/
/* SSI1 APB CID1*/
#define SSI1_BITBANDING_PCellID1    ((SSI_BITBANDING_PCellID1_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PCellID1_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 29 CellID2 *********************************************
 ******************************************************************************************/
/* SSI1 APB CID2*/
#define SSI1_BITBANDING_PCellID2    ((SSI_BITBANDING_PCellID2_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PCellID2_OFFSET) * 32U)))

/******************************************************************************************
 *********************************** * 30 CellID3 *********************************************
 ******************************************************************************************/
/* SSI1 APB CID3*/
#define SSI1_BITBANDING_PCellID3    ((SSI_BITBANDING_PCellID3_t*) (SSI_BITBANDING_BASE + ((SSI1_OFFSET + SSI_PCellID3_OFFSET) * 32U)))

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_SSI_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_ */
