/**
 *
 * @file ADC_RegisterPeripheral_Bitbanding_Module1.h
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
 * @verbatim 15 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description * 15 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_ADC_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_ADC_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_

#include <xDriver_MCU/ADC/Peripheral/Register/xHeader/ADC_RegisterAddress.h>
#include <xDriver_MCU/ADC/Peripheral/Register/RegisterDefines/ADC_RegisterDefines.h>
#include <xDriver_MCU/ADC/Peripheral/Struct/xHeader/ADC_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ ADC1 *********************************************
******************************************************************************************/
#define ADC1_BITBANDING    ((ADC_BITBANDING_t*) (ADC_BITBANDING_BASE + (ADC1_OFFSET * 32UL)))


/******************************************************************************************
*********************************** * 1 ACTSS *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_ACTSS    ((BITBANDING_ADCACTSS_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ACTSS_OFFSET) * 32UL)))

#define ADC1_BITBANDING_ACTSS_ASEN0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ACTSS_OFFSET) * 32UL) + (ADC_ACTSS_R_ASEN0_BIT * 4UL))))
#define ADC1_BITBANDING_ACTSS_ASEN1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ACTSS_OFFSET) * 32UL) + (ADC_ACTSS_R_ASEN1_BIT * 4UL))))
#define ADC1_BITBANDING_ACTSS_ASEN2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ACTSS_OFFSET) * 32UL) + (ADC_ACTSS_R_ASEN2_BIT * 4UL))))
#define ADC1_BITBANDING_ACTSS_ASEN3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ACTSS_OFFSET) * 32UL) + (ADC_ACTSS_R_ASEN3_BIT * 4UL))))
#define ADC1_BITBANDING_ACTSS_ADEN0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ACTSS_OFFSET) * 32UL) + (ADC_ACTSS_R_ADEN0_BIT * 4UL))))
#define ADC1_BITBANDING_ACTSS_ADEN1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ACTSS_OFFSET) * 32UL) + (ADC_ACTSS_R_ADEN1_BIT * 4UL))))
#define ADC1_BITBANDING_ACTSS_ADEN2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ACTSS_OFFSET) * 32UL) + (ADC_ACTSS_R_ADEN2_BIT * 4UL))))
#define ADC1_BITBANDING_ACTSS_ADEN3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ACTSS_OFFSET) * 32UL) + (ADC_ACTSS_R_ADEN3_BIT * 4UL))))
#define ADC1_BITBANDING_ACTSS_BUSY    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ACTSS_OFFSET) * 32UL) + (ADC_ACTSS_R_BUSY_BIT * 4UL))))

/******************************************************************************************
*********************************** * 2 RIS *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_RIS    ((BITBANDING_ADCRIS_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_RIS_OFFSET) * 32UL)))

#define ADC1_BITBANDING_RIS_INR0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_RIS_OFFSET) * 32UL) + (ADC_RIS_R_INR0_BIT * 4UL))))
#define ADC1_BITBANDING_RIS_INR1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_RIS_OFFSET) * 32UL) + (ADC_RIS_R_INR1_BIT * 4UL))))
#define ADC1_BITBANDING_RIS_INR2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_RIS_OFFSET) * 32UL) + (ADC_RIS_R_INR2_BIT * 4UL))))
#define ADC1_BITBANDING_RIS_INR3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_RIS_OFFSET) * 32UL) + (ADC_RIS_R_INR3_BIT * 4UL))))
#define ADC1_BITBANDING_RIS_DMAINR0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_RIS_OFFSET) * 32UL) + (ADC_RIS_R_DMAINR0_BIT * 4UL))))
#define ADC1_BITBANDING_RIS_DMAINR1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_RIS_OFFSET) * 32UL) + (ADC_RIS_R_DMAINR1_BIT * 4UL))))
#define ADC1_BITBANDING_RIS_DMAINR2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_RIS_OFFSET) * 32UL) + (ADC_RIS_R_DMAINR2_BIT * 4UL))))
#define ADC1_BITBANDING_RIS_DMAINR3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_RIS_OFFSET) * 32UL) + (ADC_RIS_R_DMAINR3_BIT * 4UL))))
#define ADC1_BITBANDING_RIS_INRDC    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_RIS_OFFSET) * 32UL) + (ADC_RIS_R_INRDC_BIT * 4UL))))

/******************************************************************************************
*********************************** * 3 IM *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_IM    ((BITBANDING_ADCIM_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_IM_OFFSET) * 32UL)))

#define ADC1_BITBANDING_IM_MASK0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_IM_OFFSET) * 32UL) + (ADC_IM_R_MASK0_BIT * 4UL))))
#define ADC1_BITBANDING_IM_MASK1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_IM_OFFSET) * 32UL) + (ADC_IM_R_MASK1_BIT * 4UL))))
#define ADC1_BITBANDING_IM_MASK2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_IM_OFFSET) * 32UL) + (ADC_IM_R_MASK2_BIT * 4UL))))
#define ADC1_BITBANDING_IM_MASK3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_IM_OFFSET) * 32UL) + (ADC_IM_R_MASK3_BIT * 4UL))))
#define ADC1_BITBANDING_IM_DMAMASK0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_IM_OFFSET) * 32UL) + (ADC_IM_R_DMAMASK0_BIT * 4UL))))
#define ADC1_BITBANDING_IM_DMAMASK1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_IM_OFFSET) * 32UL) + (ADC_IM_R_DMAMASK1_BIT * 4UL))))
#define ADC1_BITBANDING_IM_DMAMASK2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_IM_OFFSET) * 32UL) + (ADC_IM_R_DMAMASK2_BIT * 4UL))))
#define ADC1_BITBANDING_IM_DMAMASK3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_IM_OFFSET) * 32UL) + (ADC_IM_R_DMAMASK3_BIT * 4UL))))
#define ADC1_BITBANDING_IM_DCONSS0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_IM_OFFSET) * 32UL) + (ADC_IM_R_DCONSS0_BIT * 4UL))))
#define ADC1_BITBANDING_IM_DCONSS1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_IM_OFFSET) * 32UL) + (ADC_IM_R_DCONSS1_BIT * 4UL))))
#define ADC1_BITBANDING_IM_DCONSS2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_IM_OFFSET) * 32UL) + (ADC_IM_R_DCONSS2_BIT * 4UL))))
#define ADC1_BITBANDING_IM_DCONSS3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_IM_OFFSET) * 32UL) + (ADC_IM_R_DCONSS3_BIT * 4UL))))

/******************************************************************************************
*********************************** * 4 ISC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_ISC    ((BITBANDING_ADC_ISC_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ISC_OFFSET) * 32UL)))

#define ADC1_BITBANDING_ISC_IN0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ISC_OFFSET) * 32UL) + (ADC_ISC_R_IN0_BIT * 4UL))))
#define ADC1_BITBANDING_ISC_IN1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ISC_OFFSET) * 32UL) + (ADC_ISC_R_IN1_BIT * 4UL))))
#define ADC1_BITBANDING_ISC_IN2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ISC_OFFSET) * 32UL) + (ADC_ISC_R_IN2_BIT * 4UL))))
#define ADC1_BITBANDING_ISC_IN3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ISC_OFFSET) * 32UL) + (ADC_ISC_R_IN3_BIT * 4UL))))
#define ADC1_BITBANDING_ISC_DMAIN0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ISC_OFFSET) * 32UL) + (ADC_ISC_R_DMAIN0_BIT * 4UL))))
#define ADC1_BITBANDING_ISC_DMAIN1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ISC_OFFSET) * 32UL) + (ADC_ISC_R_DMAIN1_BIT * 4UL))))
#define ADC1_BITBANDING_ISC_DMAIN2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ISC_OFFSET) * 32UL) + (ADC_ISC_R_DMAIN2_BIT * 4UL))))
#define ADC1_BITBANDING_ISC_DMAIN3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ISC_OFFSET) * 32UL) + (ADC_ISC_R_DMAIN3_BIT * 4UL))))
#define ADC1_BITBANDING_ISC_DCINSS0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ISC_OFFSET) * 32UL) + (ADC_ISC_R_DCINSS0_BIT * 4UL))))
#define ADC1_BITBANDING_ISC_DCINSS1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ISC_OFFSET) * 32UL) + (ADC_ISC_R_DCINSS1_BIT * 4UL))))
#define ADC1_BITBANDING_ISC_DCINSS2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ISC_OFFSET) * 32UL) + (ADC_ISC_R_DCINSS2_BIT * 4UL))))
#define ADC1_BITBANDING_ISC_DCINSS3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ISC_OFFSET) * 32UL) + (ADC_ISC_R_DCINSS3_BIT * 4UL))))

/******************************************************************************************
*********************************** * 5 OSTAT *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_OSTAT    ((BITBANDING_ADCOSTAT_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_OSTAT_OFFSET) * 32UL)))

#define ADC1_BITBANDING_OSTAT_OV0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_OSTAT_OFFSET) * 32UL) + (ADC_OSTAT_R_OV0_BIT * 4UL))))
#define ADC1_BITBANDING_OSTAT_OV1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_OSTAT_OFFSET) * 32UL) + (ADC_OSTAT_R_OV1_BIT * 4UL))))
#define ADC1_BITBANDING_OSTAT_OV2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_OSTAT_OFFSET) * 32UL) + (ADC_OSTAT_R_OV2_BIT * 4UL))))
#define ADC1_BITBANDING_OSTAT_OV3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_OSTAT_OFFSET) * 32UL) + (ADC_OSTAT_R_OV3_BIT * 4UL))))

/******************************************************************************************
*********************************** * 6 EMUX *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_EMUX    ((BITBANDING_ADCEMUX_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL)))

#define ADC1_BITBANDING_EMUX_EM0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM0_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM1_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM1_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM1_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM1_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM2_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM2_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM2_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM2_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM3_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM3_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM3_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_EMUX_EM3_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL) + ((ADC_EMUX_R_EM3_BIT + 3UL) * 4UL))))

/******************************************************************************************
*********************************** * 7 USTAT *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_USTAT    ((BITBANDING_ADCUSTAT_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_USTAT_OFFSET) * 32UL)))

#define ADC1_BITBANDING_USTAT_UV0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_USTAT_OFFSET) * 32UL) + (ADC_USTAT_R_UV0_BIT * 4UL))))
#define ADC1_BITBANDING_USTAT_UV1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_USTAT_OFFSET) * 32UL) + (ADC_USTAT_R_UV1_BIT * 4UL))))
#define ADC1_BITBANDING_USTAT_UV2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_USTAT_OFFSET) * 32UL) + (ADC_USTAT_R_UV2_BIT * 4UL))))
#define ADC1_BITBANDING_USTAT_UV3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_USTAT_OFFSET) * 32UL) + (ADC_USTAT_R_UV3_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 TSSEL *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_TSSEL    ((BITBANDING_ADCTSSEL_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL)))

#define ADC1_BITBANDING_TSSEL_PS0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_TSSEL_PS0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_TSSEL_PS1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_TSSEL_PS1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_TSSEL_PS2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_TSSEL_PS2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_TSSEL_PS3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_TSSEL_PS3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS3_BIT + 1UL) * 4UL))))

/******************************************************************************************
*********************************** * 9 SS_PRI *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SS_PRI    ((BITBANDING_ADCSS_PRI_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS_PRI_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SS_PRI_SS0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS_PRI_OFFSET) * 32UL) + ((ADC_SS_PRI_R_SS0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS_PRI_SS0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS_PRI_OFFSET) * 32UL) + ((ADC_SS_PRI_R_SS0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS_PRI_SS1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS_PRI_OFFSET) * 32UL) + ((ADC_SS_PRI_R_SS1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS_PRI_SS1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS_PRI_OFFSET) * 32UL) + ((ADC_SS_PRI_R_SS1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS_PRI_SS2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS_PRI_OFFSET) * 32UL) + ((ADC_SS_PRI_R_SS2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS_PRI_SS2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS_PRI_OFFSET) * 32UL) + ((ADC_SS_PRI_R_SS2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS_PRI_SS3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS_PRI_OFFSET) * 32UL) + ((ADC_SS_PRI_R_SS3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS_PRI_SS3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS_PRI_OFFSET) * 32UL) + ((ADC_SS_PRI_R_SS3_BIT + 1UL) * 4UL))))

/******************************************************************************************
*********************************** * 10 SPC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SPC    ((BITBANDING_ADCSPC_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SPC_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SPC_PHASE_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SPC_OFFSET) * 32UL) + ((ADC_SPC_R_PHASE_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SPC_PHASE_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SPC_OFFSET) * 32UL) + ((ADC_SPC_R_PHASE_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SPC_PHASE_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SPC_OFFSET) * 32UL) + ((ADC_SPC_R_PHASE_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SPC_PHASE_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SPC_OFFSET) * 32UL) + ((ADC_SPC_R_PHASE_BIT + 3UL) * 4UL))))

/******************************************************************************************
*********************************** * 11 PSSI *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_PSSI    ((BITBANDING_ADCPSSI_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PSSI_OFFSET) * 32UL)))

#define ADC1_BITBANDING_PSSI_SS0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PSSI_OFFSET) * 32UL) + (ADC_PSSI_R_SS0_BIT * 4UL))))
#define ADC1_BITBANDING_PSSI_SS1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PSSI_OFFSET) * 32UL) + (ADC_PSSI_R_SS1_BIT * 4UL))))
#define ADC1_BITBANDING_PSSI_SS2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PSSI_OFFSET) * 32UL) + (ADC_PSSI_R_SS2_BIT * 4UL))))
#define ADC1_BITBANDING_PSSI_SS3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PSSI_OFFSET) * 32UL) + (ADC_PSSI_R_SS3_BIT * 4UL))))
#define ADC1_BITBANDING_PSSI_SYNCWAIT    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PSSI_OFFSET) * 32UL) + (ADC_PSSI_R_SYNCWAIT_BIT * 4UL))))
#define ADC1_BITBANDING_PSSI_GSYNC    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PSSI_OFFSET) * 32UL) + (ADC_PSSI_R_GSYNC_BIT * 4UL))))

/******************************************************************************************
*********************************** * 12 SAC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SAC    ((BITBANDING_ADCSAC_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SAC_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SAC_AVG_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SAC_OFFSET) * 32UL) + ((ADC_SAC_R_AVG_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SAC_AVG_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SAC_OFFSET) * 32UL) + ((ADC_SAC_R_AVG_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SAC_AVG_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SAC_OFFSET) * 32UL) + ((ADC_SAC_R_AVG_BIT + 2UL) * 4UL))))

/******************************************************************************************
*********************************** * 13 DC_ISC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_DC_ISC    ((BITBANDING_ADCDC_ISC_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_ISC_OFFSET) * 32UL)))

#define ADC1_BITBANDING_DC_ISC_DCINT0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_ISC_OFFSET) * 32UL) + (ADC_DC_ISC_R_DCINT0_BIT * 4UL))))
#define ADC1_BITBANDING_DC_ISC_DCINT1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_ISC_OFFSET) * 32UL) + (ADC_DC_ISC_R_DCINT1_BIT * 4UL))))
#define ADC1_BITBANDING_DC_ISC_DCINT2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_ISC_OFFSET) * 32UL) + (ADC_DC_ISC_R_DCINT2_BIT * 4UL))))
#define ADC1_BITBANDING_DC_ISC_DCINT3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_ISC_OFFSET) * 32UL) + (ADC_DC_ISC_R_DCINT3_BIT * 4UL))))
#define ADC1_BITBANDING_DC_ISC_DCINT4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_ISC_OFFSET) * 32UL) + (ADC_DC_ISC_R_DCINT4_BIT * 4UL))))
#define ADC1_BITBANDING_DC_ISC_DCINT5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_ISC_OFFSET) * 32UL) + (ADC_DC_ISC_R_DCINT5_BIT * 4UL))))
#define ADC1_BITBANDING_DC_ISC_DCINT6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_ISC_OFFSET) * 32UL) + (ADC_DC_ISC_R_DCINT6_BIT * 4UL))))
#define ADC1_BITBANDING_DC_ISC_DCINT7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_ISC_OFFSET) * 32UL) + (ADC_DC_ISC_R_DCINT7_BIT * 4UL))))

/******************************************************************************************
*********************************** * 14 CTL *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_CTL    ((BITBANDING_ADC_CTL_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_CTL_OFFSET) * 32UL)))

#define ADC1_BITBANDING_CTL_VREF    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_CTL_OFFSET) * 32UL) + (ADC_CTL_R_VREF_BIT * 4UL))))

/******************************************************************************************
*********************************** * 15 SSMUX *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SS0_MUX    ((BITBANDING_ADCSS8_MUX_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS1_MUX    ((BITBANDING_ADCSS4_MUX_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS2_MUX    ((BITBANDING_ADCSS4_MUX_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS3_MUX    ((BITBANDING_ADCSS1_MUX_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_MUX_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SS0_MUX_MUX0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX1_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX1_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX2_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX2_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX3_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX3_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX4_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX4_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX4_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX4_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX4_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX4_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX4_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX4_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX5_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX5_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX5_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX5_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX5_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX5_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX5_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX5_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX6_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX6_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX6_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX6_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX6_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX6_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX6_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX6_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX7_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX7_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX7_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX7_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX7_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX7_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_MUX_MUX7_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX7_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SS1_MUX_MUX0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX1_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX1_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX2_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX2_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX3_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS1_MUX_MUX3_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SS2_MUX_MUX0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX1_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX1_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX2_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX2_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX3_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS2_MUX_MUX3_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SS3_MUX_MUX0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS3_MUX_MUX0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS3_MUX_MUX0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS3_MUX_MUX0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_MUX_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 3UL) * 4UL))))

/******************************************************************************************
*********************************** * 16 SSCTL *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SS0_CTL    ((BITBANDING_ADCSS8_CTL_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS1_CTL    ((BITBANDING_ADCSS4_CTL_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS2_CTL    ((BITBANDING_ADCSS4_CTL_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS3_CTL    ((BITBANDING_ADCSS1_CTL_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_CTL_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SS0_CTL_D0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D0_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_END0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END0_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_IE0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE0_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_TS0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS0_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_D1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D1_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_END1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END1_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_IE1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE1_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_TS1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS1_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_D2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D2_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_END2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END2_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_IE2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE2_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_TS2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS2_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_D3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D3_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_END3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END3_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_IE3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE3_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_TS3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS3_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_D4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D4_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_END4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END4_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_IE4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE4_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_TS4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS4_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_D5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D5_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_END5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END5_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_IE5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE5_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_TS5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS5_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_D6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D6_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_END6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END6_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_IE6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE6_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_TS6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS6_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_D7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D7_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_END7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END7_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_IE7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE7_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_CTL_TS7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS7_BIT * 4UL))))

#define ADC1_BITBANDING_SS1_CTL_D0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D0_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_END0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END0_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_IE0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE0_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_TS0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS0_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_D1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D1_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_END1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END1_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_IE1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE1_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_TS1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS1_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_D2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D2_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_END2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END2_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_IE2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE2_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_TS2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS2_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_D3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D3_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_END3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END3_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_IE3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE3_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_CTL_TS3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS3_BIT * 4UL))))

#define ADC1_BITBANDING_SS2_CTL_D0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D0_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_END0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END0_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_IE0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE0_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_TS0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS0_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_D1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D1_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_END1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END1_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_IE1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE1_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_TS1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS1_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_D2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D2_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_END2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END2_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_IE2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE2_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_TS2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS2_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_D3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_D3_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_END3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_END3_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_IE3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_IE3_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_CTL_TS3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_CTL_OFFSET) * 32UL) + (ADC_SSCTL_R_TS3_BIT * 4UL))))

#define ADC1_BITBANDING_SS0_FSTAT_D0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL) + (ADC_SSCTL_R_D0_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_FSTAT_END0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL) + (ADC_SSCTL_R_END0_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_FSTAT_IE0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL) + (ADC_SSCTL_R_IE0_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_FSTAT_TS0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL) + (ADC_SSCTL_R_TS0_BIT * 4UL))))

/******************************************************************************************
*********************************** * 17 SSFIFO *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SS0_FIFO    ((BITBANDING_ADCSSFIFO_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FIFO_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS1_FIFO    ((BITBANDING_ADCSSFIFO_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_FIFO_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS2_FIFO    ((BITBANDING_ADCSSFIFO_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_FIFO_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS3_FIFO    ((BITBANDING_ADCSSFIFO_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_FIFO_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 18 SSFSTAT *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SS0_FSTAT    ((BITBANDING_ADCSSFSTAT_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS1_FSTAT    ((BITBANDING_ADCSSFSTAT_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_FSTAT_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS2_FSTAT    ((BITBANDING_ADCSSFSTAT_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_FSTAT_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS3_FSTAT    ((BITBANDING_ADCSSFSTAT_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_FSTAT_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SS0_FSTAT_TPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_FSTAT_TPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_FSTAT_TPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_FSTAT_TPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_FSTAT_HPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_FSTAT_HPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_FSTAT_HPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_FSTAT_HPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_FSTAT_EMPTY    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL) + (ADC_SSFSTAT_R_EMPTY_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_FSTAT_FULL    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_FSTAT_OFFSET) * 32UL) + (ADC_SSFSTAT_R_FULL_BIT * 4UL))))

#define ADC1_BITBANDING_SS1_FSTAT_TPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS1_FSTAT_TPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS1_FSTAT_TPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS1_FSTAT_TPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS1_FSTAT_HPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS1_FSTAT_HPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS1_FSTAT_HPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS1_FSTAT_HPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS1_FSTAT_EMPTY    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_FSTAT_OFFSET) * 32UL) + (ADC_SSFSTAT_R_EMPTY_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_FSTAT_FULL    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_FSTAT_OFFSET) * 32UL) + (ADC_SSFSTAT_R_FULL_BIT * 4UL))))

#define ADC1_BITBANDING_SS2_FSTAT_TPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS2_FSTAT_TPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS2_FSTAT_TPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS2_FSTAT_TPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS2_FSTAT_HPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS2_FSTAT_HPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS2_FSTAT_HPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS2_FSTAT_HPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS2_FSTAT_EMPTY    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_FSTAT_OFFSET) * 32UL) + (ADC_SSFSTAT_R_EMPTY_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_FSTAT_FULL    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_FSTAT_OFFSET) * 32UL) + (ADC_SSFSTAT_R_FULL_BIT * 4UL))))

#define ADC1_BITBANDING_SS3_FSTAT_TPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS3_FSTAT_TPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS3_FSTAT_TPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS3_FSTAT_TPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS3_FSTAT_HPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS3_FSTAT_HPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS3_FSTAT_HPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS3_FSTAT_HPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_FSTAT_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS3_FSTAT_EMPTY    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_FSTAT_OFFSET) * 32UL) + (ADC_SSFSTAT_R_EMPTY_BIT * 4UL))))
#define ADC1_BITBANDING_SS3_FSTAT_FULL    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_FSTAT_OFFSET) * 32UL) + (ADC_SSFSTAT_R_FULL_BIT * 4UL))))

/******************************************************************************************
*********************************** * 19 SSOP *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SS0_OP    ((BITBANDING_ADCSS8_OP_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_OP_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS1_OP    ((BITBANDING_ADCSS4_OP_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_OP_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS2_OP    ((BITBANDING_ADCSS4_OP_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_OP_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS3_OP    ((BITBANDING_ADCSS1_OP_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_OP_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SS0_OP_S0DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S0DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_OP_S1DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S1DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_OP_S2DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S2DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_OP_S3DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S3DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_OP_S4DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S4DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_OP_S5DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S5DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_OP_S6DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S6DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_OP_S7DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S7DCOP_BIT * 4UL))))

#define ADC1_BITBANDING_SS1_OP_S0DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S0DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_OP_S1DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S1DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_OP_S2DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S2DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_OP_S3DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S3DCOP_BIT * 4UL))))

#define ADC1_BITBANDING_SS2_OP_S0DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S0DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_OP_S1DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S1DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_OP_S2DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S2DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_OP_S3DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S3DCOP_BIT * 4UL))))

#define ADC1_BITBANDING_SS3_OP_S0DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_OP_OFFSET) * 32UL) + (ADC_SSOP_R_S0DCOP_BIT * 4UL))))

/******************************************************************************************
*********************************** * 20 SSDC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SS0_DC    ((BITBANDING_ADCSS8_DC_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS1_DC    ((BITBANDING_ADCSS4_DC_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS2_DC    ((BITBANDING_ADCSS4_DC_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS3_DC    ((BITBANDING_ADCSS1_DC_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_DC_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SS0_DC_S0DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S0DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S0DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S0DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S1DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S1DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S1DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S1DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S2DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S2DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S2DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S2DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S3DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S3DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S3DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S3DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S4DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S4DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S4DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S4DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S4DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S4DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S4DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S4DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S5DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S5DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S5DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S5DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S5DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S5DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S5DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S5DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S6DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S6DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S6DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S6DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S6DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S6DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S6DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S6DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S7DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S7DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S7DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S7DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S7DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S7DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_DC_S7DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S7DCSEL_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SS1_DC_S0DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S0DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S0DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S0DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S1DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S1DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S1DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S1DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S2DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S2DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S2DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S2DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S3DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S3DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S3DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS1_DC_S3DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SS2_DC_S0DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S0DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S0DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S0DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S1DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S1DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S1DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S1DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S2DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S2DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S2DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S2DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S3DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S3DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S3DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS2_DC_S3DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SS3_DC_S0DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS3_DC_S0DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS3_DC_S0DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS3_DC_S0DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_DC_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 3UL) * 4UL))))

/******************************************************************************************
*********************************** * 20 SSEMUX *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SS0_EMUX    ((BITBANDING_ADCSS8_EMUX_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_EMUX_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS1_EMUX    ((BITBANDING_ADCSS4_EMUX_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_EMUX_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS2_EMUX    ((BITBANDING_ADCSS4_EMUX_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_EMUX_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS3_EMUX    ((BITBANDING_ADCSS1_EMUX_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_EMUX_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SS0_EMUX_EMUX0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX0_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_EMUX_EMUX1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX1_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_EMUX_EMUX2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX2_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_EMUX_EMUX3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX3_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_EMUX_EMUX4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX4_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_EMUX_EMUX5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX5_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_EMUX_EMUX6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX6_BIT * 4UL))))
#define ADC1_BITBANDING_SS0_EMUX_EMUX7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX7_BIT * 4UL))))

#define ADC1_BITBANDING_SS1_EMUX_EMUX0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX0_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_EMUX_EMUX1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX1_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_EMUX_EMUX2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX2_BIT * 4UL))))
#define ADC1_BITBANDING_SS1_EMUX_EMUX3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX3_BIT * 4UL))))

#define ADC1_BITBANDING_SS2_EMUX_EMUX0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX0_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_EMUX_EMUX1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX1_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_EMUX_EMUX2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX2_BIT * 4UL))))
#define ADC1_BITBANDING_SS2_EMUX_EMUX3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX3_BIT * 4UL))))

#define ADC1_BITBANDING_SS3_EMUX_EMUX0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_EMUX_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX0_BIT * 4UL))))

/******************************************************************************************
*********************************** * 20 SSTSH *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SS0_TSH    ((BITBANDING_ADCSS8_TSH_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS1_TSH    ((BITBANDING_ADCSS4_TSH_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS2_TSH    ((BITBANDING_ADCSS4_TSH_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SS3_TSH    ((BITBANDING_ADCSS1_TSH_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_TSH_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SS0_TSH_TSH0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH1_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH1_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH2_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH2_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH3_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH3_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH4_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH4_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH4_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH4_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH4_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH4_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH4_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH4_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH5_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH5_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH5_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH5_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH5_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH5_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH5_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH5_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH6_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH6_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH6_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH6_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH6_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH6_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH6_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH6_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH7_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH7_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH7_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH7_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH7_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH7_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS0_TSH_TSH7_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS0_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH7_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SS1_TSH_TSH0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH1_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH1_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH2_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH2_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH3_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS1_TSH_TSH3_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS1_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SS2_TSH_TSH0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH1_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH1_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH2_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH2_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH3_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS2_TSH_TSH3_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS2_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SS3_TSH_TSH0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SS3_TSH_TSH0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SS3_TSH_TSH0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SS3_TSH_TSH0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SS3_TSH_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 3UL) * 4UL))))

/******************************************************************************************
*********************************** * 21 DC_RIC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_DC_RIC    ((BITBANDING_ADCDC_RIC_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL)))

#define ADC1_BITBANDING_DC_RIC_DCINT0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCINT0_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCINT1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCINT1_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCINT2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCINT2_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCINT3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCINT3_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCINT4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCINT4_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCINT5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCINT5_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCINT6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCINT6_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCINT7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCINT7_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCTRIG0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCTRIG0_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCTRIG1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCTRIG1_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCTRIG2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCTRIG2_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCTRIG3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCTRIG3_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCTRIG4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCTRIG4_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCTRIG5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCTRIG5_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCTRIG6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCTRIG6_BIT * 4UL))))
#define ADC1_BITBANDING_DC_RIC_DCTRIG7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC_RIC_OFFSET) * 32UL) + (ADC_DC_RIC_R_DCTRIG7_BIT * 4UL))))

/******************************************************************************************
*********************************** * 22 DC_CTL *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_DC0_CTL    ((BITBANDING_ADCDC_CTL_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC0_CTL_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DC1_CTL    ((BITBANDING_ADCDC_CTL_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC1_CTL_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DC2_CTL    ((BITBANDING_ADCDC_CTL_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC2_CTL_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DC3_CTL    ((BITBANDING_ADCDC_CTL_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC3_CTL_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DC4_CTL    ((BITBANDING_ADCDC_CTL_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC4_CTL_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DC5_CTL    ((BITBANDING_ADCDC_CTL_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC5_CTL_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DC6_CTL    ((BITBANDING_ADCDC_CTL_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC6_CTL_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DC7_CTL    ((BITBANDING_ADCDC_CTL_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC7_CTL_OFFSET) * 32UL)))

#define ADC1_BITBANDING_DC0_CTL_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC0_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC0_CTL_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC0_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC0_CTL_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC0_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC0_CTL_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC0_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC0_CTL_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC0_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DC0_CTL_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC0_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC0_CTL_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC0_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC0_CTL_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC0_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC0_CTL_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC0_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC0_CTL_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC0_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CTE_BIT * 4UL))))

#define ADC1_BITBANDING_DC1_CTL_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC1_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC1_CTL_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC1_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC1_CTL_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC1_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC1_CTL_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC1_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC1_CTL_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC1_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DC1_CTL_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC1_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC1_CTL_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC1_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC1_CTL_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC1_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC1_CTL_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC1_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC1_CTL_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC1_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CTE_BIT * 4UL))))

#define ADC1_BITBANDING_DC2_CTL_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC2_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC2_CTL_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC2_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC2_CTL_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC2_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC2_CTL_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC2_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC2_CTL_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC2_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DC2_CTL_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC2_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC2_CTL_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC2_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC2_CTL_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC2_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC2_CTL_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC2_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC2_CTL_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC2_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CTE_BIT * 4UL))))

#define ADC1_BITBANDING_DC3_CTL_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC3_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC3_CTL_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC3_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC3_CTL_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC3_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC3_CTL_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC3_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC3_CTL_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC3_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DC3_CTL_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC3_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC3_CTL_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC3_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC3_CTL_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC3_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC3_CTL_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC3_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC3_CTL_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC3_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CTE_BIT * 4UL))))

#define ADC1_BITBANDING_DC4_CTL_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC4_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC4_CTL_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC4_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC4_CTL_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC4_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC4_CTL_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC4_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC4_CTL_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC4_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DC4_CTL_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC4_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC4_CTL_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC4_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC4_CTL_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC4_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC4_CTL_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC4_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC4_CTL_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC4_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CTE_BIT * 4UL))))

#define ADC1_BITBANDING_DC5_CTL_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC5_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC5_CTL_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC5_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC5_CTL_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC5_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC5_CTL_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC5_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC5_CTL_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC5_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DC5_CTL_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC5_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC5_CTL_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC5_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC5_CTL_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC5_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC5_CTL_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC5_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC5_CTL_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC5_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CTE_BIT * 4UL))))

#define ADC1_BITBANDING_DC6_CTL_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC6_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC6_CTL_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC6_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC6_CTL_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC6_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC6_CTL_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC6_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC6_CTL_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC6_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DC6_CTL_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC6_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC6_CTL_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC6_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC6_CTL_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC6_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC6_CTL_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC6_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC6_CTL_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC6_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CTE_BIT * 4UL))))

#define ADC1_BITBANDING_DC7_CTL_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC7_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC7_CTL_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC7_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC7_CTL_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC7_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC7_CTL_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC7_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC7_CTL_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC7_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DC7_CTL_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC7_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC7_CTL_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC7_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC7_CTL_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC7_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DC7_CTL_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC7_CTL_OFFSET) * 32UL) + ((ADC_DC_CTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DC7_CTL_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC7_CTL_OFFSET) * 32UL) + (ADC_DC_CTL_R_CTE_BIT * 4UL))))


/******************************************************************************************
*********************************** * 23 DC_CMP *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_DC0_CMP    ((BITBANDING_ADCDC_CMP_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC0_CMP_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DC1_CMP    ((BITBANDING_ADCDC_CMP_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC1_CMP_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DC2_CMP    ((BITBANDING_ADCDC_CMP_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC2_CMP_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DC3_CMP    ((BITBANDING_ADCDC_CMP_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC3_CMP_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DC4_CMP    ((BITBANDING_ADCDC_CMP_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC4_CMP_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DC5_CMP    ((BITBANDING_ADCDC_CMP_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC5_CMP_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DC6_CMP    ((BITBANDING_ADCDC_CMP_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC6_CMP_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DC7_CMP    ((BITBANDING_ADCDC_CMP_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DC7_CMP_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 24 PP *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_PP    ((BITBANDING_ADCPP_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PP_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 25 PC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_PC    ((BITBANDING_ADCPC_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PC_OFFSET) * 32UL)))

#define ADC1_BITBANDING_PC_MCR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PC_OFFSET) * 32UL) + ((ADC_PC_R_MCR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_PC_MCR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PC_OFFSET) * 32UL) + ((ADC_PC_R_MCR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_PC_MCR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PC_OFFSET) * 32UL) + ((ADC_PC_R_MCR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_PC_MCR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PC_OFFSET) * 32UL) + ((ADC_PC_R_MCR_BIT + 3UL) * 4UL))))

/******************************************************************************************
*********************************** * 26 CC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_CC    ((BITBANDING_ADCCC_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_CC_OFFSET) * 32UL)))

#define ADC1_BITBANDING_CC_CS_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_CC_OFFSET) * 32UL) + ((ADC_CC_R_CS_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_CC_CS_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_CC_OFFSET) * 32UL) + ((ADC_CC_R_CS_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_CC_CS_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_CC_OFFSET) * 32UL) + ((ADC_CC_R_CS_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_CC_CS_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_CC_OFFSET) * 32UL) + ((ADC_CC_R_CS_BIT + 3UL) * 4UL))))

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_ADC_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_ */
