/**
 *
 * @file SSI_RegisterPeripheral_Module3.h
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
 * @verbatim 16 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE3_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE3_H_

#include <xDriver_MCU/SSI/Peripheral/Register/xHeader/SSI_RegisterAddress.h>
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterDefines/SSI_RegisterDefines.h>
#include <xDriver_MCU/SSI/Peripheral/Struct/xHeader/SSI_StructPeripheral.h>

/******************************************************************************************
************************************ SSI3 *********************************************
******************************************************************************************/

#define SSI3    ((SSI_TypeDef*) (SSI3_BASE))

/******************************************************************************************
************************************ 1 CR0 *********************************************
******************************************************************************************/
#define SSI3_CR0    ((SSICR0_TypeDef*) (SSI3_BASE + SSI_CR0_OFFSET ))
#define SSI3_CR0_R    (*((volatile uint32_t*) (SSI3_BASE + SSI_CR0_OFFSET)))

/******************************************************************************************
************************************ 2 CR1 *********************************************
******************************************************************************************/
#define SSI3_CR1    ((SSICR1_TypeDef*) (SSI3_BASE + SSI_CR1_OFFSET ))
#define SSI3_CR1_R    (*((volatile uint32_t*) (SSI3_BASE + SSI_CR1_OFFSET)))

/******************************************************************************************
************************************ 3 DR *********************************************
******************************************************************************************/
#define SSI3_DR    ((SSIDR_TypeDef*) (SSI3_BASE + SSI_DR_OFFSET ))
#define SSI3_DR_R    (*((volatile uint32_t*) (SSI3_BASE + SSI_DR_OFFSET)))

/******************************************************************************************
************************************ 4 SR *********************************************
******************************************************************************************/
#define SSI3_SR    ((SSISR_TypeDef*) (SSI3_BASE + SSI_SR_OFFSET ))
#define SSI3_SR_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_SR_OFFSET)))

/******************************************************************************************
************************************ 5 CPSR *********************************************
******************************************************************************************/
#define SSI3_CPSR    ((SSICPSR_TypeDef*) (SSI3_BASE + SSI_CPSR_OFFSET ))
#define SSI3_CPSR_R    (*((volatile uint32_t*) (SSI3_BASE + SSI_CPSR_OFFSET)))

/******************************************************************************************
************************************ 6 IM *********************************************
******************************************************************************************/
#define SSI3_IM    ((SSIIM_TypeDef*) (SSI3_BASE + SSI_IM_OFFSET ))
#define SSI3_IM_R    (*((volatile uint32_t*) (SSI3_BASE + SSI_IM_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define SSI3_RIS    ((SSIRIS_TypeDef*) (SSI3_BASE + SSI_RIS_OFFSET ))
#define SSI3_RIS_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_RIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define SSI3_MIS    ((SSIMIS_TypeDef*) (SSI3_BASE + SSI_MIS_OFFSET ))
#define SSI3_MIS_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_MIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define SSI3_ICR    ((SSIICR_TypeDef*) (SSI3_BASE + SSI_ICR_OFFSET ))
#define SSI3_ICR_R    (*((volatile uint32_t*) (SSI3_BASE + SSI_ICR_OFFSET)))

/******************************************************************************************
************************************ 10 DMACTL *********************************************
******************************************************************************************/
#define SSI3_DMACTL    ((SSIDMACTL_TypeDef*) (SSI3_BASE + SSI_DMACTL_OFFSET ))
#define SSI3_DMACTL_R    (*((volatile uint32_t*) (SSI3_BASE + SSI_DMACTL_OFFSET)))

/******************************************************************************************
************************************ 11 PP *********************************************
******************************************************************************************/
#define SSI3_PP    ((SSIPP_TypeDef*) (SSI3_BASE + SSI_PP_OFFSET ))
#define SSI3_PP_R    (*((volatile uint32_t*) (SSI3_BASE + SSI_PP_OFFSET)))

