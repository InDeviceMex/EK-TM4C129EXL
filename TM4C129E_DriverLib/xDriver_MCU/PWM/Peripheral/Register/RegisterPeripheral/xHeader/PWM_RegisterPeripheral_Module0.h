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
#define PWM0_CTL    ((PWM_CTL_t*) (PWM0_BASE + PWM_CTL_OFFSET))
#define PWM0_CTL_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_CTL_OFFSET)))

/******************************************************************************************
************************************ 2 SYNC *********************************************
******************************************************************************************/
#define PWM0_SYNC    ((PWM_SYNC_t*) (PWM0_BASE + PWM_SYNC_OFFSET))
#define PWM0_SYNC_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_SYNC_OFFSET)))

/******************************************************************************************
************************************ 9 STATUS *********************************************
******************************************************************************************/
#define PWM0_STATUS    ((PWM_STATUS_t*) (PWM0_BASE + PWM_STATUS_OFFSET))
#define PWM0_STATUS_R    (*((volatile const UBase_t*) (PWM0_BASE + PWM_STATUS_OFFSET)))

/******************************************************************************************
************************************ 3 ENABLE *********************************************
******************************************************************************************/
#define PWM0_OUTPUT_ENABLE    ((PWM_OUTPUT_ENABLE_t*) (PWM0_BASE + PWM_OUTPUT_ENABLE_OFFSET))
#define PWM0_OUTPUT_ENABLE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_OUTPUT_ENABLE_OFFSET)))

/******************************************************************************************
************************************ 4 INVERT *********************************************
******************************************************************************************/
#define PWM0_OUTPUT_INVERT    ((PWM_OUTPUT_INVERT_t*) (PWM0_BASE + PWM_OUTPUT_INVERT_OFFSET))
#define PWM0_OUTPUT_INVERT_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_OUTPUT_INVERT_OFFSET)))

/******************************************************************************************
************************************ 5 FAULT *********************************************
******************************************************************************************/
#define PWM0_OUTPUT_FAULT    ((PWM_OUTPUT_FAULT_t*) (PWM0_BASE + PWM_OUTPUT_FAULT_OFFSET))
#define PWM0_OUTPUT_FAULT_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_OUTPUT_FAULT_OFFSET)))

/******************************************************************************************
************************************ 10 FAULTVAL *********************************************
******************************************************************************************/
#define PWM0_OUTPUT_FAULTVAL    ((PWM_OUTPUT_FAULTVAL_t*) (PWM0_BASE + PWM_OUTPUT_FAULTVAL_OFFSET))
#define PWM0_OUTPUT_FAULTVAL_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_OUTPUT_FAULTVAL_OFFSET)))

/******************************************************************************************
************************************ 11 ENUPD *********************************************
******************************************************************************************/
#define PWM0_OUTPUT_ENUPD    ((PWM_OUTPUT_ENUPD_t*) (PWM0_BASE + PWM_OUTPUT_ENUPD_OFFSET))
#define PWM0_OUTPUT_ENUPD_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_OUTPUT_ENUPD_OFFSET)))

/******************************************************************************************
************************************ 6 INTEN *********************************************
******************************************************************************************/
#define PWM0_INTEN    ((PWM_INTEN_t*) (PWM0_BASE + PWM_INTEN_OFFSET))
#define PWM0_INTEN_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_INTEN_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define PWM0_RIS    ((PWM_RIS_t*) (PWM0_BASE + PWM_RIS_OFFSET))
#define PWM0_RIS_R    (*((volatile const UBase_t*) (PWM0_BASE + PWM_RIS_OFFSET)))

/******************************************************************************************
************************************ 8 ISC *********************************************
******************************************************************************************/
#define PWM0_ISC    ((PWM_ISC_t*) (PWM0_BASE + PWM_ISC_OFFSET))
#define PWM0_ISC_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_ISC_OFFSET)))

/******************************************************************************************
************************************ 12 GEN_CTL *********************************************
******************************************************************************************/
#define PWM0_GEN    ((PWM_GEN_t*) (PWM0_BASE + PWM_GEN0_CTL_OFFSET))

#define PWM0_GEN0_CTL    ((PWM_GEN_CTL_t*) (PWM0_BASE + PWM_GEN0_CTL_OFFSET))
#define PWM0_GEN0_CTL_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_CTL_OFFSET)))

