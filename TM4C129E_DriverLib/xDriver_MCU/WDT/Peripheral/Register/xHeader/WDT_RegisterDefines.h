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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 1 LOAD *********************************************
******************************************************************************************/

/*--------*/
#define WDT_LOAD_R_LOAD_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define WDT_LOAD_R_LOAD_BIT    ((uint32_t) 0UL)

#define WDT_LOAD_LOAD_MASK    ((uint32_t) 0xFFFFFFFFUL)
/*--------*/

/******************************************************************************************
************************************ 2 VALUE *********************************************
******************************************************************************************/
/*--------*/
#define WDT_VALUE_R_VALUE_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define WDT_VALUE_R_VALUE_BIT    ((uint32_t) 0UL)

#define WDT_VALUE_VALUE_MASK    ((uint32_t) 0xFFFFFFFFUL)
/*--------*/

/******************************************************************************************
************************************ 3 CTL *********************************************
******************************************************************************************/

/*--------*/
#define WDT_CTL_R_INTEN_MASK    ((uint32_t) 0x00000001UL)
#define WDT_CTL_R_INTEN_BIT    ((uint32_t) 0UL)
#define WDT_CTL_R_INTEN_DIS    ((uint32_t) 0x00000000UL)
#define WDT_CTL_R_INTEN_ENA    ((uint32_t) 0x00000001UL)

#define WDT_CTL_INTEN_MASK    ((uint32_t) 0x00000001UL)
#define WDT_CTL_INTEN_DIS    ((uint32_t) 0x00000000UL)
#define WDT_CTL_INTEN_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define WDT_CTL_R_RESEN_MASK    ((uint32_t) 0x00000002UL)
#define WDT_CTL_R_RESEN_BIT    ((uint32_t) 1UL)
#define WDT_CTL_R_RESEN_DIS    ((uint32_t) 0x00000000UL)
#define WDT_CTL_R_RESEN_ENA    ((uint32_t) 0x00000002UL)

#define WDT_CTL_RESEN_MASK    ((uint32_t) 0x00000001UL)
#define WDT_CTL_RESEN_DIS    ((uint32_t) 0x00000000UL)
#define WDT_CTL_RESEN_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define WDT_CTL_R_INTTYPE_MASK    ((uint32_t) 0x00000004UL)
#define WDT_CTL_R_INTTYPE_BIT    ((uint32_t) 2UL)
#define WDT_CTL_R_INTTYPE_STD    ((uint32_t) 0x00000000UL)
#define WDT_CTL_R_INTTYPE_NMI    ((uint32_t) 0x00000004UL)

#define WDT_CTL_INTTYPE_MASK    ((uint32_t) 0x00000001UL)
#define WDT_CTL_INTTYPE_STD    ((uint32_t) 0x00000000UL)
#define WDT_CTL_INTTYPE_NMI    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define WDT_CTL_R_WRC_MASK    ((uint32_t) 0x80000000UL)
#define WDT_CTL_R_WRC_BIT    ((uint32_t) 31UL)
#define WDT_CTL_R_WRC_PROGRESS    ((uint32_t) 0x00000000UL)
#define WDT_CTL_R_WRC_DONE    ((uint32_t) 0x80000000UL)

#define WDT_CTL_WRC_MASK    ((uint32_t) 0x00000001UL)
#define WDT_CTL_WRC_PROGRESS    ((uint32_t) 0x00000000UL)
#define WDT_CTL_WRC_DONE    ((uint32_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 4 ICR *********************************************
******************************************************************************************/

/*--------*/
#define WDT_ICR_R_INTCLR_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define WDT_ICR_R_INTCLR_BIT    ((uint32_t) 0UL)
#define WDT_ICR_R_INTCLR_CLEAR    ((uint32_t) 0xFFFFFFFFUL)

#define WDT_ICR_INTCLR_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define WDT_ICR_INTCLR_CLEAR    ((uint32_t) 0xFFFFFFFFUL)
/*--------*/

