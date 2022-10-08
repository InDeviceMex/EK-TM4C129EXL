/**
 *
 * @file CRC_RegisterPeripheral.h
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
 * @verbatim 30 oct. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 oct. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CRC_PERIPHERAL_REGISTER_XHEADER_CRC_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_CRC_PERIPHERAL_REGISTER_XHEADER_CRC_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/CRC/Peripheral/Struct/xHeader/CRC_StructPeripheral.h>
#include <xDriver_MCU/CRC/Peripheral/Register/xHeader/CRC_RegisterAddress.h>

#define CRC    ((CRC_t*) (CRC_BASE))

/******************************************************************************************
************************************ 1 CTRL *********************************************
******************************************************************************************/
#define CRC_CTRL    ((CRC_CTRL_t*) (CRC_BASE + CRC_CTRL_OFFSET))
#define CRC_CTRL_R    (*((volatile UBase_t*) (CRC_BASE + CRC_CTRL_OFFSET)))

/******************************************************************************************
************************************ 2 SEED *********************************************
******************************************************************************************/
#define CRC_SEED    ((CRC_SEED_t*) (CRC_BASE + CRC_SEED_OFFSET))
#define CRC_SEED_R    (*((volatile UBase_t*) (CRC_BASE + CRC_SEED_OFFSET)))

/******************************************************************************************
************************************ 3 DIN *********************************************
******************************************************************************************/
#define CRC_DIN    ((CRC_DIN_t*) (CRC_BASE + CRC_DIN_OFFSET))
#define CRC_DIN_R    (*((volatile UBase_t*) (CRC_BASE + CRC_DIN_OFFSET)))

/******************************************************************************************
************************************ 4 RSLTPP *********************************************
******************************************************************************************/
#define CRC_RSLTPP    ((CRC_RSLTPP_t*) (CRC_BASE + CRC_RSLTPP_OFFSET))
#define CRC_RSLTPP_R    (*((volatile UBase_t*) (CRC_BASE + CRC_RSLTPP_OFFSET)))

#endif /* XDRIVER_MCU_CRC_PERIPHERAL_REGISTER_XHEADER_CRC_REGISTERPERIPHERAL_H_ */
