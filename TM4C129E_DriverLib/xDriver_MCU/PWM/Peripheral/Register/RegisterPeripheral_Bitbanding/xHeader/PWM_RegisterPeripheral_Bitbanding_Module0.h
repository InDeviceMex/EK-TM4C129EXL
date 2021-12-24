/**
 *
 * @file PWM_RegisterPeripheral_Bitbanding_Module0.h
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
 * @verbatim 24 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_PWM_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_PWM_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_

#include <xDriver_MCU/PWM/Peripheral/Register/xHeader/PWM_RegisterAddress.h>
#include <xDriver_MCU/PWM/Peripheral/Register/RegisterDefines/PWM_RegisterDefines.h>
#include <xDriver_MCU/PWM/Peripheral/Struct/xHeader/PWM_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ PWM0 *********************************************
******************************************************************************************/
#define PWM0_BITBANDING    ((PWM_BITBANDING_t*) (PWM_BITBANDING_BASE + (PWM0_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 1 ACTSS *********************************************
******************************************************************************************/
#define PWM0_BITBANDING_ACTSS    ((BITBANDING_PWMACTSS_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ACTSS_OFFSET) * 32UL)))

#define PWM0_BITBANDING_ACTSS_ASEN0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ACTSS_OFFSET) * 32UL) + (PWM_ACTSS_R_ASEN0_BIT * 4UL))))
#define PWM0_BITBANDING_ACTSS_ASEN1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ACTSS_OFFSET) * 32UL) + (PWM_ACTSS_R_ASEN1_BIT * 4UL))))
#define PWM0_BITBANDING_ACTSS_ASEN2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ACTSS_OFFSET) * 32UL) + (PWM_ACTSS_R_ASEN2_BIT * 4UL))))
#define PWM0_BITBANDING_ACTSS_ASEN3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ACTSS_OFFSET) * 32UL) + (PWM_ACTSS_R_ASEN3_BIT * 4UL))))
#define PWM0_BITBANDING_ACTSS_ADEN0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ACTSS_OFFSET) * 32UL) + (PWM_ACTSS_R_ADEN0_BIT * 4UL))))
#define PWM0_BITBANDING_ACTSS_ADEN1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ACTSS_OFFSET) * 32UL) + (PWM_ACTSS_R_ADEN1_BIT * 4UL))))
#define PWM0_BITBANDING_ACTSS_ADEN2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ACTSS_OFFSET) * 32UL) + (PWM_ACTSS_R_ADEN2_BIT * 4UL))))
#define PWM0_BITBANDING_ACTSS_ADEN3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ACTSS_OFFSET) * 32UL) + (PWM_ACTSS_R_ADEN3_BIT * 4UL))))
#define PWM0_BITBANDING_ACTSS_BUSY    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ACTSS_OFFSET) * 32UL) + (PWM_ACTSS_R_BUSY_BIT * 4UL))))

/******************************************************************************************
*********************************** * 2 RIS *********************************************
******************************************************************************************/
#define PWM0_BITBANDING_RIS    ((BITBANDING_PWMRIS_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_RIS_OFFSET) * 32UL)))

#define PWM0_BITBANDING_RIS_INR0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_RIS_OFFSET) * 32UL) + (PWM_RIS_R_INR0_BIT * 4UL))))
#define PWM0_BITBANDING_RIS_INR1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_RIS_OFFSET) * 32UL) + (PWM_RIS_R_INR1_BIT * 4UL))))
#define PWM0_BITBANDING_RIS_INR2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_RIS_OFFSET) * 32UL) + (PWM_RIS_R_INR2_BIT * 4UL))))
#define PWM0_BITBANDING_RIS_INR3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_RIS_OFFSET) * 32UL) + (PWM_RIS_R_INR3_BIT * 4UL))))
#define PWM0_BITBANDING_RIS_DMAINR0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_RIS_OFFSET) * 32UL) + (PWM_RIS_R_DMAINR0_BIT * 4UL))))
#define PWM0_BITBANDING_RIS_DMAINR1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_RIS_OFFSET) * 32UL) + (PWM_RIS_R_DMAINR1_BIT * 4UL))))
#define PWM0_BITBANDING_RIS_DMAINR2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_RIS_OFFSET) * 32UL) + (PWM_RIS_R_DMAINR2_BIT * 4UL))))
#define PWM0_BITBANDING_RIS_DMAINR3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_RIS_OFFSET) * 32UL) + (PWM_RIS_R_DMAINR3_BIT * 4UL))))
#define PWM0_BITBANDING_RIS_INRDC    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_RIS_OFFSET) * 32UL) + (PWM_RIS_R_INRDC_BIT * 4UL))))