/******************************************************************************************
************************************ 5 RIS *********************************************
******************************************************************************************/

/*--------*/
#define WDT_RIS_R_RIS_MASK    ((uint32_t) 0x00000001UL)
#define WDT_RIS_R_RIS_BIT    ((uint32_t) 0UL)
#define WDT_RIS_R_RIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define WDT_RIS_R_RIS_ACTIVE    ((uint32_t) 0x00000001UL)

#define WDT_RIS_RIS_MASK    ((uint32_t) 0x00000001UL)
#define WDT_RIS_RIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define WDT_RIS_RIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 6 MIS *********************************************
******************************************************************************************/

/*--------*/
#define WDT_MIS_R_MIS_MASK    ((uint32_t) 0x00000001UL)
#define WDT_MIS_R_MIS_BIT    ((uint32_t) 0UL)
#define WDT_MIS_R_MIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define WDT_MIS_R_MIS_OCCUR    ((uint32_t) 0x00000001UL)

#define WDT_MIS_MIS_MASK    ((uint32_t) 0x00000001UL)
#define WDT_MIS_MIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define WDT_MIS_MIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 7 TEST *********************************************
******************************************************************************************/

/*--------*/
#define WDT_TEST_R_STALL_MASK    ((uint32_t) 0x00000100UL)
#define WDT_TEST_R_STALL_BIT    ((uint32_t) 8UL)
#define WDT_TEST_R_STALL_CONTINUE    ((uint32_t) 0x00000000UL)
#define WDT_TEST_R_STALL_FREEZE    ((uint32_t) 0x00000100UL)

#define WDT_TEST_STALL_MASK    ((uint32_t) 0x00000001UL)
#define WDT_TEST_STALL_CONTINUE    ((uint32_t) 0x00000000UL)
#define WDT_TEST_STALL_FREEZE    ((uint32_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 8 LOCK *********************************************
******************************************************************************************/

/*--------*/
#define WDT_LOCK_R_LOCK_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define WDT_LOCK_R_LOCK_BIT    ((uint32_t) 0UL)
#define WDT_LOCK_R_LOCK_KEY    ((uint32_t) 0x1ACCE551UL)
#define WDT_LOCK_R_LOCK_LOCK    ((uint32_t) 0x00000001UL)
#define WDT_LOCK_R_LOCK_UNLOCK    ((uint32_t) 0x00000000UL)

#define WDT_LOCK_LOCK_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define WDT_LOCK_LOCK_KEY    ((uint32_t) 0x1ACCE551UL)
#define WDT_LOCK_LOCK_LOCK    ((uint32_t) 0x00000001UL)
#define WDT_LOCK_LOCK_UNLOCK    ((uint32_t) 0x00000000UL)
/*--------*/

/******************************************************************************************
************************************ 9 PeriphID4 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID4_R_PID4_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID4_R_PID4_BIT    ((uint32_t) 0UL)
#define WDT_PeriphID4_R_PID4_DEFAULT    ((uint32_t) 0x00000000UL)

#define WDT_PeriphID4_PID4_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID4_PID4_DEFAULT    ((uint32_t) 0x00000000UL)
/*--------*/

/******************************************************************************************
************************************ 10 PeriphID5 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID5_R_PID5_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID5_R_PID5_BIT    ((uint32_t) 0UL)
#define WDT_PeriphID5_R_PID5_DEFAULT    ((uint32_t) 0x00000000UL)

#define WDT_PeriphID5_PID5_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID5_PID5_DEFAULT    ((uint32_t) 0x00000000UL)
/*--------*/

/******************************************************************************************
************************************ 11 PeriphID6 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID6_R_PID6_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID6_R_PID6_BIT    ((uint32_t) 0UL)
#define WDT_PeriphID6_R_PID6_DEFAULT    ((uint32_t) 0x00000000UL)

#define WDT_PeriphID6_PID6_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID6_PID6_DEFAULT    ((uint32_t) 0x00000000UL)
/*--------*/

