/**
 *
 * @file PWM_RegisterPeripheral_Module0.h
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
 * @verbatim 23 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_PWM_REGISTERPERIPHERAL_MODULE0_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_PWM_REGISTERPERIPHERAL_MODULE0_H_

#include <xDriver_MCU/PWM/Peripheral/Register/xHeader/PWM_RegisterAddress.h>
#include <xDriver_MCU/PWM/Peripheral/Struct/xHeader/PWM_StructPeripheral.h>

/******************************************************************************************
************************************ PWM0 *********************************************
******************************************************************************************/

#define PWM0    ((PWM_t*) (PWM0_BASE))

/******************************************************************************************
************************************ 1 CTL *********************************************
******************************************************************************************/
#define PWM0_CTL    ((PWMCTL_t*) (PWM0_BASE + PWM_CTL_OFFSET))
#define PWM0_CTL_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_CTL_OFFSET)))

/******************************************************************************************
************************************ 2 SYNC *********************************************
******************************************************************************************/
#define PWM0_SYNC    ((PWMSYNC_t*) (PWM0_BASE + PWM_SYNC_OFFSET))
#define PWM0_SYNC_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_SYNC_OFFSET)))

/******************************************************************************************
************************************ 3 ENABLE *********************************************
******************************************************************************************/
#define PWM0_ENABLE    ((PWMENABLE_t*) (PWM0_BASE + PWM_ENABLE_OFFSET))
#define PWM0_ENABLE_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_ENABLE_OFFSET)))

/******************************************************************************************
************************************ 4 INVERT *********************************************
******************************************************************************************/
#define PWM0_INVERT    ((PWMINVERT_t*) (PWM0_BASE + PWM_INVERT_OFFSET))
#define PWM0_INVERT_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_INVERT_OFFSET)))

/******************************************************************************************
************************************ 5 FAULT *********************************************
******************************************************************************************/
#define PWM0_FAULT    ((PWMFAULT_t*) (PWM0_BASE + PWM_FAULT_OFFSET))
#define PWM0_FAULT_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_FAULT_OFFSET)))

/******************************************************************************************
************************************ 6 INTEN *********************************************
******************************************************************************************/
#define PWM0_INTEN    ((PWMINTEN_t*) (PWM0_BASE + PWM_INTEN_OFFSET))
#define PWM0_INTEN_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_INTEN_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define PWM0_RIS    ((PWMRIS_t*) (PWM0_BASE + PWM_RIS_OFFSET))
#define PWM0_RIS_R    (*((volatile const uint32_t*) (PWM0_BASE + PWM_RIS_OFFSET)))

/******************************************************************************************
************************************ 8 ISC *********************************************
******************************************************************************************/
#define PWM0_ISC    ((PWMISC_t*) (PWM0_BASE + PWM_ISC_OFFSET))
#define PWM0_ISC_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_ISC_OFFSET)))

/******************************************************************************************
************************************ 9 STATUS *********************************************
******************************************************************************************/
#define PWM0_STATUS    ((PWMSTATUS_t*) (PWM0_BASE + PWM_STATUS_OFFSET))
#define PWM0_STATUS_R    (*((volatile const uint32_t*) (PWM0_BASE + PWM_STATUS_OFFSET)))

/******************************************************************************************
************************************ 10 FAULTVAL *********************************************
******************************************************************************************/
#define PWM0_FAULTVAL    ((PWMFAULTVAL_t*) (PWM0_BASE + PWM_FAULTVAL_OFFSET))
#define PWM0_FAULTVAL_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_FAULTVAL_OFFSET)))

/******************************************************************************************
************************************ 11 ENUPD *********************************************
******************************************************************************************/
#define PWM0_ENUPD    ((PWMENUPD_t*) (PWM0_BASE + PWM_ENUPD_OFFSET))
#define PWM0_ENUPD_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_ENUPD_OFFSET)))

/******************************************************************************************
************************************ 12 GEN_CTL *********************************************
******************************************************************************************/
#define PWM0_GEN0_CTL    ((PWMnCTL_t*) (PWM0_BASE + PWM_GEN0_CTL_OFFSET))
#define PWM0_GEN0_CTL_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_CTL_OFFSET)))

#define PWM0_GEN1_CTL    ((PWMnCTL_t*) (PWM0_BASE + PWM_GEN1_CTL_OFFSET))
#define PWM0_GEN1_CTL_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_CTL_OFFSET)))

