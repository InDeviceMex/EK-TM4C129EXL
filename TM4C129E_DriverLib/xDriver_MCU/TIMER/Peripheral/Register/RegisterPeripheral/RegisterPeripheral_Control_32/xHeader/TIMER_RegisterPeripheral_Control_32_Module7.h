/**
 *
 * @file TIMER_RegisterPeripheral_Control_32_Module7.h
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

#ifndef XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_REGISTERPERIPHERAL_CONTROL_32_XHEADER_TIMER_REGISTERPERIPHERAL_CONTROL_32_MODULE7_H_
#define XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_REGISTERPERIPHERAL_CONTROL_32_XHEADER_TIMER_REGISTERPERIPHERAL_CONTROL_32_MODULE7_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Control_32.h>

#define GPTM7_CTL    (((GPTM_CTL_TypeDef*) (GPTM7_BASE)))

/******************************************************************************************
************************************ 1 CFG *********************************************
******************************************************************************************/
#define GPTM7_CTL_CFG    ((GPTMCFG_TypeDef*) (GPTM7_BASE + GPTM_CTL_CFG_OFFSET))
#define GPTM7_CTL_CFG_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_CTL_CFG_OFFSET)))

/******************************************************************************************
************************************ 5 SYNC *********************************************
******************************************************************************************/

#define GPTM7_CTL_SYNC    ((GPTMSYNC_TypeDef*) (GPTM7_BASE + GPTM_CTL_SYNC_OFFSET))
#define GPTM7_CTL_SYNC_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_CTL_SYNC_OFFSET)))

/******************************************************************************************
************************************ 27 PP *********************************************
******************************************************************************************/

#define GPTM7_CTL_PP    ((GPTMPP_TypeDef*) (GPTM7_BASE + GPTM_CTL_PP_OFFSET))
#define GPTM7_CTL_PP_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_CTL_PP_OFFSET)))

/******************************************************************************************
************************************ 28 CC *********************************************
******************************************************************************************/

#define GPTM7_CTL_CC    ((GPTMCC_TypeDef*) (GPTM7_BASE + GPTM_CTL_CC_OFFSET))
#define GPTM7_CTL_CC_R    (*((volatile uint32_t*) (GPTM7_BASE + GPTM_CTL_CC_OFFSET)))

#endif /* XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_REGISTERPERIPHERAL_CONTROL_32_XHEADER_TIMER_REGISTERPERIPHERAL_CONTROL_32_MODULE7_H_ */