/******************************************************************************************
*********************************** * 3 IM *********************************************
******************************************************************************************/
#define PWM0_BITBANDING_IM    ((BITBANDING_PWMIM_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_IM_OFFSET) * 32UL)))

#define PWM0_BITBANDING_IM_MASK0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_IM_OFFSET) * 32UL) + (PWM_IM_R_MASK0_BIT * 4UL))))
#define PWM0_BITBANDING_IM_MASK1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_IM_OFFSET) * 32UL) + (PWM_IM_R_MASK1_BIT * 4UL))))
#define PWM0_BITBANDING_IM_MASK2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_IM_OFFSET) * 32UL) + (PWM_IM_R_MASK2_BIT * 4UL))))
#define PWM0_BITBANDING_IM_MASK3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_IM_OFFSET) * 32UL) + (PWM_IM_R_MASK3_BIT * 4UL))))
#define PWM0_BITBANDING_IM_DMAMASK0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_IM_OFFSET) * 32UL) + (PWM_IM_R_DMAMASK0_BIT * 4UL))))
#define PWM0_BITBANDING_IM_DMAMASK1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_IM_OFFSET) * 32UL) + (PWM_IM_R_DMAMASK1_BIT * 4UL))))
#define PWM0_BITBANDING_IM_DMAMASK2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_IM_OFFSET) * 32UL) + (PWM_IM_R_DMAMASK2_BIT * 4UL))))
#define PWM0_BITBANDING_IM_DMAMASK3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_IM_OFFSET) * 32UL) + (PWM_IM_R_DMAMASK3_BIT * 4UL))))
#define PWM0_BITBANDING_IM_DCONSS0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_IM_OFFSET) * 32UL) + (PWM_IM_R_DCONSS0_BIT * 4UL))))
#define PWM0_BITBANDING_IM_DCONSS1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_IM_OFFSET) * 32UL) + (PWM_IM_R_DCONSS1_BIT * 4UL))))
#define PWM0_BITBANDING_IM_DCONSS2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_IM_OFFSET) * 32UL) + (PWM_IM_R_DCONSS2_BIT * 4UL))))
#define PWM0_BITBANDING_IM_DCONSS3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_IM_OFFSET) * 32UL) + (PWM_IM_R_DCONSS3_BIT * 4UL))))

/******************************************************************************************
*********************************** * 4 ISC *********************************************
******************************************************************************************/
#define PWM0_BITBANDING_ISC    ((BITBANDING_PWM_ISC_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ISC_OFFSET) * 32UL)))

#define PWM0_BITBANDING_ISC_IN0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ISC_OFFSET) * 32UL) + (PWM_ISC_R_IN0_BIT * 4UL))))
#define PWM0_BITBANDING_ISC_IN1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ISC_OFFSET) * 32UL) + (PWM_ISC_R_IN1_BIT * 4UL))))
#define PWM0_BITBANDING_ISC_IN2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ISC_OFFSET) * 32UL) + (PWM_ISC_R_IN2_BIT * 4UL))))
#define PWM0_BITBANDING_ISC_IN3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ISC_OFFSET) * 32UL) + (PWM_ISC_R_IN3_BIT * 4UL))))
#define PWM0_BITBANDING_ISC_DMAIN0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ISC_OFFSET) * 32UL) + (PWM_ISC_R_DMAIN0_BIT * 4UL))))
#define PWM0_BITBANDING_ISC_DMAIN1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ISC_OFFSET) * 32UL) + (PWM_ISC_R_DMAIN1_BIT * 4UL))))
#define PWM0_BITBANDING_ISC_DMAIN2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ISC_OFFSET) * 32UL) + (PWM_ISC_R_DMAIN2_BIT * 4UL))))
#define PWM0_BITBANDING_ISC_DMAIN3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ISC_OFFSET) * 32UL) + (PWM_ISC_R_DMAIN3_BIT * 4UL))))
#define PWM0_BITBANDING_ISC_DCINSS0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ISC_OFFSET) * 32UL) + (PWM_ISC_R_DCINSS0_BIT * 4UL))))
#define PWM0_BITBANDING_ISC_DCINSS1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ISC_OFFSET) * 32UL) + (PWM_ISC_R_DCINSS1_BIT * 4UL))))
#define PWM0_BITBANDING_ISC_DCINSS2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ISC_OFFSET) * 32UL) + (PWM_ISC_R_DCINSS2_BIT * 4UL))))
#define PWM0_BITBANDING_ISC_DCINSS3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_ISC_OFFSET) * 32UL) + (PWM_ISC_R_DCINSS3_BIT * 4UL))))