#define PWM0_GEN1_CTL    ((PWM_GEN_CTL_t*) (PWM0_BASE + PWM_GEN1_CTL_OFFSET))
#define PWM0_GEN1_CTL_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_CTL_OFFSET)))

#define PWM0_GEN2_CTL    ((PWM_GEN_CTL_t*) (PWM0_BASE + PWM_GEN2_CTL_OFFSET))
#define PWM0_GEN2_CTL_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_CTL_OFFSET)))

#define PWM0_GEN3_CTL    ((PWM_GEN_CTL_t*) (PWM0_BASE + PWM_GEN3_CTL_OFFSET))
#define PWM0_GEN3_CTL_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_CTL_OFFSET)))

/******************************************************************************************
************************************ 13 GEN_INTEN *********************************************
******************************************************************************************/
#define PWM0_GEN0_INTEN    ((PWM_GEN_INTEN_t*) (PWM0_BASE + PWM_GEN0_INTEN_OFFSET))
#define PWM0_GEN0_INTEN_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_INTEN_OFFSET)))

#define PWM0_GEN1_INTEN    ((PWM_GEN_INTEN_t*) (PWM0_BASE + PWM_GEN1_INTEN_OFFSET))
#define PWM0_GEN1_INTEN_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_INTEN_OFFSET)))

#define PWM0_GEN2_INTEN    ((PWM_GEN_INTEN_t*) (PWM0_BASE + PWM_GEN2_INTEN_OFFSET))
#define PWM0_GEN2_INTEN_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_INTEN_OFFSET)))

#define PWM0_GEN3_INTEN    ((PWM_GEN_INTEN_t*) (PWM0_BASE + PWM_GEN3_INTEN_OFFSET))
#define PWM0_GEN3_INTEN_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_INTEN_OFFSET)))

/******************************************************************************************
************************************ 14 GEN_RIS *********************************************
******************************************************************************************/
#define PWM0_GEN0_RIS    ((PWM_GEN_RIS_t*) (PWM0_BASE + PWM_GEN0_RIS_OFFSET))
#define PWM0_GEN0_RIS_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_RIS_OFFSET)))

#define PWM0_GEN1_RIS    ((PWM_GEN_RIS_t*) (PWM0_BASE + PWM_GEN1_RIS_OFFSET))
#define PWM0_GEN1_RIS_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_RIS_OFFSET)))

#define PWM0_GEN2_RIS    ((PWM_GEN_RIS_t*) (PWM0_BASE + PWM_GEN2_RIS_OFFSET))
#define PWM0_GEN2_RIS_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_RIS_OFFSET)))

#define PWM0_GEN3_RIS    ((PWM_GEN_RIS_t*) (PWM0_BASE + PWM_GEN3_RIS_OFFSET))
#define PWM0_GEN3_RIS_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_RIS_OFFSET)))

/******************************************************************************************
************************************ 15 GEN_ISC *********************************************
******************************************************************************************/
#define PWM0_GEN0_ISC    ((PWM_GEN_ISC_t*) (PWM0_BASE + PWM_GEN0_ISC_OFFSET))
#define PWM0_GEN0_ISC_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_ISC_OFFSET)))

#define PWM0_GEN1_ISC    ((PWM_GEN_ISC_t*) (PWM0_BASE + PWM_GEN1_ISC_OFFSET))
#define PWM0_GEN1_ISC_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_ISC_OFFSET)))

#define PWM0_GEN2_ISC    ((PWM_GEN_ISC_t*) (PWM0_BASE + PWM_GEN2_ISC_OFFSET))
#define PWM0_GEN2_ISC_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_ISC_OFFSET)))

#define PWM0_GEN3_ISC    ((PWM_GEN_ISC_t*) (PWM0_BASE + PWM_GEN3_ISC_OFFSET))
#define PWM0_GEN3_ISC_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_ISC_OFFSET)))

/******************************************************************************************
************************************ 16 GEN_LOAD *********************************************
******************************************************************************************/
#define PWM0_GEN0_LOAD    ((PWM_GEN_LOAD_t*) (PWM0_BASE + PWM_GEN0_LOAD_OFFSET))
#define PWM0_GEN0_LOAD_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_LOAD_OFFSET)))

