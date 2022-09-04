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

#define ADC1    ((ADC_t*) (ADC1_BASE))

/******************************************************************************************
************************************ 1 ACTSS *********************************************
******************************************************************************************/
#define ADC1_ACTSS    ((ADC_ACTSS_t*) (ADC1_BASE + ADC_ACTSS_OFFSET))
#define ADC1_ACTSS_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_ACTSS_OFFSET)))

/******************************************************************************************
************************************ 2 RIS *********************************************
******************************************************************************************/
#define ADC1_RIS    ((ADC_RIS_t*) (ADC1_BASE + ADC_RIS_OFFSET))
#define ADC1_RIS_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_RIS_OFFSET)))

/******************************************************************************************
************************************ 3 IM *********************************************
******************************************************************************************/
#define ADC1_IM    ((ADC_IM_t*) (ADC1_BASE + ADC_IM_OFFSET))
#define ADC1_IM_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_IM_OFFSET)))

/******************************************************************************************
************************************ 4 ISC *********************************************
******************************************************************************************/
#define ADC1_ISC    ((ADC_ISC_t*) (ADC1_BASE + ADC_ISC_OFFSET))
#define ADC1_ISC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_ISC_OFFSET)))

/******************************************************************************************
************************************ 5 OSTAT *********************************************
******************************************************************************************/
#define ADC1_OSTAT    ((ADC_OSTAT_t*) (ADC1_BASE + ADC_OSTAT_OFFSET))
#define ADC1_OSTAT_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_OSTAT_OFFSET)))

/******************************************************************************************
************************************ 6 EMUX *********************************************
******************************************************************************************/
#define ADC1_EMUX    ((ADC_EMUX_t*) (ADC1_BASE + ADC_EMUX_OFFSET))
#define ADC1_EMUX_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_EMUX_OFFSET)))

/******************************************************************************************
************************************ 7 USTAT *********************************************
******************************************************************************************/
#define ADC1_USTAT    ((ADC_USTAT_t*) (ADC1_BASE + ADC_USTAT_OFFSET))
#define ADC1_USTAT_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_USTAT_OFFSET)))

/******************************************************************************************
************************************ 8 TSSEL *********************************************
******************************************************************************************/
#define ADC1_TSSEL    ((ADC_TSSEL_t*) (ADC1_BASE + ADC_TSSEL_OFFSET))
#define ADC1_TSSEL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_TSSEL_OFFSET)))

/******************************************************************************************
************************************ 9 SSPRI *********************************************
******************************************************************************************/
#define ADC1_SSPRI    ((ADC_SSPRI_t*) (ADC1_BASE + ADC_SSPRI_OFFSET))
#define ADC1_SSPRI_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SSPRI_OFFSET)))

/******************************************************************************************
************************************ 10 SPC *********************************************
******************************************************************************************/
#define ADC1_SPC    ((ADC_SPC_t*) (ADC1_BASE + ADC_SPC_OFFSET))
#define ADC1_SPC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SPC_OFFSET)))

/******************************************************************************************
************************************ 11 PSSI *********************************************
******************************************************************************************/
#define ADC1_PSSI    ((ADC_PSSI_t*) (ADC1_BASE + ADC_PSSI_OFFSET))
#define ADC1_PSSI_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_PSSI_OFFSET)))

/******************************************************************************************
************************************ 12 SAC *********************************************
******************************************************************************************/
#define ADC1_SAC    ((ADC_SAC_t*) (ADC1_BASE + ADC_SAC_OFFSET))
#define ADC1_SAC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SAC_OFFSET)))

/******************************************************************************************
************************************ 13 DC_ISC *********************************************
******************************************************************************************/
#define ADC1_DC_ISC    ((ADC_DC_ISC_t*) (ADC1_BASE + ADC_DC_ISC_OFFSET))
#define ADC1_DC_ISC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC_ISC_OFFSET)))

/******************************************************************************************
************************************ 14 CTL *********************************************
******************************************************************************************/
#define ADC1_CTL    ((ADC_CTL_t*) (ADC1_BASE + ADC_CTL_OFFSET))
#define ADC1_CTL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_CTL_OFFSET)))

/******************************************************************************************
************************************ 15 SSMUX *********************************************
******************************************************************************************/
#define ADC1_SS0_MUX    ((ADC_SS8_MUX_t*) (ADC1_BASE + ADC_SS0_MUX_OFFSET))
#define ADC1_SS0_MUX_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS0_MUX_OFFSET)))

