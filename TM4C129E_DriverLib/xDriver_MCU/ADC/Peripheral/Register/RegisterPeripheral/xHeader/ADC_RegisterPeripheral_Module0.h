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

#define ADC0    ((ADC_t*) (ADC0_BASE))

/******************************************************************************************
************************************ 1 ACTSS *********************************************
******************************************************************************************/
#define ADC0_ACTSS    ((ADCACTSS_t*) (ADC0_BASE + ADC_ACTSS_OFFSET))
#define ADC0_ACTSS_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_ACTSS_OFFSET)))

/******************************************************************************************
************************************ 2 RIS *********************************************
******************************************************************************************/
#define ADC0_RIS    ((ADCRIS_t*) (ADC0_BASE + ADC_RIS_OFFSET))
#define ADC0_RIS_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_RIS_OFFSET)))

/******************************************************************************************
************************************ 3 IM *********************************************
******************************************************************************************/
#define ADC0_IM    ((ADCIM_t*) (ADC0_BASE + ADC_IM_OFFSET))
#define ADC0_IM_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_IM_OFFSET)))

/******************************************************************************************
************************************ 4 ISC *********************************************
******************************************************************************************/
#define ADC0_ISC    ((ADC_ISC_t*) (ADC0_BASE + ADC_ISC_OFFSET))
#define ADC0_ISC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_ISC_OFFSET)))

/******************************************************************************************
************************************ 5 OSTAT *********************************************
******************************************************************************************/
#define ADC0_OSTAT    ((ADCOSTAT_t*) (ADC0_BASE + ADC_OSTAT_OFFSET))
#define ADC0_OSTAT_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_OSTAT_OFFSET)))

/******************************************************************************************
************************************ 6 EMUX *********************************************
******************************************************************************************/
#define ADC0_EMUX    ((ADCEMUX_t*) (ADC0_BASE + ADC_EMUX_OFFSET))
#define ADC0_EMUX_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_EMUX_OFFSET)))

/******************************************************************************************
************************************ 7 USTAT *********************************************
******************************************************************************************/
#define ADC0_USTAT    ((ADCUSTAT_t*) (ADC0_BASE + ADC_USTAT_OFFSET))
#define ADC0_USTAT_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_USTAT_OFFSET)))

/******************************************************************************************
************************************ 8 TSSEL *********************************************
******************************************************************************************/
#define ADC0_TSSEL    ((ADCTSSEL_t*) (ADC0_BASE + ADC_TSSEL_OFFSET))
#define ADC0_TSSEL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_TSSEL_OFFSET)))

/******************************************************************************************
************************************ 9 SS_PRI *********************************************
******************************************************************************************/
#define ADC0_SS_PRI    ((ADCSS_PRI_t*) (ADC0_BASE + ADC_SS_PRI_OFFSET))
#define ADC0_SS_PRI_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS_PRI_OFFSET)))

/******************************************************************************************
************************************ 10 SPC *********************************************
******************************************************************************************/
#define ADC0_SPC    ((ADCSPC_t*) (ADC0_BASE + ADC_SPC_OFFSET))
#define ADC0_SPC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SPC_OFFSET)))

/******************************************************************************************
************************************ 11 PSSI *********************************************
******************************************************************************************/
#define ADC0_PSSI    ((ADCPSSI_t*) (ADC0_BASE + ADC_PSSI_OFFSET))
#define ADC0_PSSI_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_PSSI_OFFSET)))

/******************************************************************************************
************************************ 12 SAC *********************************************
******************************************************************************************/
#define ADC0_SAC    ((ADCSAC_t*) (ADC0_BASE + ADC_SAC_OFFSET))
#define ADC0_SAC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SAC_OFFSET)))

/******************************************************************************************
************************************ 13 DC_ISC *********************************************
******************************************************************************************/
#define ADC0_DC_ISC    ((ADCDC_ISC_t*) (ADC0_BASE + ADC_DC_ISC_OFFSET))
#define ADC0_DC_ISC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC_ISC_OFFSET)))

/******************************************************************************************
************************************ 14 CTL *********************************************
******************************************************************************************/
#define ADC0_CTL    ((ADC_CTL_t*) (ADC0_BASE + ADC_CTL_OFFSET))
#define ADC0_CTL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_CTL_OFFSET)))

