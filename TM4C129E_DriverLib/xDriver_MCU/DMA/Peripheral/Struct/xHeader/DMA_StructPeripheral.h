/**
 *
 * @file DMA_StructPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/DMA/Peripheral/Struct/xHeader/DMA_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile const uint32_t STAT;
        DMASTAT_t STAT_Bit;
    };
    union
    {
        volatile uint32_t CFG;
        DMACFG_t CFG_Bit;
    };
    union
    {
        volatile uint32_t CTLBASE;
        DMACTLBASE_t CTLBASE_Bit;
    };
    union
    {
        volatile const uint32_t ALTBASE;
        DMAALTBASE_t ALTBASE_Bit;
    };
    union
    {
        volatile const uint32_t WAITSTAT;
        DMAWAITSTAT_t WAITSTAT_Bit;
    };
    union
    {
        volatile uint32_t SWREQ;
        DMASWREQ_t SWREQ_Bit;
    };
    union
    {
        volatile uint32_t USEBURSTSET;
        DMASET_t USEBURSTSET_Bit;
    };
    union
    {
        volatile uint32_t USEBURSTCLR;
        DMACLR_t USEBURSTCLR_Bit;
    };
    union
    {
        volatile uint32_t REQMASKSET;
        DMASET_t REQMASKSET_Bit;
    };
    union
    {
        volatile uint32_t REQMASKCLR;
        DMACLR_t REQMASKCLR_Bit;
    };
    union
    {
        volatile uint32_t ENASET;
        DMASET_t ENASET_Bit;
    };
    union
    {
        volatile uint32_t ENACLR;
        DMACLR_t ENACLR_Bit;
    };
    union
    {
        volatile uint32_t ALTSET;
        DMASET_t ALTSET_Bit;
    };
    union
    {
        volatile uint32_t ALTCLR;
        DMACLR_t ALTCLR_Bit;
    };
    union
    {
        volatile uint32_t PRIOSET;
        DMASET_t PRIOSET_Bit;
    };
    union
    {
        volatile uint32_t PRIOCLR;
        DMACLR_t PRIOCLR_Bit;
    };
    const uint32_t reserved [3UL];
    union
    {
        volatile uint32_t ERRCLR;
        DMAERRCLR_t ERRCLR_Bit;
    };
    const uint32_t reserved1 [300UL];
    union
    {
        volatile uint32_t CHASGN;
        DMACHASGN_t CHASGN_Bit;
    };
    union
    {
        volatile uint32_t CHIS;
        DMACHIS_t CHIS_Bit;
    };
    const uint32_t reserved2 [2UL];
#if 0
    union
    {
        volatile uint32_t CHMAP0;
        DMACHMAP0_t CHMAP0_Bit;
    };
    union
    {
        volatile uint32_t CHMAP1;
        DMACHMAP1_t CHMAP1_Bit;
    };
    union
    {
        volatile uint32_t CHMAP2;
        DMACHMAP2_t CHMAP2_Bit;
    };
    union
    {
        volatile uint32_t CHMAP3;
        DMACHMAP3_t CHMAP3_Bit;
    };
#endif
    union
    {
        volatile uint32_t CHMAP [4UL];
        DMACHMAP0_t CHMAP_Bit [4UL];
    };
    const uint32_t reserved3 [688UL];
    union
    {
        volatile const uint32_t PeriphID0;
        DMAPeriphID0_t PeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID1;
        DMAPeriphID1_t PeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID2;
        DMAPeriphID2_t PeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID3;
        DMAPeriphID3_t PeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID4;
        DMAPeriphID4_t PeriphID4_Bit;
    };
    const uint32_t reserved4 [7UL];
    union
    {
        volatile const uint32_t PCellID0;
        DMAPCellID0_t PCellID0_Bit;
    };
    union
    {
        volatile const uint32_t PCellID1;
        DMAPCellID1_t PCellID1_Bit;
    };
    union
    {
        volatile const uint32_t PCellID2;
        DMAPCellID2_t PCellID2_Bit;
    };
    union
    {
        volatile const uint32_t PCellID3;
        DMAPCellID3_t PCellID3_Bit;
    };
}DMA_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_H_ */
