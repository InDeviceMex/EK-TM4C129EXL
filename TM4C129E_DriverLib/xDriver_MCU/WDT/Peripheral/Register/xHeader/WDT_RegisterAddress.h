/**
 *
 * @file WDT_RegisterAddress.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERADDRESS_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

#define WDT_BASE    ((UBase_t) 0x40000000UL)
#define WDT0_BASE    ((UBase_t) 0x40000000UL)
#define WDT1_BASE    ((UBase_t) 0x40010000UL)

#define WDT_OFFSET    ((UBase_t) 0x00000000UL)
#define WDT0_OFFSET    ((UBase_t) 0x00000000UL)
#define WDT1_OFFSET    ((UBase_t) 0x00010000UL)

#define WDT_BITBANDING_BASE    ((UBase_t) 0x42000000UL)

#define WDT_LOAD_OFFSET    ((UBase_t) 0x0000UL)
#define WDT_VALUE_OFFSET    ((UBase_t) 0x0004UL)
#define WDT_CTL_OFFSET    ((UBase_t) 0x0008UL)
#define WDT_ICR_OFFSET    ((UBase_t) 0x000CUL)
#define WDT_RIS_OFFSET    ((UBase_t) 0x0010UL)
#define WDT_MIS_OFFSET    ((UBase_t) 0x0014UL)
#define WDT_TEST_OFFSET    ((UBase_t) 0x0418UL)
#define WDT_LOCK_OFFSET    ((UBase_t) 0x0C00UL)
#define WDT_PeriphID4_OFFSET    ((UBase_t) 0x0FD0UL)
#define WDT_PeriphID5_OFFSET    ((UBase_t) 0x0FD4UL)
#define WDT_PeriphID6_OFFSET    ((UBase_t) 0x0FD8UL)
#define WDT_PeriphID7_OFFSET    ((UBase_t) 0x0FDCUL)
#define WDT_PeriphID0_OFFSET    ((UBase_t) 0x0FE0UL)
#define WDT_PeriphID1_OFFSET    ((UBase_t) 0x0FE4UL)
#define WDT_PeriphID2_OFFSET    ((UBase_t) 0x0FE8UL)
#define WDT_PeriphID3_OFFSET    ((UBase_t) 0x0FECUL)
#define WDT_PCellID0_OFFSET    ((UBase_t) 0x0FF0UL)
#define WDT_PCellID1_OFFSET    ((UBase_t) 0x0FF4UL)
#define WDT_PCellID2_OFFSET    ((UBase_t) 0x0FF8UL)
#define WDT_PCellID3_OFFSET    ((UBase_t) 0x0FFCUL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERADDRESS_H_ */
