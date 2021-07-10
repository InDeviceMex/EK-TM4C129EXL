/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_ModuleW_64_Module3.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_64_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_64_MODULE3_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_64_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_64_MODULE3_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleW_64.h>

#define GPWTM3_TW_BITBANDING    ((GPWTM_TW_BITBANDING_TypeDef*) (GPWTM_BASE_BITBANDING + (GPWTM3_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 2 TAMR *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_TnMR    ((BITBANDING_TW_GPTMMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMR_OFFSET) * 32UL)))

#define GPWTM3_TW_BITBANDING_TnMR_TnCMR    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMR_OFFSET) * 32UL) + (GPWTM_TW_TnMR_R_TnCMR_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnMR_TnAMS    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMR_OFFSET) * 32UL) + (GPWTM_TW_TnMR_R_TnAMS_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnMR_TnCDIR    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMR_OFFSET) * 32UL) + (GPWTM_TW_TnMR_R_TnCDIR_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnMR_TnMIE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMR_OFFSET) * 32UL) + (GPWTM_TW_TnMR_R_TnMIE_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnMR_TnWOT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMR_OFFSET) * 32UL) + (GPWTM_TW_TnMR_R_TnWOT_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnMR_TnSNAPS    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMR_OFFSET) * 32UL) + (GPWTM_TW_TnMR_R_TnSNAPS_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnMR_TnILD    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMR_OFFSET) * 32UL) + (GPWTM_TW_TnMR_R_TnILD_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnMR_TnPWMIE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMR_OFFSET) * 32UL) + (GPWTM_TW_TnMR_R_TnPWMIE_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnMR_TnMRSU    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMR_OFFSET) * 32UL) + (GPWTM_TW_TnMR_R_TnMRSU_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnMR_TnPLO    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMR_OFFSET) * 32UL) + (GPWTM_TW_TnMR_R_TnPLO_BIT * 4UL))))

