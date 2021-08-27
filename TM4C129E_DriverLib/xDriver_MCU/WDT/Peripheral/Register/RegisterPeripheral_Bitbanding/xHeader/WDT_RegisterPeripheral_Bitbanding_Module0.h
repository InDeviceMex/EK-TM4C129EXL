/**
 *
 * @file WDT_RegisterPeripheral_Bitbanding_Module0.h
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
 * Date           Author     Version     Description * 19 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_BITBANDING_WDT_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_BITBANDING_WDT_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_

#include <xDriver_MCU/WDT/Peripheral/Register/xHeader/WDT_RegisterAddress.h>
#include <xDriver_MCU/WDT/Peripheral/Register/xHeader/WDT_RegisterDefines.h>
#include <xDriver_MCU/WDT/Peripheral/Struct/xHeader/WDT_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ WDT0 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING    ((WDT_BITBANDING_TypeDef*) (WDT_BITBANDING_BASE + (WDT0_OFFSET * 32UL)))

/******************************************************************************************
************************************ 1 LOAD *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_LOAD     ((BITBANDING_WDTLOAD_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_LOAD_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 2 VALUE *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_VALUE     ((BITBANDING_WDTVALUE_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_VALUE_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 3 CTL *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_CTL     ((BITBANDING_WDTCTL_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_CTL_OFFSET) * 32UL)))

#define WDT0_BITBANDING_CTL_INTEN    (*((volatile uint32_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_CTL_OFFSET) * 32UL) + (WDT_CTL_R_INTEN_BIT * 4UL))))
#define WDT0_BITBANDING_CTL_RESEN    (*((volatile uint32_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_CTL_OFFSET) * 32UL) + (WDT_CTL_R_RESEN_BIT * 4UL))))
#define WDT0_BITBANDING_CTL_INTTYPE    (*((volatile uint32_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_CTL_OFFSET) * 32UL) + (WDT_CTL_R_INTTYPE_BIT * 4UL))))
#define WDT0_BITBANDING_CTL_WRC    (*((volatile uint32_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_CTL_OFFSET) * 32UL) + (WDT_CTL_R_WRC_BIT * 4UL))))

/******************************************************************************************
************************************ 4 ICR *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_ICR     ((BITBANDING_WDTICR_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_ICR_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 5 RIS *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_RIS     ((BITBANDING_WDTRIS_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_RIS_OFFSET) * 32UL)))

#define WDT0_BITBANDING_RIS_RIS    (*((volatile uint32_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_RIS_OFFSET) * 32UL) + (WDT_RIS_R_RIS_BIT * 4UL))))

/******************************************************************************************
************************************ 6 MIS *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_MIS     ((BITBANDING_WDTMIS_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_MIS_OFFSET) * 32UL)))

#define WDT0_BITBANDING_MIS_MIS    (*((volatile uint32_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_MIS_OFFSET) * 32UL) + (WDT_MIS_R_MIS_BIT * 4UL))))

/******************************************************************************************
************************************ 7 TEST *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_TEST     ((BITBANDING_WDTTEST_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_TEST_OFFSET) * 32UL)))

#define WDT0_BITBANDING_STALL_TEST    (*((volatile uint32_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_TEST_OFFSET) * 32UL) + (WDT_TEST_R_STALL_BIT * 4UL))))

/******************************************************************************************
************************************ 8 LOCK *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_LOCK     ((BITBANDING_WDTLOCK_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_LOCK_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 9 PeriphID4 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID4     ((BITBANDING_WDTPeriphID4_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID4_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 10 PeriphID5 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID5     ((BITBANDING_WDTPeriphID5_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID5_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 11 PeriphID6 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID6     ((BITBANDING_WDTPeriphID6_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID6_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 12 PeriphID7 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID7     ((BITBANDING_WDTPeriphID7_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID7_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 13 PeriphID0 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID0     ((BITBANDING_WDTPeriphID0_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID0_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 14 PeriphID1 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID1     ((BITBANDING_WDTPeriphID1_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID1_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 15 PeriphID2 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID2     ((BITBANDING_WDTPeriphID2_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID2_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 16 PeriphID3 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID3     ((BITBANDING_WDTPeriphID3_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID3_OFFSET) * 32UL)))

/*****************************************************************************************
************************************ 17 PCellID0 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PCellID0     ((BITBANDING_WDTPCellID0_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PCellID0_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 18 PCellID1 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PCellID1     ((BITBANDING_WDTPCellID1_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PCellID1_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 19 PCellID2 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PCellID2     ((BITBANDING_WDTPCellID2_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PCellID2_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 20 PCellID3 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PCellID3     ((BITBANDING_WDTPCellID3_TypeDef*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PCellID3_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_BITBANDING_WDT_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_ */
