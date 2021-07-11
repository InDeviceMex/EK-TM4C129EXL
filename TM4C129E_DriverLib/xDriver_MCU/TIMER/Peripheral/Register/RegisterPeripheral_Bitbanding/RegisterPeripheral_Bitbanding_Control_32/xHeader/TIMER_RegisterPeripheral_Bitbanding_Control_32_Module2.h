/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_Control_32_Module2.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_MODULE2_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_MODULE2_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_Control_32.h>

#define GPTM2_CTL_BITBANDING    ((GPTM_CTL_BITBANDING_TypeDef*) (GPTM_BASE_BITBANDING + (GPTM2_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 1 CFG *********************************************
******************************************************************************************/
#define GPTM2_CTL_BITBANDING_CFG    ((BITBANDING_GPTMCFG_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM2_OFFSET + GPTM_CTL_CFG_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 5 SYNC *********************************************
******************************************************************************************/
#define GPTM2_CTL_BITBANDING_SYNC    ((BITBANDING_GPTMSYNC_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM2_OFFSET + GPTM_CTL_SYNC_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 27 PP *********************************************
******************************************************************************************/
#define GPTM2_CTL_BITBANDING_PP    ((BITBANDING_GPTMPP_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM2_OFFSET + GPTM_CTL_PP_OFFSET) * 32UL)))

#define GPTM2_CTL_BITBANDING_PP_CHAIN    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM2_OFFSET + GPTM_CTL_PP_OFFSET) * 32UL) + (GPTM_CTL_PP_R_CHAIN_BIT * 4UL))))
#define GPTM2_CTL_BITBANDING_PP_SYNCCNT    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM2_OFFSET + GPTM_CTL_PP_OFFSET) * 32UL) + (GPTM_CTL_PP_R_SYNCCNT_BIT * 4UL))))
#define GPTM2_CTL_BITBANDING_PP_ALTCLK    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM2_OFFSET + GPTM_CTL_PP_OFFSET) * 32UL) + (GPTM_CTL_PP_R_ALTCLK_BIT * 4UL))))

/******************************************************************************************
*********************************** * 27 CC *********************************************
******************************************************************************************/
#define GPTM2_CTL_BITBANDING_CC    ((BITBANDING_GPTMCC_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM2_OFFSET + GPTM_CTL_CC_OFFSET) * 32UL)))

#define GPTM2_CTL_BITBANDING_CC_ALTCLK    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM2_OFFSET + GPTM_CTL_CC_OFFSET) * 32UL) + (GPTM_CTL_CC_R_ALTCLK_BIT * 4UL))))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_MODULE2_H_ */