#define PWM0_GEN2_CTL    ((PWMnCTL_t*) (PWM0_BASE + PWM_GEN2_CTL_OFFSET))
#define PWM0_GEN2_CTL_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_CTL_OFFSET)))

#define PWM0_GEN3_CTL    ((PWMnCTL_t*) (PWM0_BASE + PWM_GEN3_CTL_OFFSET))
#define PWM0_GEN3_CTL_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_CTL_OFFSET)))

/******************************************************************************************
************************************ 13 GEN_INTEN *********************************************
******************************************************************************************/
#define PWM0_GEN0_INTEN    ((PWMnINTEN_t*) (PWM0_BASE + PWM_GEN0_INTEN_OFFSET))
#define PWM0_GEN0_INTEN_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_INTEN_OFFSET)))

#define PWM0_GEN1_INTEN    ((PWMnINTEN_t*) (PWM0_BASE + PWM_GEN1_INTEN_OFFSET))
#define PWM0_GEN1_INTEN_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_INTEN_OFFSET)))

#define PWM0_GEN2_INTEN    ((PWMnINTEN_t*) (PWM0_BASE + PWM_GEN2_INTEN_OFFSET))
#define PWM0_GEN2_INTEN_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_INTEN_OFFSET)))

#define PWM0_GEN3_INTEN    ((PWMnINTEN_t*) (PWM0_BASE + PWM_GEN3_INTEN_OFFSET))
#define PWM0_GEN3_INTEN_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_INTEN_OFFSET)))

/******************************************************************************************
************************************ 14 GEN_RIS *********************************************
******************************************************************************************/
#define PWM0_GEN0_RIS    ((PWMnRIS_t*) (PWM0_BASE + PWM_GEN0_RIS_OFFSET))
#define PWM0_GEN0_RIS_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_RIS_OFFSET)))

#define PWM0_GEN1_RIS    ((PWMnRIS_t*) (PWM0_BASE + PWM_GEN1_RIS_OFFSET))
#define PWM0_GEN1_RIS_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_RIS_OFFSET)))

#define PWM0_GEN2_RIS    ((PWMnRIS_t*) (PWM0_BASE + PWM_GEN2_RIS_OFFSET))
#define PWM0_GEN2_RIS_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_RIS_OFFSET)))

#define PWM0_GEN3_RIS    ((PWMnRIS_t*) (PWM0_BASE + PWM_GEN3_RIS_OFFSET))
#define PWM0_GEN3_RIS_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_RIS_OFFSET)))

/******************************************************************************************
************************************ 15 GEN_ISC *********************************************
******************************************************************************************/
#define PWM0_GEN0_ISC    ((PWMnISC_t*) (PWM0_BASE + PWM_GEN0_ISC_OFFSET))
#define PWM0_GEN0_ISC_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_ISC_OFFSET)))

#define PWM0_GEN1_ISC    ((PWMnISC_t*) (PWM0_BASE + PWM_GEN1_ISC_OFFSET))
#define PWM0_GEN1_ISC_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_ISC_OFFSET)))

#define PWM0_GEN2_ISC    ((PWMnISC_t*) (PWM0_BASE + PWM_GEN2_ISC_OFFSET))
#define PWM0_GEN2_ISC_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_ISC_OFFSET)))

#define PWM0_GEN3_ISC    ((PWMnISC_t*) (PWM0_BASE + PWM_GEN3_ISC_OFFSET))
#define PWM0_GEN3_ISC_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_ISC_OFFSET)))

/******************************************************************************************
************************************ 16 GEN_LOAD *********************************************
******************************************************************************************/
#define PWM0_GEN0_LOAD    ((PWMnLOAD_t*) (PWM0_BASE + PWM_GEN0_LOAD_OFFSET))
#define PWM0_GEN0_LOAD_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_LOAD_OFFSET)))

#define PWM0_GEN1_LOAD    ((PWMnLOAD_t*) (PWM0_BASE + PWM_GEN1_LOAD_OFFSET))
#define PWM0_GEN1_LOAD_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_LOAD_OFFSET)))

#define PWM0_GEN2_LOAD    ((PWMnLOAD_t*) (PWM0_BASE + PWM_GEN2_LOAD_OFFSET))
#define PWM0_GEN2_LOAD_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_LOAD_OFFSET)))