#define ADC1_SS1_MUX    ((ADC_SS4_MUX_t*) (ADC1_BASE + ADC_SS1_MUX_OFFSET))
#define ADC1_SS1_MUX_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS1_MUX_OFFSET)))

#define ADC1_SS2_MUX    ((ADC_SS4_MUX_t*) (ADC1_BASE + ADC_SS2_MUX_OFFSET))
#define ADC1_SS2_MUX_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS2_MUX_OFFSET)))

#define ADC1_SS3_MUX    ((ADC_SS1_MUX_t*) (ADC1_BASE + ADC_SS3_MUX_OFFSET))
#define ADC1_SS3_MUX_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS3_MUX_OFFSET)))

/******************************************************************************************
************************************ 16 SSCTL *********************************************
******************************************************************************************/
#define ADC1_SS0_CTL    ((ADC_SS8_CTL_t*) (ADC1_BASE + ADC_SS0_CTL_OFFSET))
#define ADC1_SS0_CTL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS0_CTL_OFFSET)))

#define ADC1_SS1_CTL    ((ADC_SS4_CTL_t*) (ADC1_BASE + ADC_SS1_CTL_OFFSET))
#define ADC1_SS1_CTL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS1_CTL_OFFSET)))

#define ADC1_SS2_CTL    ((ADC_SS4_CTL_t*) (ADC1_BASE + ADC_SS2_CTL_OFFSET))
#define ADC1_SS2_CTL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS2_CTL_OFFSET)))

#define ADC1_SS3_CTL    ((ADC_SS1_CTL_t*) (ADC1_BASE + ADC_SS3_CTL_OFFSET))
#define ADC1_SS3_CTL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS3_CTL_OFFSET)))

/******************************************************************************************
************************************ 17 SSFIFO *********************************************
******************************************************************************************/
#define ADC1_SS0_FIFO    ((ADC_SS_FIFO_t*) (ADC1_BASE + ADC_SS0_FIFO_OFFSET))
#define ADC1_SS0_FIFO_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_SS0_FIFO_OFFSET)))

#define ADC1_SS1_FIFO    ((ADC_SS_FIFO_t*) (ADC1_BASE + ADC_SS1_FIFO_OFFSET))
#define ADC1_SS1_FIFO_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_SS1_FIFO_OFFSET)))

#define ADC1_SS2_FIFO    ((ADC_SS_FIFO_t*) (ADC1_BASE + ADC_SS2_FIFO_OFFSET))
#define ADC1_SS2_FIFO_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_SS2_FIFO_OFFSET)))

#define ADC1_SS3_FIFO    ((ADC_SS_FIFO_t*) (ADC1_BASE + ADC_SS3_FIFO_OFFSET))
#define ADC1_SS3_FIFO_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_SS3_FIFO_OFFSET)))

/******************************************************************************************
************************************ 18 SSFSTAT *********************************************
******************************************************************************************/
#define ADC1_SS0_FSTAT    ((ADC_SS_FSTAT_t*) (ADC1_BASE + ADC_SS0_FSTAT_OFFSET))
#define ADC1_SS0_FSTAT_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS0_FSTAT_OFFSET)))

#define ADC1_SS1_FSTAT    ((ADC_SS_FSTAT_t*) (ADC1_BASE + ADC_SS1_FSTAT_OFFSET))
#define ADC1_SS1_FSTAT_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_SS1_FSTAT_OFFSET)))

#define ADC1_SS2_FSTAT    ((ADC_SS_FSTAT_t*) (ADC1_BASE + ADC_SS2_FSTAT_OFFSET))
#define ADC1_SS2_FSTAT_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_SS2_FSTAT_OFFSET)))

#define ADC1_SS3_FSTAT    ((ADC_SS_FSTAT_t*) (ADC1_BASE + ADC_SS3_FSTAT_OFFSET))
#define ADC1_SS3_FSTAT_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_SS3_FSTAT_OFFSET)))

/******************************************************************************************
************************************ 19 SSOP *********************************************
******************************************************************************************/
#define ADC1_SS0_OP    ((ADC_SS8_OP_t*) (ADC1_BASE + ADC_SS0_OP_OFFSET))
#define ADC1_SS0_OP_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS0_OP_OFFSET)))

