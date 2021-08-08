/**
 *
 * @file SSI_RegisterPeripheral_Module2.h
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
#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE2_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE2_H_

#include <xDriver_MCU/SSI/Peripheral/Register/xHeader/SSI_RegisterAddress.h>
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterDefines/SSI_RegisterDefines.h>
#include <xDriver_MCU/SSI/Peripheral/Struct/xHeader/SSI_StructPeripheral.h>

/******************************************************************************************
************************************ SSI2 *********************************************
******************************************************************************************/

#define SSI2    ((SSI_TypeDef*) (SSI2_BASE))

/******************************************************************************************
************************************ 1 CR0 *********************************************
******************************************************************************************/
#define SSI2_CR0    ((SSICR0_TypeDef*) (SSI2_BASE + SSI_CR0_OFFSET ))
#define SSI2_CR0_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_CR0_OFFSET)))

/******************************************************************************************
************************************ 2 CR1 *********************************************
******************************************************************************************/
#define SSI2_CR1    ((SSICR1_TypeDef*) (SSI2_BASE + SSI_CR1_OFFSET ))
#define SSI2_CR1_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_CR1_OFFSET)))

/******************************************************************************************
************************************ 3 DR *********************************************
******************************************************************************************/
#define SSI2_DR    ((SSIDR_TypeDef*) (SSI2_BASE + SSI_DR_OFFSET ))
#define SSI2_DR_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_DR_OFFSET)))

/******************************************************************************************
************************************ 4 SR *********************************************
******************************************************************************************/
#define SSI2_SR    ((SSISR_TypeDef*) (SSI2_BASE + SSI_SR_OFFSET ))
#define SSI2_SR_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SR_OFFSET)))

/******************************************************************************************
************************************ 5 CPSR *********************************************
******************************************************************************************/
#define SSI2_CPSR    ((SSICPSR_TypeDef*) (SSI2_BASE + SSI_CPSR_OFFSET ))
#define SSI2_CPSR_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_CPSR_OFFSET)))

/******************************************************************************************
************************************ 6 IM *********************************************
******************************************************************************************/
#define SSI2_IM    ((SSIIM_TypeDef*) (SSI2_BASE + SSI_IM_OFFSET ))
#define SSI2_IM_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_IM_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define SSI2_RIS    ((SSIRIS_TypeDef*) (SSI2_BASE + SSI_RIS_OFFSET ))
#define SSI2_RIS_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_RIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define SSI2_MIS    ((SSIMIS_TypeDef*) (SSI2_BASE + SSI_MIS_OFFSET ))
#define SSI2_MIS_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_MIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define SSI2_ICR    ((SSIICR_TypeDef*) (SSI2_BASE + SSI_ICR_OFFSET ))
#define SSI2_ICR_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_ICR_OFFSET)))

/******************************************************************************************
************************************ 10 DMACTL *********************************************
******************************************************************************************/
#define SSI2_DMACTL    ((SSIDMACTL_TypeDef*) (SSI2_BASE + SSI_DMACTL_OFFSET ))
#define SSI2_DMACTL_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_DMACTL_OFFSET)))

/******************************************************************************************
************************************ 11 PP *********************************************
******************************************************************************************/
#define SSI2_PP    ((SSIPP_TypeDef*) (SSI2_BASE + SSI_PP_OFFSET ))
#define SSI2_PP_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_PP_OFFSET)))

/******************************************************************************************
************************************ 11 CC *********************************************
******************************************************************************************/
#define SSI2_CC    ((SSICC_TypeDef*) (SSI2_BASE + SSI_CC_OFFSET ))
#define SSI2_CC_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_CC_OFFSET)))

/******************************************************************************************
 ************************************ 12 PeriphID4 *********************************************
 ******************************************************************************************/
/* SSI2 PID4*/
#define SSI2_PeriphID4    ((SSIPeriphID4_TypeDef*) (SSI2_BASE + SSI_PeriphID4_OFFSET))
#define SSI2_PeriphID4_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 13 PeriphID5 *********************************************
 ******************************************************************************************/
/* SSI2 PID5*/
#define SSI2_PeriphID5    ((SSIPeriphID5_TypeDef*) (SSI2_BASE + SSI_PeriphID5_OFFSET))
#define SSI2_PeriphID5_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 14 PeriphID6 *********************************************
 ******************************************************************************************/
/* SSI2 PID6*/
#define SSI2_PeriphID6    ((SSIPeriphID6_TypeDef*) (SSI2_BASE + SSI_PeriphID6_OFFSET))
#define SSI2_PeriphID6_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 15 PeriphID7 *********************************************
 ******************************************************************************************/
/* SSI2 PID7*/
#define SSI2_PeriphID7    ((SSIPeriphID7_TypeDef*) (SSI2_BASE + SSI_PeriphID7_OFFSET))
#define SSI2_PeriphID7_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 16 PeriphID0 *********************************************
 ******************************************************************************************/
/* SSI2 PID0*/
#define SSI2_PeriphID0    ((SSIPeriphID0_TypeDef*) (SSI2_BASE + SSI_PeriphID0_OFFSET))
#define SSI2_PeriphID0_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 17 PeriphID1 *********************************************
 ******************************************************************************************/
/* SSI2 PID1*/
#define SSI2_PeriphID1    ((SSIPeriphID1_TypeDef*) (SSI2_BASE + SSI_PeriphID1_OFFSET))
#define SSI2_PeriphID1_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 18 PeriphID2 *********************************************
 ******************************************************************************************/
/* SSI2 PID2*/
#define SSI2_PeriphID2    ((SSIPeriphID2_TypeDef*) (SSI2_BASE + SSI_PeriphID2_OFFSET))
#define SSI2_PeriphID2_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 19 PeriphID3 *********************************************
 ******************************************************************************************/
/* SSI2 PID3*/
#define SSI2_PeriphID3    ((SSIPeriphID3_TypeDef*) (SSI2_BASE + SSI_PeriphID3_OFFSET))
#define SSI2_PeriphID3_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 20 CellID0 *********************************************
 ******************************************************************************************/
/* SSI2 CID0*/
#define SSI2_CellID0    ((SSICellID0_TypeDef*) (SSI2_BASE + SSI_CellID0_OFFSET))
#define SSI2_CellID0_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 21 CellID1 *********************************************
 ******************************************************************************************/
/* SSI2 CID1*/
#define SSI2_CellID1    ((SSICellID1_TypeDef*) (SSI2_BASE + SSI_CellID1_OFFSET))
#define SSI2_CellID1_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 22 CellID2 *********************************************
 ******************************************************************************************/
/* SSI2 CID2*/
#define SSI2_CellID2    ((SSICellID2_TypeDef*) (SSI2_BASE + SSI_CellID2_OFFSET))
#define SSI2_CellID2_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 23 CellID3 *********************************************
 ******************************************************************************************/
/* SSI2 CID3*/
#define SSI2_CellID3    ((SSICellID3_TypeDef*) (SSI2_BASE + SSI_CellID3_OFFSET))
#define SSI2_CellID3_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE2_H_ */
