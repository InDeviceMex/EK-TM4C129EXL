/**
 *
 * @file WDT_RegisterDefines.h
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
 * Date Author Version Description
 * 19 jul. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERDEFINES_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

/******************************************************************************************
************************************ 1 LOAD *********************************************
******************************************************************************************/

/*--------*/
#define WDT_LOAD_R_LOAD_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define WDT_LOAD_R_LOAD_BIT    ((UBase_t) 0UL)

#define WDT_LOAD_LOAD_MASK    ((UBase_t) 0xFFFFFFFFUL)
/*--------*/

/******************************************************************************************
************************************ 2 VALUE *********************************************
******************************************************************************************/
/*--------*/
#define WDT_VALUE_R_VALUE_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define WDT_VALUE_R_VALUE_BIT    ((UBase_t) 0UL)

#define WDT_VALUE_VALUE_MASK    ((UBase_t) 0xFFFFFFFFUL)
/*--------*/

/******************************************************************************************
************************************ 3 CTL *********************************************
******************************************************************************************/

/*--------*/
#define WDT_CTL_R_INTEN_MASK    ((UBase_t) 0x00000001UL)
#define WDT_CTL_R_INTEN_BIT    ((UBase_t) 0UL)
#define WDT_CTL_R_INTEN_DIS    ((UBase_t) 0x00000000UL)
#define WDT_CTL_R_INTEN_ENA    ((UBase_t) 0x00000001UL)

#define WDT_CTL_INTEN_MASK    ((UBase_t) 0x00000001UL)
#define WDT_CTL_INTEN_DIS    ((UBase_t) 0x00000000UL)
#define WDT_CTL_INTEN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define WDT_CTL_R_RESEN_MASK    ((UBase_t) 0x00000002UL)
#define WDT_CTL_R_RESEN_BIT    ((UBase_t) 1UL)
#define WDT_CTL_R_RESEN_DIS    ((UBase_t) 0x00000000UL)
#define WDT_CTL_R_RESEN_ENA    ((UBase_t) 0x00000002UL)

#define WDT_CTL_RESEN_MASK    ((UBase_t) 0x00000001UL)
#define WDT_CTL_RESEN_DIS    ((UBase_t) 0x00000000UL)
#define WDT_CTL_RESEN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define WDT_CTL_R_INTTYPE_MASK    ((UBase_t) 0x00000004UL)
#define WDT_CTL_R_INTTYPE_BIT    ((UBase_t) 2UL)
#define WDT_CTL_R_INTTYPE_STD    ((UBase_t) 0x00000000UL)
#define WDT_CTL_R_INTTYPE_NMI    ((UBase_t) 0x00000004UL)

#define WDT_CTL_INTTYPE_MASK    ((UBase_t) 0x00000001UL)
#define WDT_CTL_INTTYPE_STD    ((UBase_t) 0x00000000UL)
#define WDT_CTL_INTTYPE_NMI    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define WDT_CTL_R_WRC_MASK    ((UBase_t) 0x80000000UL)
#define WDT_CTL_R_WRC_BIT    ((UBase_t) 31UL)
#define WDT_CTL_R_WRC_PROGRESS    ((UBase_t) 0x00000000UL)
#define WDT_CTL_R_WRC_DONE    ((UBase_t) 0x80000000UL)

#define WDT_CTL_WRC_MASK    ((UBase_t) 0x00000001UL)
#define WDT_CTL_WRC_PROGRESS    ((UBase_t) 0x00000000UL)
#define WDT_CTL_WRC_DONE    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 4 ICR *********************************************
******************************************************************************************/

/*--------*/
#define WDT_ICR_R_INTCLR_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define WDT_ICR_R_INTCLR_BIT    ((UBase_t) 0UL)
#define WDT_ICR_R_INTCLR_CLEAR    ((UBase_t) 0xFFFFFFFFUL)

