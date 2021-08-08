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
        SSICR0_TypeDef CR0_Bit;
    };
    union
    {
        volatile uint32_t CR1;
        SSICR1_TypeDef CR1_Bit;
    };
    union
    {
        volatile const uint32_t DR;
        SSIDR_TypeDef DR_Bit;
    };
    union
    {
        volatile const uint32_t SR;
        SSISR_TypeDef SR_Bit;
    };
    union
    {
        volatile uint32_t CPSR;
        SSICPSR_TypeDef CPSR_Bit;
    };
    union
    {
        volatile uint32_t IM;
        SSIIM_TypeDef IM_Bit;
    };
    union
    {
        volatile const uint32_t RIS;
        SSIRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile const uint32_t MIS;
        SSIMIS_TypeDef MIS_Bit;
    };
    union
    {
        volatile uint32_t ICR;
        SSIICR_TypeDef ICR_Bit;
    };
    union
    {
        volatile uint32_t DMACTL;
        SSIDMACTL_TypeDef DMACTL_Bit;
    };
    const uint32_t reserved [998UL];
    union
    {
        volatile const uint32_t PP;
        SSIPP_TypeDef PP_Bit;
    };
    const uint32_t reserved1 [1UL];
    union
    {
        volatile uint32_t CC;
        SSICC_TypeDef CC_Bit;
    };
    const uint32_t reserved5 [1UL];
    union
    {
        volatile const uint32_t PeriphID4;
        SSIPeriphID4_TypeDef PeriphID4_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID5;
        SSIPeriphID5_TypeDef PeriphID5_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID6;
        SSIPeriphID6_TypeDef PeriphID6_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID7;
        SSIPeriphID7_TypeDef PeriphID7_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID0;
        SSIPeriphID0_TypeDef PeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID1;
        SSIPeriphID1_TypeDef PeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID2;
        SSIPeriphID2_TypeDef PeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID3;
        SSIPeriphID3_TypeDef PeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t CellID0;
        SSICellID0_TypeDef CellID0_Bit;
    };
    union
    {
        volatile const uint32_t CellID1;
        SSICellID1_TypeDef CellID1_Bit;
    };
    union
    {
        volatile const uint32_t CellID2;
        SSICellID2_TypeDef CellID2_Bit;
    };
    union
    {
        volatile const uint32_t CellID3;
        SSICellID3_TypeDef CellID3_Bit;
    };
} SSI_TypeDef;

typedef volatile struct
{
    SSI_TypeDef MODULE [(uint32_t) SSI_enMODULE_MAX];
} SSIS_TypeDef;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_H_ */
