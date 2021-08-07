/**
 *
 * @file ADC_RegisterPeripheral_Module1.h
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
 * Date           Author     Version     Description
 * 15 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ADC_REGISTERPERIPHERAL_MODULE1_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ADC_REGISTERPERIPHERAL_MODULE1_H_

#include <xDriver_MCU/ADC/Peripheral/Register/xHeader/ADC_RegisterAddress.h>
#include <xDriver_MCU/ADC/Peripheral/Struct/xHeader/ADC_StructPeripheral.h>

/******************************************************************************************
************************************ ADC1 *********************************************
******************************************************************************************/

#define ADC1    ((ADC_TypeDef*) (ADC1_BASE))

/******************************************************************************************
************************************ 1 ACTSS *********************************************
******************************************************************************************/
#define ADC1_ACTSS    ((ADCACTSS_TypeDef*) (ADC1_BASE + ADC_ACTSS_OFFSET))
#define ADC1_ACTSS_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_ACTSS_OFFSET)))

/******************************************************************************************
************************************ 2 RIS *********************************************
******************************************************************************************/
#define ADC1_RIS    ((ADCRIS_TypeDef*) (ADC1_BASE + ADC_RIS_OFFSET))
#define ADC1_RIS_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_RIS_OFFSET)))

/******************************************************************************************
************************************ 3 IM *********************************************
******************************************************************************************/
#define ADC1_IM    ((ADCIM_TypeDef*) (ADC1_BASE + ADC_IM_OFFSET))
#define ADC1_IM_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_IM_OFFSET)))

/******************************************************************************************
************************************ 4 ISC *********************************************
******************************************************************************************/
#define ADC1_ISC    ((ADCISC_TypeDef*) (ADC1_BASE + ADC_ISC_OFFSET))
#define ADC1_ISC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_ISC_OFFSET)))

/******************************************************************************************
************************************ 5 OSTAT *********************************************
******************************************************************************************/
#define ADC1_OSTAT    ((ADCOSTAT_TypeDef*) (ADC1_BASE + ADC_OSTAT_OFFSET))
#define ADC1_OSTAT_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_OSTAT_OFFSET)))

/******************************************************************************************
************************************ 6 EMUX *********************************************
******************************************************************************************/
#define ADC1_EMUX    ((ADCEMUX_TypeDef*) (ADC1_BASE + ADC_EMUX_OFFSET))
#define ADC1_EMUX_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_EMUX_OFFSET)))

/******************************************************************************************
************************************ 7 USTAT *********************************************
******************************************************************************************/
#define ADC1_USTAT    ((ADCUSTAT_TypeDef*) (ADC1_BASE + ADC_USTAT_OFFSET))
#define ADC1_USTAT_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_USTAT_OFFSET)))

/******************************************************************************************
************************************ 8 TSSEL *********************************************
******************************************************************************************/
#define ADC1_TSSEL    ((ADCTSSEL_TypeDef*) (ADC1_BASE + ADC_TSSEL_OFFSET))
#define ADC1_TSSEL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_TSSEL_OFFSET)))

/******************************************************************************************
************************************ 9 SSPRI *********************************************
******************************************************************************************/
#define ADC1_SSPRI    ((ADCSSPRI_TypeDef*) (ADC1_BASE + ADC_SSPRI_OFFSET))
#define ADC1_SSPRI_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSPRI_OFFSET)))

/******************************************************************************************
************************************ 10 SPC *********************************************
******************************************************************************************/
#define ADC1_SPC    ((ADCSPC_TypeDef*) (ADC1_BASE + ADC_SPC_OFFSET))
#define ADC1_SPC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SPC_OFFSET)))

/******************************************************************************************
************************************ 11 PSSI *********************************************
******************************************************************************************/
#define ADC1_PSSI    ((ADCPSSI_TypeDef*) (ADC1_BASE + ADC_PSSI_OFFSET))
#define ADC1_PSSI_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_PSSI_OFFSET)))

/******************************************************************************************
************************************ 12 SAC *********************************************
******************************************************************************************/
#define ADC1_SAC    ((ADCSAC_TypeDef*) (ADC1_BASE + ADC_SAC_OFFSET))
#define ADC1_SAC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SAC_OFFSET)))

/******************************************************************************************
************************************ 13 DCISC *********************************************
******************************************************************************************/
#define ADC1_DCISC    ((ADCDCISC_TypeDef*) (ADC1_BASE + ADC_DCISC_OFFSET))
#define ADC1_DCISC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCISC_OFFSET)))

