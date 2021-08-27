/**
 *
 * @file WDT_RegisterPeripheral_Module1.h
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
 * @verbatim 19 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_MODULE1_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_MODULE1_H_

#include <xDriver_MCU/WDT/Peripheral/Register/xHeader/WDT_RegisterAddress.h>
#include <xDriver_MCU/WDT/Peripheral/Register/xHeader/WDT_RegisterDefines.h>
#include <xDriver_MCU/WDT/Peripheral/Struct/xHeader/WDT_StructPeripheral.h>

/******************************************************************************************
************************************ WDT1 *********************************************
******************************************************************************************/
#define WDT1    ((WDT_TypeDef*) (WDT1_BASE))

/******************************************************************************************
************************************ 1 LOAD *********************************************
******************************************************************************************/
#define WDT1_LOAD    ((WDTLOAD_TypeDef*) (WDT1_BASE + WDT_LOAD_OFFSET))
#define WDT1_LOAD_R    (*((volatile uint32_t*) (WDT1_BASE + WDT_LOAD_OFFSET)))

/******************************************************************************************
************************************ 2 VALUE *********************************************
******************************************************************************************/
#define WDT1_VALUE    ((WDTVALUE_TypeDef*) (WDT1_BASE + WDT_VALUE_OFFSET))
#define WDT1_VALUE_R    (*((volatile const uint32_t*) (WDT1_BASE + WDT_VALUE_OFFSET)))

/******************************************************************************************
************************************ 3 CTL *********************************************
******************************************************************************************/
#define WDT1_CTL    ((WDTCTL_TypeDef*) (WDT1_BASE + WDT_CTL_OFFSET))
#define WDT1_CTL_R    (*((volatile uint32_t*) (WDT1_BASE + WDT_CTL_OFFSET)))

/******************************************************************************************
************************************ 4 ICR *********************************************
******************************************************************************************/
#define WDT1_ICR    ((WDTICR_TypeDef*) (WDT1_BASE + WDT_ICR_OFFSET))
#define WDT1_ICR_R    (*((volatile uint32_t*) (WDT1_BASE + WDT_ICR_OFFSET)))

/******************************************************************************************
************************************ 5 RIS *********************************************
******************************************************************************************/
#define WDT1_RIS    ((WDTRIS_TypeDef*) (WDT1_BASE + WDT_RIS_OFFSET))
#define WDT1_RIS_R    (*((volatile uint32_t*) (WDT1_BASE + WDT_RIS_OFFSET)))

/******************************************************************************************
************************************ 6 MIS *********************************************
******************************************************************************************/
#define WDT1_MIS    ((WDTMIS_TypeDef*) (WDT1_BASE + WDT_MIS_OFFSET))
#define WDT1_MIS_R    (*((volatile uint32_t*) (WDT1_BASE + WDT_MIS_OFFSET)))

/******************************************************************************************
************************************ 7 TEST *********************************************
******************************************************************************************/
#define WDT1_TEST    ((WDTTEST_TypeDef*) (WDT1_BASE + WDT_TEST_OFFSET))
#define WDT1_TEST_R    (*((volatile uint32_t*) (WDT1_BASE + WDT_TEST_OFFSET)))

/******************************************************************************************
************************************ 8 LOCK *********************************************
******************************************************************************************/
#define WDT1_LOCK    ((WDTLOCK_TypeDef*) (WDT1_BASE + WDT_LOCK_OFFSET))
#define WDT1_LOCK_R    (*((volatile uint32_t*) (WDT1_BASE + WDT_LOCK_OFFSET)))

/******************************************************************************************
************************************ 9 PeriphID4 *********************************************
******************************************************************************************/
#define WDT1_PeriphID4    ((WDTPeriphID4_TypeDef*) (WDT1_BASE + WDT_PeriphID4_OFFSET))
#define WDT1_PeriphID4_R    (*((volatile const uint32_t*) (WDT1_BASE + WDT_PeriphID4_OFFSET)))

/******************************************************************************************
************************************ 10 PeriphID5 *********************************************
******************************************************************************************/
#define WDT1_PeriphID5    ((WDTPeriphID5_TypeDef*) (WDT1_BASE + WDT_PeriphID5_OFFSET))
#define WDT1_PeriphID5_R    (*((volatile const uint32_t*) (WDT1_BASE + WDT_PeriphID5_OFFSET)))

