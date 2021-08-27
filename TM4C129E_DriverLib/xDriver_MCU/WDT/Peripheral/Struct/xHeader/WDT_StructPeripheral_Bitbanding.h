/**
 *
 * @file WDT_StructPeripheral_Bitbanding.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/WDT/Peripheral/Struct/xHeader/WDT_StructRegister_Bitbanding.h>
#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t LOAD [32UL];
        BITBANDING_WDTLOAD_TypeDef LOAD_Bit;
    };
    union
    {
        volatile const uint32_t VALUE [32UL];
        BITBANDING_WDTVALUE_TypeDef VALUE_Bit;
    };
    union
    {
        volatile uint32_t CTL [32UL];
        BITBANDING_WDTCTL_TypeDef CTL_Bit;
    };
    union
    {
        volatile uint32_t ICR [32UL];
        BITBANDING_WDTICR_TypeDef ICR_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        BITBANDING_WDTRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile const uint32_t MIS [32UL];
        BITBANDING_WDTMIS_TypeDef MIS_Bit;
    };
    const uint32_t reserved [256UL * 32UL];
    union
    {
        volatile uint32_t TEST [32UL];
        BITBANDING_WDTTEST_TypeDef TEST_Bit;
    };

    const uint32_t reserved1 [505UL * 32UL];
    union
    {
        volatile uint32_t LOCK [32UL];
        BITBANDING_WDTLOCK_TypeDef LOCK_Bit;
    };
    const uint32_t reserved2 [243UL * 32UL];
    union
    {
        volatile uint32_t PeriphID4 [32UL];
        BITBANDING_WDTPeriphID4_TypeDef PeriphID4_Bit;
    };
    union
    {
        volatile uint32_t PeriphID5 [32UL];
        BITBANDING_WDTPeriphID5_TypeDef PeriphID5_Bit;
    };
    union
    {
        volatile uint32_t PeriphID6 [32UL];
        BITBANDING_WDTPeriphID6_TypeDef PeriphID6_Bit;
    };
    union
    {
        volatile uint32_t PeriphID7 [32UL];
        BITBANDING_WDTPeriphID7_TypeDef PeriphID7_Bit;
    };
    union
    {
        volatile uint32_t PeriphID0 [32UL];
        BITBANDING_WDTPeriphID0_TypeDef PeriphID0_Bit;
    };
    union
    {
        volatile uint32_t PeriphID1 [32UL];
        BITBANDING_WDTPeriphID1_TypeDef PeriphID1_Bit;
    };
    union
    {
        volatile uint32_t PeriphID2 [32UL];
        BITBANDING_WDTPeriphID2_TypeDef PeriphID2_Bit;
    };
    union
    {
        volatile uint32_t PeriphID3 [32UL];
        BITBANDING_WDTPeriphID3_TypeDef PeriphID3_Bit;
    };
    union
    {
        volatile uint32_t PCellID0 [32UL];
        BITBANDING_WDTPCellID0_TypeDef PCellID0_Bit;
    };
    union
    {
        volatile uint32_t PCellID1 [32UL];
        BITBANDING_WDTPCellID1_TypeDef PCellID1_Bit;
    };
    union
    {
        volatile uint32_t PCellID2 [32UL];
        BITBANDING_WDTPCellID2_TypeDef PCellID2_Bit;
    };
    union
    {
        volatile uint32_t PCellID3 [32UL];
        BITBANDING_WDTPCellID3_TypeDef PCellID3_Bit;
    };
}WDT_BITBANDING_TypeDef;

typedef volatile struct
{
     WDT_BITBANDING_TypeDef MODULE [(uint32_t) WDT_enMODULE_MAX];
}WDTS_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_BITBANDING_H_ */
