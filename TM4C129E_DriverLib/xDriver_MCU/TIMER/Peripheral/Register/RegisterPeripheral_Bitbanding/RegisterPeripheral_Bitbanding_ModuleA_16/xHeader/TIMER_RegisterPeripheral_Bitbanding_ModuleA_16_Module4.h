/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_ModuleA_16_Module4.h
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
 * @verbatim 9 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description * 9 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_16_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_16_MODULE4_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_16_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_16_MODULE4_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleA_16.h>

#define GPTM4_TA_BITBANDING    ((GPTM_TA_BITBANDING_t*) (GPTM_BASE_BITBANDING + (GPTM4_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 2 TAMR *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnMR    ((BITBANDING_TA_GPTMMR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL)))

#define GPTM4_TA_BITBANDING_TnMR_TnCMR    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL) + (GPTM_TA_TnMR_R_TnCMR_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMR_TnAMS    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL) + (GPTM_TA_TnMR_R_TnAMS_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMR_TnCDIR    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL) + (GPTM_TA_TnMR_R_TnCDIR_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMR_TnMIE    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL) + (GPTM_TA_TnMR_R_TnMIE_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMR_TnWOT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL) + (GPTM_TA_TnMR_R_TnWOT_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMR_TnSNAPS    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL) + (GPTM_TA_TnMR_R_TnSNAPS_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMR_TnILD    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL) + (GPTM_TA_TnMR_R_TnILD_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMR_TnPWMIE    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL) + (GPTM_TA_TnMR_R_TnPWMIE_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMR_TnMRSU    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL) + (GPTM_TA_TnMR_R_TnMRSU_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMR_TnPLO    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL) + (GPTM_TA_TnMR_R_TnPLO_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMR_TnCINTD    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL) + (GPTM_TA_TnMR_R_TnCINTD_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMR_TCACT_0    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL) + ((GPTM_TA_TnMR_R_TCACT_BIT + 0UL) * 4UL))))
#define GPTM4_TA_BITBANDING_TnMR_TCACT_1    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL) + ((GPTM_TA_TnMR_R_TCACT_BIT + 1UL) * 4UL))))
#define GPTM4_TA_BITBANDING_TnMR_TCACT_2    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMR_OFFSET) * 32UL) + ((GPTM_TA_TnMR_R_TCACT_BIT + 2UL) * 4UL))))


