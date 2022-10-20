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
        volatile UBase_t CR0 [32UL];
        SSI_BITBANDING_CR0_t CR0_Bit;
    };
    union
    {
        volatile UBase_t CR1 [32UL];
        SSI_BITBANDING_CR1_t CR1_Bit;
    };
    union
    {
        volatile const UBase_t DR [32UL];
        SSI_BITBANDING_DR_t DR_Bit;
    };
    union
    {
        volatile const UBase_t SR [32UL];
        SSI_BITBANDING_SR_t SR_Bit;
    };
    union
    {
        volatile UBase_t CPSR [32UL];
        SSI_BITBANDING_CPSR_t CPSR_Bit;
    };
    union
    {
        volatile UBase_t IM [32UL];
        SSI_BITBANDING_IM_t IM_Bit;
    };
    union
    {
        volatile const UBase_t RIS [32UL];
        SSI_BITBANDING_RIS_t RIS_Bit;
    };
    union
    {
        volatile const UBase_t MIS [32UL];
        SSI_BITBANDING_MIS_t MIS_Bit;
    };
    union
    {
        volatile UBase_t ICR [32UL];
        SSI_BITBANDING_ICR_t ICR_Bit;
    };
    union
    {
        volatile UBase_t DMACTL [32UL];
        SSI_BITBANDING_DMACTL_t DMACTL_Bit;
    };
    const UBase_t reserved [998UL * 32UL];
    union
    {
        volatile const UBase_t PP [32UL];
        SSI_BITBANDING_PP_t PP_Bit;
    };
    const UBase_t reserved1 [1UL * 32UL];
    union
    {
        volatile UBase_t CC [32UL];
        SSI_BITBANDING_CC_t CC_Bit;
    };
    const UBase_t reserved5 [1UL * 32UL];
    union
    {
        volatile const UBase_t PeriphID4 [32UL];
        SSI_BITBANDING_PeriphID4_t PeriphID4_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID5 [32UL];
        SSI_BITBANDING_PeriphID5_t PeriphID5_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID6 [32UL];
        SSI_BITBANDING_PeriphID6_t PeriphID6_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID7 [32UL];
        SSI_BITBANDING_PeriphID7_t PeriphID7_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID0 [32UL];
        SSI_BITBANDING_PeriphID0_t PeriphID0_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID1 [32UL];
        SSI_BITBANDING_PeriphID1_t PeriphID1_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID2 [32UL];
        SSI_BITBANDING_PeriphID2_t PeriphID2_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID3 [32UL];
        SSI_BITBANDING_PeriphID3_t PeriphID3_Bit;
    };
    union
    {
        volatile const UBase_t PCellID0 [32UL];
        SSI_BITBANDING_PCellID0_t PCellID0_Bit;
    };
    union
    {
        volatile const UBase_t PCellID1 [32UL];
        SSI_BITBANDING_PCellID1_t PCellID1_Bit;
    };
    union
    {
        volatile const UBase_t PCellID2 [32UL];
        SSI_BITBANDING_PCellID2_t PCellID2_Bit;
    };
    union
    {
        volatile const UBase_t PCellID3 [32UL];
        SSI_BITBANDING_PCellID3_t PCellID3_Bit;
    };
}SSI_BITBANDING_t;

typedef volatile struct
{
    SSI_BITBANDING_t MODULE [(UBase_t) SSI_enMODULE_MAX];
}SSIS_BITBANDING_t;

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_STRUCT_XHEADER_SSI_STRUCTPERIPHERAL_BITBANDING_H_ */