#define ADC1_SS1_OP    ((ADC_SS4_OP_t*) (ADC1_BASE + ADC_SS1_OP_OFFSET))
#define ADC1_SS1_OP_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS1_OP_OFFSET)))

#define ADC1_SS2_OP    ((ADC_SS4_OP_t*) (ADC1_BASE + ADC_SS2_OP_OFFSET))
#define ADC1_SS2_OP_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS2_OP_OFFSET)))

#define ADC1_SS3_OP    ((ADC_SS1_OP_t*) (ADC1_BASE + ADC_SS3_OP_OFFSET))
#define ADC1_SS3_OP_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS3_OP_OFFSET)))

/******************************************************************************************
************************************ 20 SSDC *********************************************
******************************************************************************************/
#define ADC1_SS0_DC    ((ADC_SS8_DC_t*) (ADC1_BASE + ADC_SS0_DC_OFFSET))
#define ADC1_SS0_DC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS0_DC_OFFSET)))

#define ADC1_SS1_DC    ((ADC_SS4_DC_t*) (ADC1_BASE + ADC_SS1_DC_OFFSET))
#define ADC1_SS1_DC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS1_DC_OFFSET)))

#define ADC1_SS2_DC    ((ADC_SS4_DC_t*) (ADC1_BASE + ADC_SS2_DC_OFFSET))
#define ADC1_SS2_DC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS2_DC_OFFSET)))

#define ADC1_SS3_DC    ((ADC_SS1_DC_t*) (ADC1_BASE + ADC_SS3_DC_OFFSET))
#define ADC1_SS3_DC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS3_DC_OFFSET)))

/******************************************************************************************
************************************ 20 SSEMUX *********************************************
******************************************************************************************/
#define ADC1_SS0_EMUX    ((ADC_SS8_EMUX_t*) (ADC1_BASE + ADC_SS0_EMUX_OFFSET))
#define ADC1_SS0_EMUX_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS0_EMUX_OFFSET)))

#define ADC1_SS1_EMUX    ((ADC_SS4_EMUX_t*) (ADC1_BASE + ADC_SS1_EMUX_OFFSET))
#define ADC1_SS1_EMUX_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS1_EMUX_OFFSET)))

#define ADC1_SS2_EMUX    ((ADC_SS4_EMUX_t*) (ADC1_BASE + ADC_SS2_EMUX_OFFSET))
#define ADC1_SS2_EMUX_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS2_EMUX_OFFSET)))

#define ADC1_SS3_EMUX    ((ADC_SS1_EMUX_t*) (ADC1_BASE + ADC_SS3_EMUX_OFFSET))
#define ADC1_SS3_EMUX_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS3_EMUX_OFFSET)))

/******************************************************************************************
************************************ 20 SSTSH *********************************************
******************************************************************************************/
#define ADC1_SS0_TSH    ((ADC_SS8_TSH_t*) (ADC1_BASE + ADC_SS0_TSH_OFFSET))
#define ADC1_SS0_TSH_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS0_TSH_OFFSET)))

#define ADC1_SS1_TSH    ((ADC_SS4_TSH_t*) (ADC1_BASE + ADC_SS1_TSH_OFFSET))
#define ADC1_SS1_TSH_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS1_TSH_OFFSET)))

#define ADC1_SS2_TSH    ((ADC_SS4_TSH_t*) (ADC1_BASE + ADC_SS2_TSH_OFFSET))
#define ADC1_SS2_TSH_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS2_TSH_OFFSET)))

#define ADC1_SS3_TSH    ((ADC_SS1_TSH_t*) (ADC1_BASE + ADC_SS3_TSH_OFFSET))
#define ADC1_SS3_TSH_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_SS3_TSH_OFFSET)))

/******************************************************************************************
************************************ 21 DC_RIC *********************************************
******************************************************************************************/
#define ADC1_DC_RIC    ((ADC_DC_RIC_t*) (ADC1_BASE + ADC_DC_RIC_OFFSET))
#define ADC1_DC_RIC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC_RIC_OFFSET)))

/******************************************************************************************
************************************ 22 DC_CTL *********************************************
******************************************************************************************/
#define ADC1_DC0_CTL    ((ADC_DC_CTL_t*) (ADC1_BASE + ADC_DC0_CTL_OFFSET))
#define ADC1_DC0_CTL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC0_CTL_OFFSET)))

#define ADC1_DC1_CTL    ((ADC_DC_CTL_t*) (ADC1_BASE + ADC_DC1_CTL_OFFSET))
#define ADC1_DC1_CTL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC1_CTL_OFFSET)))

