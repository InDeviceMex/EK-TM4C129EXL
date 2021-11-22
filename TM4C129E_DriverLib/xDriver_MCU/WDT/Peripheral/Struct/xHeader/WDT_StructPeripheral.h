/**
 *
 * @file WDT_StructPeripheral.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/WDT/Peripheral/Struct/xHeader/WDT_StructRegister.h>
#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t LOAD;
        WDTLOAD_t LOAD_Bit;
    };
    union
    {
        volatile const uint32_t VALUE;
        WDTVALUE_t VALUE_Bit;
    };
    union
    {
        volatile uint32_t CTL;
        WDTCTL_t CTL_Bit;
    };
    union
    {
        volatile uint32_t ICR;
        WDTICR_t ICR_Bit;
    };
    union
    {
    volatile const uint32_t RIS;
    WDTRIS_t RIS_Bit;
    };
    union
    {
    volatile const uint32_t MIS;
    WDTMIS_t MIS_Bit;
    };

    const uint32_t reserved [256UL];
    union
    {
    volatile uint32_t TEST;
    WDTTEST_t TEST_Bit;
    };

    const uint32_t reserved1 [505UL];
    union
    {
        volatile uint32_t LOCK;
        WDTLOCK_t LOCK_Bit;
    };
    const uint32_t reserved2 [243UL];
    union
    {
        volatile uint32_t PeriphID4;
        WDTPeriphID4_t PeriphID4_Bit;
    };
    union
    {
        volatile uint32_t PeriphID5;
        WDTPeriphID5_t PeriphID5_Bit;
    };
    union
    {
        volatile uint32_t PeriphID6;
        WDTPeriphID6_t PeriphID6_Bit;
    };
    union
    {
        volatile uint32_t PeriphID7;
        WDTPeriphID7_t PeriphID7_Bit;
    };
    union
    {
        volatile uint32_t PeriphID0;
        WDTPeriphID0_t PeriphID0_Bit;
    };
    union
    {
        volatile uint32_t PeriphID1;
        WDTPeriphID1_t PeriphID1_Bit;
    };
    union
    {
        volatile uint32_t PeriphID2;
        WDTPeriphID2_t PeriphID2_Bit;
    };
    union
    {
        volatile uint32_t PeriphID3;
        WDTPeriphID3_t PeriphID3_Bit;
    };
    union
    {
        volatile uint32_t PCellID0;
        WDTPCellID0_t PCellID0_Bit;
    };
    union
    {
        volatile uint32_t PCellID1;
        WDTPCellID1_t PCellID1_Bit;
    };
    union
    {
        volatile uint32_t PCellID2;
        WDTPCellID2_t PCellID2_Bit;
    };
    union
    {
        volatile uint32_t PCellID3;
        WDTPCellID3_t PCellID3_Bit;
    };
}WDT_t;

typedef volatile struct
{
     WDT_t MODULE[(uint32_t) WDT_enMODULE_MAX];
}WDTS_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_H_ */