/******************************************************************************************
************************************ 14 CTL *********************************************
******************************************************************************************/
#define ADC1_CTL    ((ADCCTL_TypeDef*) (ADC1_BASE + ADC_CTL_OFFSET))
#define ADC1_CTL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_CTL_OFFSET)))

/******************************************************************************************
************************************ 15 SSMUX *********************************************
******************************************************************************************/
#define ADC1_SSMUX0    ((ADCSSMUX8_TypeDef*) (ADC1_BASE + ADC_SSMUX0_OFFSET))
#define ADC1_SSMUX0_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSMUX0_OFFSET)))

#define ADC1_SSMUX1    ((ADCSSMUX4_TypeDef*) (ADC1_BASE + ADC_SSMUX1_OFFSET))
#define ADC1_SSMUX1_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSMUX1_OFFSET)))

#define ADC1_SSMUX2    ((ADCSSMUX4_TypeDef*) (ADC1_BASE + ADC_SSMUX2_OFFSET))
#define ADC1_SSMUX2_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSMUX2_OFFSET)))

#define ADC1_SSMUX3    ((ADCSSMUX1_TypeDef*) (ADC1_BASE + ADC_SSMUX3_OFFSET))
#define ADC1_SSMUX3_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSMUX3_OFFSET)))

/******************************************************************************************
************************************ 16 SSCTL *********************************************
******************************************************************************************/
#define ADC1_SSCTL0    ((ADCSSCTL8_TypeDef*) (ADC1_BASE + ADC_SSCTL0_OFFSET))
#define ADC1_SSCTL0_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSCTL0_OFFSET)))

#define ADC1_SSCTL1    ((ADCSSCTL4_TypeDef*) (ADC1_BASE + ADC_SSCTL1_OFFSET))
#define ADC1_SSCTL1_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSCTL1_OFFSET)))

#define ADC1_SSCTL2    ((ADCSSCTL4_TypeDef*) (ADC1_BASE + ADC_SSCTL2_OFFSET))
#define ADC1_SSCTL2_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSCTL2_OFFSET)))

#define ADC1_SSCTL3    ((ADCSSCTL1_TypeDef*) (ADC1_BASE + ADC_SSCTL3_OFFSET))
#define ADC1_SSCTL3_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSCTL3_OFFSET)))

/******************************************************************************************
************************************ 17 SSFIFO *********************************************
******************************************************************************************/
#define ADC1_SSFIFO0    ((ADCSSFIFO_TypeDef*) (ADC1_BASE + ADC_SSFIFO0_OFFSET))
#define ADC1_SSFIFO0_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_SSFIFO0_OFFSET)))

#define ADC1_SSFIFO1    ((ADCSSFIFO_TypeDef*) (ADC1_BASE + ADC_SSFIFO1_OFFSET))
#define ADC1_SSFIFO1_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_SSFIFO1_OFFSET)))

#define ADC1_SSFIFO2    ((ADCSSFIFO_TypeDef*) (ADC1_BASE + ADC_SSFIFO2_OFFSET))
#define ADC1_SSFIFO2_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_SSFIFO2_OFFSET)))

#define ADC1_SSFIFO3    ((ADCSSFIFO_TypeDef*) (ADC1_BASE + ADC_SSFIFO3_OFFSET))
#define ADC1_SSFIFO3_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_SSFIFO3_OFFSET)))

/******************************************************************************************
************************************ 18 SSFSTAT *********************************************
******************************************************************************************/
#define ADC1_SSFSTAT0    ((ADCSSFSTAT_TypeDef*) (ADC1_BASE + ADC_SSFSTAT0_OFFSET))
#define ADC1_SSFSTAT0_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSFSTAT0_OFFSET)))

#define ADC1_SSFSTAT1    ((ADCSSFSTAT_TypeDef*) (ADC1_BASE + ADC_SSFSTAT1_OFFSET))
#define ADC1_SSFSTAT1_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_SSFSTAT1_OFFSET)))

#define ADC1_SSFSTAT2    ((ADCSSFSTAT_TypeDef*) (ADC1_BASE + ADC_SSFSTAT2_OFFSET))
#define ADC1_SSFSTAT2_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_SSFSTAT2_OFFSET)))

#define ADC1_SSFSTAT3    ((ADCSSFSTAT_TypeDef*) (ADC1_BASE + ADC_SSFSTAT3_OFFSET))
#define ADC1_SSFSTAT3_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_SSFSTAT3_OFFSET)))

