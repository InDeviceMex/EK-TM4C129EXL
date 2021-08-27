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
        WDTLOAD_TypeDef LOAD_Bit;
    };
    union
    {
        volatile const uint32_t VALUE;
        WDTVALUE_TypeDef VALUE_Bit;
    };
    union
    {
        volatile uint32_t CTL;
        WDTCTL_TypeDef CTL_Bit;
    };
    union
    {
        volatile uint32_t ICR;
        WDTICR_TypeDef ICR_Bit;
    };
    union
    {
    volatile const uint32_t RIS;
    WDTRIS_TypeDef RIS_Bit;
    };
    union
    {
    volatile const uint32_t MIS;
    WDTMIS_TypeDef MIS_Bit;
    };

    const uint32_t reserved [256UL];
    union
    {
    volatile uint32_t TEST;
    WDTTEST_TypeDef TEST_Bit;
    };

    const uint32_t reserved1 [505UL];
    union
    {
        volatile uint32_t LOCK;
        WDTLOCK_TypeDef LOCK_Bit;
    };
    const uint32_t reserved2 [243UL];
    union
    {
        volatile uint32_t PeriphID4;
        WDTPeriphID4_TypeDef PeriphID4_Bit;
    };
    union
    {
        volatile uint32_t PeriphID5;
        WDTPeriphID5_TypeDef PeriphID5_Bit;
    };
    union
    {
        volatile uint32_t PeriphID6;
        WDTPeriphID6_TypeDef PeriphID6_Bit;
    };
    union
    {
        volatile uint32_t PeriphID7;
        WDTPeriphID7_TypeDef PeriphID7_Bit;
    };
    union
    {
        volatile uint32_t PeriphID0;
        WDTPeriphID0_TypeDef PeriphID0_Bit;
    };
    union
    {
        volatile uint32_t PeriphID1;
        WDTPeriphID1_TypeDef PeriphID1_Bit;
    };
    union
    {
        volatile uint32_t PeriphID2;
        WDTPeriphID2_TypeDef PeriphID2_Bit;
    };
    union
    {
        volatile uint32_t PeriphID3;
        WDTPeriphID3_TypeDef PeriphID3_Bit;
    };
    union
    {
        volatile uint32_t PCellID0;
        WDTPCellID0_TypeDef PCellID0_Bit;
    };
    union
    {
        volatile uint32_t PCellID1;
        WDTPCellID1_TypeDef PCellID1_Bit;
    };
    union
    {
        volatile uint32_t PCellID2;
        WDTPCellID2_TypeDef PCellID2_Bit;
    };
    union
    {
        volatile uint32_t PCellID3;
        WDTPCellID3_TypeDef PCellID3_Bit;
    };
}WDT_TypeDef;

typedef volatile struct
{
     WDT_TypeDef MODULE[(uint32_t) WDT_enMODULE_MAX];
}WDTS_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_H_ */
