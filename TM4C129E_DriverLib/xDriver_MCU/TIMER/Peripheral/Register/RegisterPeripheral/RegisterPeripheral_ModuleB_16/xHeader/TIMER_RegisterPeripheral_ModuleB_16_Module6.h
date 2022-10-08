/**
 *
 * @file TIMER_RegisterPeripheral_ModuleB_16_Module6.h
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
 * @verbatim 10 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_REGISTERPERIPHERAL_MODULEB_16_XHEADER_TIMER_REGISTERPERIPHERAL_MODULEB_16_MODULE6_H_
#define XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_REGISTERPERIPHERAL_MODULEB_16_XHEADER_TIMER_REGISTERPERIPHERAL_MODULEB_16_MODULE6_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleB_16.h>

#define GPTM6_TB    (((GPTM_TB_t*) (GPTM6_BASE)))

/******************************************************************************************
************************************ 3 TBMR *********************************************
******************************************************************************************/
#define GPTM6_TB_TnMR    ((TB_GPTMMR_t*) (GPTM6_BASE + GPTM_TB_TnMR_OFFSET))
#define GPTM6_TB_TnMR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TB_TnMR_OFFSET)))

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define GPTM6_TB_TnCTL    ((TB_GPTMCTL_t*) (GPTM6_BASE + GPTM_TB_TnCTL_OFFSET))
#define GPTM6_TB_TnCTL_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TB_TnCTL_OFFSET)))

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/
#define GPTM6_TB_TnIMR    ((TB_GPTMIMR_t*) (GPTM6_BASE + GPTM_TB_TnIMR_OFFSET))
#define GPTM6_TB_TnIMR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TB_TnIMR_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define GPTM6_TB_TnRIS    ((TB_GPTMRIS_t*) (GPTM6_BASE + GPTM_TB_TnRIS_OFFSET))
#define GPTM6_TB_TnRIS_R    (*((volatile const UBase_t*) (GPTM6_BASE + GPTM_TB_TnRIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define GPTM6_TB_TnMIS    ((TB_GPTMMIS_t*) (GPTM6_BASE + GPTM_TB_TnMIS_OFFSET))
#define GPTM6_TB_TnMIS_R    (*((volatile const UBase_t*) (GPTM6_BASE + GPTM_TB_TnMIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define GPTM6_TB_TnICR    ((TB_GPTMICR_t*) (GPTM6_BASE + GPTM_TB_TnICR_OFFSET))
#define GPTM6_TB_TnICR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TB_TnICR_OFFSET)))

/******************************************************************************************
************************************ 11 TBILR *********************************************
******************************************************************************************/
#define GPTM6_TB_TnILR    ((TB_GPTMILR_t*) (GPTM6_BASE + GPTM_TB_TnILR_OFFSET))
#define GPTM6_TB_TnILR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TB_TnILR_OFFSET)))

/******************************************************************************************
************************************ 13 TBMATCHR *********************************************
******************************************************************************************/
#define GPTM6_TB_TnMATCHR    ((TB_GPTMMATCHR_t*) (GPTM6_BASE + GPTM_TB_TnMATCHR_OFFSET))
#define GPTM6_TB_TnMATCHR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TB_TnMATCHR_OFFSET)))

/******************************************************************************************
************************************ 15 TBPR *********************************************
******************************************************************************************/
#define GPTM6_TB_TnPR    ((TB_GPTMPR_t*) (GPTM6_BASE + GPTM_TB_TnPR_OFFSET))
#define GPTM6_TB_TnPR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TB_TnPR_OFFSET)))

/******************************************************************************************
************************************ 17 TBPMR *********************************************
******************************************************************************************/
#define GPTM6_TB_TnPMR    ((TB_GPTMPMR_t*) (GPTM6_BASE + GPTM_TB_TnPMR_OFFSET))
#define GPTM6_TB_TnPMR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TB_TnPMR_OFFSET)))

/******************************************************************************************
************************************ 19 TBR *********************************************
******************************************************************************************/
#define GPTM6_TB_TnR    ((TB_GPTMR_t*) (GPTM6_BASE + GPTM_TB_TnR_OFFSET))
#define GPTM6_TB_TnR_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TB_TnR_OFFSET)))

/******************************************************************************************
************************************ 21 TBV *********************************************
******************************************************************************************/
#define GPTM6_TB_TnV    ((TB_GPTMV_t*) (GPTM6_BASE + GPTM_TB_TnV_OFFSET))
#define GPTM6_TB_TnV_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TB_TnV_OFFSET)))

/******************************************************************************************
************************************ 24 TBPS *********************************************
******************************************************************************************/
#define GPTM6_TB_TnPS    ((TB_GPTMPS_t*) (GPTM6_BASE + GPTM_TB_TnPS_OFFSET))
#define GPTM6_TB_TnPS_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TB_TnPS_OFFSET)))

/******************************************************************************************
************************************ 25 DMAEV *********************************************
******************************************************************************************/
#define GPTM6_TB_TnDMAEV    ((TB_GPTMDMAEV_t*) (GPTM6_BASE + GPTM_TB_TnDMAEV_OFFSET))
#define GPTM6_TB_TnDMAEV_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TB_TnDMAEV_OFFSET)))

/******************************************************************************************
************************************ 26 ADCEV *********************************************
******************************************************************************************/
#define GPTM6_TB_TnADCEV    ((TB_GPTMADCEV_t*) (GPTM6_BASE + GPTM_TB_TnADCEV_OFFSET))
#define GPTM6_TB_TnADCEV_R    (*((volatile UBase_t*) (GPTM6_BASE + GPTM_TB_TnADCEV_OFFSET)))

#endif /* XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_REGISTERPERIPHERAL_MODULEB_16_XHEADER_TIMER_REGISTERPERIPHERAL_MODULEB_16_MODULE6_H_ */
