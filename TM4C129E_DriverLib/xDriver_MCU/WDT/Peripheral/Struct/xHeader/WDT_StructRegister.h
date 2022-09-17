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
    volatile uint32_t LOAD :32;
}WDTLOAD_t;

typedef volatile struct
{
    volatile const uint32_t VALUE :32;
}WDTVALUE_t;

typedef volatile struct
{
    volatile uint32_t INTEN :1;
    volatile uint32_t RESEN :1;
    volatile uint32_t INTTYPE :1;
    const uint32_t reserved :28;
    volatile const uint32_t WRC :1;
}WDTCTL_t;


typedef volatile struct
{
    volatile uint32_t INTCLR :32;
}WDTICR_t;



typedef volatile struct
{
    volatile const uint32_t RIS :1;
    const uint32_t reserved :31;
}WDTRIS_t;



typedef volatile struct
{
    volatile const uint32_t MIS :1;
    const uint32_t reserved :31;
}WDTMIS_t;

typedef volatile struct
{
    const uint32_t reserved :8;
    volatile uint32_t STALL :1;
    const uint32_t reserved1 :23;
}WDTTEST_t;

typedef volatile struct
{
    volatile uint32_t LOCK :32;
}WDTLOCK_t;


typedef volatile struct
{
    volatile const uint32_t PID4 :8;
    const uint32_t reserved :24;
}WDTPeriphID4_t;

typedef volatile struct
{
    volatile const uint32_t PID5 :8;
    const uint32_t reserved :24;
}WDTPeriphID5_t;

typedef volatile struct
{
    volatile const uint32_t PID6 :8;
    const uint32_t reserved :24;
}WDTPeriphID6_t;

typedef volatile struct
{
    volatile const uint32_t PID7 :8;
    const uint32_t reserved :24;
}WDTPeriphID7_t;

typedef volatile struct
{
    volatile const uint32_t PID0 :8;
    const uint32_t reserved :24;
}WDTPeriphID0_t;

typedef volatile struct
{
    volatile const uint32_t PID1 :8;
    const uint32_t reserved :24;
}WDTPeriphID1_t;

typedef volatile struct
{
    volatile const uint32_t PID2 :8;
    const uint32_t reserved :24;
}WDTPeriphID2_t;

typedef volatile struct
{
    volatile const uint32_t PID3 :8;
    const uint32_t reserved :24;
}WDTPeriphID3_t;

typedef volatile struct
{
    volatile const uint32_t CID0 :8;
    const uint32_t reserved :24;
}WDTPCellID0_t;

typedef volatile struct
{
    volatile const uint32_t CID1 :8;
    const uint32_t reserved :24;
}WDTPCellID1_t;

typedef volatile struct
{
    volatile const uint32_t CID2 :8;
    const uint32_t reserved :24;
}WDTPCellID2_t;

typedef volatile struct
{
    volatile const uint32_t CID3 :8;
    const uint32_t reserved :24;
}WDTPCellID3_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTREGISTER_H_ */