#define PWM0_GEN3_LOAD    ((PWMnLOAD_t*) (PWM0_BASE + PWM_GEN3_LOAD_OFFSET))
#define PWM0_GEN3_LOAD_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_LOAD_OFFSET)))

/******************************************************************************************
************************************ 17 GEN_COUNT *********************************************
******************************************************************************************/
#define PWM0_GEN0_COUNT    ((PWMnCOUNT_t*) (PWM0_BASE + PWM_GEN0_COUNT_OFFSET))
#define PWM0_GEN0_COUNT_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_COUNT_OFFSET)))

#define PWM0_GEN1_COUNT    ((PWMnCOUNT_t*) (PWM0_BASE + PWM_GEN1_COUNT_OFFSET))
#define PWM0_GEN1_COUNT_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_COUNT_OFFSET)))

#define PWM0_GEN2_COUNT    ((PWMnCOUNT_t*) (PWM0_BASE + PWM_GEN2_COUNT_OFFSET))
#define PWM0_GEN2_COUNT_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_COUNT_OFFSET)))

#define PWM0_GEN3_COUNT    ((PWMnCOUNT_t*) (PWM0_BASE + PWM_GEN3_COUNT_OFFSET))
#define PWM0_GEN3_COUNT_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_COUNT_OFFSET)))

/******************************************************************************************
************************************ 18 GEN_CMPA *********************************************
******************************************************************************************/
#define PWM0_GEN0_CMPA    ((PWMnCMPA_t*) (PWM0_BASE + PWM_GEN0_CMPA_OFFSET))
#define PWM0_GEN0_CMPA_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_CMPA_OFFSET)))

#define PWM0_GEN1_CMPA    ((PWMnCMPA_t*) (PWM0_BASE + PWM_GEN1_CMPA_OFFSET))
#define PWM0_GEN1_CMPA_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_CMPA_OFFSET)))

#define PWM0_GEN2_CMPA    ((PWMnCMPA_t*) (PWM0_BASE + PWM_GEN2_CMPA_OFFSET))
#define PWM0_GEN2_CMPA_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_CMPA_OFFSET)))

#define PWM0_GEN3_CMPA    ((PWMnCMPA_t*) (PWM0_BASE + PWM_GEN3_CMPA_OFFSET))
#define PWM0_GEN3_CMPA_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_CMPA_OFFSET)))

/******************************************************************************************
************************************ 19 GEN_CMPB *********************************************
******************************************************************************************/
#define PWM0_GEN0_CMPB    ((PWMnCMPB_t*) (PWM0_BASE + PWM_GEN0_CMPB_OFFSET))
#define PWM0_GEN0_CMPB_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_CMPB_OFFSET)))

#define PWM0_GEN1_CMPB    ((PWMnCMPB_t*) (PWM0_BASE + PWM_GEN1_CMPB_OFFSET))
#define PWM0_GEN1_CMPB_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_CMPB_OFFSET)))

#define PWM0_GEN2_CMPB    ((PWMnCMPB_t*) (PWM0_BASE + PWM_GEN2_CMPB_OFFSET))
#define PWM0_GEN2_CMPB_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_CMPB_OFFSET)))

#define PWM0_GEN3_CMPB    ((PWMnCMPB_t*) (PWM0_BASE + PWM_GEN3_CMPB_OFFSET))
#define PWM0_GEN3_CMPB_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_CMPB_OFFSET)))

/******************************************************************************************
************************************ 20 GEN_GENA *********************************************
******************************************************************************************/
#define PWM0_GEN0_GENA    ((PWMnGENA_t*) (PWM0_BASE + PWM_GEN0_GENA_OFFSET))
#define PWM0_GEN0_GENA_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_GENA_OFFSET)))

#define PWM0_GEN1_GENA    ((PWMnGENA_t*) (PWM0_BASE + PWM_GEN1_GENA_OFFSET))
#define PWM0_GEN1_GENA_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_GENA_OFFSET)))

#define PWM0_GEN2_GENA    ((PWMnGENA_t*) (PWM0_BASE + PWM_GEN2_GENA_OFFSET))
#define PWM0_GEN2_GENA_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_GENA_OFFSET)))

#define PWM0_GEN3_GENA    ((PWMnGENA_t*) (PWM0_BASE + PWM_GEN3_GENA_OFFSET))
#define PWM0_GEN3_GENA_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_GENA_OFFSET)))

