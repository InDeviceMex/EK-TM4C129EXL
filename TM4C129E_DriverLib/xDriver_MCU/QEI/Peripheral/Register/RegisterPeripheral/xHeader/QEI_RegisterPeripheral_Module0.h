/**
 *
 * @file QEI_RegisterPeripheral_Module0.h
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_QEI_REGISTERPERIPHERAL_MODULE0_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_QEI_REGISTERPERIPHERAL_MODULE0_H_

#include <xDriver_MCU/QEI/Peripheral/Register/xHeader/QEI_RegisterAddress.h>
#include <xDriver_MCU/QEI/Peripheral/Register/xHeader/QEI_RegisterDefines.h>
#include <xDriver_MCU/QEI/Peripheral/Struct/xHeader/QEI_StructPeripheral.h>

/******************************************************************************************
************************************ QEI *********************************************
******************************************************************************************/

#define QEI0    (((QEI_t*) (QEI0_BASE)))

/******************************************************************************************
************************************ 1 CTL *********************************************
******************************************************************************************/
#define QEI0_CTL    (((QEICTL_t*) (QEI0_BASE + QEI_CTL_OFFSET )))
#define QEI0_CTL_R    (*((volatile UBase_t*) (QEI0_BASE + QEI_CTL_OFFSET)))

/******************************************************************************************
************************************ 2 STAT *********************************************
******************************************************************************************/
#define QEI0_STAT    (((QEISTAT_t*) (QEI0_BASE + QEI_STAT_OFFSET )))
#define QEI0_STAT_R    (*((volatile const UBase_t*) (QEI0_BASE + QEI_STAT_OFFSET)))

/******************************************************************************************
************************************ 3 POS *********************************************
******************************************************************************************/
#define QEI0_POS    (((QEIPOS_t*) (QEI0_BASE + QEI_POS_OFFSET )))
#define QEI0_POS_R    (*((volatile UBase_t*) (QEI0_BASE + QEI_POS_OFFSET)))

/******************************************************************************************
************************************ 4 MAXPOS *********************************************
******************************************************************************************/
#define QEI0_MAXPOS    (((QEIMAXPOS_t*) (QEI0_BASE + QEI_MAXPOS_OFFSET )))
#define QEI0_MAXPOS_R    (*((volatile UBase_t*) (QEI0_BASE + QEI_MAXPOS_OFFSET)))

/******************************************************************************************
************************************ 5 LOAD *********************************************
******************************************************************************************/
#define QEI0_LOAD    (((QEILOAD_t*) (QEI0_BASE + QEI_LOAD_OFFSET )))
#define QEI0_LOAD_R    (*((volatile UBase_t*) (QEI0_BASE + QEI_LOAD_OFFSET)))

/******************************************************************************************
************************************ 6 TIME *********************************************
******************************************************************************************/
#define QEI0_TIME    (((QEITIME_t*) (QEI0_BASE + QEI_TIME_OFFSET )))
#define QEI0_TIME_R    (*((volatile const UBase_t*) (QEI0_BASE + QEI_TIME_OFFSET)))

/******************************************************************************************
************************************ 7 COUNT *********************************************
******************************************************************************************/
#define QEI0_COUNT    (((QEICOUNT_t*) (QEI0_BASE + QEI_COUNT_OFFSET )))
#define QEI0_COUNT_R    (*((volatile const UBase_t*) (QEI0_BASE + QEI_COUNT_OFFSET)))

/******************************************************************************************
************************************ 8 SPEED *********************************************
******************************************************************************************/
#define QEI0_SPEED    (((QEISPEED_t*) (QEI0_BASE + QEI_SPEED_OFFSET )))
#define QEI0_SPEED_R    (*((volatile const UBase_t*) (QEI0_BASE + QEI_SPEED_OFFSET)))

/******************************************************************************************
************************************ 9 INTEN *********************************************
******************************************************************************************/
#define QEI0_INTEN    (((QEIINTEN_t*) (QEI0_BASE + QEI_INTEN_OFFSET )))
#define QEI0_INTEN_R    (*((volatile UBase_t*) (QEI0_BASE + QEI_INTEN_OFFSET)))

/******************************************************************************************
************************************ 10 RIS *********************************************
******************************************************************************************/
#define QEI0_RIS    (((QEIRIS_t*) (QEI0_BASE + QEI_RIS_OFFSET )))
#define QEI0_RIS_R    (*((volatile const UBase_t*) (QEI0_BASE + QEI_RIS_OFFSET)))

/******************************************************************************************
************************************ 11 ISC *********************************************
******************************************************************************************/
#define QEI0_ISC    (((QEIISC_t*) (QEI0_BASE + QEI_ISC_OFFSET )))
#define QEI0_ISC_R    (*((volatile UBase_t*) (QEI0_BASE + QEI_ISC_OFFSET)))

#endif /* XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_QEI_REGISTERPERIPHERAL_MODULE0_H_ */
