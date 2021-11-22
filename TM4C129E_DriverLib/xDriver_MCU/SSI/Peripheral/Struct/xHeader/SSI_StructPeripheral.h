/**
 *
 * @file SSI_StructPeripheral.h
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
 * @verbatim 16 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date       Author     Version     Description
 * 16 feb. 2021     vyldram    1.0     initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/SSI/Peripheral/Struct/xHeader/SSI_StructRegister.h>
#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t CR0;
        SSICR0_t CR0_Bit;
    };
    union
    {
        volatile uint32_t CR1;
        SSICR1_t CR1_Bit;
    };
    union
    {
        volatile const uint32_t DR;
        SSIDR_t DR_Bit;
    };
    union
    {
        volatile const uint32_t SR;
        SSISR_t SR_Bit;
    };
    union
    {
        volatile uint32_t CPSR;
        SSICPSR_t CPSR_Bit;
    };
    union
    {
        volatile uint32_t IM;
        SSIIM_t IM_Bit;
    };
    union
    {
        volatile const uint32_t RIS;
        SSIRIS_t RIS_Bit;
    };
    union
    {
        volatile const uint32_t MIS;
        SSIMIS_t MIS_Bit;
    };
    union
    {
        volatile uint32_t ICR;
        SSIICR_t ICR_Bit;
    };
    union
    {
        volatile uint32_t DMACTL;
        SSIDMACTL_t DMACTL_Bit;
    };
    const uint32_t reserved [998UL];
    union
    {
        volatile const uint32_t PP;
        SSIPP_t PP_Bit;
    };
    const uint32_t reserved1 [1UL];
    union
    {
        volatile uint32_t CC;
        SSICC_t CC_Bit;
    };
    const uint32_t reserved5 [1UL];
    union
    {
        volatile const uint32_t PeriphID4;
        SSIPeriphID4_t PeriphID4_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID5;
        SSIPeriphID5_t PeriphID5_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID6;
        SSIPeriphID6_t PeriphID6_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID7;
        SSIPeriphID7_t PeriphID7_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID0;
        SSIPeriphID0_t PeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID1;
        SSIPeriphID1_t PeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID2;
        SSIPeriphID2_t PeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID3;
        SSIPeriphID3_t PeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t CellID0;
        SSICellID0_t CellID0_Bit;
    };
    union
    {
        volatile const uint32_t CellID1;
        SSICellID1_t CellID1_Bit;
    };
    union
    {
        volatile const uint32_t CellID2;
        SSICellID2_t CellID2_Bit;
    };
    union
    {
        volatile const uint32_t CellID3;
        SSICellID3_t CellID3_Bit;
    };
} SSI_t;

typedef volatile struct
{
    SSI_t MODULE [(uint32_t) SSI_enMODULE_MAX];
} SSIS_t;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_H_ */
