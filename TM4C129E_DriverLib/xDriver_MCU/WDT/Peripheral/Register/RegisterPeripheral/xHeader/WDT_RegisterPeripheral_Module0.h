/**
 *
 * @file WDT_RegisterPeripheral_Module0.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_MODULE0_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_MODULE0_H_

#include <xDriver_MCU/WDT/Peripheral/Register/xHeader/WDT_RegisterAddress.h>
#include <xDriver_MCU/WDT/Peripheral/Register/xHeader/WDT_RegisterDefines.h>
#include <xDriver_MCU/WDT/Peripheral/Struct/xHeader/WDT_StructPeripheral.h>

/******************************************************************************************
************************************ WDT0 *********************************************
******************************************************************************************/

#define WDT0    ((WDT_TypeDef*) (WDT0_BASE))

/******************************************************************************************
************************************ 1 LOAD *********************************************
******************************************************************************************/
#define WDT0_LOAD    ((WDTLOAD_TypeDef*) (WDT0_BASE + WDT_LOAD_OFFSET))
#define WDT0_LOAD_R    (*((volatile uint32_t*) (WDT0_BASE + WDT_LOAD_OFFSET)))

/******************************************************************************************
************************************ 2 VALUE *********************************************
******************************************************************************************/
#define WDT0_VALUE    ((WDTVALUE_TypeDef*) (WDT0_BASE + WDT_VALUE_OFFSET))
#define WDT0_VALUE_R    (*((volatile const uint32_t*) (WDT0_BASE + WDT_VALUE_OFFSET)))

/******************************************************************************************
************************************ 3 CTL *********************************************
******************************************************************************************/
#define WDT0_CTL    ((WDTCTL_TypeDef*) (WDT0_BASE + WDT_CTL_OFFSET))
#define WDT0_CTL_R    (*((volatile uint32_t*) (WDT0_BASE + WDT_CTL_OFFSET)))

/******************************************************************************************
************************************ 4 ICR *********************************************
******************************************************************************************/
#define WDT0_ICR    ((WDTICR_TypeDef*) (WDT0_BASE + WDT_ICR_OFFSET))
#define WDT0_ICR_R    (*((volatile uint32_t*) (WDT0_BASE + WDT_ICR_OFFSET)))

/******************************************************************************************
************************************ 5 RIS *********************************************
******************************************************************************************/
#define WDT0_RIS    ((WDTRIS_TypeDef*) (WDT0_BASE + WDT_RIS_OFFSET))
#define WDT0_RIS_R    (*((volatile uint32_t*) (WDT0_BASE + WDT_RIS_OFFSET)))

/******************************************************************************************
************************************ 6 MIS *********************************************
******************************************************************************************/
#define WDT0_MIS    ((WDTMIS_TypeDef*) (WDT0_BASE + WDT_MIS_OFFSET))
#define WDT0_MIS_R    (*((volatile uint32_t*) (WDT0_BASE + WDT_MIS_OFFSET)))

/******************************************************************************************
************************************ 7 TEST *********************************************
******************************************************************************************/
#define WDT0_TEST    ((WDTTEST_TypeDef*) (WDT0_BASE + WDT_TEST_OFFSET))
#define WDT0_TEST_R    (*((volatile uint32_t*) (WDT0_BASE + WDT_TEST_OFFSET)))

/******************************************************************************************
************************************ 8 LOCK *********************************************
******************************************************************************************/
#define WDT0_LOCK    ((WDTLOCK_TypeDef*) (WDT0_BASE + WDT_LOCK_OFFSET))
#define WDT0_LOCK_R    (*((volatile uint32_t*) (WDT0_BASE + WDT_LOCK_OFFSET)))

/******************************************************************************************
************************************ 9 PeriphID4 *********************************************
******************************************************************************************/
#define WDT0_PeriphID4    ((WDTPeriphID4_TypeDef*) (WDT0_BASE + WDT_PeriphID4_OFFSET))
#define WDT0_PeriphID4_R    (*((volatile const uint32_t*) (WDT0_BASE + WDT_PeriphID4_OFFSET)))