#define WDT_ICR_INTCLR_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define WDT_ICR_INTCLR_CLEAR    ((UBase_t) 0xFFFFFFFFUL)
/*--------*/

/******************************************************************************************
************************************ 5 RIS *********************************************
******************************************************************************************/

/*--------*/
#define WDT_RIS_R_RIS_MASK    ((UBase_t) 0x00000001UL)
#define WDT_RIS_R_RIS_BIT    ((UBase_t) 0UL)
#define WDT_RIS_R_RIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define WDT_RIS_R_RIS_ACTIVE    ((UBase_t) 0x00000001UL)

#define WDT_RIS_RIS_MASK    ((UBase_t) 0x00000001UL)
#define WDT_RIS_RIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define WDT_RIS_RIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 6 MIS *********************************************
******************************************************************************************/

/*--------*/
#define WDT_MIS_R_MIS_MASK    ((UBase_t) 0x00000001UL)
#define WDT_MIS_R_MIS_BIT    ((UBase_t) 0UL)
#define WDT_MIS_R_MIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define WDT_MIS_R_MIS_ACTIVE    ((UBase_t) 0x00000001UL)

#define WDT_MIS_MIS_MASK    ((UBase_t) 0x00000001UL)
#define WDT_MIS_MIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define WDT_MIS_MIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 7 TEST *********************************************
******************************************************************************************/

/*--------*/
#define WDT_TEST_R_STALL_MASK    ((UBase_t) 0x00000100UL)
#define WDT_TEST_R_STALL_BIT    ((UBase_t) 8UL)
#define WDT_TEST_R_STALL_CONTINUE    ((UBase_t) 0x00000000UL)
#define WDT_TEST_R_STALL_FREEZE    ((UBase_t) 0x00000100UL)

#define WDT_TEST_STALL_MASK    ((UBase_t) 0x00000001UL)
#define WDT_TEST_STALL_CONTINUE    ((UBase_t) 0x00000000UL)
#define WDT_TEST_STALL_FREEZE    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 8 LOCK *********************************************
******************************************************************************************/

/*--------*/
#define WDT_LOCK_R_LOCK_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define WDT_LOCK_R_LOCK_BIT    ((UBase_t) 0UL)
#define WDT_LOCK_R_LOCK_KEY    ((UBase_t) 0x1ACCE551UL)
#define WDT_LOCK_R_LOCK_LOCK    ((UBase_t) 0x00000001UL)
#define WDT_LOCK_R_LOCK_UNLOCK    ((UBase_t) 0x00000000UL)

#define WDT_LOCK_LOCK_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define WDT_LOCK_LOCK_KEY    ((UBase_t) 0x1ACCE551UL)
#define WDT_LOCK_LOCK_LOCK    ((UBase_t) 0x00000001UL)
#define WDT_LOCK_LOCK_UNLOCK    ((UBase_t) 0x00000000UL)
/*--------*/

/******************************************************************************************
************************************ 9 PeriphID4 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID4_R_PID4_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID4_R_PID4_BIT    ((UBase_t) 0UL)
#define WDT_PeriphID4_R_PID4_DEFAULT    ((UBase_t) 0x00000000UL)

#define WDT_PeriphID4_PID4_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID4_PID4_DEFAULT    ((UBase_t) 0x00000000UL)
/*--------*/

/******************************************************************************************
************************************ 10 PeriphID5 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID5_R_PID5_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID5_R_PID5_BIT    ((UBase_t) 0UL)
#define WDT_PeriphID5_R_PID5_DEFAULT    ((UBase_t) 0x00000000UL)

#define WDT_PeriphID5_PID5_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID5_PID5_DEFAULT    ((UBase_t) 0x00000000UL)
/*--------*/

/******************************************************************************************
************************************ 11 PeriphID6 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID6_R_PID6_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID6_R_PID6_BIT    ((UBase_t) 0UL)
#define WDT_PeriphID6_R_PID6_DEFAULT    ((UBase_t) 0x00000000UL)

#define WDT_PeriphID6_PID6_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID6_PID6_DEFAULT    ((UBase_t) 0x00000000UL)
/*--------*/

