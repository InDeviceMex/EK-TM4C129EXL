/**
 *
 * @file ADC_RegisterPeripheral_Module0.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ADC_REGISTERPERIPHERAL_MODULE0_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ADC_REGISTERPERIPHERAL_MODULE0_H_

#include <xDriver_MCU/ADC/Peripheral/Register/xHeader/ADC_RegisterAddress.h>
#include <xDriver_MCU/ADC/Peripheral/Struct/xHeader/ADC_StructPeripheral.h>

/******************************************************************************************
************************************ ADC0 *********************************************
******************************************************************************************/

#define ADC0    ((ADC_TypeDef*) (ADC0_BASE))

/******************************************************************************************
************************************ 1 ACTSS *********************************************
******************************************************************************************/
#define ADC0_ACTSS    ((ADCACTSS_TypeDef*) (ADC0_BASE + ADC_ACTSS_OFFSET))
#define ADC0_ACTSS_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_ACTSS_OFFSET)))

/******************************************************************************************
************************************ 2 RIS *********************************************
******************************************************************************************/
#define ADC0_RIS    ((ADCRIS_TypeDef*) (ADC0_BASE + ADC_RIS_OFFSET))
#define ADC0_RIS_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_RIS_OFFSET)))

/******************************************************************************************
************************************ 3 IM *********************************************
******************************************************************************************/
#define ADC0_IM    ((ADCIM_TypeDef*) (ADC0_BASE + ADC_IM_OFFSET))
#define ADC0_IM_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_IM_OFFSET)))

/******************************************************************************************
************************************ 4 ISC *********************************************
******************************************************************************************/
#define ADC0_ISC    ((ADCISC_TypeDef*) (ADC0_BASE + ADC_ISC_OFFSET))
#define ADC0_ISC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_ISC_OFFSET)))

/******************************************************************************************
************************************ 5 OSTAT *********************************************
******************************************************************************************/
#define ADC0_OSTAT    ((ADCOSTAT_TypeDef*) (ADC0_BASE + ADC_OSTAT_OFFSET))
#define ADC0_OSTAT_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_OSTAT_OFFSET)))

/******************************************************************************************
************************************ 6 EMUX *********************************************
******************************************************************************************/
#define ADC0_EMUX    ((ADCEMUX_TypeDef*) (ADC0_BASE + ADC_EMUX_OFFSET))
#define ADC0_EMUX_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_EMUX_OFFSET)))

/******************************************************************************************
************************************ 7 USTAT *********************************************
******************************************************************************************/
#define ADC0_USTAT    ((ADCUSTAT_TypeDef*) (ADC0_BASE + ADC_USTAT_OFFSET))
#define ADC0_USTAT_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_USTAT_OFFSET)))

/******************************************************************************************
************************************ 8 TSSEL *********************************************
******************************************************************************************/
#define ADC0_TSSEL    ((ADCTSSEL_TypeDef*) (ADC0_BASE + ADC_TSSEL_OFFSET))
#define ADC0_TSSEL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_TSSEL_OFFSET)))

/******************************************************************************************
************************************ 9 SSPRI *********************************************
******************************************************************************************/
#define ADC0_SSPRI    ((ADCSSPRI_TypeDef*) (ADC0_BASE + ADC_SSPRI_OFFSET))
#define ADC0_SSPRI_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSPRI_OFFSET)))

/******************************************************************************************
************************************ 10 SPC *********************************************
******************************************************************************************/
#define ADC0_SPC    ((ADCSPC_TypeDef*) (ADC0_BASE + ADC_SPC_OFFSET))
#define ADC0_SPC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SPC_OFFSET)))

/******************************************************************************************
************************************ 11 PSSI *********************************************
******************************************************************************************/
#define ADC0_PSSI    ((ADCPSSI_TypeDef*) (ADC0_BASE + ADC_PSSI_OFFSET))
#define ADC0_PSSI_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_PSSI_OFFSET)))

/******************************************************************************************
************************************ 12 SAC *********************************************
******************************************************************************************/
#define ADC0_SAC    ((ADCSAC_TypeDef*) (ADC0_BASE + ADC_SAC_OFFSET))
#define ADC0_SAC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SAC_OFFSET)))

/******************************************************************************************
************************************ 13 DCISC *********************************************
******************************************************************************************/
#define ADC0_DCISC    ((ADCDCISC_TypeDef*) (ADC0_BASE + ADC_DCISC_OFFSET))
#define ADC0_DCISC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCISC_OFFSET)))

