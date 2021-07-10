/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_ModuleB_32_Module5.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEB_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEB_32_MODULE5_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEB_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEB_32_MODULE5_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleB_32.h>

#define GPWTM5_TB_BITBANDING    ((GPWTM_TB_BITBANDING_TypeDef*) (GPWTM_BASE_BITBANDING + (GPWTM5_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 3 TBMR *********************************************
******************************************************************************************/
#define GPWTM5_TB_BITBANDING_TnMR    ((BITBANDING_TB_GPTMMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMR_OFFSET) * 32UL)))

#define GPWTM5_TB_BITBANDING_TnMR_TnCMR    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMR_OFFSET) * 32UL) + (GPWTM_TB_TnMR_R_TnCMR_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnMR_TnAMS    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMR_OFFSET) * 32UL) + (GPWTM_TB_TnMR_R_TnAMS_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnMR_TnCDIR    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMR_OFFSET) * 32UL) + (GPWTM_TB_TnMR_R_TnCDIR_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnMR_TnMIE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMR_OFFSET) * 32UL) + (GPWTM_TB_TnMR_R_TnMIE_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnMR_TnWOT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMR_OFFSET) * 32UL) + (GPWTM_TB_TnMR_R_TnWOT_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnMR_TnSNAPS    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMR_OFFSET) * 32UL) + (GPWTM_TB_TnMR_R_TnSNAPS_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnMR_TnILD    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMR_OFFSET) * 32UL) + (GPWTM_TB_TnMR_R_TnILD_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnMR_TnPWMIE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMR_OFFSET) * 32UL) + (GPWTM_TB_TnMR_R_TnPWMIE_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnMR_TnMRSU    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMR_OFFSET) * 32UL) + (GPWTM_TB_TnMR_R_TnMRSU_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnMR_TnPLO    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMR_OFFSET) * 32UL) + (GPWTM_TB_TnMR_R_TnPLO_BIT * 4UL))))

/******************************************************************************************
*********************************** * 4 CTL *********************************************
******************************************************************************************/
#define GPWTM5_TB_BITBANDING_TnCTL    ((BITBANDING_TB_GPTMCTL_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnCTL_OFFSET) * 32UL)))

#define GPWTM5_TB_BITBANDING_TnCTL_TnEN    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnCTL_OFFSET) * 32UL) + (GPWTM_TB_TnCTL_R_TnEN_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnCTL_TnSTALL    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnCTL_OFFSET) * 32UL) + (GPWTM_TB_TnCTL_R_TnSTALL_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnCTL_TnOTE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnCTL_OFFSET) * 32UL) + (GPWTM_TB_TnCTL_R_TnOTE_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnCTL_TnPWML    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnCTL_OFFSET) * 32UL) + (GPWTM_TB_TnCTL_R_TnPWML_BIT * 4UL))))

/******************************************************************************************
*********************************** * 6 IMR *********************************************
******************************************************************************************/
#define GPWTM5_TB_BITBANDING_TnIMR    ((BITBANDING_TB_GPTMIMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnIMR_OFFSET) * 32UL)))

#define GPWTM5_TB_BITBANDING_TnIMR_TnTOIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnIMR_OFFSET) * 32UL) + (GPWTM_TB_TnIMR_R_TnTOIM_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnIMR_CnMIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnIMR_OFFSET) * 32UL) + (GPWTM_TB_TnIMR_R_CnMIM_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnIMR_CnEIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnIMR_OFFSET) * 32UL) + (GPWTM_TB_TnIMR_R_CnEIM_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnIMR_TnMIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnIMR_OFFSET) * 32UL) + (GPWTM_TB_TnIMR_R_TnMIM_BIT * 4UL))))

/******************************************************************************************
*********************************** * 7 RIS *********************************************
******************************************************************************************/
#define GPWTM5_TB_BITBANDING_TnRIS    ((BITBANDING_TB_GPTMRIS_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnRIS_OFFSET) * 32UL)))