/******************************************************************************************
************************************ 12 PeriphID7 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID7_R_PID7_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID7_R_PID7_BIT    ((UBase_t) 0UL)
#define WDT_PeriphID7_R_PID7_DEFAULT    ((UBase_t) 0x00000000UL)

#define WDT_PeriphID7_PID7_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID7_PID7_DEFAULT    ((UBase_t) 0x00000000UL)
/*--------*/

/******************************************************************************************
************************************ 13 PeriphID0 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID0_R_PID0_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID0_R_PID0_BIT    ((UBase_t) 0UL)
#define WDT_PeriphID0_R_PID0_DEFAULT    ((UBase_t) 0x00000005UL)

#define WDT_PeriphID0_PID0_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID0_PID0_DEFAULT    ((UBase_t) 0x00000005UL)
/*--------*/

/******************************************************************************************
************************************ 14 PeriphID1 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID1_R_PID1_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID1_R_PID1_BIT    ((UBase_t) 0UL)
#define WDT_PeriphID1_R_PID1_DEFAULT    ((UBase_t) 0x00000018UL)

#define WDT_PeriphID1_PID1_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID1_PID1_DEFAULT    ((UBase_t) 0x00000018UL)
/*--------*/

/******************************************************************************************
************************************ 15 PeriphID2 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID2_R_PID2_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID2_R_PID2_BIT    ((UBase_t) 0UL)
#define WDT_PeriphID2_R_PID2_DEFAULT    ((UBase_t) 0x00000018UL)

#define WDT_PeriphID2_PID2_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID2_PID2_DEFAULT    ((UBase_t) 0x00000018UL)
/*--------*/

/******************************************************************************************
************************************ 16 PeriphID3 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID3_R_PID3_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID3_R_PID3_BIT    ((UBase_t) 0UL)
#define WDT_PeriphID3_R_PID3_DEFAULT    ((UBase_t) 0x00000001UL)

#define WDT_PeriphID3_PID3_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PeriphID3_PID3_DEFAULT    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 17 PCellID0 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PCellID0_R_CID0_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PCellID0_R_CID0_BIT    ((UBase_t) 0UL)
#define WDT_PCellID0_R_CID0_DEFAULT    ((UBase_t) 0x0000000DUL)

#define WDT_PCellID0_CID0_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PCellID0_CID0_DEFAULT    ((UBase_t) 0x0000000DUL)
/*--------*/

/******************************************************************************************
************************************ 18 PCellID1 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PCellID1_R_CID1_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PCellID1_R_CID1_BIT    ((UBase_t) 0UL)
#define WDT_PCellID1_R_CID1_DEFAULT    ((UBase_t) 0x000000F0UL)

#define WDT_PCellID1_CID1_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PCellID1_CID1_DEFAULT    ((UBase_t) 0x000000F0UL)
/*--------*/

/******************************************************************************************
************************************ 19 PCellID2 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PCellID2_R_CID2_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PCellID2_R_CID2_BIT    ((UBase_t) 0UL)
#define WDT_PCellID2_R_CID2_DEFAULT    ((UBase_t) 0x00000006UL)

#define WDT_PCellID2_CID2_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PCellID2_CID2_DEFAULT    ((UBase_t) 0x00000006UL)
/*--------*/

/******************************************************************************************
************************************ 20 PCellID3 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PCellID3_R_CID3_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PCellID3_R_CID3_BIT    ((UBase_t) 0UL)
#define WDT_PCellID3_R_CID3_DEFAULT    ((UBase_t) 0x000000B1UL)

#define WDT_PCellID3_CID3_MASK    ((UBase_t) 0x000000FFUL)
#define WDT_PCellID3_CID3_DEFAULT    ((UBase_t) 0x000000B1UL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERDEFINES_H_ */