/******************************************************************************************
************************************ 15 SSMUX *********************************************
******************************************************************************************/
#define ADC0_SS0_MUX    ((ADCSS8_MUX_t*) (ADC0_BASE + ADC_SS0_MUX_OFFSET))
#define ADC0_SS0_MUX_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS0_MUX_OFFSET)))

#define ADC0_SS1_MUX    ((ADCSS4_MUX_t*) (ADC0_BASE + ADC_SS1_MUX_OFFSET))
#define ADC0_SS1_MUX_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS1_MUX_OFFSET)))

#define ADC0_SS2_MUX    ((ADCSS4_MUX_t*) (ADC0_BASE + ADC_SS2_MUX_OFFSET))
#define ADC0_SS2_MUX_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS2_MUX_OFFSET)))

#define ADC0_SS3_MUX    ((ADCSS1_MUX_t*) (ADC0_BASE + ADC_SS3_MUX_OFFSET))
#define ADC0_SS3_MUX_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS3_MUX_OFFSET)))

/******************************************************************************************
************************************ 16 SSCTL *********************************************
******************************************************************************************/
#define ADC0_SS0_CTL    ((ADCSS8_CTL_t*) (ADC0_BASE + ADC_SS0_CTL_OFFSET))
#define ADC0_SS0_CTL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS0_CTL_OFFSET)))

#define ADC0_SS1_CTL    ((ADCSS4_CTL_t*) (ADC0_BASE + ADC_SS1_CTL_OFFSET))
#define ADC0_SS1_CTL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS1_CTL_OFFSET)))

#define ADC0_SS2_CTL    ((ADCSS4_CTL_t*) (ADC0_BASE + ADC_SS2_CTL_OFFSET))
#define ADC0_SS2_CTL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS2_CTL_OFFSET)))

#define ADC0_SS3_CTL    ((ADCSS1_CTL_t*) (ADC0_BASE + ADC_SS3_CTL_OFFSET))
#define ADC0_SS3_CTL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS3_CTL_OFFSET)))

/******************************************************************************************
************************************ 17 SSFIFO *********************************************
******************************************************************************************/
#define ADC0_SS0_FIFO    ((ADCSSFIFO_t*) (ADC0_BASE + ADC_SS0_FIFO_OFFSET))
#define ADC0_SS0_FIFO_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_SS0_FIFO_OFFSET)))

#define ADC0_SS1_FIFO    ((ADCSSFIFO_t*) (ADC0_BASE + ADC_SS1_FIFO_OFFSET))
#define ADC0_SS1_FIFO_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_SS1_FIFO_OFFSET)))

#define ADC0_SS2_FIFO    ((ADCSSFIFO_t*) (ADC0_BASE + ADC_SS2_FIFO_OFFSET))
#define ADC0_SS2_FIFO_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_SS2_FIFO_OFFSET)))

#define ADC0_SS3_FIFO    ((ADCSSFIFO_t*) (ADC0_BASE + ADC_SS3_FIFO_OFFSET))
#define ADC0_SS3_FIFO_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_SS3_FIFO_OFFSET)))

/******************************************************************************************
************************************ 18 SSFSTAT *********************************************
******************************************************************************************/
#define ADC0_SS0_FSTAT    ((ADCSSFSTAT_t*) (ADC0_BASE + ADC_SS0_FSTAT_OFFSET))
#define ADC0_SS0_FSTAT_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS0_FSTAT_OFFSET)))

#define ADC0_SS1_FSTAT    ((ADCSSFSTAT_t*) (ADC0_BASE + ADC_SS1_FSTAT_OFFSET))
#define ADC0_SS1_FSTAT_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_SS1_FSTAT_OFFSET)))

#define ADC0_SS2_FSTAT    ((ADCSSFSTAT_t*) (ADC0_BASE + ADC_SS2_FSTAT_OFFSET))
#define ADC0_SS2_FSTAT_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_SS2_FSTAT_OFFSET)))

#define ADC0_SS3_FSTAT    ((ADCSSFSTAT_t*) (ADC0_BASE + ADC_SS3_FSTAT_OFFSET))
#define ADC0_SS3_FSTAT_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_SS3_FSTAT_OFFSET)))

/******************************************************************************************
************************************ 19 SSOP *********************************************
******************************************************************************************/
#define ADC0_SS0_OP    ((ADCSS8_OP_t*) (ADC0_BASE + ADC_SS0_OP_OFFSET))
#define ADC0_SS0_OP_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS0_OP_OFFSET)))