#define PWM0_GEN1_LOAD    ((PWM_GEN_LOAD_t*) (PWM0_BASE + PWM_GEN1_LOAD_OFFSET))
#define PWM0_GEN1_LOAD_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_LOAD_OFFSET)))

#define PWM0_GEN2_LOAD    ((PWM_GEN_LOAD_t*) (PWM0_BASE + PWM_GEN2_LOAD_OFFSET))
#define PWM0_GEN2_LOAD_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_LOAD_OFFSET)))

#define PWM0_GEN3_LOAD    ((PWM_GEN_LOAD_t*) (PWM0_BASE + PWM_GEN3_LOAD_OFFSET))
#define PWM0_GEN3_LOAD_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_LOAD_OFFSET)))

/******************************************************************************************
************************************ 17 GEN_COUNT *********************************************
******************************************************************************************/
#define PWM0_GEN0_COUNT    ((PWM_GEN_COUNT_t*) (PWM0_BASE + PWM_GEN0_COUNT_OFFSET))
#define PWM0_GEN0_COUNT_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_COUNT_OFFSET)))

#define PWM0_GEN1_COUNT    ((PWM_GEN_COUNT_t*) (PWM0_BASE + PWM_GEN1_COUNT_OFFSET))
#define PWM0_GEN1_COUNT_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_COUNT_OFFSET)))

#define PWM0_GEN2_COUNT    ((PWM_GEN_COUNT_t*) (PWM0_BASE + PWM_GEN2_COUNT_OFFSET))
#define PWM0_GEN2_COUNT_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_COUNT_OFFSET)))

#define PWM0_GEN3_COUNT    ((PWM_GEN_COUNT_t*) (PWM0_BASE + PWM_GEN3_COUNT_OFFSET))
#define PWM0_GEN3_COUNT_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_COUNT_OFFSET)))

/******************************************************************************************
************************************ 18 GEN_CMPA *********************************************
******************************************************************************************/
#define PWM0_GEN0_OUTA_CMP    ((PWM_GEN_OUTA_CMP_t*) (PWM0_BASE + PWM_GEN0_OUTA_CMP_OFFSET))
#define PWM0_GEN0_OUTA_CMP_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_OUTA_CMP_OFFSET)))

#define PWM0_GEN1_OUTA_CMP    ((PWM_GEN_OUTA_CMP_t*) (PWM0_BASE + PWM_GEN1_OUTA_CMP_OFFSET))
#define PWM0_GEN1_OUTA_CMP_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_OUTA_CMP_OFFSET)))

#define PWM0_GEN2_OUTA_CMP    ((PWM_GEN_OUTA_CMP_t*) (PWM0_BASE + PWM_GEN2_OUTA_CMP_OFFSET))
#define PWM0_GEN2_OUTA_CMP_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_OUTA_CMP_OFFSET)))

#define PWM0_GEN3_OUTA_CMP    ((PWM_GEN_OUTA_CMP_t*) (PWM0_BASE + PWM_GEN3_OUTA_CMP_OFFSET))
#define PWM0_GEN3_OUTA_CMP_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_OUTA_CMP_OFFSET)))

/******************************************************************************************
************************************ 19 GEN_CMPB *********************************************
******************************************************************************************/
#define PWM0_GEN0_OUTB_CMP    ((PWM_GEN_OUTB_CMP_t*) (PWM0_BASE + PWM_GEN0_OUTB_CMP_OFFSET))
#define PWM0_GEN0_OUTB_CMP_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_OUTB_CMP_OFFSET)))

#define PWM0_GEN1_OUTB_CMP    ((PWM_GEN_OUTB_CMP_t*) (PWM0_BASE + PWM_GEN1_OUTB_CMP_OFFSET))
#define PWM0_GEN1_OUTB_CMP_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_OUTB_CMP_OFFSET)))

#define PWM0_GEN2_OUTB_CMP    ((PWM_GEN_OUTB_CMP_t*) (PWM0_BASE + PWM_GEN2_OUTB_CMP_OFFSET))
#define PWM0_GEN2_OUTB_CMP_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_OUTB_CMP_OFFSET)))

#define PWM0_GEN3_OUTB_CMP    ((PWM_GEN_OUTB_CMP_t*) (PWM0_BASE + PWM_GEN3_OUTB_CMP_OFFSET))
#define PWM0_GEN3_OUTB_CMP_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_OUTB_CMP_OFFSET)))