/******************************************************************************************
************************************ 21 GEN_GENB *********************************************
******************************************************************************************/
#define PWM0_GEN0_GENB    ((PWMnGENB_t*) (PWM0_BASE + PWM_GEN0_GENB_OFFSET))
#define PWM0_GEN0_GENB_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_GENB_OFFSET)))

#define PWM0_GEN1_GENB    ((PWMnGENB_t*) (PWM0_BASE + PWM_GEN1_GENB_OFFSET))
#define PWM0_GEN1_GENB_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_GENB_OFFSET)))

#define PWM0_GEN2_GENB    ((PWMnGENB_t*) (PWM0_BASE + PWM_GEN2_GENB_OFFSET))
#define PWM0_GEN2_GENB_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_GENB_OFFSET)))

#define PWM0_GEN3_GENB    ((PWMnGENB_t*) (PWM0_BASE + PWM_GEN3_GENB_OFFSET))
#define PWM0_GEN3_GENB_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_GENB_OFFSET)))

/******************************************************************************************
************************************ 22 GEN_DBCTL *********************************************
******************************************************************************************/
#define PWM0_GEN0_DBCTL    ((PWMnDBCTL_t*) (PWM0_BASE + PWM_GEN0_DBCTL_OFFSET))
#define PWM0_GEN0_DBCTL_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_DBCTL_OFFSET)))

#define PWM0_GEN1_DBCTL    ((PWMnDBCTL_t*) (PWM0_BASE + PWM_GEN1_DBCTL_OFFSET))
#define PWM0_GEN1_DBCTL_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_DBCTL_OFFSET)))

#define PWM0_GEN2_DBCTL    ((PWMnDBCTL_t*) (PWM0_BASE + PWM_GEN2_DBCTL_OFFSET))
#define PWM0_GEN2_DBCTL_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_DBCTL_OFFSET)))

#define PWM0_GEN3_DBCTL    ((PWMnDBCTL_t*) (PWM0_BASE + PWM_GEN3_DBCTL_OFFSET))
#define PWM0_GEN3_DBCTL_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_DBCTL_OFFSET)))

/******************************************************************************************
************************************ 23 GEN_DBRISE *********************************************
******************************************************************************************/
#define PWM0_GEN0_DBRISE    ((PWMnDBRISE_t*) (PWM0_BASE + PWM_GEN0_DBRISE_OFFSET))
#define PWM0_GEN0_DBRISE_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_DBRISE_OFFSET)))

#define PWM0_GEN1_DBRISE    ((PWMnDBRISE_t*) (PWM0_BASE + PWM_GEN1_DBRISE_OFFSET))
#define PWM0_GEN1_DBRISE_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_DBRISE_OFFSET)))

#define PWM0_GEN2_DBRISE    ((PWMnDBRISE_t*) (PWM0_BASE + PWM_GEN2_DBRISE_OFFSET))
#define PWM0_GEN2_DBRISE_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_DBRISE_OFFSET)))

#define PWM0_GEN3_DBRISE    ((PWMnDBRISE_t*) (PWM0_BASE + PWM_GEN3_DBRISE_OFFSET))
#define PWM0_GEN3_DBRISE_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_DBRISE_OFFSET)))

/******************************************************************************************
************************************ 24 GEN_DBFALL *********************************************
******************************************************************************************/
#define PWM0_GEN0_DBFALL    ((PWMnDBFALL_t*) (PWM0_BASE + PWM_GEN0_DBFALL_OFFSET))
#define PWM0_GEN0_DBFALL_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_DBFALL_OFFSET)))

#define PWM0_GEN1_DBFALL    ((PWMnDBFALL_t*) (PWM0_BASE + PWM_GEN1_DBFALL_OFFSET))
#define PWM0_GEN1_DBFALL_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_DBFALL_OFFSET)))

#define PWM0_GEN2_DBFALL    ((PWMnDBFALL_t*) (PWM0_BASE + PWM_GEN2_DBFALL_OFFSET))
#define PWM0_GEN2_DBFALL_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_DBFALL_OFFSET)))

#define PWM0_GEN3_DBFALL    ((PWMnDBFALL_t*) (PWM0_BASE + PWM_GEN3_DBFALL_OFFSET))
#define PWM0_GEN3_DBFALL_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_DBFALL_OFFSET)))

