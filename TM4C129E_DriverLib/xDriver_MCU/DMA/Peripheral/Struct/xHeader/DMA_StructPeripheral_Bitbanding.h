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
        BITBANDING_DMASTAT_t STAT_Bit;
    };
    union
    {
        volatile uint32_t CFG [32UL];
        BITBANDING_DMACFG_t CFG_Bit;
    };
    union
    {
        volatile uint32_t CTLBASE [32UL];
        BITBANDING_DMACTLBASE_t CTLBASE_Bit;
    };
    union
    {
        volatile const uint32_t ALTBASE [32UL];
        BITBANDING_DMAALTBASE_t ALTBASE_Bit;
    };
    union
    {
        volatile const uint32_t WAITSTAT [32UL];
        BITBANDING_DMAWAITSTAT_t WAITSTAT_Bit;
    };
    union
    {
        volatile uint32_t SWREQ [32UL];
        BITBANDING_DMASWREQ_t SWREQ_Bit;
    };
    union
    {
        volatile uint32_t USEBURSTSET [32UL];
        BITBANDING_DMASET_t USEBURSTSET_Bit;
    };
    union
    {
        volatile uint32_t USEBURSTCLR [32UL];
        BITBANDING_DMACLR_t USEBURSTCLR_Bit;
    };
    union
    {
        volatile uint32_t REQMASKSET [32UL];
        BITBANDING_DMASET_t REQMASKSET_Bit;
    };
    union
    {
        volatile uint32_t REQMASKCLR [32UL];
        BITBANDING_DMACLR_t REQMASKCLR_Bit;
    };
    union
    {
        volatile uint32_t ENASET [32UL];
        BITBANDING_DMASET_t ENASET_Bit;
    };
    union
    {
        volatile uint32_t ENACLR [32UL];
        BITBANDING_DMACLR_t ENACLR_Bit;
    };
    union
    {
        volatile uint32_t ALTSET [32UL];
        BITBANDING_DMASET_t ALTSET_Bit;
    };
    union
    {
        volatile uint32_t ALTCLR [32UL];
        BITBANDING_DMACLR_t ALTCLR_Bit;
    };
    union
    {
        volatile uint32_t PRIOSET [32UL];
        BITBANDING_DMASET_t PRIOSET_Bit;
    };
    union
    {
        volatile uint32_t PRIOCLR [32UL];
        BITBANDING_DMACLR_t PRIOCLR_Bit;
    };
    const uint32_t reserved [3UL * 32UL];
    union
    {
        volatile uint32_t ERRCLR [32UL];
        BITBANDING_DMAERRCLR_t ERRCLR_Bit;
    };
    const uint32_t reserved1 [300UL * 32UL];
    union
    {
        volatile uint32_t CHASGN [32UL];
        BITBANDING_DMACHASGN_t CHASGN_Bit;
    };
    union
    {
        volatile uint32_t CHIS [32UL];
        BITBANDING_DMACHIS_t CHIS_Bit;
    };
    const uint32_t reserved2 [2UL * 32UL];
#if 0
    union
    {
        volatile uint32_t CHMAP0 [32UL];
        BITBANDING_DMACHMAP0_t CHMAP0_Bit;
    };
    union
    {
        volatile uint32_t CHMAP1 [32UL];
        BITBANDING_DMACHMAP1_t CHMAP1_Bit;
    };
    union
    {
        volatile uint32_t CHMAP2 [32UL];
        BITBANDING_DMACHMAP2_t CHMAP2_Bit;
    };
    union
    {
        volatile uint32_t CHMAP3 [32UL];
        BITBANDING_DMACHMAP3_t CHMAP3_Bit;
    };
#endif
    union
    {
        volatile uint32_t CHMAP0 [4UL][32UL];
        BITBANDING_DMACHMAP0_t CHMAP0_Bit [4UL];
    };
    const uint32_t reserved3 [688UL * 32UL];
    union
    {
        volatile const uint32_t PeriphID0 [32UL];
        BITBANDING_DMAPeriphID0_t PeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID1 [32UL];
        BITBANDING_DMAPeriphID1_t PeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID2 [32UL];
        BITBANDING_DMAPeriphID2_t PeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID3 [32UL];
        BITBANDING_DMAPeriphID3_t PeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID4 [32UL];
        BITBANDING_DMAPeriphID4_t PeriphID4_Bit;
    };
    const uint32_t reserved4 [7UL * 32UL];
    union
    {
        volatile const uint32_t PCellID0 [32UL];
        BITBANDING_DMAPCellID0_t PCellID0_Bit;
    };
    union
    {
        volatile const uint32_t PCellID1 [32UL];
        BITBANDING_DMAPCellID1_t PCellID1_Bit;
    };
    union
    {
        volatile const uint32_t PCellID2 [32UL];
        BITBANDING_DMAPCellID2_t PCellID2_Bit;
    };
    union
    {
        volatile const uint32_t PCellID3 [32UL];
        BITBANDING_DMAPCellID3_t PCellID3_Bit;
    };
}DMA_BITBANDING_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_BITBANDING_H_ */