/******************************************************************************************
*********************************** * 4 CTL *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_TnCTL    ((BITBANDING_TW_GPTMCTL_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnCTL_OFFSET) * 32UL)))

#define GPWTM3_TW_BITBANDING_TnCTL_TnEN    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnCTL_OFFSET) * 32UL) + (GPWTM_TW_TnCTL_R_TnEN_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnCTL_TnSTALL    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnCTL_OFFSET) * 32UL) + (GPWTM_TW_TnCTL_R_TnSTALL_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnCTL_RTCEN    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnCTL_OFFSET) * 32UL) + (GPWTM_TW_TnCTL_R_RTCEN_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnCTL_TnOTE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnCTL_OFFSET) * 32UL) + (GPWTM_TW_TnCTL_R_TnOTE_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnCTL_TnPWML    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnCTL_OFFSET) * 32UL) + (GPWTM_TW_TnCTL_R_TnPWML_BIT * 4UL))))

/******************************************************************************************
*********************************** * 6 IMR *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_TnIMR    ((BITBANDING_TW_GPWTMIMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnIMR_OFFSET) * 32UL)))

#define GPWTM3_TW_BITBANDING_TnIMR_TnTOIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnIMR_OFFSET) * 32UL) + (GPWTM_TW_TnIMR_R_TnTOIM_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnIMR_CnMIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnIMR_OFFSET) * 32UL) + (GPWTM_TW_TnIMR_R_CnMIM_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnIMR_RTCIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnIMR_OFFSET) * 32UL) + (GPWTM_TW_TnIMR_R_RTCIM_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnIMR_CnEIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnIMR_OFFSET) * 32UL) + (GPWTM_TW_TnIMR_R_CnEIM_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnIMR_TnMIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnIMR_OFFSET) * 32UL) + (GPWTM_TW_TnIMR_R_TnMIM_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnIMR_WUEIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnIMR_OFFSET) * 32UL) + (GPWTM_TW_TnIMR_R_WUEIM_BIT * 4UL))))

/******************************************************************************************
*********************************** * 7 RIS *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_TnRIS    ((BITBANDING_TW_GPWTMRIS_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnRIS_OFFSET) * 32UL)))

#define GPWTM3_TW_BITBANDING_TnRIS_TnTORIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnRIS_OFFSET) * 32UL) + (GPWTM_TW_TnRIS_R_TnTORIS_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnRIS_CnMRIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnRIS_OFFSET) * 32UL) + (GPWTM_TW_TnRIS_R_CnMRIS_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnRIS_RTCRIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnRIS_OFFSET) * 32UL) + (GPWTM_TW_TnRIS_R_RTCRIS_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnRIS_CnERIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnRIS_OFFSET) * 32UL) + (GPWTM_TW_TnRIS_R_CnERIS_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnRIS_TnMRIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnRIS_OFFSET) * 32UL) + (GPWTM_TW_TnRIS_R_TnMRIS_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnRIS_WUERIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnRIS_OFFSET) * 32UL) + (GPWTM_TW_TnRIS_R_WUERIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 MIS *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_TnMIS    ((BITBANDING_TW_GPWTMMIS_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMIS_OFFSET) * 32UL)))

#define GPWTM3_TW_BITBANDING_TnMIS_TnTOMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMIS_OFFSET) * 32UL) + (GPWTM_TW_TnMIS_R_TnTOMIS_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnMIS_CnMMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMIS_OFFSET) * 32UL) + (GPWTM_TW_TnMIS_R_CnMMIS_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnMIS_RTCMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMIS_OFFSET) * 32UL) + (GPWTM_TW_TnMIS_R_RTCMIS_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnMIS_CnEMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMIS_OFFSET) * 32UL) + (GPWTM_TW_TnMIS_R_CnEMIS_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnMIS_TnMMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMIS_OFFSET) * 32UL) + (GPWTM_TW_TnMIS_R_TnMMIS_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnMIS_WUEMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMIS_OFFSET) * 32UL) + (GPWTM_TW_TnMIS_R_WUEMIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 9 ICR *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_TnICR    ((BITBANDING_TW_GPWTMICR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnICR_OFFSET) * 32UL)))

#define GPWTM3_TW_BITBANDING_TnICR_TnTOCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnICR_OFFSET) * 32UL) + (GPWTM_TW_TnICR_R_TnTOCINT_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnICR_CnMCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnICR_OFFSET) * 32UL) + (GPWTM_TW_TnICR_R_CnMCINT_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnICR_RTCCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnICR_OFFSET) * 32UL) + (GPWTM_TW_TnICR_R_RTCCINT_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnICR_CnECINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnICR_OFFSET) * 32UL) + (GPWTM_TW_TnICR_R_CnECINT_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnICR_TnMCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnICR_OFFSET) * 32UL) + (GPWTM_TW_TnICR_R_TnMCINT_BIT * 4UL))))
#define GPWTM3_TW_BITBANDING_TnICR_WUECINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnICR_OFFSET) * 32UL) + (GPWTM_TW_TnICR_R_WUECINT_BIT * 4UL))))

/******************************************************************************************
*********************************** * 10 TAILR *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_TnILR_LOW    ((BITBANDING_TW_GPWTMILR_LOW_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnILR_LOW_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 11 TBILR *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_TnILR_HIGH    ((BITBANDING_TW_GPWTMILR_HIGH_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnILR_HIGH_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_TnMATCHR_LOW    ((BITBANDING_TW_GPWTMMATCHR_LOW_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMATCHR_LOW_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 13 TBMATCHR *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_TnMATCHR_HIGH    ((BITBANDING_TW_GPWTMMATCHR_HIGH_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnMATCHR_HIGH_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 18 TAR *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_TnR_LOW    ((BITBANDING_TW_GPWTMR_LOW_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnR_LOW_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 19 TBR *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_TnR_HIGH    ((BITBANDING_TW_GPWTMR_HIGH_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnR_HIGH_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 20 TAV *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_TnV_LOW    ((BITBANDING_TW_GPWTMV_LOW_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnV_LOW_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 21 TBV *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_TnV_HIGH    ((BITBANDING_TW_GPWTMV_HIGH_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_TnV_HIGH_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 22 RTCPD *********************************************
******************************************************************************************/
#define GPWTM3_TW_BITBANDING_RTCPD    ((BITBANDING_TW_GPTMRTCPD_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_TW_RTCPD_OFFSET) * 32UL)))


#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_64_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_64_MODULE3_H_ */