/******************************************************************************************
************************************ 25 GEN_FLTSRC0 *********************************************
******************************************************************************************/
#define PWM0_GEN0_FLTSRC0    ((PWMnFLTSRC0_t*) (PWM0_BASE + PWM_GEN0_FLTSRC0_OFFSET))
#define PWM0_GEN0_FLTSRC0_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_FLTSRC0_OFFSET)))

#define PWM0_GEN1_FLTSRC0    ((PWMnFLTSRC0_t*) (PWM0_BASE + PWM_GEN1_FLTSRC0_OFFSET))
#define PWM0_GEN1_FLTSRC0_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_FLTSRC0_OFFSET)))

#define PWM0_GEN2_FLTSRC0    ((PWMnFLTSRC0_t*) (PWM0_BASE + PWM_GEN2_FLTSRC0_OFFSET))
#define PWM0_GEN2_FLTSRC0_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_FLTSRC0_OFFSET)))

#define PWM0_GEN3_FLTSRC0    ((PWMnFLTSRC0_t*) (PWM0_BASE + PWM_GEN3_FLTSRC0_OFFSET))
#define PWM0_GEN3_FLTSRC0_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_FLTSRC0_OFFSET)))

/******************************************************************************************
************************************ 26 GEN_FLTSRC1 *********************************************
******************************************************************************************/
#define PWM0_GEN0_FLTSRC1    ((PWMnFLTSRC1_t*) (PWM0_BASE + PWM_GEN0_FLTSRC1_OFFSET))
#define PWM0_GEN0_FLTSRC1_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_FLTSRC1_OFFSET)))

#define PWM0_GEN1_FLTSRC1    ((PWMnFLTSRC1_t*) (PWM0_BASE + PWM_GEN1_FLTSRC1_OFFSET))
#define PWM0_GEN1_FLTSRC1_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_FLTSRC1_OFFSET)))

#define PWM0_GEN2_FLTSRC1    ((PWMnFLTSRC1_t*) (PWM0_BASE + PWM_GEN2_FLTSRC1_OFFSET))
#define PWM0_GEN2_FLTSRC1_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_FLTSRC1_OFFSET)))

#define PWM0_GEN3_FLTSRC1    ((PWMnFLTSRC1_t*) (PWM0_BASE + PWM_GEN3_FLTSRC1_OFFSET))
#define PWM0_GEN3_FLTSRC1_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_FLTSRC1_OFFSET)))

/******************************************************************************************
************************************ 27 GEN_MINFLTPER *********************************************
******************************************************************************************/
#define PWM0_GEN0_MINFLTPER    ((PWMnMINFLTPER_t*) (PWM0_BASE + PWM_GEN0_MINFLTPER_OFFSET))
#define PWM0_GEN0_MINFLTPER_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_MINFLTPER_OFFSET)))

#define PWM0_GEN1_MINFLTPER    ((PWMnMINFLTPER_t*) (PWM0_BASE + PWM_GEN1_MINFLTPER_OFFSET))
#define PWM0_GEN1_MINFLTPER_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_MINFLTPER_OFFSET)))

#define PWM0_GEN2_MINFLTPER    ((PWMnMINFLTPER_t*) (PWM0_BASE + PWM_GEN2_MINFLTPER_OFFSET))
#define PWM0_GEN2_MINFLTPER_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_MINFLTPER_OFFSET)))

#define PWM0_GEN3_MINFLTPER    ((PWMnMINFLTPER_t*) (PWM0_BASE + PWM_GEN3_MINFLTPER_OFFSET))
#define PWM0_GEN3_MINFLTPER_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_MINFLTPER_OFFSET)))

/******************************************************************************************
************************************ 28 GEN_EXT_FLTSEN *********************************************
******************************************************************************************/
#define PWM0_GEN0_EXT_FLTSEN    ((PWMnFLTSEN_t*) (PWM0_BASE + PWM_GEN0_EXT_FLTSEN_OFFSET))
#define PWM0_GEN0_EXT_FLTSEN_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_EXT_FLTSEN_OFFSET)))

#define PWM0_GEN1_EXT_FLTSEN    ((PWMnFLTSEN_t*) (PWM0_BASE + PWM_GEN1_EXT_FLTSEN_OFFSET))
#define PWM0_GEN1_EXT_FLTSEN_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_EXT_FLTSEN_OFFSET)))