/******************************************************************************************
************************************ 19 SSOP *********************************************
******************************************************************************************/
#define ADC1_SSOP0    ((ADCSSOP8_TypeDef*) (ADC1_BASE + ADC_SSOP0_OFFSET))
#define ADC1_SSOP0_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSOP0_OFFSET)))

#define ADC1_SSOP1    ((ADCSSOP4_TypeDef*) (ADC1_BASE + ADC_SSOP1_OFFSET))
#define ADC1_SSOP1_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSOP1_OFFSET)))

#define ADC1_SSOP2    ((ADCSSOP4_TypeDef*) (ADC1_BASE + ADC_SSOP2_OFFSET))
#define ADC1_SSOP2_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSOP2_OFFSET)))

#define ADC1_SSOP3    ((ADCSSOP1_TypeDef*) (ADC1_BASE + ADC_SSOP3_OFFSET))
#define ADC1_SSOP3_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSOP3_OFFSET)))

/******************************************************************************************
************************************ 20 SSDC *********************************************
******************************************************************************************/
#define ADC1_SSDC0    ((ADCSSDC8_TypeDef*) (ADC1_BASE + ADC_SSDC0_OFFSET))
#define ADC1_SSDC0_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSDC0_OFFSET)))

#define ADC1_SSDC1    ((ADCSSDC4_TypeDef*) (ADC1_BASE + ADC_SSDC1_OFFSET))
#define ADC1_SSDC1_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSDC1_OFFSET)))

#define ADC1_SSDC2    ((ADCSSDC4_TypeDef*) (ADC1_BASE + ADC_SSDC2_OFFSET))
#define ADC1_SSDC2_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSDC2_OFFSET)))

#define ADC1_SSDC3    ((ADCSSDC1_TypeDef*) (ADC1_BASE + ADC_SSDC3_OFFSET))
#define ADC1_SSDC3_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSDC3_OFFSET)))

/******************************************************************************************
************************************ 20 SSEMUX *********************************************
******************************************************************************************/
#define ADC1_SSEMUX0    ((ADCSSEMUX8_TypeDef*) (ADC1_BASE + ADC_SSEMUX0_OFFSET))
#define ADC1_SSEMUX0_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSEMUX0_OFFSET)))

#define ADC1_SSEMUX1    ((ADCSSEMUX4_TypeDef*) (ADC1_BASE + ADC_SSEMUX1_OFFSET))
#define ADC1_SSEMUX1_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSEMUX1_OFFSET)))

#define ADC1_SSEMUX2    ((ADCSSEMUX4_TypeDef*) (ADC1_BASE + ADC_SSEMUX2_OFFSET))
#define ADC1_SSEMUX2_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSEMUX2_OFFSET)))

#define ADC1_SSEMUX3    ((ADCSSEMUX1_TypeDef*) (ADC1_BASE + ADC_SSEMUX3_OFFSET))
#define ADC1_SSEMUX3_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSEMUX3_OFFSET)))

/******************************************************************************************
************************************ 20 SSTSH *********************************************
******************************************************************************************/
#define ADC1_SSTSH0    ((ADCSSTSH8_TypeDef*) (ADC1_BASE + ADC_SSTSH0_OFFSET))
#define ADC1_SSTSH0_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSTSH0_OFFSET)))

#define ADC1_SSTSH1    ((ADCSSTSH4_TypeDef*) (ADC1_BASE + ADC_SSTSH1_OFFSET))
#define ADC1_SSTSH1_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSTSH1_OFFSET)))

#define ADC1_SSTSH2    ((ADCSSTSH4_TypeDef*) (ADC1_BASE + ADC_SSTSH2_OFFSET))
#define ADC1_SSTSH2_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSTSH2_OFFSET)))

#define ADC1_SSTSH3    ((ADCSSTSH1_TypeDef*) (ADC1_BASE + ADC_SSTSH3_OFFSET))
#define ADC1_SSTSH3_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSTSH3_OFFSET)))

/******************************************************************************************
************************************ 21 DCRIC *********************************************
******************************************************************************************/
#define ADC1_DCRIC    ((ADCDCRIC_TypeDef*) (ADC1_BASE + ADC_DCRIC_OFFSET))
#define ADC1_DCRIC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCRIC_OFFSET)))