/******************************************************************************************
*********************************** * 4 CTL *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnCTL    ((BITBANDING_TA_GPTMCTL_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnCTL_OFFSET) * 32UL)))

#define GPTM4_TA_BITBANDING_TnCTL_TnEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnCTL_OFFSET) * 32UL) + (GPTM_TA_TnCTL_R_TnEN_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnCTL_TnSTALL    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnCTL_OFFSET) * 32UL) + (GPTM_TA_TnCTL_R_TnSTALL_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnCTL_TnOTE    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnCTL_OFFSET) * 32UL) + (GPTM_TA_TnCTL_R_TnOTE_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnCTL_TnPWML    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnCTL_OFFSET) * 32UL) + (GPTM_TA_TnCTL_R_TnPWML_BIT * 4UL))))

/******************************************************************************************
*********************************** * 6 IMR *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnIMR    ((BITBANDING_TA_GPTMIMR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnIMR_OFFSET) * 32UL)))

#define GPTM4_TA_BITBANDING_TnIMR_TnTOIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnIMR_OFFSET) * 32UL) + (GPTM_TA_TnIMR_R_TnTOIM_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnIMR_CnMIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnIMR_OFFSET) * 32UL) + (GPTM_TA_TnIMR_R_CnMIM_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnIMR_CnEIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnIMR_OFFSET) * 32UL) + (GPTM_TA_TnIMR_R_CnEIM_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnIMR_TnMIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnIMR_OFFSET) * 32UL) + (GPTM_TA_TnIMR_R_TnMIM_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnIMR_DMAnIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnIMR_OFFSET) * 32UL) + (GPTM_TA_TnIMR_R_DMAnIM_BIT * 4UL))))

/******************************************************************************************
*********************************** * 7 RIS *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnRIS    ((BITBANDING_TA_GPTMRIS_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnRIS_OFFSET) * 32UL)))

#define GPTM4_TA_BITBANDING_TnRIS_TnTORIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnRIS_OFFSET) * 32UL) + (GPTM_TA_TnRIS_R_TnTORIS_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnRIS_CnMRIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnRIS_OFFSET) * 32UL) + (GPTM_TA_TnRIS_R_CnMRIS_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnRIS_CnERIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnRIS_OFFSET) * 32UL) + (GPTM_TA_TnRIS_R_CnERIS_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnRIS_TnMRIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnRIS_OFFSET) * 32UL) + (GPTM_TA_TnRIS_R_TnMRIS_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnRIS_DMAnRIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnRIS_OFFSET) * 32UL) + (GPTM_TA_TnRIS_R_DMAnRIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 MIS *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnMIS    ((BITBANDING_TA_GPTMMIS_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMIS_OFFSET) * 32UL)))

#define GPTM4_TA_BITBANDING_TnMIS_TnTOMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMIS_OFFSET) * 32UL) + (GPTM_TA_TnMIS_R_TnTOMIS_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMIS_CnMMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMIS_OFFSET) * 32UL) + (GPTM_TA_TnMIS_R_CnMMIS_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMIS_CnEMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMIS_OFFSET) * 32UL) + (GPTM_TA_TnMIS_R_CnEMIS_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMIS_TnMMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMIS_OFFSET) * 32UL) + (GPTM_TA_TnMIS_R_TnMMIS_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnMIS_DMAnMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMIS_OFFSET) * 32UL) + (GPTM_TA_TnMIS_R_DMAnMIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 9 ICR *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnICR    ((BITBANDING_TA_GPTMICR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnICR_OFFSET) * 32UL)))

#define GPTM4_TA_BITBANDING_TnICR_TnTOCINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnICR_OFFSET) * 32UL) + (GPTM_TA_TnICR_R_TnTOCINT_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnICR_CnMCINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnICR_OFFSET) * 32UL) + (GPTM_TA_TnICR_R_CnMCINT_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnICR_CnECINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnICR_OFFSET) * 32UL) + (GPTM_TA_TnICR_R_CnECINT_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnICR_TnMCINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnICR_OFFSET) * 32UL) + (GPTM_TA_TnICR_R_TnMCINT_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnICR_DMAnINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnICR_OFFSET) * 32UL) + (GPTM_TA_TnICR_R_DMAnINT_BIT * 4UL))))

/******************************************************************************************
*********************************** * 10 TAILR *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnILR    ((BITBANDING_TA_GPTMILR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnILR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnMATCHR    ((BITBANDING_TA_GPTMMATCHR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnMATCHR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 14 TAPR *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnPR    ((BITBANDING_TA_GPTMPR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnPR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 16 TAPMR *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnPMR    ((BITBANDING_TA_GPTMPMR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnPMR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 18 TAR *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnR    ((BITBANDING_TA_GPTMR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 20 TAV *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnV    ((BITBANDING_TA_GPTMV_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnV_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 23 TAPS *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnPS    ((BITBANDING_TA_GPTMPS_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnPS_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 25 DMAEV *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnDMAEV    ((BITBANDING_TA_GPTMDMAEV_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnDMAEV_OFFSET) * 32UL)))

#define GPTM4_TA_BITBANDING_TnDMAEV_TnTODMAEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnDMAEV_OFFSET) * 32UL) + (GPTM_TA_TnDMAEV_R_TnTODMAEN_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnDMAEV_CnMDMAEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnDMAEV_OFFSET) * 32UL) + (GPTM_TA_TnDMAEV_R_CnMDMAEN_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnDMAEV_CnEDMAEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnDMAEV_OFFSET) * 32UL) + (GPTM_TA_TnDMAEV_R_CnEDMAEN_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnDMAEV_TnMDMAEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnDMAEV_OFFSET) * 32UL) + (GPTM_TA_TnDMAEV_R_TnMDMAEN_BIT * 4UL))))

/******************************************************************************************
*********************************** * 26 ADCEV *********************************************
******************************************************************************************/
#define GPTM4_TA_BITBANDING_TnADCEV    ((BITBANDING_TA_GPTMADCEV_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnADCEV_OFFSET) * 32UL)))

#define GPTM4_TA_BITBANDING_TnADCEV_TnTOADCEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnADCEV_OFFSET) * 32UL) + (GPTM_TA_TnADCEV_R_TnTOADCEN_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnADCEV_CnMADCEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnADCEV_OFFSET) * 32UL) + (GPTM_TA_TnADCEV_R_CnMADCEN_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnADCEV_CnEADCEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnADCEV_OFFSET) * 32UL) + (GPTM_TA_TnADCEV_R_CnEADCEN_BIT * 4UL))))
#define GPTM4_TA_BITBANDING_TnADCEV_TnMADCEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TA_TnADCEV_OFFSET) * 32UL) + (GPTM_TA_TnADCEV_R_TnMADCEN_BIT * 4UL))))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_16_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_16_MODULE4_H_ */
