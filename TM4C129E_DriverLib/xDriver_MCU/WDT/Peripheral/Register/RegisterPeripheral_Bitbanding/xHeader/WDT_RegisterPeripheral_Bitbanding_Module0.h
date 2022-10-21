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
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_BITBANDING_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_BITBANDING_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_

#include <xDriver_MCU/WDT/Peripheral/Register/xHeader/WDT_RegisterAddress.h>
#include <xDriver_MCU/WDT/Peripheral/Register/xHeader/WDT_RegisterDefines.h>
#include <xDriver_MCU/WDT/Peripheral/Struct/xHeader/WDT_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ WDT0 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING    ((WDT_BITBANDING_t*) (WDT_BITBANDING_BASE + (WDT0_OFFSET * 32UL)))

/******************************************************************************************
************************************ 1 LOAD *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_LOAD     ((WDT_BITBANDING_LOAD_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_LOAD_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 2 VALUE *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_VALUE     ((WDT_BITBANDING_VALUE_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_VALUE_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 3 CTL *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_CTL     ((WDT_BITBANDING_CTL_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_CTL_OFFSET) * 32UL)))

#define WDT0_BITBANDING_CTL_INTEN    (*((volatile UBase_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_CTL_OFFSET) * 32UL) + (WDT_CTL_R_INTEN_BIT * 4UL))))
#define WDT0_BITBANDING_CTL_RESEN    (*((volatile UBase_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_CTL_OFFSET) * 32UL) + (WDT_CTL_R_RESEN_BIT * 4UL))))
#define WDT0_BITBANDING_CTL_INTTYPE    (*((volatile UBase_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_CTL_OFFSET) * 32UL) + (WDT_CTL_R_INTTYPE_BIT * 4UL))))
#define WDT0_BITBANDING_CTL_WRC    (*((volatile UBase_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_CTL_OFFSET) * 32UL) + (WDT_CTL_R_WRC_BIT * 4UL))))

/******************************************************************************************
************************************ 4 ICR *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_ICR     ((WDT_BITBANDING_ICR_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_ICR_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 5 RIS *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_RIS     ((WDT_BITBANDING_RIS_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_RIS_OFFSET) * 32UL)))

#define WDT0_BITBANDING_RIS_RIS    (*((volatile UBase_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_RIS_OFFSET) * 32UL) + (WDT_RIS_R_RIS_BIT * 4UL))))

/******************************************************************************************
************************************ 6 MIS *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_MIS     ((WDT_BITBANDING_MIS_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_MIS_OFFSET) * 32UL)))

#define WDT0_BITBANDING_MIS_MIS    (*((volatile UBase_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_MIS_OFFSET) * 32UL) + (WDT_MIS_R_MIS_BIT * 4UL))))

/******************************************************************************************
************************************ 7 TEST *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_TEST     ((WDT_BITBANDING_TEST_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_TEST_OFFSET) * 32UL)))

#define WDT0_BITBANDING_STALL_TEST    (*((volatile UBase_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_TEST_OFFSET) * 32UL) + (WDT_TEST_R_STALL_BIT * 4UL))))

/******************************************************************************************
************************************ 8 LOCK *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_LOCK     ((WDT_BITBANDING_LOCK_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_LOCK_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 9 PeriphID4 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID4     ((WDT_BITBANDING_PeriphID4_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID4_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 10 PeriphID5 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID5     ((WDT_BITBANDING_PeriphID5_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID5_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 11 PeriphID6 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID6     ((WDT_BITBANDING_PeriphID6_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID6_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 12 PeriphID7 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID7     ((WDT_BITBANDING_PeriphID7_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID7_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 13 PeriphID0 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID0     ((WDT_BITBANDING_PeriphID0_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID0_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 14 PeriphID1 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID1     ((WDT_BITBANDING_PeriphID1_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID1_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 15 PeriphID2 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID2     ((WDT_BITBANDING_PeriphID2_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID2_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 16 PeriphID3 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PeriphID3     ((WDT_BITBANDING_PeriphID3_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PeriphID3_OFFSET) * 32UL)))

/*****************************************************************************************
************************************ 17 PCellID0 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PCellID0     ((WDT_BITBANDING_PCellID0_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PCellID0_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 18 PCellID1 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PCellID1     ((WDT_BITBANDING_PCellID1_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PCellID1_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 19 PCellID2 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PCellID2     ((WDT_BITBANDING_PCellID2_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PCellID2_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 20 PCellID3 *********************************************
******************************************************************************************/
#define WDT0_BITBANDING_PCellID3     ((WDT_BITBANDING_PCellID3_t*) (WDT_BITBANDING_BASE + ((WDT0_OFFSET + WDT_PCellID3_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_BITBANDING_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_ */