/******************************************************************************************
************************************ 20 GEN_GENA *********************************************
******************************************************************************************/
#define PWM0_GEN0_OUTA_ACTION    ((PWM_GEN_OUTA_ACTION_t*) (PWM0_BASE + PWM_GEN0_OUTA_ACTION_OFFSET))
#define PWM0_GEN0_OUTA_ACTION_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_OUTA_ACTION_OFFSET)))

#define PWM0_GEN1_OUTA_ACTION    ((PWM_GEN_OUTA_ACTION_t*) (PWM0_BASE + PWM_GEN1_OUTA_ACTION_OFFSET))
#define PWM0_GEN1_OUTA_ACTION_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_OUTA_ACTION_OFFSET)))

#define PWM0_GEN2_OUTA_ACTION    ((PWM_GEN_OUTA_ACTION_t*) (PWM0_BASE + PWM_GEN2_OUTA_ACTION_OFFSET))
#define PWM0_GEN2_OUTA_ACTION_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_OUTA_ACTION_OFFSET)))

#define PWM0_GEN3_OUTA_ACTION    ((PWM_GEN_OUTA_ACTION_t*) (PWM0_BASE + PWM_GEN3_OUTA_ACTION_OFFSET))
#define PWM0_GEN3_OUTA_ACTION_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_OUTA_ACTION_OFFSET)))

/******************************************************************************************
************************************ 21 GEN_GENB *********************************************
******************************************************************************************/
#define PWM0_GEN0_OUTB_ACTION    ((PWM_GEN_OUTB_ACTION_t*) (PWM0_BASE + PWM_GEN0_OUTB_ACTION_OFFSET))
#define PWM0_GEN0_OUTB_ACTION_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_OUTB_ACTION_OFFSET)))

#define PWM0_GEN1_OUTB_ACTION    ((PWM_GEN_OUTB_ACTION_t*) (PWM0_BASE + PWM_GEN1_OUTB_ACTION_OFFSET))
#define PWM0_GEN1_OUTB_ACTION_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_OUTB_ACTION_OFFSET)))

#define PWM0_GEN2_OUTB_ACTION    ((PWM_GEN_OUTB_ACTION_t*) (PWM0_BASE + PWM_GEN2_OUTB_ACTION_OFFSET))
#define PWM0_GEN2_OUTB_ACTION_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_OUTB_ACTION_OFFSET)))

#define PWM0_GEN3_OUTB_ACTION    ((PWM_GEN_OUTB_ACTION_t*) (PWM0_BASE + PWM_GEN3_OUTB_ACTION_OFFSET))
#define PWM0_GEN3_OUTB_ACTION_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_OUTB_ACTION_OFFSET)))

/******************************************************************************************
************************************ 22 GEN_DBCTL *********************************************
******************************************************************************************/
#define PWM0_GEN0_DB_CTL    ((PWM_GEN_DB_CTL_t*) (PWM0_BASE + PWM_GEN0_DB_CTL_OFFSET))
#define PWM0_GEN0_DB_CTL_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_DB_CTL_OFFSET)))

#define PWM0_GEN1_DB_CTL    ((PWM_GEN_DB_CTL_t*) (PWM0_BASE + PWM_GEN1_DB_CTL_OFFSET))
#define PWM0_GEN1_DB_CTL_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_DB_CTL_OFFSET)))

#define PWM0_GEN2_DB_CTL    ((PWM_GEN_DB_CTL_t*) (PWM0_BASE + PWM_GEN2_DB_CTL_OFFSET))
#define PWM0_GEN2_DB_CTL_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_DB_CTL_OFFSET)))

#define PWM0_GEN3_DB_CTL    ((PWM_GEN_DB_CTL_t*) (PWM0_BASE + PWM_GEN3_DB_CTL_OFFSET))
#define PWM0_GEN3_DB_CTL_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_DB_CTL_OFFSET)))

/******************************************************************************************
************************************ 23 GEN_DBRISE *********************************************
******************************************************************************************/
#define PWM0_GEN0_DB_RISE    ((PWM_GEN_DB_RISE_t*) (PWM0_BASE + PWM_GEN0_DB_RISE_OFFSET))
#define PWM0_GEN0_DB_RISE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_DB_RISE_OFFSET)))

