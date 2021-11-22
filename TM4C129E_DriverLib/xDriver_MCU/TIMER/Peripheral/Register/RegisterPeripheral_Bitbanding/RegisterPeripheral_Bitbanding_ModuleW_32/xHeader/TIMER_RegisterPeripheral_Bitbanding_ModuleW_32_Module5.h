/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_ModuleW_32_Module5.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_32_MODULE5_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_32_MODULE5_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleW_32.h>

#define GPTM5_TW_BITBANDING    ((GPTM_TW_BITBANDING_t*) (GPTM_BASE_BITBANDING + (GPTM5_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 2 TAMR *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_TnMR    ((BITBANDING_TW_GPTMMR_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL)))

#define GPTM5_TW_BITBANDING_TnMR_TnCMR    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL) + (GPTM_TW_TnMR_R_TnCMR_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMR_TnAMS    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL) + (GPTM_TW_TnMR_R_TnAMS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMR_TnCDIR    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL) + (GPTM_TW_TnMR_R_TnCDIR_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMR_TnMIE    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL) + (GPTM_TW_TnMR_R_TnMIE_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMR_TnWOT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL) + (GPTM_TW_TnMR_R_TnWOT_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMR_TnSNAPS    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL) + (GPTM_TW_TnMR_R_TnSNAPS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMR_TnILD    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL) + (GPTM_TW_TnMR_R_TnILD_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMR_TnPWMIE    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL) + (GPTM_TW_TnMR_R_TnPWMIE_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMR_TnMRSU    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL) + (GPTM_TW_TnMR_R_TnMRSU_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMR_TnPLO    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL) + (GPTM_TW_TnMR_R_TnPLO_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMR_TnCINTD    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL) + (GPTM_TW_TnMR_R_TnCINTD_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMR_TCACT_0    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL) + ((GPTM_TW_TnMR_R_TCACT_BIT + 0UL) * 4UL))))
#define GPTM5_TW_BITBANDING_TnMR_TCACT_1    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL) + ((GPTM_TW_TnMR_R_TCACT_BIT + 1UL) * 4UL))))
#define GPTM5_TW_BITBANDING_TnMR_TCACT_2    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMR_OFFSET) * 32UL) + ((GPTM_TW_TnMR_R_TCACT_BIT + 2UL) * 4UL))))

