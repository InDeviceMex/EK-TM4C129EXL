/**
 *
 * @file DMA_StructPeripheral_Bitbanding.h
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
 * @verbatim 28 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 28 jul. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/DMA/Peripheral/Struct/xHeader/DMA_StructRegister_Bitbanding.h>

typedef volatile struct
{
    union
    {
        volatile const uint32_t STAT [32UL];
        BITBANDING_DMASTAT_TypeDef STAT_Bit;
    };
    union
    {
        volatile uint32_t CFG [32UL];
        BITBANDING_DMACFG_TypeDef CFG_Bit;
    };
    union
    {
        volatile uint32_t CTLBASE [32UL];
        BITBANDING_DMACTLBASE_TypeDef CTLBASE_Bit;
    };
    union
    {
        volatile const uint32_t ALTBASE [32UL];
        BITBANDING_DMAALTBASE_TypeDef ALTBASE_Bit;
    };
    union
    {
        volatile const uint32_t WAITSTAT [32UL];
        BITBANDING_DMAWAITSTAT_TypeDef WAITSTAT_Bit;
    };
    union
    {
        volatile uint32_t SWREQ [32UL];
        BITBANDING_DMASWREQ_TypeDef SWREQ_Bit;
    };
    union
    {
        volatile uint32_t USEBURSTSET [32UL];
        BITBANDING_DMASET_TypeDef USEBURSTSET_Bit;
    };
    union
    {
        volatile uint32_t USEBURSTCLR [32UL];
        BITBANDING_DMACLR_TypeDef USEBURSTCLR_Bit;
    };
    union
    {
        volatile uint32_t REQMASKSET [32UL];
        BITBANDING_DMASET_TypeDef REQMASKSET_Bit;
    };
    union
    {
        volatile uint32_t REQMASKCLR [32UL];
        BITBANDING_DMACLR_TypeDef REQMASKCLR_Bit;
    };
    union
    {
        volatile uint32_t ENASET [32UL];
        BITBANDING_DMASET_TypeDef ENASET_Bit;
    };
    union
    {
        volatile uint32_t ENACLR [32UL];
        BITBANDING_DMACLR_TypeDef ENACLR_Bit;
    };
    union
    {
        volatile uint32_t ALTSET [32UL];
        BITBANDING_DMASET_TypeDef ALTSET_Bit;
    };
    union
    {
        volatile uint32_t ALTCLR [32UL];
        BITBANDING_DMACLR_TypeDef ALTCLR_Bit;
    };
    union
    {
        volatile uint32_t PRIOSET [32UL];
        BITBANDING_DMASET_TypeDef PRIOSET_Bit;
    };
    union
    {
        volatile uint32_t PRIOCLR [32UL];
        BITBANDING_DMACLR_TypeDef PRIOCLR_Bit;
    };
    const uint32_t reserved [3UL * 32UL];
    union
    {
        volatile uint32_t ERRCLR [32UL];
        BITBANDING_DMAERRCLR_TypeDef ERRCLR_Bit;
    };
    const uint32_t reserved1 [300UL * 32UL];
    union
    {
        volatile uint32_t CHASGN [32UL];
        BITBANDING_DMACHASGN_TypeDef CHASGN_Bit;
    };
    union
    {
        volatile uint32_t CHIS [32UL];
        BITBANDING_DMACHIS_TypeDef CHIS_Bit;
    };
    const uint32_t reserved2 [2UL * 32UL];
#if 0
    union
    {
        volatile uint32_t CHMAP0 [32UL];
        BITBANDING_DMACHMAP0_TypeDef CHMAP0_Bit;
    };
    union
    {
        volatile uint32_t CHMAP1 [32UL];
        BITBANDING_DMACHMAP1_TypeDef CHMAP1_Bit;
    };
    union
    {
        volatile uint32_t CHMAP2 [32UL];
        BITBANDING_DMACHMAP2_TypeDef CHMAP2_Bit;
    };
    union
    {
        volatile uint32_t CHMAP3 [32UL];
        BITBANDING_DMACHMAP3_TypeDef CHMAP3_Bit;
    };
#endif
    union
    {
        volatile uint32_t CHMAP0 [4UL][32UL];
        BITBANDING_DMACHMAP0_TypeDef CHMAP0_Bit [4UL];
    };
    const uint32_t reserved3 [688UL * 32UL];
    union
    {
        volatile const uint32_t PeriphID0 [32UL];
        BITBANDING_DMAPeriphID0_TypeDef PeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID1 [32UL];
        BITBANDING_DMAPeriphID1_TypeDef PeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID2 [32UL];
        BITBANDING_DMAPeriphID2_TypeDef PeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID3 [32UL];
        BITBANDING_DMAPeriphID3_TypeDef PeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID4 [32UL];
        BITBANDING_DMAPeriphID4_TypeDef PeriphID4_Bit;
    };
    const uint32_t reserved4 [7UL * 32UL];
    union
    {
        volatile const uint32_t PCellID0 [32UL];
        BITBANDING_DMAPCellID0_TypeDef PCellID0_Bit;
    };
    union
    {
        volatile const uint32_t PCellID1 [32UL];
        BITBANDING_DMAPCellID1_TypeDef PCellID1_Bit;
    };
    union
    {
        volatile const uint32_t PCellID2 [32UL];
        BITBANDING_DMAPCellID2_TypeDef PCellID2_Bit;
    };
    union
    {
        volatile const uint32_t PCellID3 [32UL];
        BITBANDING_DMAPCellID3_TypeDef PCellID3_Bit;
    };
}DMA_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_BITBANDING_H_ */