#define PWM0_GEN1_DB_RISE    ((PWM_GEN_DB_RISE_t*) (PWM0_BASE + PWM_GEN1_DB_RISE_OFFSET))
#define PWM0_GEN1_DB_RISE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_DB_RISE_OFFSET)))

#define PWM0_GEN2_DB_RISE    ((PWM_GEN_DB_RISE_t*) (PWM0_BASE + PWM_GEN2_DB_RISE_OFFSET))
#define PWM0_GEN2_DB_RISE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_DB_RISE_OFFSET)))

#define PWM0_GEN3_DB_RISE    ((PWM_GEN_DB_RISE_t*) (PWM0_BASE + PWM_GEN3_DB_RISE_OFFSET))
#define PWM0_GEN3_DB_RISE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_DB_RISE_OFFSET)))

/******************************************************************************************
************************************ 24 GEN_DBFALL *********************************************
******************************************************************************************/
#define PWM0_GEN0_DB_FALL    ((PWM_GEN_DB_FALL_t*) (PWM0_BASE + PWM_GEN0_DB_FALL_OFFSET))
#define PWM0_GEN0_DB_FALL_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_DB_FALL_OFFSET)))

#define PWM0_GEN1_DB_FALL    ((PWM_GEN_DB_FALL_t*) (PWM0_BASE + PWM_GEN1_DB_FALL_OFFSET))
#define PWM0_GEN1_DB_FALL_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_DB_FALL_OFFSET)))

#define PWM0_GEN2_DB_FALL    ((PWM_GEN_DB_FALL_t*) (PWM0_BASE + PWM_GEN2_DB_FALL_OFFSET))
#define PWM0_GEN2_DB_FALL_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_DB_FALL_OFFSET)))

#define PWM0_GEN3_DB_FALL    ((PWM_GEN_DB_FALL_t*) (PWM0_BASE + PWM_GEN3_DB_FALL_OFFSET))
#define PWM0_GEN3_DB_FALL_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_DB_FALL_OFFSET)))

/******************************************************************************************
************************************ 25 GEN_FAULT_SRC0 *********************************************
******************************************************************************************/
#define PWM0_GEN0_FAULT_PIN_ENABLE    ((PWM_GEN_FAULT_PIN_ENABLE_t*) (PWM0_BASE + PWM_GEN0_FAULT_PIN_ENABLE_OFFSET))
#define PWM0_GEN0_FAULT_PIN_ENABLE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_FAULT_PIN_ENABLE_OFFSET)))

#define PWM0_GEN1_FAULT_PIN_ENABLE    ((PWM_GEN_FAULT_PIN_ENABLE_t*) (PWM0_BASE + PWM_GEN1_FAULT_PIN_ENABLE_OFFSET))
#define PWM0_GEN1_FAULT_PIN_ENABLE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_FAULT_PIN_ENABLE_OFFSET)))

#define PWM0_GEN2_FAULT_PIN_ENABLE    ((PWM_GEN_FAULT_PIN_ENABLE_t*) (PWM0_BASE + PWM_GEN2_FAULT_PIN_ENABLE_OFFSET))
#define PWM0_GEN2_FAULT_PIN_ENABLE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_FAULT_PIN_ENABLE_OFFSET)))

#define PWM0_GEN3_FAULT_PIN_ENABLE    ((PWM_GEN_FAULT_PIN_ENABLE_t*) (PWM0_BASE + PWM_GEN3_FAULT_PIN_ENABLE_OFFSET))
#define PWM0_GEN3_FAULT_PIN_ENABLE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_FAULT_PIN_ENABLE_OFFSET)))

/******************************************************************************************
************************************ 26 GEN_FAULT_SRC1 *********************************************
******************************************************************************************/
#define PWM0_GEN0_FAULT_DCMP_ENABLE    ((PWM_GEN_FAULT_DCMP_ENABLE_t*) (PWM0_BASE + PWM_GEN0_FAULT_DCMP_ENABLE_OFFSET))
#define PWM0_GEN0_FAULT_DCMP_ENABLE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_FAULT_DCMP_ENABLE_OFFSET)))

#define PWM0_GEN1_FAULT_DCMP_ENABLE    ((PWM_GEN_FAULT_DCMP_ENABLE_t*) (PWM0_BASE + PWM_GEN1_FAULT_DCMP_ENABLE_OFFSET))
#define PWM0_GEN1_FAULT_DCMP_ENABLE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_FAULT_DCMP_ENABLE_OFFSET)))