/******************************************************************************************
************************************ 14 CTL *********************************************
******************************************************************************************/
#define ADC0_CTL    ((ADCCTL_TypeDef*) (ADC0_BASE + ADC_CTL_OFFSET))
#define ADC0_CTL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_CTL_OFFSET)))

/******************************************************************************************
************************************ 15 SSMUX *********************************************
******************************************************************************************/
#define ADC0_SSMUX0    ((ADCSSMUX8_TypeDef*) (ADC0_BASE + ADC_SSMUX0_OFFSET))
#define ADC0_SSMUX0_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSMUX0_OFFSET)))

#define ADC0_SSMUX1    ((ADCSSMUX4_TypeDef*) (ADC0_BASE + ADC_SSMUX1_OFFSET))
#define ADC0_SSMUX1_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSMUX1_OFFSET)))

#define ADC0_SSMUX2    ((ADCSSMUX4_TypeDef*) (ADC0_BASE + ADC_SSMUX2_OFFSET))
#define ADC0_SSMUX2_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSMUX2_OFFSET)))

#define ADC0_SSMUX3    ((ADCSSMUX1_TypeDef*) (ADC0_BASE + ADC_SSMUX3_OFFSET))
#define ADC0_SSMUX3_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSMUX3_OFFSET)))

/******************************************************************************************
************************************ 16 SSCTL *********************************************
******************************************************************************************/
#define ADC0_SSCTL0    ((ADCSSCTL8_TypeDef*) (ADC0_BASE + ADC_SSCTL0_OFFSET))
#define ADC0_SSCTL0_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSCTL0_OFFSET)))

#define ADC0_SSCTL1    ((ADCSSCTL4_TypeDef*) (ADC0_BASE + ADC_SSCTL1_OFFSET))
#define ADC0_SSCTL1_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSCTL1_OFFSET)))

#define ADC0_SSCTL2    ((ADCSSCTL4_TypeDef*) (ADC0_BASE + ADC_SSCTL2_OFFSET))
#define ADC0_SSCTL2_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSCTL2_OFFSET)))

#define ADC0_SSCTL3    ((ADCSSCTL1_TypeDef*) (ADC0_BASE + ADC_SSCTL3_OFFSET))
#define ADC0_SSCTL3_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSCTL3_OFFSET)))

/******************************************************************************************
************************************ 17 SSFIFO *********************************************
******************************************************************************************/
#define ADC0_SSFIFO0    ((ADCSSFIFO_TypeDef*) (ADC0_BASE + ADC_SSFIFO0_OFFSET))
#define ADC0_SSFIFO0_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_SSFIFO0_OFFSET)))

#define ADC0_SSFIFO1    ((ADCSSFIFO_TypeDef*) (ADC0_BASE + ADC_SSFIFO1_OFFSET))
#define ADC0_SSFIFO1_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_SSFIFO1_OFFSET)))

#define ADC0_SSFIFO2    ((ADCSSFIFO_TypeDef*) (ADC0_BASE + ADC_SSFIFO2_OFFSET))
#define ADC0_SSFIFO2_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_SSFIFO2_OFFSET)))

#define ADC0_SSFIFO3    ((ADCSSFIFO_TypeDef*) (ADC0_BASE + ADC_SSFIFO3_OFFSET))
#define ADC0_SSFIFO3_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_SSFIFO3_OFFSET)))

/******************************************************************************************
************************************ 18 SSFSTAT *********************************************
******************************************************************************************/
#define ADC0_SSFSTAT0    ((ADCSSFSTAT_TypeDef*) (ADC0_BASE + ADC_SSFSTAT0_OFFSET))
#define ADC0_SSFSTAT0_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSFSTAT0_OFFSET)))

#define ADC0_SSFSTAT1    ((ADCSSFSTAT_TypeDef*) (ADC0_BASE + ADC_SSFSTAT1_OFFSET))
#define ADC0_SSFSTAT1_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_SSFSTAT1_OFFSET)))

#define ADC0_SSFSTAT2    ((ADCSSFSTAT_TypeDef*) (ADC0_BASE + ADC_SSFSTAT2_OFFSET))
#define ADC0_SSFSTAT2_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_SSFSTAT2_OFFSET)))

#define ADC0_SSFSTAT3    ((ADCSSFSTAT_TypeDef*) (ADC0_BASE + ADC_SSFSTAT3_OFFSET))
#define ADC0_SSFSTAT3_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_SSFSTAT3_OFFSET)))