#define ADC0_SS1_OP    ((ADCSS4_OP_t*) (ADC0_BASE + ADC_SS1_OP_OFFSET))
#define ADC0_SS1_OP_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS1_OP_OFFSET)))

#define ADC0_SS2_OP    ((ADCSS4_OP_t*) (ADC0_BASE + ADC_SS2_OP_OFFSET))
#define ADC0_SS2_OP_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS2_OP_OFFSET)))

#define ADC0_SS3_OP    ((ADCSS1_OP_t*) (ADC0_BASE + ADC_SS3_OP_OFFSET))
#define ADC0_SS3_OP_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS3_OP_OFFSET)))

/******************************************************************************************
************************************ 20 SSDC *********************************************
******************************************************************************************/
#define ADC0_SS0_DC    ((ADCSS8_DC_t*) (ADC0_BASE + ADC_SS0_DC_OFFSET))
#define ADC0_SS0_DC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS0_DC_OFFSET)))

#define ADC0_SS1_DC    ((ADCSS4_DC_t*) (ADC0_BASE + ADC_SS1_DC_OFFSET))
#define ADC0_SS1_DC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS1_DC_OFFSET)))

#define ADC0_SS2_DC    ((ADCSS4_DC_t*) (ADC0_BASE + ADC_SS2_DC_OFFSET))
#define ADC0_SS2_DC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS2_DC_OFFSET)))

#define ADC0_SS3_DC    ((ADCSS1_DC_t*) (ADC0_BASE + ADC_SS3_DC_OFFSET))
#define ADC0_SS3_DC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS3_DC_OFFSET)))

/******************************************************************************************
************************************ 20 SSEMUX *********************************************
******************************************************************************************/
#define ADC0_SS0_EMUX    ((ADCSS8_EMUX_t*) (ADC0_BASE + ADC_SS0_EMUX_OFFSET))
#define ADC0_SS0_EMUX_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS0_EMUX_OFFSET)))

#define ADC0_SS1_EMUX    ((ADCSS4_EMUX_t*) (ADC0_BASE + ADC_SS1_EMUX_OFFSET))
#define ADC0_SS1_EMUX_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS1_EMUX_OFFSET)))

#define ADC0_SS2_EMUX    ((ADCSS4_EMUX_t*) (ADC0_BASE + ADC_SS2_EMUX_OFFSET))
#define ADC0_SS2_EMUX_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS2_EMUX_OFFSET)))

#define ADC0_SS3_EMUX    ((ADCSS1_EMUX_t*) (ADC0_BASE + ADC_SS3_EMUX_OFFSET))
#define ADC0_SS3_EMUX_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS3_EMUX_OFFSET)))

/******************************************************************************************
************************************ 20 SSTSH *********************************************
******************************************************************************************/
#define ADC0_SS0_TSH    ((ADCSS8_TSH_t*) (ADC0_BASE + ADC_SS0_TSH_OFFSET))
#define ADC0_SS0_TSH_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS0_TSH_OFFSET)))

#define ADC0_SS1_TSH    ((ADCSS4_TSH_t*) (ADC0_BASE + ADC_SS1_TSH_OFFSET))
#define ADC0_SS1_TSH_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS1_TSH_OFFSET)))

#define ADC0_SS2_TSH    ((ADCSS4_TSH_t*) (ADC0_BASE + ADC_SS2_TSH_OFFSET))
#define ADC0_SS2_TSH_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS2_TSH_OFFSET)))

#define ADC0_SS3_TSH    ((ADCSS1_TSH_t*) (ADC0_BASE + ADC_SS3_TSH_OFFSET))
#define ADC0_SS3_TSH_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_SS3_TSH_OFFSET)))

/******************************************************************************************
************************************ 21 DC_RIC *********************************************
******************************************************************************************/
#define ADC0_DC_RIC    ((ADCDC_RIC_t*) (ADC0_BASE + ADC_DC_RIC_OFFSET))
#define ADC0_DC_RIC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC_RIC_OFFSET)))

/******************************************************************************************
************************************ 22 DC_CTL *********************************************
******************************************************************************************/
#define ADC0_DC0_CTL    ((ADCDC_CTL_t*) (ADC0_BASE + ADC_DC0_CTL_OFFSET))
#define ADC0_DC0_CTL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC0_CTL_OFFSET)))

