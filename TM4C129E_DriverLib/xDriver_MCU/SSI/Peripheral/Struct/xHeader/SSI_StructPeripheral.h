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
        volatile UBase_t CR0;
        SSI_CR0_t CR0_Bit;
    };
    union
    {
        volatile UBase_t CR1;
        SSI_CR1_t CR1_Bit;
    };
    union
    {
        volatile const UBase_t DR;
        SSI_DR_t DR_Bit;
    };
    union
    {
        volatile const UBase_t SR;
        SSI_SR_t SR_Bit;
    };
    union
    {
        volatile UBase_t CPSR;
        SSI_CPSR_t CPSR_Bit;
    };
    union
    {
        volatile UBase_t IM;
        SSI_IM_t IM_Bit;
    };
    union
    {
        volatile const UBase_t RIS;
        SSI_RIS_t RIS_Bit;
    };
    union
    {
        volatile const UBase_t MIS;
        SSI_MIS_t MIS_Bit;
    };
    union
    {
        volatile UBase_t ICR;
        SSI_ICR_t ICR_Bit;
    };
    union
    {
        volatile UBase_t DMACTL;
        SSI_DMACTL_t DMACTL_Bit;
    };
    const UBase_t reserved [998UL];
    union
    {
        volatile const UBase_t PP;
        SSI_PP_t PP_Bit;
    };
    const UBase_t reserved1 [1UL];
    union
    {
        volatile UBase_t CC;
        SSI_CC_t CC_Bit;
    };
    const UBase_t reserved5 [1UL];
    union
    {
        volatile const UBase_t PeriphID4;
        SSI_PeriphID4_t PeriphID4_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID5;
        SSI_PeriphID5_t PeriphID5_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID6;
        SSI_PeriphID6_t PeriphID6_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID7;
        SSI_PeriphID7_t PeriphID7_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID0;
        SSI_PeriphID0_t PeriphID0_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID1;
        SSI_PeriphID1_t PeriphID1_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID2;
        SSI_PeriphID2_t PeriphID2_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID3;
        SSI_PeriphID3_t PeriphID3_Bit;
    };
    union
    {
        volatile const UBase_t PCellID0;
        SSI_PCellID0_t PCellID0_Bit;
    };
    union
    {
        volatile const UBase_t PCellID1;
        SSI_PCellID1_t PCellID1_Bit;
    };
    union
    {
        volatile const UBase_t PCellID2;
        SSI_PCellID2_t PCellID2_Bit;
    };
    union
    {
        volatile const UBase_t PCellID3;
        SSI_PCellID3_t PCellID3_Bit;
    };
} SSI_t;

typedef volatile struct
{
    SSI_t MODULE [(UBase_t) SSI_enMODULE_MAX];
} SSIS_t;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_H_ */