/******************************************************************************************
*********************************** * 4 CTL *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_TnCTL    ((BITBANDING_TW_GPTMCTL_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnCTL_OFFSET) * 32UL)))

#define GPTM5_TW_BITBANDING_TnCTL_TnEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnCTL_OFFSET) * 32UL) + (GPTM_TW_TnCTL_R_TnEN_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnCTL_TnSTALL    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnCTL_OFFSET) * 32UL) + (GPTM_TW_TnCTL_R_TnSTALL_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnCTL_RTCEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnCTL_OFFSET) * 32UL) + (GPTM_TW_TnCTL_R_RTCEN_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnCTL_TnOTE    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnCTL_OFFSET) * 32UL) + (GPTM_TW_TnCTL_R_TnOTE_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnCTL_TnPWML    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnCTL_OFFSET) * 32UL) + (GPTM_TW_TnCTL_R_TnPWML_BIT * 4UL))))

/******************************************************************************************
*********************************** * 6 IMR *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_TnIMR    ((BITBANDING_TW_GPTMIMR_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnIMR_OFFSET) * 32UL)))


#define GPTM5_TW_BITBANDING_TnIMR_TnTOIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnIMR_OFFSET) * 32UL) + (GPTM_TW_TnIMR_R_TnTOIM_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnIMR_CnMIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnIMR_OFFSET) * 32UL) + (GPTM_TW_TnIMR_R_CnMIM_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnIMR_RTCIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnIMR_OFFSET) * 32UL) + (GPTM_TW_TnIMR_R_RTCIM_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnIMR_CnEIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnIMR_OFFSET) * 32UL) + (GPTM_TW_TnIMR_R_CnEIM_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnIMR_TnMIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnIMR_OFFSET) * 32UL) + (GPTM_TW_TnIMR_R_TnMIM_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnIMR_DMAnIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnIMR_OFFSET) * 32UL) + (GPTM_TW_TnIMR_R_DMAnIM_BIT * 4UL))))


/******************************************************************************************
*********************************** * 7 RIS *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_TnRIS    ((BITBANDING_TW_GPTMRIS_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnRIS_OFFSET) * 32UL)))

#define GPTM5_TW_BITBANDING_TnRIS_TnTORIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnRIS_OFFSET) * 32UL) + (GPTM_TW_TnRIS_R_TnTORIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnRIS_CnMRIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnRIS_OFFSET) * 32UL) + (GPTM_TW_TnRIS_R_CnMRIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnRIS_RTCRIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnRIS_OFFSET) * 32UL) + (GPTM_TW_TnRIS_R_RTCRIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnRIS_CnERIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnRIS_OFFSET) * 32UL) + (GPTM_TW_TnRIS_R_CnERIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnRIS_TnMRIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnRIS_OFFSET) * 32UL) + (GPTM_TW_TnRIS_R_TnMRIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnRIS_DMAnRIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnRIS_OFFSET) * 32UL) + (GPTM_TW_TnRIS_R_DMAnRIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 MIS *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_TnMIS    ((BITBANDING_TW_GPTMMIS_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMIS_OFFSET) * 32UL)))

#define GPTM5_TW_BITBANDING_TnMIS_TnTOMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMIS_OFFSET) * 32UL) + (GPTM_TW_TnMIS_R_TnTOMIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMIS_CnMMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMIS_OFFSET) * 32UL) + (GPTM_TW_TnMIS_R_CnMMIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMIS_RTCMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMIS_OFFSET) * 32UL) + (GPTM_TW_TnMIS_R_RTCMIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMIS_CnEMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMIS_OFFSET) * 32UL) + (GPTM_TW_TnMIS_R_CnEMIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMIS_TnMMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMIS_OFFSET) * 32UL) + (GPTM_TW_TnMIS_R_TnMMIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnMIS_DMAnMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMIS_OFFSET) * 32UL) + (GPTM_TW_TnMIS_R_DMAnMIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 9 ICR *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_TnICR    ((BITBANDING_TW_GPTMICR_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnICR_OFFSET) * 32UL)))

#define GPTM5_TW_BITBANDING_TnICR_TnTOCINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnICR_OFFSET) * 32UL) + (GPTM_TW_TnICR_R_TnTOCINT_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnICR_CnMCINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnICR_OFFSET) * 32UL) + (GPTM_TW_TnICR_R_CnMCINT_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnICR_RTCCINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnICR_OFFSET) * 32UL) + (GPTM_TW_TnICR_R_RTCCINT_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnICR_CnECINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnICR_OFFSET) * 32UL) + (GPTM_TW_TnICR_R_CnECINT_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnICR_TnMCINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnICR_OFFSET) * 32UL) + (GPTM_TW_TnICR_R_TnMCINT_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnICR_DMAnINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnICR_OFFSET) * 32UL) + (GPTM_TW_TnICR_R_DMAnINT_BIT * 4UL))))

/******************************************************************************************
*********************************** * 10 TAILR *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_TnILR    ((BITBANDING_TW_GPTMILR_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnILR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_TnMATCHR    ((BITBANDING_TW_GPTMMATCHR_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnMATCHR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 18 TAR *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_TnR    ((BITBANDING_TW_GPTMR_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 20 TAV *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_TnV    ((BITBANDING_TW_GPTMV_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnV_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 22 RTCPD *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_RTCPD    ((BITBANDING_TW_GPTMRTCPD_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_RTCPD_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 25 DMAEV *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_TnDMAEV    ((BITBANDING_TW_GPTMDMAEV_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnDMAEV_OFFSET) * 32UL)))

#define GPTM5_TW_BITBANDING_TnDMAEV_TnTODMAEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnDMAEV_OFFSET) * 32UL) + (GPTM_TW_TnDMAEV_R_TnTODMAEN_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnDMAEV_CnMDMAEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnDMAEV_OFFSET) * 32UL) + (GPTM_TW_TnDMAEV_R_CnMDMAEN_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnDMAEV_CnEDMAEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnDMAEV_OFFSET) * 32UL) + (GPTM_TW_TnDMAEV_R_CnEDMAEN_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnDMAEV_RTCDMAEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnDMAEV_OFFSET) * 32UL) + (GPTM_TW_TnDMAEV_R_RTCDMAEN_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnDMAEV_TnMDMAEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnDMAEV_OFFSET) * 32UL) + (GPTM_TW_TnDMAEV_R_TnMDMAEN_BIT * 4UL))))

/******************************************************************************************
*********************************** * 26 ADCEV *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_TnADCEV    ((BITBANDING_TW_GPTMADCEV_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnADCEV_OFFSET) * 32UL)))

#define GPTM5_TW_BITBANDING_TnADCEV_TnTOADCEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnADCEV_OFFSET) * 32UL) + (GPTM_TW_TnADCEV_R_TnTOADCEN_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnADCEV_CnMADCEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnADCEV_OFFSET) * 32UL) + (GPTM_TW_TnADCEV_R_CnMADCEN_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnADCEV_CnEADCEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnADCEV_OFFSET) * 32UL) + (GPTM_TW_TnADCEV_R_CnEADCEN_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnADCEV_RTCADCEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnADCEV_OFFSET) * 32UL) + (GPTM_TW_TnADCEV_R_RTCADCEN_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_TnADCEV_TnMADCEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_TnADCEV_OFFSET) * 32UL) + (GPTM_TW_TnADCEV_R_TnMADCEN_BIT * 4UL))))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_32_MODULE5_H_ */