#define PWM0_GEN2_FAULT_DCMP_ENABLE    ((PWM_GEN_FAULT_DCMP_ENABLE_t*) (PWM0_BASE + PWM_GEN2_FAULT_DCMP_ENABLE_OFFSET))
#define PWM0_GEN2_FAULT_DCMP_ENABLE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_FAULT_DCMP_ENABLE_OFFSET)))

#define PWM0_GEN3_FAULT_DCMP_ENABLE    ((PWM_GEN_FAULT_DCMP_ENABLE_t*) (PWM0_BASE + PWM_GEN3_FAULT_DCMP_ENABLE_OFFSET))
#define PWM0_GEN3_FAULT_DCMP_ENABLE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_FAULT_DCMP_ENABLE_OFFSET)))

/******************************************************************************************
************************************ 27 GEN_FAULT_MIN_PERIOD *********************************************
******************************************************************************************/
#define PWM0_GEN0_FAULT_MIN_PERIOD    ((PWM_GEN_FAULT_MIN_PERIOD_t*) (PWM0_BASE + PWM_GEN0_FAULT_MIN_PERIOD_OFFSET))
#define PWM0_GEN0_FAULT_MIN_PERIOD_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_FAULT_MIN_PERIOD_OFFSET)))

#define PWM0_GEN1_FAULT_MIN_PERIOD    ((PWM_GEN_FAULT_MIN_PERIOD_t*) (PWM0_BASE + PWM_GEN1_FAULT_MIN_PERIOD_OFFSET))
#define PWM0_GEN1_FAULT_MIN_PERIOD_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_FAULT_MIN_PERIOD_OFFSET)))

#define PWM0_GEN2_FAULT_MIN_PERIOD    ((PWM_GEN_FAULT_MIN_PERIOD_t*) (PWM0_BASE + PWM_GEN2_FAULT_MIN_PERIOD_OFFSET))
#define PWM0_GEN2_FAULT_MIN_PERIOD_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_FAULT_MIN_PERIOD_OFFSET)))

#define PWM0_GEN3_FAULT_MIN_PERIOD    ((PWM_GEN_FAULT_MIN_PERIOD_t*) (PWM0_BASE + PWM_GEN3_FAULT_MIN_PERIOD_OFFSET))
#define PWM0_GEN3_FAULT_MIN_PERIOD_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_FAULT_MIN_PERIOD_OFFSET)))

/******************************************************************************************
************************************ 28 GEN_EXT_FLTSEN *********************************************
******************************************************************************************/
#define PWM0_GEN_EXT    ((PWM_GEN_EXT_t*) (PWM0_BASE + PWM_GEN0_EXT_FAULT_PIN_SENSE_OFFSET))

#define PWM0_GEN0_EXT_FAULT_PIN_SENSE    ((PWM_GEN_FAULT_PIN_SENSE_t*) (PWM0_BASE + PWM_GEN0_EXT_FAULT_PIN_SENSE_OFFSET))
#define PWM0_GEN0_EXT_FAULT_PIN_SENSE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_EXT_FAULT_PIN_SENSE_OFFSET)))

#define PWM0_GEN1_EXT_FAULT_PIN_SENSE    ((PWM_GEN_FAULT_PIN_SENSE_t*) (PWM0_BASE + PWM_GEN1_EXT_FAULT_PIN_SENSE_OFFSET))
#define PWM0_GEN1_EXT_FAULT_PIN_SENSE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_EXT_FAULT_PIN_SENSE_OFFSET)))

#define PWM0_GEN2_EXT_FAULT_PIN_SENSE    ((PWM_GEN_FAULT_PIN_SENSE_t*) (PWM0_BASE + PWM_GEN2_EXT_FAULT_PIN_SENSE_OFFSET))
#define PWM0_GEN2_EXT_FAULT_PIN_SENSE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_EXT_FAULT_PIN_SENSE_OFFSET)))

#define PWM0_GEN3_EXT_FAULT_PIN_SENSE    ((PWM_GEN_FAULT_PIN_SENSE_t*) (PWM0_BASE + PWM_GEN3_EXT_FAULT_PIN_SENSE_OFFSET))
#define PWM0_GEN3_EXT_FAULT_PIN_SENSE_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_EXT_FAULT_PIN_SENSE_OFFSET)))

