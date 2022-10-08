/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_Control_32_Module6.h
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

#ifndef XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_XHEADER_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_MODULE6_H_
#define XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_XHEADER_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_MODULE6_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_Control_32.h>

#define GPTM6_CTL_BITBANDING    ((GPTM_CTL_BITBANDING_t*) (GPTM_BASE_BITBANDING + (GPTM6_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 1 CFG *********************************************
******************************************************************************************/
#define GPTM6_CTL_BITBANDING_CFG    ((BITBANDING_GPTMCFG_t*) (GPTM_BASE_BITBANDING + ((GPTM6_OFFSET + GPTM_CTL_CFG_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 5 SYNC *********************************************
******************************************************************************************/
#define GPTM6_CTL_BITBANDING_SYNC    ((BITBANDING_GPTMSYNC_t*) (GPTM_BASE_BITBANDING + ((GPTM6_OFFSET + GPTM_CTL_SYNC_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 27 PP *********************************************
******************************************************************************************/
#define GPTM6_CTL_BITBANDING_PP    ((BITBANDING_GPTMPP_t*) (GPTM_BASE_BITBANDING + ((GPTM6_OFFSET + GPTM_CTL_PP_OFFSET) * 32UL)))

#define GPTM6_CTL_BITBANDING_PP_CHAIN    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM6_OFFSET + GPTM_CTL_PP_OFFSET) * 32UL) + (GPTM_CTL_PP_R_CHAIN_BIT * 4UL))))
#define GPTM6_CTL_BITBANDING_PP_SYNCCNT    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM6_OFFSET + GPTM_CTL_PP_OFFSET) * 32UL) + (GPTM_CTL_PP_R_SYNCCNT_BIT * 4UL))))
#define GPTM6_CTL_BITBANDING_PP_ALTCLK    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM6_OFFSET + GPTM_CTL_PP_OFFSET) * 32UL) + (GPTM_CTL_PP_R_ALTCLK_BIT * 4UL))))

/******************************************************************************************
*********************************** * 27 CC *********************************************
******************************************************************************************/
#define GPTM6_CTL_BITBANDING_CC    ((BITBANDING_GPTMCC_t*) (GPTM_BASE_BITBANDING + ((GPTM6_OFFSET + GPTM_CTL_CC_OFFSET) * 32UL)))

#define GPTM6_CTL_BITBANDING_CC_ALTCLK    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM6_OFFSET + GPTM_CTL_CC_OFFSET) * 32UL) + (GPTM_CTL_CC_R_ALTCLK_BIT * 4UL))))

#endif /* XDRIVER_MCU_TIMER_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_XHEADER_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_MODULE6_H_ */