#define PWM0_GEN2_EXT_FLTSEN    ((PWMnFLTSEN_t*) (PWM0_BASE + PWM_GEN2_EXT_FLTSEN_OFFSET))
#define PWM0_GEN2_EXT_FLTSEN_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_EXT_FLTSEN_OFFSET)))

#define PWM0_GEN3_EXT_FLTSEN    ((PWMnFLTSEN_t*) (PWM0_BASE + PWM_GEN3_EXT_FLTSEN_OFFSET))
#define PWM0_GEN3_EXT_FLTSEN_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_EXT_FLTSEN_OFFSET)))

/******************************************************************************************
************************************ 29 GEN_EXT_FLTSTAT0 *********************************************
******************************************************************************************/
#define PWM0_GEN0_EXT_FLTSTAT0    ((PWMnFLTSTAT0_t*) (PWM0_BASE + PWM_GEN0_EXT_FLTSTAT0_OFFSET))
#define PWM0_GEN0_EXT_FLTSTAT0_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_EXT_FLTSTAT0_OFFSET)))

#define PWM0_GEN1_EXT_FLTSTAT0    ((PWMnFLTSTAT0_t*) (PWM0_BASE + PWM_GEN1_EXT_FLTSTAT0_OFFSET))
#define PWM0_GEN1_EXT_FLTSTAT0_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_EXT_FLTSTAT0_OFFSET)))

#define PWM0_GEN2_EXT_FLTSTAT0    ((PWMnFLTSTAT0_t*) (PWM0_BASE + PWM_GEN2_EXT_FLTSTAT0_OFFSET))
#define PWM0_GEN2_EXT_FLTSTAT0_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_EXT_FLTSTAT0_OFFSET)))

#define PWM0_GEN3_EXT_FLTSTAT0    ((PWMnFLTSTAT0_t*) (PWM0_BASE + PWM_GEN3_EXT_FLTSTAT0_OFFSET))
#define PWM0_GEN3_EXT_FLTSTAT0_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_EXT_FLTSTAT0_OFFSET)))

/******************************************************************************************
************************************ 30 GEN_EXT_FLTSTAT1 *********************************************
******************************************************************************************/
#define PWM0_GEN0_EXT_FLTSTAT1    ((PWMnFLTSTAT1_t*) (PWM0_BASE + PWM_GEN0_EXT_FLTSTAT1_OFFSET))
#define PWM0_GEN0_EXT_FLTSTAT1_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN0_EXT_FLTSTAT1_OFFSET)))

#define PWM0_GEN1_EXT_FLTSTAT1    ((PWMnFLTSTAT1_t*) (PWM0_BASE + PWM_GEN1_EXT_FLTSTAT1_OFFSET))
#define PWM0_GEN1_EXT_FLTSTAT1_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN1_EXT_FLTSTAT1_OFFSET)))

#define PWM0_GEN2_EXT_FLTSTAT1    ((PWMnFLTSTAT1_t*) (PWM0_BASE + PWM_GEN2_EXT_FLTSTAT1_OFFSET))
#define PWM0_GEN2_EXT_FLTSTAT1_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN2_EXT_FLTSTAT1_OFFSET)))

#define PWM0_GEN3_EXT_FLTSTAT1    ((PWMnFLTSTAT1_t*) (PWM0_BASE + PWM_GEN3_EXT_FLTSTAT1_OFFSET))
#define PWM0_GEN3_EXT_FLTSTAT1_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_GEN3_EXT_FLTSTAT1_OFFSET)))

/******************************************************************************************
************************************ 31 PP *********************************************
******************************************************************************************/
#define PWM0_PP    ((PWMPP_t*) (PWM0_BASE + PWM_PP_OFFSET))
#define PWM0_PP_R    (*((volatile const uint32_t*) (PWM0_BASE + PWM_PP_OFFSET)))

/******************************************************************************************
************************************ 32 CC *********************************************
******************************************************************************************/
#define PWM0_CC    ((PWMCC_t*) (PWM0_BASE + PWM_CC_OFFSET))
#define PWM0_CC_R    (*((volatile uint32_t*) (PWM0_BASE + PWM_CC_OFFSET)))

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_PWM_REGISTERPERIPHERAL_MODULE0_H_ */
