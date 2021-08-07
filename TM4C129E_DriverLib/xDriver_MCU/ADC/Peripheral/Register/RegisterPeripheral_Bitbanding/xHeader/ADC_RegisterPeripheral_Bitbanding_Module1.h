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
#define ADC1_BITBANDING    ((ADC_BITBANDING_TypeDef*) (ADC_BITBANDING_BASE + (ADC1_OFFSET * 32UL)))


/******************************************************************************************
*********************************** * 1 ACTSS *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_ACTSS    ((BITBANDING_ADCACTSS_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ACTSS_OFFSET) * 32UL)))

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
#define ADC1_BITBANDING_RIS    ((BITBANDING_ADCRIS_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_RIS_OFFSET) * 32UL)))

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
#define ADC1_BITBANDING_IM    ((BITBANDING_ADCIM_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_IM_OFFSET) * 32UL)))

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
#define ADC1_BITBANDING_ISC    ((BITBANDING_ADCISC_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_ISC_OFFSET) * 32UL)))

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
#define ADC1_BITBANDING_OSTAT    ((BITBANDING_ADCOSTAT_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_OSTAT_OFFSET) * 32UL)))

#define ADC1_BITBANDING_OSTAT_OV0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_OSTAT_OFFSET) * 32UL) + (ADC_OSTAT_R_OV0_BIT * 4UL))))
#define ADC1_BITBANDING_OSTAT_OV1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_OSTAT_OFFSET) * 32UL) + (ADC_OSTAT_R_OV1_BIT * 4UL))))
#define ADC1_BITBANDING_OSTAT_OV2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_OSTAT_OFFSET) * 32UL) + (ADC_OSTAT_R_OV2_BIT * 4UL))))
#define ADC1_BITBANDING_OSTAT_OV3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_OSTAT_OFFSET) * 32UL) + (ADC_OSTAT_R_OV3_BIT * 4UL))))

/******************************************************************************************
*********************************** * 6 EMUX *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_EMUX    ((BITBANDING_ADCEMUX_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_EMUX_OFFSET) * 32UL)))

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
#define ADC1_BITBANDING_USTAT    ((BITBANDING_ADCUSTAT_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_USTAT_OFFSET) * 32UL)))

#define ADC1_BITBANDING_USTAT_UV0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_USTAT_OFFSET) * 32UL) + (ADC_USTAT_R_UV0_BIT * 4UL))))
#define ADC1_BITBANDING_USTAT_UV1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_USTAT_OFFSET) * 32UL) + (ADC_USTAT_R_UV1_BIT * 4UL))))
#define ADC1_BITBANDING_USTAT_UV2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_USTAT_OFFSET) * 32UL) + (ADC_USTAT_R_UV2_BIT * 4UL))))
#define ADC1_BITBANDING_USTAT_UV3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_USTAT_OFFSET) * 32UL) + (ADC_USTAT_R_UV3_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 TSSEL *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_TSSEL    ((BITBANDING_ADCTSSEL_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL)))

#define ADC1_BITBANDING_TSSEL_PS0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_TSSEL_PS0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_TSSEL_PS1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_TSSEL_PS1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_TSSEL_PS2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_TSSEL_PS2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_TSSEL_PS3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_TSSEL_PS3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_TSSEL_OFFSET) * 32UL) + ((ADC_TSSEL_R_PS3_BIT + 1UL) * 4UL))))

/******************************************************************************************
*********************************** * 9 SSPRI *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SSPRI    ((BITBANDING_ADCSSPRI_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSPRI_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SSPRI_SS0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSPRI_OFFSET) * 32UL) + ((ADC_SSPRI_R_SS0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSPRI_SS0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSPRI_OFFSET) * 32UL) + ((ADC_SSPRI_R_SS0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSPRI_SS1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSPRI_OFFSET) * 32UL) + ((ADC_SSPRI_R_SS1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSPRI_SS1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSPRI_OFFSET) * 32UL) + ((ADC_SSPRI_R_SS1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSPRI_SS2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSPRI_OFFSET) * 32UL) + ((ADC_SSPRI_R_SS2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSPRI_SS2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSPRI_OFFSET) * 32UL) + ((ADC_SSPRI_R_SS2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSPRI_SS3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSPRI_OFFSET) * 32UL) + ((ADC_SSPRI_R_SS3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSPRI_SS3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSPRI_OFFSET) * 32UL) + ((ADC_SSPRI_R_SS3_BIT + 1UL) * 4UL))))

/******************************************************************************************
*********************************** * 10 SPC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SPC    ((BITBANDING_ADCSPC_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SPC_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SPC_PHASE_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SPC_OFFSET) * 32UL) + ((ADC_SPC_R_PHASE_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SPC_PHASE_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SPC_OFFSET) * 32UL) + ((ADC_SPC_R_PHASE_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SPC_PHASE_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SPC_OFFSET) * 32UL) + ((ADC_SPC_R_PHASE_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SPC_PHASE_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SPC_OFFSET) * 32UL) + ((ADC_SPC_R_PHASE_BIT + 3UL) * 4UL))))

/******************************************************************************************
*********************************** * 11 PSSI *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_PSSI    ((BITBANDING_ADCPSSI_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PSSI_OFFSET) * 32UL)))

#define ADC1_BITBANDING_PSSI_SS0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PSSI_OFFSET) * 32UL) + (ADC_PSSI_R_SS0_BIT * 4UL))))
#define ADC1_BITBANDING_PSSI_SS1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PSSI_OFFSET) * 32UL) + (ADC_PSSI_R_SS1_BIT * 4UL))))
#define ADC1_BITBANDING_PSSI_SS2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PSSI_OFFSET) * 32UL) + (ADC_PSSI_R_SS2_BIT * 4UL))))
#define ADC1_BITBANDING_PSSI_SS3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PSSI_OFFSET) * 32UL) + (ADC_PSSI_R_SS3_BIT * 4UL))))
#define ADC1_BITBANDING_PSSI_SYNCWAIT    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PSSI_OFFSET) * 32UL) + (ADC_PSSI_R_SYNCWAIT_BIT * 4UL))))
#define ADC1_BITBANDING_PSSI_GSYNC    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PSSI_OFFSET) * 32UL) + (ADC_PSSI_R_GSYNC_BIT * 4UL))))

/******************************************************************************************
*********************************** * 12 SAC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SAC    ((BITBANDING_ADCSAC_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SAC_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SAC_AVG_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SAC_OFFSET) * 32UL) + ((ADC_SAC_R_AVG_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SAC_AVG_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SAC_OFFSET) * 32UL) + ((ADC_SAC_R_AVG_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SAC_AVG_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SAC_OFFSET) * 32UL) + ((ADC_SAC_R_AVG_BIT + 2UL) * 4UL))))

/******************************************************************************************
*********************************** * 13 DCISC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_DCISC    ((BITBANDING_ADCDCISC_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCISC_OFFSET) * 32UL)))

#define ADC1_BITBANDING_DCISC_DCINT0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCISC_OFFSET) * 32UL) + (ADC_DCISC_R_DCINT0_BIT * 4UL))))
#define ADC1_BITBANDING_DCISC_DCINT1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCISC_OFFSET) * 32UL) + (ADC_DCISC_R_DCINT1_BIT * 4UL))))
#define ADC1_BITBANDING_DCISC_DCINT2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCISC_OFFSET) * 32UL) + (ADC_DCISC_R_DCINT2_BIT * 4UL))))
#define ADC1_BITBANDING_DCISC_DCINT3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCISC_OFFSET) * 32UL) + (ADC_DCISC_R_DCINT3_BIT * 4UL))))
#define ADC1_BITBANDING_DCISC_DCINT4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCISC_OFFSET) * 32UL) + (ADC_DCISC_R_DCINT4_BIT * 4UL))))
#define ADC1_BITBANDING_DCISC_DCINT5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCISC_OFFSET) * 32UL) + (ADC_DCISC_R_DCINT5_BIT * 4UL))))
#define ADC1_BITBANDING_DCISC_DCINT6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCISC_OFFSET) * 32UL) + (ADC_DCISC_R_DCINT6_BIT * 4UL))))
#define ADC1_BITBANDING_DCISC_DCINT7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCISC_OFFSET) * 32UL) + (ADC_DCISC_R_DCINT7_BIT * 4UL))))

/******************************************************************************************
*********************************** * 14 CTL *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_CTL    ((BITBANDING_ADCCTL_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_CTL_OFFSET) * 32UL)))

#define ADC1_BITBANDING_CTL_VREF    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_CTL_OFFSET) * 32UL) + (ADC_CTL_R_VREF_BIT * 4UL))))

/******************************************************************************************
*********************************** * 15 SSMUX *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SSMUX0    ((BITBANDING_ADCSSMUX8_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSMUX1    ((BITBANDING_ADCSSMUX4_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSMUX2    ((BITBANDING_ADCSSMUX4_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSMUX3    ((BITBANDING_ADCSSMUX1_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX3_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SSMUX0_MUX0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX1_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX1_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX2_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX2_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX3_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX3_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX4_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX4_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX4_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX4_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX4_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX4_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX4_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX4_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX5_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX5_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX5_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX5_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX5_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX5_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX5_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX5_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX6_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX6_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX6_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX6_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX6_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX6_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX6_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX6_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX7_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX7_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX7_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX7_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX7_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX7_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX0_MUX7_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX0_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX7_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SSMUX1_MUX0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX1_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX1_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX2_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX2_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX3_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX1_MUX3_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX1_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SSMUX2_MUX0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX1_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX1_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX1_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX2_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX2_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX2_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX3_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX2_MUX3_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX2_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX3_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SSMUX3_MUX0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX3_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX3_MUX0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX3_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX3_MUX0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX3_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSMUX3_MUX0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSMUX3_OFFSET) * 32UL) + ((ADC_SSMUX_R_MUX0_BIT + 3UL) * 4UL))))

/******************************************************************************************
*********************************** * 16 SSCTL *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SSCTL0    ((BITBANDING_ADCSSCTL8_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSCTL1    ((BITBANDING_ADCSSCTL4_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSCTL2    ((BITBANDING_ADCSSCTL4_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSCTL3    ((BITBANDING_ADCSSCTL1_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL3_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SSCTL0_D0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_D0_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_END0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_END0_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_IE0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_IE0_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_TS0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_TS0_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_D1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_D1_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_END1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_END1_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_IE1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_IE1_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_TS1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_TS1_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_D2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_D2_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_END2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_END2_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_IE2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_IE2_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_TS2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_TS2_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_D3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_D3_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_END3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_END3_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_IE3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_IE3_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_TS3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_TS3_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_D4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_D4_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_END4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_END4_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_IE4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_IE4_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_TS4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_TS4_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_D5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_D5_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_END5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_END5_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_IE5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_IE5_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_TS5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_TS5_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_D6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_D6_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_END6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_END6_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_IE6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_IE6_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_TS6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_TS6_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_D7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_D7_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_END7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_END7_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_IE7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_IE7_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL0_TS7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL0_OFFSET) * 32UL) + (ADC_SSCTL_R_TS7_BIT * 4UL))))

#define ADC1_BITBANDING_SSCTL1_D0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_D0_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_END0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_END0_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_IE0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_IE0_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_TS0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_TS0_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_D1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_D1_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_END1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_END1_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_IE1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_IE1_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_TS1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_TS1_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_D2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_D2_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_END2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_END2_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_IE2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_IE2_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_TS2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_TS2_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_D3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_D3_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_END3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_END3_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_IE3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_IE3_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL1_TS3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL1_OFFSET) * 32UL) + (ADC_SSCTL_R_TS3_BIT * 4UL))))

#define ADC1_BITBANDING_SSCTL2_D0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_D0_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_END0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_END0_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_IE0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_IE0_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_TS0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_TS0_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_D1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_D1_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_END1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_END1_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_IE1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_IE1_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_TS1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_TS1_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_D2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_D2_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_END2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_END2_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_IE2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_IE2_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_TS2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_TS2_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_D3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_D3_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_END3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_END3_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_IE3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_IE3_BIT * 4UL))))
#define ADC1_BITBANDING_SSCTL2_TS3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSCTL2_OFFSET) * 32UL) + (ADC_SSCTL_R_TS3_BIT * 4UL))))

#define ADC1_BITBANDING_SSFSTAT0_D0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL) + (ADC_SSCTL_R_D0_BIT * 4UL))))
#define ADC1_BITBANDING_SSFSTAT0_END0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL) + (ADC_SSCTL_R_END0_BIT * 4UL))))
#define ADC1_BITBANDING_SSFSTAT0_IE0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL) + (ADC_SSCTL_R_IE0_BIT * 4UL))))
#define ADC1_BITBANDING_SSFSTAT0_TS0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL) + (ADC_SSCTL_R_TS0_BIT * 4UL))))

/******************************************************************************************
*********************************** * 17 SSFIFO *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SSFIFO0    ((BITBANDING_ADCSSFIFO_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFIFO0_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSFIFO1    ((BITBANDING_ADCSSFIFO_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFIFO1_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSFIFO2    ((BITBANDING_ADCSSFIFO_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFIFO2_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSFIFO3    ((BITBANDING_ADCSSFIFO_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFIFO3_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 18 SSFSTAT *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SSFSTAT0    ((BITBANDING_ADCSSFSTAT_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSFSTAT1    ((BITBANDING_ADCSSFSTAT_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT1_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSFSTAT2    ((BITBANDING_ADCSSFSTAT_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT2_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSFSTAT3    ((BITBANDING_ADCSSFSTAT_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT3_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SSFSTAT0_TPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT0_TPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT0_TPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT0_TPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT0_HPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT0_HPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT0_HPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT0_HPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT0_EMPTY    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL) + (ADC_SSFSTAT_R_EMPTY_BIT * 4UL))))
#define ADC1_BITBANDING_SSFSTAT0_FULL    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT0_OFFSET) * 32UL) + (ADC_SSFSTAT_R_FULL_BIT * 4UL))))

#define ADC1_BITBANDING_SSFSTAT1_TPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT1_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT1_TPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT1_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT1_TPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT1_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT1_TPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT1_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT1_HPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT1_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT1_HPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT1_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT1_HPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT1_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT1_HPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT1_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT1_EMPTY    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT1_OFFSET) * 32UL) + (ADC_SSFSTAT_R_EMPTY_BIT * 4UL))))
#define ADC1_BITBANDING_SSFSTAT1_FULL    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT1_OFFSET) * 32UL) + (ADC_SSFSTAT_R_FULL_BIT * 4UL))))

#define ADC1_BITBANDING_SSFSTAT2_TPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT2_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT2_TPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT2_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT2_TPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT2_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT2_TPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT2_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT2_HPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT2_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT2_HPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT2_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT2_HPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT2_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT2_HPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT2_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT2_EMPTY    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT2_OFFSET) * 32UL) + (ADC_SSFSTAT_R_EMPTY_BIT * 4UL))))
#define ADC1_BITBANDING_SSFSTAT2_FULL    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT2_OFFSET) * 32UL) + (ADC_SSFSTAT_R_FULL_BIT * 4UL))))

#define ADC1_BITBANDING_SSFSTAT3_TPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT3_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT3_TPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT3_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT3_TPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT3_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT3_TPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT3_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_TPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT3_HPTR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT3_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT3_HPTR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT3_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT3_HPTR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT3_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT3_HPTR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT3_OFFSET) * 32UL) + ((ADC_SSFSTAT_R_HPTR_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSFSTAT3_EMPTY    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT3_OFFSET) * 32UL) + (ADC_SSFSTAT_R_EMPTY_BIT * 4UL))))
#define ADC1_BITBANDING_SSFSTAT3_FULL    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSFSTAT3_OFFSET) * 32UL) + (ADC_SSFSTAT_R_FULL_BIT * 4UL))))

/******************************************************************************************
*********************************** * 19 SSOP *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SSOP0    ((BITBANDING_ADCSSOP8_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP0_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSOP1    ((BITBANDING_ADCSSOP4_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP1_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSOP2    ((BITBANDING_ADCSSOP4_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP2_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSOP3    ((BITBANDING_ADCSSOP1_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP3_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SSOP0_S0DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP0_OFFSET) * 32UL) + (ADC_SSOP_R_S0DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SSOP0_S1DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP0_OFFSET) * 32UL) + (ADC_SSOP_R_S1DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SSOP0_S2DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP0_OFFSET) * 32UL) + (ADC_SSOP_R_S2DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SSOP0_S3DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP0_OFFSET) * 32UL) + (ADC_SSOP_R_S3DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SSOP0_S4DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP0_OFFSET) * 32UL) + (ADC_SSOP_R_S4DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SSOP0_S5DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP0_OFFSET) * 32UL) + (ADC_SSOP_R_S5DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SSOP0_S6DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP0_OFFSET) * 32UL) + (ADC_SSOP_R_S6DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SSOP0_S7DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP0_OFFSET) * 32UL) + (ADC_SSOP_R_S7DCOP_BIT * 4UL))))

#define ADC1_BITBANDING_SSOP1_S0DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP1_OFFSET) * 32UL) + (ADC_SSOP_R_S0DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SSOP1_S1DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP1_OFFSET) * 32UL) + (ADC_SSOP_R_S1DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SSOP1_S2DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP1_OFFSET) * 32UL) + (ADC_SSOP_R_S2DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SSOP1_S3DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP1_OFFSET) * 32UL) + (ADC_SSOP_R_S3DCOP_BIT * 4UL))))

#define ADC1_BITBANDING_SSOP2_S0DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP2_OFFSET) * 32UL) + (ADC_SSOP_R_S0DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SSOP2_S1DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP2_OFFSET) * 32UL) + (ADC_SSOP_R_S1DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SSOP2_S2DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP2_OFFSET) * 32UL) + (ADC_SSOP_R_S2DCOP_BIT * 4UL))))
#define ADC1_BITBANDING_SSOP2_S3DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP2_OFFSET) * 32UL) + (ADC_SSOP_R_S3DCOP_BIT * 4UL))))

#define ADC1_BITBANDING_SSOP3_S0DCOP    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSOP3_OFFSET) * 32UL) + (ADC_SSOP_R_S0DCOP_BIT * 4UL))))

/******************************************************************************************
*********************************** * 20 SSDC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SSDC0    ((BITBANDING_ADCSSDC8_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSDC1    ((BITBANDING_ADCSSDC4_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSDC2    ((BITBANDING_ADCSSDC4_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSDC3    ((BITBANDING_ADCSSDC1_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC3_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SSDC0_S0DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S0DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S0DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S0DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S1DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S1DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S1DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S1DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S2DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S2DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S2DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S2DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S3DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S3DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S3DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S3DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S4DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S4DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S4DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S4DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S4DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S4DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S4DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S4DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S5DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S5DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S5DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S5DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S5DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S5DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S5DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S5DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S6DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S6DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S6DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S6DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S6DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S6DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S6DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S6DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S7DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S7DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S7DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S7DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S7DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S7DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC0_S7DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC0_OFFSET) * 32UL) + ((ADC_SSDC_R_S7DCSEL_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SSDC1_S0DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S0DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S0DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S0DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S1DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S1DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S1DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S1DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S2DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S2DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S2DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S2DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S3DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S3DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S3DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC1_S3DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC1_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SSDC2_S0DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S0DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S0DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S0DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S1DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S1DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S1DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S1DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S1DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S2DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S2DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S2DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S2DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S2DCSEL_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S3DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S3DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S3DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC2_S3DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC2_OFFSET) * 32UL) + ((ADC_SSDC_R_S3DCSEL_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SSDC3_S0DCSEL_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC3_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSDC3_S0DCSEL_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC3_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSDC3_S0DCSEL_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC3_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSDC3_S0DCSEL_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSDC3_OFFSET) * 32UL) + ((ADC_SSDC_R_S0DCSEL_BIT + 3UL) * 4UL))))

/******************************************************************************************
*********************************** * 20 SSEMUX *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SSEMUX0    ((BITBANDING_ADCSSEMUX8_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX0_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSEMUX1    ((BITBANDING_ADCSSEMUX4_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX1_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSEMUX2    ((BITBANDING_ADCSSEMUX4_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX2_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSEMUX3    ((BITBANDING_ADCSSEMUX1_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX3_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SSEMUX0_EMUX0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX0_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX0_BIT * 4UL))))
#define ADC1_BITBANDING_SSEMUX0_EMUX1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX0_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX1_BIT * 4UL))))
#define ADC1_BITBANDING_SSEMUX0_EMUX2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX0_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX2_BIT * 4UL))))
#define ADC1_BITBANDING_SSEMUX0_EMUX3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX0_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX3_BIT * 4UL))))
#define ADC1_BITBANDING_SSEMUX0_EMUX4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX0_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX4_BIT * 4UL))))
#define ADC1_BITBANDING_SSEMUX0_EMUX5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX0_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX5_BIT * 4UL))))
#define ADC1_BITBANDING_SSEMUX0_EMUX6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX0_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX6_BIT * 4UL))))
#define ADC1_BITBANDING_SSEMUX0_EMUX7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX0_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX7_BIT * 4UL))))

#define ADC1_BITBANDING_SSEMUX1_EMUX0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX1_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX0_BIT * 4UL))))
#define ADC1_BITBANDING_SSEMUX1_EMUX1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX1_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX1_BIT * 4UL))))
#define ADC1_BITBANDING_SSEMUX1_EMUX2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX1_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX2_BIT * 4UL))))
#define ADC1_BITBANDING_SSEMUX1_EMUX3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX1_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX3_BIT * 4UL))))

#define ADC1_BITBANDING_SSEMUX2_EMUX0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX2_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX0_BIT * 4UL))))
#define ADC1_BITBANDING_SSEMUX2_EMUX1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX2_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX1_BIT * 4UL))))
#define ADC1_BITBANDING_SSEMUX2_EMUX2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX2_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX2_BIT * 4UL))))
#define ADC1_BITBANDING_SSEMUX2_EMUX3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX2_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX3_BIT * 4UL))))

#define ADC1_BITBANDING_SSEMUX3_EMUX0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSEMUX3_OFFSET) * 32UL) + (ADC_SSEMUX_R_EMUX0_BIT * 4UL))))

/******************************************************************************************
*********************************** * 20 SSTSH *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_SSTSH0    ((BITBANDING_ADCSSTSH8_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSTSH1    ((BITBANDING_ADCSSTSH4_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSTSH2    ((BITBANDING_ADCSSTSH4_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL)))
#define ADC1_BITBANDING_SSTSH3    ((BITBANDING_ADCSSTSH1_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH3_OFFSET) * 32UL)))

#define ADC1_BITBANDING_SSTSH0_TSH0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH1_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH1_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH2_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH2_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH3_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH3_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH4_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH4_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH4_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH4_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH4_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH4_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH4_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH4_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH5_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH5_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH5_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH5_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH5_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH5_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH5_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH5_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH6_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH6_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH6_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH6_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH6_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH6_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH6_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH6_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH7_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH7_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH7_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH7_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH7_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH7_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH0_TSH7_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH0_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH7_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SSTSH1_TSH0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH1_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH1_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH2_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH2_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH3_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH1_TSH3_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH1_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SSTSH2_TSH0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH1_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH1_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH1_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH1_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH1_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH2_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH2_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH2_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH2_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH2_BIT + 3UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH3_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH3_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH3_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH2_TSH3_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH2_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH3_BIT + 3UL) * 4UL))))

#define ADC1_BITBANDING_SSTSH3_TSH0_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH3_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH3_TSH0_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH3_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH3_TSH0_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH3_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_SSTSH3_TSH0_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_SSTSH3_OFFSET) * 32UL) + ((ADC_SSTSH_R_TSH0_BIT + 3UL) * 4UL))))

/******************************************************************************************
*********************************** * 21 DCRIC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_DCRIC    ((BITBANDING_ADCDCRIC_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL)))

#define ADC1_BITBANDING_DCRIC_DCINT0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCINT0_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCINT1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCINT1_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCINT2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCINT2_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCINT3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCINT3_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCINT4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCINT4_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCINT5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCINT5_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCINT6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCINT6_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCINT7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCINT7_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCTRIG0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCTRIG0_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCTRIG1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCTRIG1_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCTRIG2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCTRIG2_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCTRIG3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCTRIG3_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCTRIG4    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCTRIG4_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCTRIG5    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCTRIG5_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCTRIG6    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCTRIG6_BIT * 4UL))))
#define ADC1_BITBANDING_DCRIC_DCTRIG7    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCRIC_OFFSET) * 32UL) + (ADC_DCRIC_R_DCTRIG7_BIT * 4UL))))

/******************************************************************************************
*********************************** * 22 DCCTL *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_DCCTL0    ((BITBANDING_ADCDCCTL_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL0_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DCCTL1    ((BITBANDING_ADCDCCTL_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL1_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DCCTL2    ((BITBANDING_ADCDCCTL_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL2_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DCCTL3    ((BITBANDING_ADCDCCTL_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL3_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DCCTL4    ((BITBANDING_ADCDCCTL_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL4_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DCCTL5    ((BITBANDING_ADCDCCTL_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL5_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DCCTL6    ((BITBANDING_ADCDCCTL_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL6_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DCCTL7    ((BITBANDING_ADCDCCTL_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL7_OFFSET) * 32UL)))

#define ADC1_BITBANDING_DCCTL0_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL0_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL0_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL0_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL0_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL0_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL0_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL0_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL0_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL0_OFFSET) * 32UL) + (ADC_DCCTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DCCTL0_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL0_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL0_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL0_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL0_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL0_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL0_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL0_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL0_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL0_OFFSET) * 32UL) + (ADC_DCCTL_R_CTE_BIT * 4UL))))

#define ADC1_BITBANDING_DCCTL1_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL1_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL1_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL1_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL1_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL1_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL1_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL1_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL1_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL1_OFFSET) * 32UL) + (ADC_DCCTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DCCTL1_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL1_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL1_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL1_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL1_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL1_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL1_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL1_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL1_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL1_OFFSET) * 32UL) + (ADC_DCCTL_R_CTE_BIT * 4UL))))

#define ADC1_BITBANDING_DCCTL2_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL2_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL2_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL2_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL2_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL2_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL2_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL2_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL2_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL2_OFFSET) * 32UL) + (ADC_DCCTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DCCTL2_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL2_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL2_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL2_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL2_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL2_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL2_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL2_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL2_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL2_OFFSET) * 32UL) + (ADC_DCCTL_R_CTE_BIT * 4UL))))

#define ADC1_BITBANDING_DCCTL3_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL3_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL3_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL3_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL3_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL3_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL3_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL3_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL3_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL3_OFFSET) * 32UL) + (ADC_DCCTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DCCTL3_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL3_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL3_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL3_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL3_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL3_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL3_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL3_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL3_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL3_OFFSET) * 32UL) + (ADC_DCCTL_R_CTE_BIT * 4UL))))

#define ADC1_BITBANDING_DCCTL4_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL4_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL4_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL4_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL4_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL4_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL4_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL4_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL4_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL4_OFFSET) * 32UL) + (ADC_DCCTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DCCTL4_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL4_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL4_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL4_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL4_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL4_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL4_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL4_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL4_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL4_OFFSET) * 32UL) + (ADC_DCCTL_R_CTE_BIT * 4UL))))

#define ADC1_BITBANDING_DCCTL5_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL5_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL5_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL5_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL5_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL5_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL5_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL5_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL5_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL5_OFFSET) * 32UL) + (ADC_DCCTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DCCTL5_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL5_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL5_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL5_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL5_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL5_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL5_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL5_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL5_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL5_OFFSET) * 32UL) + (ADC_DCCTL_R_CTE_BIT * 4UL))))

#define ADC1_BITBANDING_DCCTL6_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL6_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL6_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL6_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL6_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL6_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL6_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL6_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL6_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL6_OFFSET) * 32UL) + (ADC_DCCTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DCCTL6_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL6_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL6_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL6_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL6_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL6_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL6_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL6_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL6_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL6_OFFSET) * 32UL) + (ADC_DCCTL_R_CTE_BIT * 4UL))))

#define ADC1_BITBANDING_DCCTL7_CIM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL7_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL7_CIM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL7_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL7_CIC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL7_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL7_CIC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL7_OFFSET) * 32UL) + ((ADC_DCCTL_R_CIC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL7_CIE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL7_OFFSET) * 32UL) + (ADC_DCCTL_R_CIE_BIT * 4UL))))
#define ADC1_BITBANDING_DCCTL7_CTM_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL7_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL7_CTM_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL7_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTM_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL7_CTC_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL7_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL7_CTC_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL7_OFFSET) * 32UL) + ((ADC_DCCTL_R_CTC_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_DCCTL7_CTE    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCTL7_OFFSET) * 32UL) + (ADC_DCCTL_R_CTE_BIT * 4UL))))


/******************************************************************************************
*********************************** * 23 DCCMP *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_DCCMP0    ((BITBANDING_ADCDCCMP_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCMP0_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DCCMP1    ((BITBANDING_ADCDCCMP_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCMP1_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DCCMP2    ((BITBANDING_ADCDCCMP_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCMP2_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DCCMP3    ((BITBANDING_ADCDCCMP_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCMP3_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DCCMP4    ((BITBANDING_ADCDCCMP_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCMP4_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DCCMP5    ((BITBANDING_ADCDCCMP_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCMP5_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DCCMP6    ((BITBANDING_ADCDCCMP_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCMP6_OFFSET) * 32UL)))
#define ADC1_BITBANDING_DCCMP7    ((BITBANDING_ADCDCCMP_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_DCCMP7_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 24 PP *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_PP    ((BITBANDING_ADCPP_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PP_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 25 PC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_PC    ((BITBANDING_ADCPC_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PC_OFFSET) * 32UL)))

#define ADC1_BITBANDING_PC_MCR_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PC_OFFSET) * 32UL) + ((ADC_PC_R_MCR_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_PC_MCR_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PC_OFFSET) * 32UL) + ((ADC_PC_R_MCR_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_PC_MCR_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PC_OFFSET) * 32UL) + ((ADC_PC_R_MCR_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_PC_MCR_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_PC_OFFSET) * 32UL) + ((ADC_PC_R_MCR_BIT + 3UL) * 4UL))))

/******************************************************************************************
*********************************** * 26 CC *********************************************
******************************************************************************************/
#define ADC1_BITBANDING_CC    ((BITBANDING_ADCCC_TypeDef*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_CC_OFFSET) * 32UL)))

#define ADC1_BITBANDING_CC_CS_0    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_CC_OFFSET) * 32UL) + ((ADC_CC_R_CS_BIT + 0UL) * 4UL))))
#define ADC1_BITBANDING_CC_CS_1    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_CC_OFFSET) * 32UL) + ((ADC_CC_R_CS_BIT + 1UL) * 4UL))))
#define ADC1_BITBANDING_CC_CS_2    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_CC_OFFSET) * 32UL) + ((ADC_CC_R_CS_BIT + 2UL) * 4UL))))
#define ADC1_BITBANDING_CC_CS_3    (*((volatile uint32_t*) (ADC_BITBANDING_BASE + ((ADC1_OFFSET + ADC_CC_OFFSET) * 32UL) + ((ADC_CC_R_CS_BIT + 3UL) * 4UL))))

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_ADC_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_ */
