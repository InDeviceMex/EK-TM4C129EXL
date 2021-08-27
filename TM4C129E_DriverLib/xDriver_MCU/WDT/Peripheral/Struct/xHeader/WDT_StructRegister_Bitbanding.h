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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef volatile struct
{
    volatile uint32_t LOAD [32UL];
}BITBANDING_WDTLOAD_TypeDef;

typedef volatile struct
{
    volatile const uint32_t VALUE [32UL];
}BITBANDING_WDTVALUE_TypeDef;

typedef volatile struct
{
    volatile uint32_t INTEN;
    volatile uint32_t RESEN;
    volatile uint32_t INTTYPE;
    const uint32_t reserved [28UL];
    volatile const uint32_t WRC;
}BITBANDING_WDTCTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t INTCLR [32UL];
}BITBANDING_WDTICR_TypeDef;



typedef volatile struct
{
    volatile const uint32_t RIS;
    const uint32_t reserved [31UL];
}BITBANDING_WDTRIS_TypeDef;



typedef volatile struct
{
    volatile const uint32_t MIS;
    const uint32_t reserved [31UL];
}BITBANDING_WDTMIS_TypeDef;

typedef volatile struct
{
    const uint32_t reserved [8UL];
    volatile uint32_t STALL;
    const uint32_t reserved1 [23UL];
}BITBANDING_WDTTEST_TypeDef;

typedef volatile struct
{
    volatile uint32_t LOCK [32UL];
}BITBANDING_WDTLOCK_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID4 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_WDTPeriphID4_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID5 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_WDTPeriphID5_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID6 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_WDTPeriphID6_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID7 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_WDTPeriphID7_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID0 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_WDTPeriphID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID1 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_WDTPeriphID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID2 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_WDTPeriphID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID3 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_WDTPeriphID3_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID0 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_WDTPCellID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID1 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_WDTPCellID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID2 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_WDTPCellID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID3 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_WDTPCellID3_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTREGISTER_BITBANDING_H_ */
