/**
 *
 * @file WDT_StructRegister.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTREGISTER_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

typedef volatile struct
{
    volatile UBase_t LOAD :32;
}WDT_LOAD_t;

typedef volatile struct
{
    volatile const UBase_t VALUE :32;
}WDT_VALUE_t;

typedef volatile struct
{
    volatile UBase_t INTEN :1;
    volatile UBase_t RESEN :1;
    volatile UBase_t INTTYPE :1;
    const UBase_t reserved :28;
    volatile const UBase_t WRC :1;
}WDT_CTL_t;


typedef volatile struct
{
    volatile UBase_t INTCLR :32;
}WDT_ICR_t;

typedef volatile struct
{
    volatile const UBase_t RIS :1;
    const UBase_t reserved :31;
}WDT_RIS_t;

typedef volatile struct
{
    volatile const UBase_t MIS :1;
    const UBase_t reserved :31;
}WDT_MIS_t;

typedef volatile struct
{
    const UBase_t reserved :8;
    volatile UBase_t STALL :1;
    const UBase_t reserved1 :23;
}WDT_TEST_t;

typedef volatile struct
{
    volatile UBase_t LOCK :32;
}WDT_LOCK_t;


typedef volatile struct
{
    volatile const UBase_t PID4 :8;
    const UBase_t reserved :24;
}WDT_PeriphID4_t;

typedef volatile struct
{
    volatile const UBase_t PID5 :8;
    const UBase_t reserved :24;
}WDT_PeriphID5_t;

typedef volatile struct
{
    volatile const UBase_t PID6 :8;
    const UBase_t reserved :24;
}WDT_PeriphID6_t;

typedef volatile struct
{
    volatile const UBase_t PID7 :8;
    const UBase_t reserved :24;
}WDT_PeriphID7_t;

typedef volatile struct
{
    volatile const UBase_t PID0 :8;
    const UBase_t reserved :24;
}WDT_PeriphID0_t;

typedef volatile struct
{
    volatile const UBase_t PID1 :8;
    const UBase_t reserved :24;
}WDT_PeriphID1_t;

typedef volatile struct
{
    volatile const UBase_t PID2 :8;
    const UBase_t reserved :24;
}WDT_PeriphID2_t;

typedef volatile struct
{
    volatile const UBase_t PID3 :8;
    const UBase_t reserved :24;
}WDT_PeriphID3_t;

typedef volatile struct
{
    volatile const UBase_t CID0 :8;
    const UBase_t reserved :24;
}WDT_PCellID0_t;

typedef volatile struct
{
    volatile const UBase_t CID1 :8;
    const UBase_t reserved :24;
}WDT_PCellID1_t;

typedef volatile struct
{
    volatile const UBase_t CID2 :8;
    const UBase_t reserved :24;
}WDT_PCellID2_t;

typedef volatile struct
{
    volatile const UBase_t CID3 :8;
    const UBase_t reserved :24;
}WDT_PCellID3_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTREGISTER_H_ */