/******************************************************************************************
*********************************** * 5 OSTAT *********************************************
******************************************************************************************/
#define PWM0_BITBANDING_OSTAT    ((BITBANDING_PWMOSTAT_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_OSTAT_OFFSET) * 32UL)))

#define PWM0_BITBANDING_OSTAT_OV0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_OSTAT_OFFSET) * 32UL) + (PWM_OSTAT_R_OV0_BIT * 4UL))))
#define PWM0_BITBANDING_OSTAT_OV1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_OSTAT_OFFSET) * 32UL) + (PWM_OSTAT_R_OV1_BIT * 4UL))))
#define PWM0_BITBANDING_OSTAT_OV2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_OSTAT_OFFSET) * 32UL) + (PWM_OSTAT_R_OV2_BIT * 4UL))))
#define PWM0_BITBANDING_OSTAT_OV3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_OSTAT_OFFSET) * 32UL) + (PWM_OSTAT_R_OV3_BIT * 4UL))))

/******************************************************************************************
*********************************** * 6 EMUX *********************************************
******************************************************************************************/
#define PWM0_BITBANDING_EMUX    ((BITBANDING_PWMEMUX_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL)))

#define PWM0_BITBANDING_EMUX_EM0_0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM0_BIT + 0UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM0_1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM0_BIT + 1UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM0_2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM0_BIT + 2UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM0_3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM0_BIT + 3UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM1_0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM1_BIT + 0UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM1_1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM1_BIT + 1UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM1_2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM1_BIT + 2UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM1_3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM1_BIT + 3UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM2_0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM2_BIT + 0UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM2_1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM2_BIT + 1UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM2_2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM2_BIT + 2UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM2_3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM2_BIT + 3UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM3_0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM3_BIT + 0UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM3_1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM3_BIT + 1UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM3_2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM3_BIT + 2UL) * 4UL))))
#define PWM0_BITBANDING_EMUX_EM3_3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_EMUX_OFFSET) * 32UL) + ((PWM_EMUX_R_EM3_BIT + 3UL) * 4UL))))

/******************************************************************************************
*********************************** * 7 USTAT *********************************************
******************************************************************************************/
#define PWM0_BITBANDING_USTAT    ((BITBANDING_PWMUSTAT_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_USTAT_OFFSET) * 32UL)))

#define PWM0_BITBANDING_USTAT_UV0    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_USTAT_OFFSET) * 32UL) + (PWM_USTAT_R_UV0_BIT * 4UL))))
#define PWM0_BITBANDING_USTAT_UV1    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_USTAT_OFFSET) * 32UL) + (PWM_USTAT_R_UV1_BIT * 4UL))))
#define PWM0_BITBANDING_USTAT_UV2    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_USTAT_OFFSET) * 32UL) + (PWM_USTAT_R_UV2_BIT * 4UL))))
#define PWM0_BITBANDING_USTAT_UV3    (*((volatile uint32_t*) (PWM_BITBANDING_BASE + ((PWM0_OFFSET + PWM_USTAT_OFFSET) * 32UL) + (PWM_USTAT_R_UV3_BIT * 4UL))))

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_PWM_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_ */