/******************************************************************************************
************************************ 29 GEN_EXT_FLTSTAT0 *********************************************
******************************************************************************************/
#define PWM0_GEN0_EXT_FAULT_PIN_STAT    ((PWM_GEN_FAULT_PIN_STAT_t*) (PWM0_BASE + PWM_GEN0_EXT_FAULT_PIN_STAT_OFFSET))
#define PWM0_GEN0_EXT_FAULT_PIN_STAT_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_EXT_FAULT_PIN_STAT_OFFSET)))

#define PWM0_GEN1_EXT_FAULT_PIN_STAT    ((PWM_GEN_FAULT_PIN_STAT_t*) (PWM0_BASE + PWM_GEN1_EXT_FAULT_PIN_STAT_OFFSET))
#define PWM0_GEN1_EXT_FAULT_PIN_STAT_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_EXT_FAULT_PIN_STAT_OFFSET)))

#define PWM0_GEN2_EXT_FAULT_PIN_STAT    ((PWM_GEN_FAULT_PIN_STAT_t*) (PWM0_BASE + PWM_GEN2_EXT_FAULT_PIN_STAT_OFFSET))
#define PWM0_GEN2_EXT_FAULT_PIN_STAT_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_EXT_FAULT_PIN_STAT_OFFSET)))

#define PWM0_GEN3_EXT_FAULT_PIN_STAT    ((PWM_GEN_FAULT_PIN_STAT_t*) (PWM0_BASE + PWM_GEN3_EXT_FAULT_PIN_STAT_OFFSET))
#define PWM0_GEN3_EXT_FAULT_PIN_STAT_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_EXT_FAULT_PIN_STAT_OFFSET)))

/******************************************************************************************
************************************ 30 GEN_EXT_FLTSTAT1 *********************************************
******************************************************************************************/
#define PWM0_GEN0_EXT_FAULT_DCMP_STAT    ((PWM_GEN_FAULT_DCMP_STAT_t*) (PWM0_BASE + PWM_GEN0_EXT_FAULT_DCMP_STAT_OFFSET))
#define PWM0_GEN0_EXT_FAULT_DCMP_STAT_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN0_EXT_FAULT_DCMP_STAT_OFFSET)))

#define PWM0_GEN1_EXT_FAULT_DCMP_STAT    ((PWM_GEN_FAULT_DCMP_STAT_t*) (PWM0_BASE + PWM_GEN1_EXT_FAULT_DCMP_STAT_OFFSET))
#define PWM0_GEN1_EXT_FAULT_DCMP_STAT_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN1_EXT_FAULT_DCMP_STAT_OFFSET)))

#define PWM0_GEN2_EXT_FAULT_DCMP_STAT    ((PWM_GEN_FAULT_DCMP_STAT_t*) (PWM0_BASE + PWM_GEN2_EXT_FAULT_DCMP_STAT_OFFSET))
#define PWM0_GEN2_EXT_FAULT_DCMP_STAT_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN2_EXT_FAULT_DCMP_STAT_OFFSET)))

#define PWM0_GEN3_EXT_FAULT_DCMP_STAT    ((PWM_GEN_FAULT_DCMP_STAT_t*) (PWM0_BASE + PWM_GEN3_EXT_FAULT_DCMP_STAT_OFFSET))
#define PWM0_GEN3_EXT_FAULT_DCMP_STAT_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_GEN3_EXT_FAULT_DCMP_STAT_OFFSET)))

/******************************************************************************************
************************************ 31 PP *********************************************
******************************************************************************************/
#define PWM0_PP    ((PWM_PP_t*) (PWM0_BASE + PWM_PP_OFFSET))
#define PWM0_PP_R    (*((volatile const UBase_t*) (PWM0_BASE + PWM_PP_OFFSET)))

/******************************************************************************************
************************************ 32 CC *********************************************
******************************************************************************************/
#define PWM0_CC    ((PWM_CC_t*) (PWM0_BASE + PWM_CC_OFFSET))
#define PWM0_CC_R    (*((volatile UBase_t*) (PWM0_BASE + PWM_CC_OFFSET)))

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_PWM_REGISTERPERIPHERAL_MODULE0_H_ */