/******************************************************************************************
************************************ 12 PeriphID7 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID7_R_PID7_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID7_R_PID7_BIT    ((uint32_t) 0UL)
#define WDT_PeriphID7_R_PID7_DEFAULT    ((uint32_t) 0x00000000UL)

#define WDT_PeriphID7_PID7_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID7_PID7_DEFAULT    ((uint32_t) 0x00000000UL)
/*--------*/

/******************************************************************************************
************************************ 13 PeriphID0 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID0_R_PID0_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID0_R_PID0_BIT    ((uint32_t) 0UL)
#define WDT_PeriphID0_R_PID0_DEFAULT    ((uint32_t) 0x00000005UL)

#define WDT_PeriphID0_PID0_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID0_PID0_DEFAULT    ((uint32_t) 0x00000005UL)
/*--------*/

/******************************************************************************************
************************************ 14 PeriphID1 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID1_R_PID1_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID1_R_PID1_BIT    ((uint32_t) 0UL)
#define WDT_PeriphID1_R_PID1_DEFAULT    ((uint32_t) 0x00000018UL)

#define WDT_PeriphID1_PID1_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID1_PID1_DEFAULT    ((uint32_t) 0x00000018UL)
/*--------*/

/******************************************************************************************
************************************ 15 PeriphID2 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID2_R_PID2_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID2_R_PID2_BIT    ((uint32_t) 0UL)
#define WDT_PeriphID2_R_PID2_DEFAULT    ((uint32_t) 0x00000018UL)

#define WDT_PeriphID2_PID2_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID2_PID2_DEFAULT    ((uint32_t) 0x00000018UL)
/*--------*/

/******************************************************************************************
************************************ 16 PeriphID3 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PeriphID3_R_PID3_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID3_R_PID3_BIT    ((uint32_t) 0UL)
#define WDT_PeriphID3_R_PID3_DEFAULT    ((uint32_t) 0x00000001UL)

#define WDT_PeriphID3_PID3_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PeriphID3_PID3_DEFAULT    ((uint32_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 17 PCellID0 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PCellID0_R_CID0_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PCellID0_R_CID0_BIT    ((uint32_t) 0UL)
#define WDT_PCellID0_R_CID0_DEFAULT    ((uint32_t) 0x0000000DUL)

#define WDT_PCellID0_CID0_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PCellID0_CID0_DEFAULT    ((uint32_t) 0x0000000DUL)
/*--------*/

/******************************************************************************************
************************************ 18 PCellID1 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PCellID1_R_CID1_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PCellID1_R_CID1_BIT    ((uint32_t) 0UL)
#define WDT_PCellID1_R_CID1_DEFAULT    ((uint32_t) 0x000000F0UL)

#define WDT_PCellID1_CID1_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PCellID1_CID1_DEFAULT    ((uint32_t) 0x000000F0UL)
/*--------*/

/******************************************************************************************
************************************ 19 PCellID2 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PCellID2_R_CID2_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PCellID2_R_CID2_BIT    ((uint32_t) 0UL)
#define WDT_PCellID2_R_CID2_DEFAULT    ((uint32_t) 0x00000006UL)

#define WDT_PCellID2_CID2_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PCellID2_CID2_DEFAULT    ((uint32_t) 0x00000006UL)
/*--------*/

/******************************************************************************************
************************************ 20 PCellID3 *********************************************
******************************************************************************************/

/*--------*/
#define WDT_PCellID3_R_CID3_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PCellID3_R_CID3_BIT    ((uint32_t) 0UL)
#define WDT_PCellID3_R_CID3_DEFAULT    ((uint32_t) 0x000000B1UL)

#define WDT_PCellID3_CID3_MASK    ((uint32_t) 0x000000FFUL)
#define WDT_PCellID3_CID3_DEFAULT    ((uint32_t) 0x000000B1UL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERDEFINES_H_ */