/******************************************************************************************
************************************ 22 DCCTL *********************************************
******************************************************************************************/
#define ADC1_DCCTL0    ((ADCDCCTL_TypeDef*) (ADC1_BASE + ADC_DCCTL0_OFFSET))
#define ADC1_DCCTL0_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCTL0_OFFSET)))

#define ADC1_DCCTL1    ((ADCDCCTL_TypeDef*) (ADC1_BASE + ADC_DCCTL1_OFFSET))
#define ADC1_DCCTL1_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCTL1_OFFSET)))

#define ADC1_DCCTL2    ((ADCDCCTL_TypeDef*) (ADC1_BASE + ADC_DCCTL2_OFFSET))
#define ADC1_DCCTL2_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCTL2_OFFSET)))

#define ADC1_DCCTL3    ((ADCDCCTL_TypeDef*) (ADC1_BASE + ADC_DCCTL3_OFFSET))
#define ADC1_DCCTL3_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCTL3_OFFSET)))

#define ADC1_DCCTL4    ((ADCDCCTL_TypeDef*) (ADC1_BASE + ADC_DCCTL4_OFFSET))
#define ADC1_DCCTL4_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCTL4_OFFSET)))

#define ADC1_DCCTL5    ((ADCDCCTL_TypeDef*) (ADC1_BASE + ADC_DCCTL5_OFFSET))
#define ADC1_DCCTL5_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCTL5_OFFSET)))

#define ADC1_DCCTL6    ((ADCDCCTL_TypeDef*) (ADC1_BASE + ADC_DCCTL6_OFFSET))
#define ADC1_DCCTL6_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCTL6_OFFSET)))

#define ADC1_DCCTL7    ((ADCDCCTL_TypeDef*) (ADC1_BASE + ADC_DCCTL7_OFFSET))
#define ADC1_DCCTL7_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCTL7_OFFSET)))

/******************************************************************************************
************************************ 23 DCCMP *********************************************
******************************************************************************************/
#define ADC1_DCCMP0    ((ADCDCCMP_TypeDef*) (ADC1_BASE + ADC_DCCMP0_OFFSET))
#define ADC1_DCCMP0_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCMP0_OFFSET)))

#define ADC1_DCCMP1    ((ADCDCCMP_TypeDef*) (ADC1_BASE + ADC_DCCMP1_OFFSET))
#define ADC1_DCCMP1_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCMP1_OFFSET)))

#define ADC1_DCCMP2    ((ADCDCCMP_TypeDef*) (ADC1_BASE + ADC_DCCMP2_OFFSET))
#define ADC1_DCCMP2_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCMP2_OFFSET)))

#define ADC1_DCCMP3    ((ADCDCCMP_TypeDef*) (ADC1_BASE + ADC_DCCMP3_OFFSET))
#define ADC1_DCCMP3_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCMP3_OFFSET)))

#define ADC1_DCCMP4    ((ADCDCCMP_TypeDef*) (ADC1_BASE + ADC_DCCMP4_OFFSET))
#define ADC1_DCCMP4_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCMP4_OFFSET)))

#define ADC1_DCCMP5    ((ADCDCCMP_TypeDef*) (ADC1_BASE + ADC_DCCMP5_OFFSET))
#define ADC1_DCCMP5_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCMP5_OFFSET)))

#define ADC1_DCCMP6    ((ADCDCCMP_TypeDef*) (ADC1_BASE + ADC_DCCMP6_OFFSET))
#define ADC1_DCCMP6_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCMP6_OFFSET)))

#define ADC1_DCCMP7    ((ADCDCCMP_TypeDef*) (ADC1_BASE + ADC_DCCMP7_OFFSET))
#define ADC1_DCCMP7_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DCCMP7_OFFSET)))

/******************************************************************************************
************************************ 24 PP *********************************************
******************************************************************************************/
#define ADC1_PP    ((ADCPP_TypeDef*) (ADC1_BASE + ADC_PP_OFFSET))
#define ADC1_PP_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_PP_OFFSET)))

/******************************************************************************************
************************************ 25 PC *********************************************
******************************************************************************************/
#define ADC1_PC    ((ADCPC_TypeDef*) (ADC1_BASE + ADC_PC_OFFSET))
#define ADC1_PC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_PC_OFFSET)))

/******************************************************************************************
************************************ 26 CC *********************************************
******************************************************************************************/
#define ADC1_CC    ((ADCCC_TypeDef*) (ADC1_BASE + ADC_CC_OFFSET))
#define ADC1_CC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_CC_OFFSET)))

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ADC_REGISTERPERIPHERAL_MODULE1_H_ */
