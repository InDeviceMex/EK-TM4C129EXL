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
        DMASTAT_TypeDef STAT_Bit;
    };
    union
    {
        volatile uint32_t CFG;
        DMACFG_TypeDef CFG_Bit;
    };
    union
    {
        volatile uint32_t CTLBASE;
        DMACTLBASE_TypeDef CTLBASE_Bit;
    };
    union
    {
        volatile const uint32_t ALTBASE;
        DMAALTBASE_TypeDef ALTBASE_Bit;
    };
    union
    {
        volatile const uint32_t WAITSTAT;
        DMAWAITSTAT_TypeDef WAITSTAT_Bit;
    };
    union
    {
        volatile uint32_t SWREQ;
        DMASWREQ_TypeDef SWREQ_Bit;
    };
    union
    {
        volatile uint32_t USEBURSTSET;
        DMASET_TypeDef USEBURSTSET_Bit;
    };
    union
    {
        volatile uint32_t USEBURSTCLR;
        DMACLR_TypeDef USEBURSTCLR_Bit;
    };
    union
    {
        volatile uint32_t REQMASKSET;
        DMASET_TypeDef REQMASKSET_Bit;
    };
    union
    {
        volatile uint32_t REQMASKCLR;
        DMACLR_TypeDef REQMASKCLR_Bit;
    };
    union
    {
        volatile uint32_t ENASET;
        DMASET_TypeDef ENASET_Bit;
    };
    union
    {
        volatile uint32_t ENACLR;
        DMACLR_TypeDef ENACLR_Bit;
    };
    union
    {
        volatile uint32_t ALTSET;
        DMASET_TypeDef ALTSET_Bit;
    };
    union
    {
        volatile uint32_t ALTCLR;
        DMACLR_TypeDef ALTCLR_Bit;
    };
    union
    {
        volatile uint32_t PRIOSET;
        DMASET_TypeDef PRIOSET_Bit;
    };
    union
    {
        volatile uint32_t PRIOCLR;
        DMACLR_TypeDef PRIOCLR_Bit;
    };
    const uint32_t reserved [3UL];
    union
    {
        volatile uint32_t ERRCLR;
        DMAERRCLR_TypeDef ERRCLR_Bit;
    };
    const uint32_t reserved1 [300UL];
    union
    {
        volatile uint32_t CHASGN;
        DMACHASGN_TypeDef CHASGN_Bit;
    };
    union
    {
        volatile uint32_t CHIS;
        DMACHIS_TypeDef CHIS_Bit;
    };
    const uint32_t reserved2 [2UL];
#if 0
    union
    {
        volatile uint32_t CHMAP0;
        DMACHMAP0_TypeDef CHMAP0_Bit;
    };
    union
    {
        volatile uint32_t CHMAP1;
        DMACHMAP1_TypeDef CHMAP1_Bit;
    };
    union
    {
        volatile uint32_t CHMAP2;
        DMACHMAP2_TypeDef CHMAP2_Bit;
    };
    union
    {
        volatile uint32_t CHMAP3;
        DMACHMAP3_TypeDef CHMAP3_Bit;
    };
#endif
    union
    {
        volatile uint32_t CHMAP [4UL];
        DMACHMAP0_TypeDef CHMAP_Bit [4UL];
    };
    const uint32_t reserved3 [688UL];
    union
    {
        volatile const uint32_t PeriphID0;
        DMAPeriphID0_TypeDef PeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID1;
        DMAPeriphID1_TypeDef PeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID2;
        DMAPeriphID2_TypeDef PeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID3;
        DMAPeriphID3_TypeDef PeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID4;
        DMAPeriphID4_TypeDef PeriphID4_Bit;
    };
    const uint32_t reserved4 [7UL];
    union
    {
        volatile const uint32_t PCellID0;
        DMAPCellID0_TypeDef PCellID0_Bit;
    };
    union
    {
        volatile const uint32_t PCellID1;
        DMAPCellID1_TypeDef PCellID1_Bit;
    };
    union
    {
        volatile const uint32_t PCellID2;
        DMAPCellID2_TypeDef PCellID2_Bit;
    };
    union
    {
        volatile const uint32_t PCellID3;
        DMAPCellID3_TypeDef PCellID3_Bit;
    };
}DMA_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_H_ */