#define GPWTM5_TB_BITBANDING_TnRIS_TnTORIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnRIS_OFFSET) * 32UL) + (GPWTM_TB_TnRIS_R_TnTORIS_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnRIS_CnMRIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnRIS_OFFSET) * 32UL) + (GPWTM_TB_TnRIS_R_CnMRIS_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnRIS_CnERIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnRIS_OFFSET) * 32UL) + (GPWTM_TB_TnRIS_R_CnERIS_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnRIS_TnMRIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnRIS_OFFSET) * 32UL) + (GPWTM_TB_TnRIS_R_TnMRIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 MIS *********************************************
******************************************************************************************/
#define GPWTM5_TB_BITBANDING_TnMIS    ((BITBANDING_TB_GPTMMIS_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMIS_OFFSET) * 32UL)))

#define GPWTM5_TB_BITBANDING_TnMIS_TnTOMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMIS_OFFSET) * 32UL) + (GPWTM_TB_TnMIS_R_TnTOMIS_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnMIS_CnMMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMIS_OFFSET) * 32UL) + (GPWTM_TB_TnMIS_R_CnMMIS_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnMIS_CnEMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMIS_OFFSET) * 32UL) + (GPWTM_TB_TnMIS_R_CnEMIS_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnMIS_TnMMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMIS_OFFSET) * 32UL) + (GPWTM_TB_TnMIS_R_TnMMIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 9 ICR *********************************************
******************************************************************************************/
#define GPWTM5_TB_BITBANDING_TnICR    ((BITBANDING_TB_GPTMICR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnICR_OFFSET) * 32UL)))

#define GPWTM5_TB_BITBANDING_TnICR_TnTOCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnICR_OFFSET) * 32UL) + (GPWTM_TB_TnICR_R_TnTOCINT_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnICR_CnMCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnICR_OFFSET) * 32UL) + (GPWTM_TB_TnICR_R_CnMCINT_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnICR_CnECINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnICR_OFFSET) * 32UL) + (GPWTM_TB_TnICR_R_CnECINT_BIT * 4UL))))
#define GPWTM5_TB_BITBANDING_TnICR_TnMCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnICR_OFFSET) * 32UL) + (GPWTM_TB_TnICR_R_TnMCINT_BIT * 4UL))))

/******************************************************************************************
*********************************** * 11 TBILR *********************************************
******************************************************************************************/
#define GPWTM5_TB_BITBANDING_TnILR    ((BITBANDING_TB_GPWTMILR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnILR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 13 TBMATCHR *********************************************
******************************************************************************************/
#define GPWTM5_TB_BITBANDING_TnMATCHR    ((BITBANDING_TB_GPWTMMATCHR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnMATCHR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 15 TBPR *********************************************
******************************************************************************************/
#define GPWTM5_TB_BITBANDING_TnPR    ((BITBANDING_TB_GPWTMPR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnPR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 17 TBPMR *********************************************
******************************************************************************************/
#define GPWTM5_TB_BITBANDING_TnPMR    ((BITBANDING_TB_GPWTMPMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnPMR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 19 TBR *********************************************
******************************************************************************************/
#define GPWTM5_TB_BITBANDING_TnR    ((BITBANDING_TB_GPTMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 21 TBV *********************************************
******************************************************************************************/
#define GPWTM5_TB_BITBANDING_TnV    ((BITBANDING_TB_GPTMV_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnV_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 24 TBPS *********************************************
******************************************************************************************/
#define GPWTM5_TB_BITBANDING_TnPS    ((BITBANDING_TB_GPWTMPS_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnPS_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 26 TBPV *********************************************
******************************************************************************************/
#define GPWTM5_TB_BITBANDING_TnPV    ((BITBANDING_TB_GPWTMPV_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM5_OFFSET + GPWTM_TB_TnPV_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEB_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEB_32_MODULE5_H_ */