/******************************************************************************************
************************************ 19 SSOP *********************************************
******************************************************************************************/
#define ADC0_SSOP0    ((ADCSSOP8_TypeDef*) (ADC0_BASE + ADC_SSOP0_OFFSET))
#define ADC0_SSOP0_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSOP0_OFFSET)))

#define ADC0_SSOP1    ((ADCSSOP4_TypeDef*) (ADC0_BASE + ADC_SSOP1_OFFSET))
#define ADC0_SSOP1_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSOP1_OFFSET)))

#define ADC0_SSOP2    ((ADCSSOP4_TypeDef*) (ADC0_BASE + ADC_SSOP2_OFFSET))
#define ADC0_SSOP2_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSOP2_OFFSET)))

#define ADC0_SSOP3    ((ADCSSOP1_TypeDef*) (ADC0_BASE + ADC_SSOP3_OFFSET))
#define ADC0_SSOP3_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSOP3_OFFSET)))

/******************************************************************************************
************************************ 20 SSDC *********************************************
******************************************************************************************/
#define ADC0_SSDC0    ((ADCSSDC8_TypeDef*) (ADC0_BASE + ADC_SSDC0_OFFSET))
#define ADC0_SSDC0_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSDC0_OFFSET)))

#define ADC0_SSDC1    ((ADCSSDC4_TypeDef*) (ADC0_BASE + ADC_SSDC1_OFFSET))
#define ADC0_SSDC1_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSDC1_OFFSET)))

#define ADC0_SSDC2    ((ADCSSDC4_TypeDef*) (ADC0_BASE + ADC_SSDC2_OFFSET))
#define ADC0_SSDC2_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSDC2_OFFSET)))

#define ADC0_SSDC3    ((ADCSSDC1_TypeDef*) (ADC0_BASE + ADC_SSDC3_OFFSET))
#define ADC0_SSDC3_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSDC3_OFFSET)))

/******************************************************************************************
************************************ 20 SSEMUX *********************************************
******************************************************************************************/
#define ADC0_SSEMUX0    ((ADCSSEMUX8_TypeDef*) (ADC0_BASE + ADC_SSEMUX0_OFFSET))
#define ADC0_SSEMUX0_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSEMUX0_OFFSET)))

#define ADC0_SSEMUX1    ((ADCSSEMUX4_TypeDef*) (ADC0_BASE + ADC_SSEMUX1_OFFSET))
#define ADC0_SSEMUX1_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSEMUX1_OFFSET)))

#define ADC0_SSEMUX2    ((ADCSSEMUX4_TypeDef*) (ADC0_BASE + ADC_SSEMUX2_OFFSET))
#define ADC0_SSEMUX2_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSEMUX2_OFFSET)))

#define ADC0_SSEMUX3    ((ADCSSEMUX1_TypeDef*) (ADC0_BASE + ADC_SSEMUX3_OFFSET))
#define ADC0_SSEMUX3_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSEMUX3_OFFSET)))

/******************************************************************************************
************************************ 20 SSTSH *********************************************
******************************************************************************************/
#define ADC0_SSTSH0    ((ADCSSTSH8_TypeDef*) (ADC0_BASE + ADC_SSTSH0_OFFSET))
#define ADC0_SSTSH0_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSTSH0_OFFSET)))

#define ADC0_SSTSH1    ((ADCSSTSH4_TypeDef*) (ADC0_BASE + ADC_SSTSH1_OFFSET))
#define ADC0_SSTSH1_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSTSH1_OFFSET)))

#define ADC0_SSTSH2    ((ADCSSTSH4_TypeDef*) (ADC0_BASE + ADC_SSTSH2_OFFSET))
#define ADC0_SSTSH2_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSTSH2_OFFSET)))

#define ADC0_SSTSH3    ((ADCSSTSH1_TypeDef*) (ADC0_BASE + ADC_SSTSH3_OFFSET))
#define ADC0_SSTSH3_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SSTSH3_OFFSET)))

/******************************************************************************************
************************************ 21 DCRIC *********************************************
******************************************************************************************/
#define ADC0_DCRIC    ((ADCDCRIC_TypeDef*) (ADC0_BASE + ADC_DCRIC_OFFSET))
#define ADC0_DCRIC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCRIC_OFFSET)))

/******************************************************************************************
************************************ 22 DCCTL *********************************************
******************************************************************************************/
#define ADC0_DCCTL0    ((ADCDCCTL_TypeDef*) (ADC0_BASE + ADC_DCCTL0_OFFSET))
#define ADC0_DCCTL0_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCTL0_OFFSET)))

