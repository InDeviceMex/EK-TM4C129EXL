/**
 *
 * @file SSI_StructPeripheral_Bitbanding.h
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
 * Date           Author     Version     Description
 * 16 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/SSI/Peripheral/Struct/xHeader/SSI_StructRegister_Bitbanding.h>
#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t CR0 [32UL];
        BITBANDING_SSICR0_TypeDef CR0_Bit;
    };
    union
    {
        volatile uint32_t CR1 [32UL];
        BITBANDING_SSICR1_TypeDef CR1_Bit;
    };
    union
    {
        volatile const uint32_t DR [32UL];
        BITBANDING_SSIDR_TypeDef DR_Bit;
    };
    union
    {
        volatile const uint32_t SR [32UL];
        BITBANDING_SSISR_TypeDef SR_Bit;
    };
    union
    {
        volatile uint32_t CPSR [32UL];
        BITBANDING_SSICPSR_TypeDef CPSR_Bit;
    };
    union
    {
        volatile uint32_t IM [32UL];
        BITBANDING_SSIIM_TypeDef IM_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        BITBANDING_SSIRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile const uint32_t MIS [32UL];
        BITBANDING_SSIMIS_TypeDef MIS_Bit;
    };
    union
    {
        volatile uint32_t ICR [32UL];
        BITBANDING_SSIICR_TypeDef ICR_Bit;
    };
    union
    {
        volatile uint32_t DMACTL [32UL];
        BITBANDING_SSIDMACTL_TypeDef DMACTL_Bit;
    };
    const uint32_t reserved [998UL * 32UL];
    union
    {
        volatile const uint32_t PP [32UL];
        BITBANDING_SSIPP_TypeDef PP_Bit;
    };
    const uint32_t reserved1 [1UL * 32UL];
    union
    {
        volatile uint32_t CC [32UL];
        BITBANDING_SSICC_TypeDef CC_Bit;
    };
    const uint32_t reserved5 [1UL * 32UL];
    union
    {
        volatile const uint32_t PeriphID4 [32UL];
        BITBANDING_SSIPeriphID4_TypeDef PeriphID4_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID5 [32UL];
        BITBANDING_SSIPeriphID5_TypeDef PeriphID5_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID6 [32UL];
        BITBANDING_SSIPeriphID6_TypeDef PeriphID6_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID7 [32UL];
        BITBANDING_SSIPeriphID7_TypeDef PeriphID7_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID0 [32UL];
        BITBANDING_SSIPeriphID0_TypeDef PeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID1 [32UL];
        BITBANDING_SSIPeriphID1_TypeDef PeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID2 [32UL];
        BITBANDING_SSIPeriphID2_TypeDef PeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID3 [32UL];
        BITBANDING_SSIPeriphID3_TypeDef PeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t CellID0 [32UL];
        BITBANDING_SSICellID0_TypeDef CellID0_Bit;
    };
    union
    {
        volatile const uint32_t CellID1 [32UL];
        BITBANDING_SSICellID1_TypeDef CellID1_Bit;
    };
    union
    {
        volatile const uint32_t CellID2 [32UL];
        BITBANDING_SSICellID2_TypeDef CellID2_Bit;
    };
    union
    {
        volatile const uint32_t CellID3 [32UL];
        BITBANDING_SSICellID3_TypeDef CellID3_Bit;
    };
} SSI_BITBANDING_TypeDef;

typedef volatile struct
{
    SSI_BITBANDING_TypeDef MODULE [(uint32_t) SSI_enMODULE_MAX];
} SSIS_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_BITBANDING_H_ */