/******************************************************************************************
************************************ 10 PeriphID5 *********************************************
******************************************************************************************/
#define WDT0_PeriphID5    ((WDTPeriphID5_TypeDef*) (WDT0_BASE + WDT_PeriphID5_OFFSET))
#define WDT0_PeriphID5_R    (*((volatile const uint32_t*) (WDT0_BASE + WDT_PeriphID5_OFFSET)))

/******************************************************************************************
************************************ 11 PeriphID6 *********************************************
******************************************************************************************/
#define WDT0_PeriphID6    ((WDTPeriphID6_TypeDef*) (WDT0_BASE + WDT_PeriphID6_OFFSET))
#define WDT0_PeriphID6_R    (*((volatile const uint32_t*) (WDT0_BASE + WDT_PeriphID6_OFFSET)))

/******************************************************************************************
************************************ 12 PeriphID7 *********************************************
******************************************************************************************/
#define WDT0_PeriphID7    ((WDTPeriphID7_TypeDef*) (WDT0_BASE + WDT_PeriphID7_OFFSET))
#define WDT0_PeriphID7_R    (*((volatile const uint32_t*) (WDT0_BASE + WDT_PeriphID7_OFFSET)))

/******************************************************************************************
************************************ 13 PeriphID0 *********************************************
******************************************************************************************/
#define WDT0_PeriphID0    ((WDTPeriphID0_TypeDef*) (WDT0_BASE + WDT_PeriphID0_OFFSET))
#define WDT0_PeriphID0_R    (*((volatile const uint32_t*) (WDT0_BASE + WDT_PeriphID0_OFFSET)))

/******************************************************************************************
************************************ 14 PeriphID1 *********************************************
******************************************************************************************/
#define WDT0_PeriphID1    ((WDTPeriphID1_TypeDef*) (WDT0_BASE + WDT_PeriphID1_OFFSET))
#define WDT0_PeriphID1_R    (*((volatile const uint32_t*) (WDT0_BASE + WDT_PeriphID1_OFFSET)))

/******************************************************************************************
************************************ 15 PeriphID2 *********************************************
******************************************************************************************/
#define WDT0_PeriphID2    ((WDTPeriphID2_TypeDef*) (WDT0_BASE + WDT_PeriphID2_OFFSET))
#define WDT0_PeriphID2_R    (*((volatile const uint32_t*) (WDT0_BASE + WDT_PeriphID2_OFFSET)))

/******************************************************************************************
************************************ 16 PeriphID3 *********************************************
******************************************************************************************/
#define WDT0_PeriphID3    ((WDTPeriphID3_TypeDef*) (WDT0_BASE + WDT_PeriphID3_OFFSET))
#define WDT0_PeriphID3_R    (*((volatile const uint32_t*) (WDT0_BASE + WDT_PeriphID3_OFFSET)))

/******************************************************************************************
************************************ 17 PCellID0 *********************************************
******************************************************************************************/
#define WDT0_PCellID0    ((WDTPCellID0_TypeDef*) (WDT0_BASE + WDT_PCellID0_OFFSET))
#define WDT0_PCellID0_R    (*((volatile const uint32_t*) (WDT0_BASE + WDT_PCellID0_OFFSET)))


/******************************************************************************************
************************************ 18 PCellID1 *********************************************
******************************************************************************************/
#define WDT0_PCellID1    ((WDTPCellID1_TypeDef*) (WDT0_BASE + WDT_PCellID1_OFFSET))
#define WDT0_PCellID1_R    (*((volatile const uint32_t*) (WDT0_BASE + WDT_PCellID1_OFFSET)))

/******************************************************************************************
************************************ 19 PCellID2 *********************************************
******************************************************************************************/
#define WDT0_PCellID2    ((WDTPCellID2_TypeDef*) (WDT0_BASE + WDT_PCellID2_OFFSET))
#define WDT0_PCellID2_R    (*((volatile const uint32_t*) (WDT0_BASE + WDT_PCellID2_OFFSET)))

/******************************************************************************************
************************************ 20 PCellID3 *********************************************
******************************************************************************************/
#define WDT0_PCellID3    ((WDTPCellID3_TypeDef*) (WDT0_BASE + WDT_PCellID3_OFFSET))
#define WDT0_PCellID3_R    (*((volatile const uint32_t*) (WDT0_BASE + WDT_PCellID3_OFFSET)))


#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_MODULE0_H_ */