#define ADC0_DCCTL1    ((ADCDCCTL_TypeDef*) (ADC0_BASE + ADC_DCCTL1_OFFSET))
#define ADC0_DCCTL1_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCTL1_OFFSET)))

#define ADC0_DCCTL2    ((ADCDCCTL_TypeDef*) (ADC0_BASE + ADC_DCCTL2_OFFSET))
#define ADC0_DCCTL2_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCTL2_OFFSET)))

#define ADC0_DCCTL3    ((ADCDCCTL_TypeDef*) (ADC0_BASE + ADC_DCCTL3_OFFSET))
#define ADC0_DCCTL3_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCTL3_OFFSET)))

#define ADC0_DCCTL4    ((ADCDCCTL_TypeDef*) (ADC0_BASE + ADC_DCCTL4_OFFSET))
#define ADC0_DCCTL4_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCTL4_OFFSET)))

#define ADC0_DCCTL5    ((ADCDCCTL_TypeDef*) (ADC0_BASE + ADC_DCCTL5_OFFSET))
#define ADC0_DCCTL5_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCTL5_OFFSET)))

#define ADC0_DCCTL6    ((ADCDCCTL_TypeDef*) (ADC0_BASE + ADC_DCCTL6_OFFSET))
#define ADC0_DCCTL6_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCTL6_OFFSET)))

#define ADC0_DCCTL7    ((ADCDCCTL_TypeDef*) (ADC0_BASE + ADC_DCCTL7_OFFSET))
#define ADC0_DCCTL7_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCTL7_OFFSET)))

/******************************************************************************************
************************************ 23 DCCMP *********************************************
******************************************************************************************/
#define ADC0_DCCMP0    ((ADCDCCMP_TypeDef*) (ADC0_BASE + ADC_DCCMP0_OFFSET))
#define ADC0_DCCMP0_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCMP0_OFFSET)))

#define ADC0_DCCMP1    ((ADCDCCMP_TypeDef*) (ADC0_BASE + ADC_DCCMP1_OFFSET))
#define ADC0_DCCMP1_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCMP1_OFFSET)))

#define ADC0_DCCMP2    ((ADCDCCMP_TypeDef*) (ADC0_BASE + ADC_DCCMP2_OFFSET))
#define ADC0_DCCMP2_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCMP2_OFFSET)))

#define ADC0_DCCMP3    ((ADCDCCMP_TypeDef*) (ADC0_BASE + ADC_DCCMP3_OFFSET))
#define ADC0_DCCMP3_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCMP3_OFFSET)))

#define ADC0_DCCMP4    ((ADCDCCMP_TypeDef*) (ADC0_BASE + ADC_DCCMP4_OFFSET))
#define ADC0_DCCMP4_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCMP4_OFFSET)))

#define ADC0_DCCMP5    ((ADCDCCMP_TypeDef*) (ADC0_BASE + ADC_DCCMP5_OFFSET))
#define ADC0_DCCMP5_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCMP5_OFFSET)))

#define ADC0_DCCMP6    ((ADCDCCMP_TypeDef*) (ADC0_BASE + ADC_DCCMP6_OFFSET))
#define ADC0_DCCMP6_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCMP6_OFFSET)))

#define ADC0_DCCMP7    ((ADCDCCMP_TypeDef*) (ADC0_BASE + ADC_DCCMP7_OFFSET))
#define ADC0_DCCMP7_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DCCMP7_OFFSET)))

/******************************************************************************************
************************************ 24 PP *********************************************
******************************************************************************************/
#define ADC0_PP    ((ADCPP_TypeDef*) (ADC0_BASE + ADC_PP_OFFSET))
#define ADC0_PP_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_PP_OFFSET)))

/******************************************************************************************
************************************ 25 PC *********************************************
******************************************************************************************/
#define ADC0_PC    ((ADCPC_TypeDef*) (ADC0_BASE + ADC_PC_OFFSET))
#define ADC0_PC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_PC_OFFSET)))

/******************************************************************************************
************************************ 26 CC *********************************************
******************************************************************************************/
#define ADC0_CC    ((ADCCC_TypeDef*) (ADC0_BASE + ADC_CC_OFFSET))
#define ADC0_CC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_CC_OFFSET)))

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ADC_REGISTERPERIPHERAL_MODULE0_H_ */