/******************************************************************************************
************************************ 11 CC *********************************************
******************************************************************************************/
#define SSI3_CC    ((SSICC_TypeDef*) (SSI3_BASE + SSI_CC_OFFSET ))
#define SSI3_CC_R    (*((volatile uint32_t*) (SSI3_BASE + SSI_CC_OFFSET)))

/******************************************************************************************
 ************************************ 12 PeriphID4 *********************************************
 ******************************************************************************************/
/* SSI3 PID4*/
#define SSI3_PeriphID4    ((SSIPeriphID4_TypeDef*) (SSI3_BASE + SSI_PeriphID4_OFFSET))
#define SSI3_PeriphID4_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 13 PeriphID5 *********************************************
 ******************************************************************************************/
/* SSI3 PID5*/
#define SSI3_PeriphID5    ((SSIPeriphID5_TypeDef*) (SSI3_BASE + SSI_PeriphID5_OFFSET))
#define SSI3_PeriphID5_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 14 PeriphID6 *********************************************
 ******************************************************************************************/
/* SSI3 PID6*/
#define SSI3_PeriphID6    ((SSIPeriphID6_TypeDef*) (SSI3_BASE + SSI_PeriphID6_OFFSET))
#define SSI3_PeriphID6_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 15 PeriphID7 *********************************************
 ******************************************************************************************/
/* SSI3 PID7*/
#define SSI3_PeriphID7    ((SSIPeriphID7_TypeDef*) (SSI3_BASE + SSI_PeriphID7_OFFSET))
#define SSI3_PeriphID7_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 16 PeriphID0 *********************************************
 ******************************************************************************************/
/* SSI3 PID0*/
#define SSI3_PeriphID0    ((SSIPeriphID0_TypeDef*) (SSI3_BASE + SSI_PeriphID0_OFFSET))
#define SSI3_PeriphID0_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 17 PeriphID1 *********************************************
 ******************************************************************************************/
/* SSI3 PID1*/
#define SSI3_PeriphID1    ((SSIPeriphID1_TypeDef*) (SSI3_BASE + SSI_PeriphID1_OFFSET))
#define SSI3_PeriphID1_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 18 PeriphID2 *********************************************
 ******************************************************************************************/
/* SSI3 PID2*/
#define SSI3_PeriphID2    ((SSIPeriphID2_TypeDef*) (SSI3_BASE + SSI_PeriphID2_OFFSET))
#define SSI3_PeriphID2_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 19 PeriphID3 *********************************************
 ******************************************************************************************/
/* SSI3 PID3*/
#define SSI3_PeriphID3    ((SSIPeriphID3_TypeDef*) (SSI3_BASE + SSI_PeriphID3_OFFSET))
#define SSI3_PeriphID3_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 20 CellID0 *********************************************
 ******************************************************************************************/
/* SSI3 CID0*/
#define SSI3_CellID0    ((SSICellID0_TypeDef*) (SSI3_BASE + SSI_CellID0_OFFSET))
#define SSI3_CellID0_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 21 CellID1 *********************************************
 ******************************************************************************************/
/* SSI3 CID1*/
#define SSI3_CellID1    ((SSICellID1_TypeDef*) (SSI3_BASE + SSI_CellID1_OFFSET))
#define SSI3_CellID1_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 22 CellID2 *********************************************
 ******************************************************************************************/
/* SSI3 CID2*/
#define SSI3_CellID2    ((SSICellID2_TypeDef*) (SSI3_BASE + SSI_CellID2_OFFSET))
#define SSI3_CellID2_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 23 CellID3 *********************************************
 ******************************************************************************************/
/* SSI3 CID3*/
#define SSI3_CellID3    ((SSICellID3_TypeDef*) (SSI3_BASE + SSI_CellID3_OFFSET))
#define SSI3_CellID3_R    (*((volatile const uint32_t*) (SSI3_BASE + SSI_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE3_H_ */
