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
        volatile UBase_t LOAD [32UL];
        WDT_BITBANDING_LOAD_t LOAD_Bit;
    };
    union
    {
        volatile const UBase_t VALUE [32UL];
        WDT_BITBANDING_VALUE_t VALUE_Bit;
    };
    union
    {
        volatile UBase_t CTL [32UL];
        WDT_BITBANDING_CTL_t CTL_Bit;
    };
    union
    {
        volatile UBase_t ICR [32UL];
        WDT_BITBANDING_ICR_t ICR_Bit;
    };
    union
    {
        volatile const UBase_t RIS [32UL];
        WDT_BITBANDING_RIS_t RIS_Bit;
    };
    union
    {
        volatile const UBase_t MIS [32UL];
        WDT_BITBANDING_MIS_t MIS_Bit;
    };
    const UBase_t reserved [256UL * 32UL];
    union
    {
        volatile UBase_t TEST [32UL];
        WDT_BITBANDING_TEST_t TEST_Bit;
    };

    const UBase_t reserved1 [505UL * 32UL];
    union
    {
        volatile UBase_t LOCK [32UL];
        WDT_BITBANDING_LOCK_t LOCK_Bit;
    };
    const UBase_t reserved2 [243UL * 32UL];
    union
    {
        volatile UBase_t PeriphID4 [32UL];
        WDT_BITBANDING_PeriphID4_t PeriphID4_Bit;
    };
    union
    {
        volatile UBase_t PeriphID5 [32UL];
        WDT_BITBANDING_PeriphID5_t PeriphID5_Bit;
    };
    union
    {
        volatile UBase_t PeriphID6 [32UL];
        WDT_BITBANDING_PeriphID6_t PeriphID6_Bit;
    };
    union
    {
        volatile UBase_t PeriphID7 [32UL];
        WDT_BITBANDING_PeriphID7_t PeriphID7_Bit;
    };
    union
    {
        volatile UBase_t PeriphID0 [32UL];
        WDT_BITBANDING_PeriphID0_t PeriphID0_Bit;
    };
    union
    {
        volatile UBase_t PeriphID1 [32UL];
        WDT_BITBANDING_PeriphID1_t PeriphID1_Bit;
    };
    union
    {
        volatile UBase_t PeriphID2 [32UL];
        WDT_BITBANDING_PeriphID2_t PeriphID2_Bit;
    };
    union
    {
        volatile UBase_t PeriphID3 [32UL];
        WDT_BITBANDING_PeriphID3_t PeriphID3_Bit;
    };
    union
    {
        volatile UBase_t PCellID0 [32UL];
        WDT_BITBANDING_PCellID0_t PCellID0_Bit;
    };
    union
    {
        volatile UBase_t PCellID1 [32UL];
        WDT_BITBANDING_PCellID1_t PCellID1_Bit;
    };
    union
    {
        volatile UBase_t PCellID2 [32UL];
        WDT_BITBANDING_PCellID2_t PCellID2_Bit;
    };
    union
    {
        volatile UBase_t PCellID3 [32UL];
        WDT_BITBANDING_PCellID3_t PCellID3_Bit;
    };
}WDT_BITBANDING_t;

typedef volatile struct
{
     WDT_BITBANDING_t MODULE [(UBase_t) WDT_enMODULE_MAX];
}WDTS_BITBANDING_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_BITBANDING_H_ */