#define ADC1_DC2_CTL    ((ADC_DC_CTL_t*) (ADC1_BASE + ADC_DC2_CTL_OFFSET))
#define ADC1_DC2_CTL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC2_CTL_OFFSET)))

#define ADC1_DC3_CTL    ((ADC_DC_CTL_t*) (ADC1_BASE + ADC_DC3_CTL_OFFSET))
#define ADC1_DC3_CTL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC3_CTL_OFFSET)))

#define ADC1_DC4_CTL    ((ADC_DC_CTL_t*) (ADC1_BASE + ADC_DC4_CTL_OFFSET))
#define ADC1_DC4_CTL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC4_CTL_OFFSET)))

#define ADC1_DC5_CTL    ((ADC_DC_CTL_t*) (ADC1_BASE + ADC_DC5_CTL_OFFSET))
#define ADC1_DC5_CTL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC5_CTL_OFFSET)))

#define ADC1_DC6_CTL    ((ADC_DC_CTL_t*) (ADC1_BASE + ADC_DC6_CTL_OFFSET))
#define ADC1_DC6_CTL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC6_CTL_OFFSET)))

#define ADC1_DC7_CTL    ((ADC_DC_CTL_t*) (ADC1_BASE + ADC_DC7_CTL_OFFSET))
#define ADC1_DC7_CTL_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC7_CTL_OFFSET)))

/******************************************************************************************
************************************ 23 DC_CMP *********************************************
******************************************************************************************/
#define ADC1_DC0_CMP    ((ADC_DC_CMP_t*) (ADC1_BASE + ADC_DC0_CMP_OFFSET))
#define ADC1_DC0_CMP_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC0_CMP_OFFSET)))

#define ADC1_DC1_CMP    ((ADC_DC_CMP_t*) (ADC1_BASE + ADC_DC1_CMP_OFFSET))
#define ADC1_DC1_CMP_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC1_CMP_OFFSET)))

#define ADC1_DC2_CMP    ((ADC_DC_CMP_t*) (ADC1_BASE + ADC_DC2_CMP_OFFSET))
#define ADC1_DC2_CMP_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC2_CMP_OFFSET)))

#define ADC1_DC3_CMP    ((ADC_DC_CMP_t*) (ADC1_BASE + ADC_DC3_CMP_OFFSET))
#define ADC1_DC3_CMP_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC3_CMP_OFFSET)))

#define ADC1_DC4_CMP    ((ADC_DC_CMP_t*) (ADC1_BASE + ADC_DC4_CMP_OFFSET))
#define ADC1_DC4_CMP_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC4_CMP_OFFSET)))

#define ADC1_DC5_CMP    ((ADC_DC_CMP_t*) (ADC1_BASE + ADC_DC5_CMP_OFFSET))
#define ADC1_DC5_CMP_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC5_CMP_OFFSET)))

#define ADC1_DC6_CMP    ((ADC_DC_CMP_t*) (ADC1_BASE + ADC_DC6_CMP_OFFSET))
#define ADC1_DC6_CMP_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC6_CMP_OFFSET)))

#define ADC1_DC7_CMP    ((ADC_DC_CMP_t*) (ADC1_BASE + ADC_DC7_CMP_OFFSET))
#define ADC1_DC7_CMP_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_DC7_CMP_OFFSET)))

/******************************************************************************************
************************************ 24 PP *********************************************
******************************************************************************************/
#define ADC1_PP    ((ADC_PP_t*) (ADC1_BASE + ADC_PP_OFFSET))
#define ADC1_PP_R    (*((volatile const uint32_t*) (ADC1_BASE +ADC_PP_OFFSET)))

/******************************************************************************************
************************************ 25 PC *********************************************
******************************************************************************************/
#define ADC1_PC    ((ADC_PC_t*) (ADC1_BASE + ADC_PC_OFFSET))
#define ADC1_PC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_PC_OFFSET)))

/******************************************************************************************
************************************ 26 CC *********************************************
******************************************************************************************/
#define ADC1_CC    ((ADC_CC_t*) (ADC1_BASE + ADC_CC_OFFSET))
#define ADC1_CC_R    (*((volatile uint32_t*) (ADC1_BASE +ADC_CC_OFFSET)))

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ADC_REGISTERPERIPHERAL_MODULE1_H_ */
