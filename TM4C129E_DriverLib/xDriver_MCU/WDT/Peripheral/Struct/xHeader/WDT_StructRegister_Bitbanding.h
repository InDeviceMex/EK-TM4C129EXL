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
}WDT_BITBANDING_LOAD_t;

typedef volatile struct
{
    volatile const UBase_t VALUE [32UL];
}WDT_BITBANDING_VALUE_t;

typedef volatile struct
{
    volatile UBase_t INTEN;
    volatile UBase_t RESEN;
    volatile UBase_t INTTYPE;
    const UBase_t reserved [28UL];
    volatile const UBase_t WRC;
}WDT_BITBANDING_CTL_t;


typedef volatile struct
{
    volatile UBase_t INTCLR [32UL];
}WDT_BITBANDING_ICR_t;



typedef volatile struct
{
    volatile const UBase_t RIS;
    const UBase_t reserved [31UL];
}WDT_BITBANDING_RIS_t;



typedef volatile struct
{
    volatile const UBase_t MIS;
    const UBase_t reserved [31UL];
}WDT_BITBANDING_MIS_t;

typedef volatile struct
{
    const UBase_t reserved [8UL];
    volatile UBase_t STALL;
    const UBase_t reserved1 [23UL];
}WDT_BITBANDING_TEST_t;

typedef volatile struct
{
    volatile UBase_t LOCK [32UL];
}WDT_BITBANDING_LOCK_t;


typedef volatile struct
{
    volatile const UBase_t PID4 [8UL];
    const UBase_t reserved [24UL];
}WDT_BITBANDING_PeriphID4_t;

typedef volatile struct
{
    volatile const UBase_t PID5 [8UL];
    const UBase_t reserved [24UL];
}WDT_BITBANDING_PeriphID5_t;

typedef volatile struct
{
    volatile const UBase_t PID6 [8UL];
    const UBase_t reserved [24UL];
}WDT_BITBANDING_PeriphID6_t;

typedef volatile struct
{
    volatile const UBase_t PID7 [8UL];
    const UBase_t reserved [24UL];
}WDT_BITBANDING_PeriphID7_t;

typedef volatile struct
{
    volatile const UBase_t PID0 [8UL];
    const UBase_t reserved [24UL];
}WDT_BITBANDING_PeriphID0_t;

typedef volatile struct
{
    volatile const UBase_t PID1 [8UL];
    const UBase_t reserved [24UL];
}WDT_BITBANDING_PeriphID1_t;

typedef volatile struct
{
    volatile const UBase_t PID2 [8UL];
    const UBase_t reserved [24UL];
}WDT_BITBANDING_PeriphID2_t;

typedef volatile struct
{
    volatile const UBase_t PID3 [8UL];
    const UBase_t reserved [24UL];
}WDT_BITBANDING_PeriphID3_t;

typedef volatile struct
{
    volatile const UBase_t CID0 [8UL];
    const UBase_t reserved [24UL];
}WDT_BITBANDING_PCellID0_t;

typedef volatile struct
{
    volatile const UBase_t CID1 [8UL];
    const UBase_t reserved [24UL];
}WDT_BITBANDING_PCellID1_t;

typedef volatile struct
{
    volatile const UBase_t CID2 [8UL];
    const UBase_t reserved [24UL];
}WDT_BITBANDING_PCellID2_t;

typedef volatile struct
{
    volatile const UBase_t CID3 [8UL];
    const UBase_t reserved [24UL];
}WDT_BITBANDING_PCellID3_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTREGISTER_BITBANDING_H_ */
