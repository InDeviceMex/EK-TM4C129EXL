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
        volatile UBase_t LOAD;
        WDT_LOAD_t LOAD_Bit;
    };
    union
    {
        volatile const UBase_t VALUE;
        WDT_VALUE_t VALUE_Bit;
    };
    union
    {
        volatile UBase_t CTL;
        WDT_CTL_t CTL_Bit;
    };
    union
    {
        volatile UBase_t ICR;
        WDT_ICR_t ICR_Bit;
    };
    union
    {
    volatile const UBase_t RIS;
    WDT_RIS_t RIS_Bit;
    };
    union
    {
    volatile const UBase_t MIS;
    WDT_MIS_t MIS_Bit;
    };

    const UBase_t reserved [256UL];
    union
    {
    volatile UBase_t TEST;
    WDT_TEST_t TEST_Bit;
    };

    const UBase_t reserved1 [505UL];
    union
    {
        volatile UBase_t LOCK;
        WDT_LOCK_t LOCK_Bit;
    };
    const UBase_t reserved2 [243UL];
    union
    {
        volatile UBase_t PeriphID4;
        WDT_PeriphID4_t PeriphID4_Bit;
    };
    union
    {
        volatile UBase_t PeriphID5;
        WDT_PeriphID5_t PeriphID5_Bit;
    };
    union
    {
        volatile UBase_t PeriphID6;
        WDT_PeriphID6_t PeriphID6_Bit;
    };
    union
    {
        volatile UBase_t PeriphID7;
        WDT_PeriphID7_t PeriphID7_Bit;
    };
    union
    {
        volatile UBase_t PeriphID0;
        WDT_PeriphID0_t PeriphID0_Bit;
    };
    union
    {
        volatile UBase_t PeriphID1;
        WDT_PeriphID1_t PeriphID1_Bit;
    };
    union
    {
        volatile UBase_t PeriphID2;
        WDT_PeriphID2_t PeriphID2_Bit;
    };
    union
    {
        volatile UBase_t PeriphID3;
        WDT_PeriphID3_t PeriphID3_Bit;
    };
    union
    {
        volatile UBase_t PCellID0;
        WDT_PCellID0_t PCellID0_Bit;
    };
    union
    {
        volatile UBase_t PCellID1;
        WDT_PCellID1_t PCellID1_Bit;
    };
    union
    {
        volatile UBase_t PCellID2;
        WDT_PCellID2_t PCellID2_Bit;
    };
    union
    {
        volatile UBase_t PCellID3;
        WDT_PCellID3_t PCellID3_Bit;
    };
}WDT_t;

typedef volatile struct
{
     WDT_t MODULE[(UBase_t) WDT_enMODULE_MAX];
}WDTS_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_H_ */
