/**
 *
 * @file WDT_StructRegister_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTREGISTER_BITBANDING_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

typedef volatile struct
{
    volatile UBase_t LOAD [32UL];
}BITBANDING_WDTLOAD_t;

typedef volatile struct
{
    volatile const UBase_t VALUE [32UL];
}BITBANDING_WDTVALUE_t;

typedef volatile struct
{
    volatile UBase_t INTEN;
    volatile UBase_t RESEN;
    volatile UBase_t INTTYPE;
    const UBase_t reserved [28UL];
    volatile const UBase_t WRC;
}BITBANDING_WDTCTL_t;


typedef volatile struct
{
    volatile UBase_t INTCLR [32UL];
}BITBANDING_WDTICR_t;



typedef volatile struct
{
    volatile const UBase_t RIS;
    const UBase_t reserved [31UL];
}BITBANDING_WDTRIS_t;



typedef volatile struct
{
    volatile const UBase_t MIS;
    const UBase_t reserved [31UL];
}BITBANDING_WDTMIS_t;

typedef volatile struct
{
    const UBase_t reserved [8UL];
    volatile UBase_t STALL;
    const UBase_t reserved1 [23UL];
}BITBANDING_WDTTEST_t;

typedef volatile struct
{
    volatile UBase_t LOCK [32UL];
}BITBANDING_WDTLOCK_t;


typedef volatile struct
{
    volatile const UBase_t PID4 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_WDTPeriphID4_t;

typedef volatile struct
{
    volatile const UBase_t PID5 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_WDTPeriphID5_t;

typedef volatile struct
{
    volatile const UBase_t PID6 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_WDTPeriphID6_t;

typedef volatile struct
{
    volatile const UBase_t PID7 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_WDTPeriphID7_t;

typedef volatile struct
{
    volatile const UBase_t PID0 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_WDTPeriphID0_t;

typedef volatile struct
{
    volatile const UBase_t PID1 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_WDTPeriphID1_t;

typedef volatile struct
{
    volatile const UBase_t PID2 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_WDTPeriphID2_t;

typedef volatile struct
{
    volatile const UBase_t PID3 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_WDTPeriphID3_t;

typedef volatile struct
{
    volatile const UBase_t CID0 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_WDTPCellID0_t;

typedef volatile struct
{
    volatile const UBase_t CID1 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_WDTPCellID1_t;

typedef volatile struct
{
    volatile const UBase_t CID2 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_WDTPCellID2_t;

typedef volatile struct
{
    volatile const UBase_t CID3 [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_WDTPCellID3_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTREGISTER_BITBANDING_H_ */