#define ADC0_DC1_CTL    ((ADCDC_CTL_t*) (ADC0_BASE + ADC_DC1_CTL_OFFSET))
#define ADC0_DC1_CTL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC1_CTL_OFFSET)))

#define ADC0_DC2_CTL    ((ADCDC_CTL_t*) (ADC0_BASE + ADC_DC2_CTL_OFFSET))
#define ADC0_DC2_CTL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC2_CTL_OFFSET)))

#define ADC0_DC3_CTL    ((ADCDC_CTL_t*) (ADC0_BASE + ADC_DC3_CTL_OFFSET))
#define ADC0_DC3_CTL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC3_CTL_OFFSET)))

#define ADC0_DC4_CTL    ((ADCDC_CTL_t*) (ADC0_BASE + ADC_DC4_CTL_OFFSET))
#define ADC0_DC4_CTL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC4_CTL_OFFSET)))

#define ADC0_DC5_CTL    ((ADCDC_CTL_t*) (ADC0_BASE + ADC_DC5_CTL_OFFSET))
#define ADC0_DC5_CTL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC5_CTL_OFFSET)))

#define ADC0_DC6_CTL    ((ADCDC_CTL_t*) (ADC0_BASE + ADC_DC6_CTL_OFFSET))
#define ADC0_DC6_CTL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC6_CTL_OFFSET)))

#define ADC0_DC7_CTL    ((ADCDC_CTL_t*) (ADC0_BASE + ADC_DC7_CTL_OFFSET))
#define ADC0_DC7_CTL_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC7_CTL_OFFSET)))

/******************************************************************************************
************************************ 23 DC_CMP *********************************************
******************************************************************************************/
#define ADC0_DC0_CMP    ((ADCDC_CMP_t*) (ADC0_BASE + ADC_DC0_CMP_OFFSET))
#define ADC0_DC0_CMP_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC0_CMP_OFFSET)))

#define ADC0_DC1_CMP    ((ADCDC_CMP_t*) (ADC0_BASE + ADC_DC1_CMP_OFFSET))
#define ADC0_DC1_CMP_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC1_CMP_OFFSET)))

#define ADC0_DC2_CMP    ((ADCDC_CMP_t*) (ADC0_BASE + ADC_DC2_CMP_OFFSET))
#define ADC0_DC2_CMP_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC2_CMP_OFFSET)))

#define ADC0_DC3_CMP    ((ADCDC_CMP_t*) (ADC0_BASE + ADC_DC3_CMP_OFFSET))
#define ADC0_DC3_CMP_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC3_CMP_OFFSET)))

#define ADC0_DC4_CMP    ((ADCDC_CMP_t*) (ADC0_BASE + ADC_DC4_CMP_OFFSET))
#define ADC0_DC4_CMP_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC4_CMP_OFFSET)))

#define ADC0_DC5_CMP    ((ADCDC_CMP_t*) (ADC0_BASE + ADC_DC5_CMP_OFFSET))
#define ADC0_DC5_CMP_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC5_CMP_OFFSET)))

#define ADC0_DC6_CMP    ((ADCDC_CMP_t*) (ADC0_BASE + ADC_DC6_CMP_OFFSET))
#define ADC0_DC6_CMP_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC6_CMP_OFFSET)))

#define ADC0_DC7_CMP    ((ADCDC_CMP_t*) (ADC0_BASE + ADC_DC7_CMP_OFFSET))
#define ADC0_DC7_CMP_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_DC7_CMP_OFFSET)))

/******************************************************************************************
************************************ 24 PP *********************************************
******************************************************************************************/
#define ADC0_PP    ((ADCPP_t*) (ADC0_BASE + ADC_PP_OFFSET))
#define ADC0_PP_R    (*((volatile const uint32_t*) (ADC0_BASE +ADC_PP_OFFSET)))

/******************************************************************************************
************************************ 25 PC *********************************************
******************************************************************************************/
#define ADC0_PC    ((ADCPC_t*) (ADC0_BASE + ADC_PC_OFFSET))
#define ADC0_PC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_PC_OFFSET)))

/******************************************************************************************
************************************ 26 CC *********************************************
******************************************************************************************/
#define ADC0_CC    ((ADCCC_t*) (ADC0_BASE + ADC_CC_OFFSET))
#define ADC0_CC_R    (*((volatile uint32_t*) (ADC0_BASE +ADC_CC_OFFSET)))

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ADC_REGISTERPERIPHERAL_MODULE0_H_ */