/******************************************************************************************
************************************ 11 PeriphID6 *********************************************
******************************************************************************************/
#define WDT1_PeriphID6    ((WDTPeriphID6_TypeDef*) (WDT1_BASE + WDT_PeriphID6_OFFSET))
#define WDT1_PeriphID6_R    (*((volatile const uint32_t*) (WDT1_BASE + WDT_PeriphID6_OFFSET)))

/******************************************************************************************
************************************ 12 PeriphID7 *********************************************
******************************************************************************************/
#define WDT1_PeriphID7    ((WDTPeriphID7_TypeDef*) (WDT1_BASE + WDT_PeriphID7_OFFSET))
#define WDT1_PeriphID7_R    (*((volatile const uint32_t*) (WDT1_BASE + WDT_PeriphID7_OFFSET)))

/******************************************************************************************
************************************ 13 PeriphID0 *********************************************
******************************************************************************************/
#define WDT1_PeriphID0    ((WDTPeriphID0_TypeDef*) (WDT1_BASE + WDT_PeriphID0_OFFSET))
#define WDT1_PeriphID0_R    (*((volatile const uint32_t*) (WDT1_BASE + WDT_PeriphID0_OFFSET)))

/******************************************************************************************
************************************ 14 PeriphID1 *********************************************
******************************************************************************************/
#define WDT1_PeriphID1    ((WDTPeriphID1_TypeDef*) (WDT1_BASE + WDT_PeriphID1_OFFSET))
#define WDT1_PeriphID1_R    (*((volatile const uint32_t*) (WDT1_BASE + WDT_PeriphID1_OFFSET)))

/******************************************************************************************
************************************ 15 PeriphID2 *********************************************
******************************************************************************************/
#define WDT1_PeriphID2    ((WDTPeriphID2_TypeDef*) (WDT1_BASE + WDT_PeriphID2_OFFSET))
#define WDT1_PeriphID2_R    (*((volatile const uint32_t*) (WDT1_BASE + WDT_PeriphID2_OFFSET)))

/******************************************************************************************
************************************ 16 PeriphID3 *********************************************
******************************************************************************************/
#define WDT1_PeriphID3    ((WDTPeriphID3_TypeDef*) (WDT1_BASE + WDT_PeriphID3_OFFSET))
#define WDT1_PeriphID3_R    (*((volatile const uint32_t*) (WDT1_BASE + WDT_PeriphID3_OFFSET)))

/******************************************************************************************
************************************ 17 PCellID0 *********************************************
******************************************************************************************/
#define WDT1_PCellID0    ((WDTPCellID0_TypeDef*) (WDT1_BASE + WDT_PCellID0_OFFSET))
#define WDT1_PCellID0_R    (*((volatile const uint32_t*) (WDT1_BASE + WDT_PCellID0_OFFSET)))


/******************************************************************************************
************************************ 18 PCellID1 *********************************************
******************************************************************************************/
#define WDT1_PCellID1    ((WDTPCellID1_TypeDef*) (WDT1_BASE + WDT_PCellID1_OFFSET))
#define WDT1_PCellID1_R    (*((volatile const uint32_t*) (WDT1_BASE + WDT_PCellID1_OFFSET)))

/******************************************************************************************
************************************ 19 PCellID2 *********************************************
******************************************************************************************/
#define WDT1_PCellID2    ((WDTPCellID2_TypeDef*) (WDT1_BASE + WDT_PCellID2_OFFSET))
#define WDT1_PCellID2_R    (*((volatile const uint32_t*) (WDT1_BASE + WDT_PCellID2_OFFSET)))

/******************************************************************************************
************************************ 20 PCellID3 *********************************************
******************************************************************************************/
#define WDT1_PCellID3    ((WDTPCellID3_TypeDef*) (WDT1_BASE + WDT_PCellID3_OFFSET))
#define WDT1_PCellID3_R    (*((volatile const uint32_t*) (WDT1_BASE + WDT_PCellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_MODULE1_H_ */
