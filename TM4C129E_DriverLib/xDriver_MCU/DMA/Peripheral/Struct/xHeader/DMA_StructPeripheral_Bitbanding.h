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
        DMA_BITBANDING_STAT_t STAT_Bit;
    };
    union
    {
        volatile uint32_t CFG [32UL];
        DMA_BITBANDING_CFG_t CFG_Bit;
    };
    union
    {
        volatile uint32_t CTLBASE [32UL];
        DMA_BITBANDING_CTLBASE_t CTLBASE_Bit;
    };
    union
    {
        volatile const uint32_t ALTBASE [32UL];
        DMA_BITBANDING_ALTBASE_t ALTBASE_Bit;
    };
    union
    {
        volatile const uint32_t CH_WAITSTAT [32UL];
        DMA_BITBANDING_CH_WAITSTAT_t CH_WAITSTAT_Bit;
    };
    union
    {
        volatile uint32_t CH_SWREQ [32UL];
        DMA_BITBANDING_CH_SWREQ_t CH_SWREQ_Bit;
    };
    union
    {
        volatile uint32_t CH_USEBURSTSET [32UL];
        DMA_BITBANDING_CH_SET_t CH_USEBURSTSET_Bit;
    };
    union
    {
        volatile uint32_t CH_USEBURSTCLR [32UL];
        DMA_BITBANDING_CH_CLR_t CH_USEBURSTCLR_Bit;
    };
    union
    {
        volatile uint32_t CH_REQMASKSET [32UL];
        DMA_BITBANDING_CH_SET_t CH_REQMASKSET_Bit;
    };
    union
    {
        volatile uint32_t CH_REQMASKCLR [32UL];
        DMA_BITBANDING_CH_CLR_t CH_REQMASKCLR_Bit;
    };
    union
    {
        volatile uint32_t CH_ENASET [32UL];
        DMA_BITBANDING_CH_SET_t CH_ENASET_Bit;
    };
    union
    {
        volatile uint32_t CH_ENACLR [32UL];
        DMA_BITBANDING_CH_CLR_t CH_ENACLR_Bit;
    };
    union
    {
        volatile uint32_t CH_ALTSET [32UL];
        DMA_BITBANDING_CH_SET_t CH_ALTSET_Bit;
    };
    union
    {
        volatile uint32_t CH_ALTCLR [32UL];
        DMA_BITBANDING_CH_CLR_t CH_ALTCLR_Bit;
    };
    union
    {
        volatile uint32_t CH_PRIOSET [32UL];
        DMA_BITBANDING_CH_SET_t CH_PRIOSET_Bit;
    };
    union
    {
        volatile uint32_t CH_PRIOCLR [32UL];
        DMA_BITBANDING_CH_CLR_t CH_PRIOCLR_Bit;
    };
    const uint32_t reserved [3UL * 32UL];
    union
    {
        volatile uint32_t ERRCLR [32UL];
        DMA_BITBANDING_ERRCLR_t ERRCLR_Bit;
    };
    const uint32_t reserved1 [300UL * 32UL];
    union
    {
        volatile uint32_t CH_ASGN [32UL];
        DMA_BITBANDING_CH_ASGN_t CH_ASGN_Bit;
    };
    union
    {
        volatile uint32_t CH_IS [32UL];
        DMA_BITBANDING_CH_IS_t CH_IS_Bit;
    };
    const uint32_t reserved2 [2UL * 32UL];
#if 0
    union
    {
        volatile uint32_t CH_MAP0 [32UL];
        DMA_BITBANDING_CH_MAP0_t CH_MAP0_Bit;
    };
    union
    {
        volatile uint32_t CH_MAP1 [32UL];
        DMA_BITBANDING_CH_MAP1_t CH_MAP1_Bit;
    };
    union
    {
        volatile uint32_t CH_MAP2 [32UL];
        DMA_BITBANDING_CH_MAP2_t CH_MAP2_Bit;
    };
    union
    {
        volatile uint32_t CH_MAP3 [32UL];
        DMA_BITBANDING_CH_MAP3_t CH_MAP3_Bit;
    };
#endif
    union
    {
        volatile uint32_t CH_MAP [4UL][32UL];
        DMA_BITBANDING_CH_MAP0_t CH_MAP_Bit [4UL];
    };
    const uint32_t reserved3 [688UL * 32UL];
    union
    {
        volatile const uint32_t PeriphID0 [32UL];
        DMA_BITBANDING_PeriphID0_t PeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID1 [32UL];
        DMA_BITBANDING_PeriphID1_t PeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID2 [32UL];
        DMA_BITBANDING_PeriphID2_t PeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID3 [32UL];
        DMA_BITBANDING_PeriphID3_t PeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t PeriphID4 [32UL];
        DMA_BITBANDING_PeriphID4_t PeriphID4_Bit;
    };
    const uint32_t reserved4 [7UL * 32UL];
    union
    {
        volatile const uint32_t PCellID0 [32UL];
        DMA_BITBANDING_PCellID0_t PCellID0_Bit;
    };
    union
    {
        volatile const uint32_t PCellID1 [32UL];
        DMA_BITBANDING_PCellID1_t PCellID1_Bit;
    };
    union
    {
        volatile const uint32_t PCellID2 [32UL];
        DMA_BITBANDING_PCellID2_t PCellID2_Bit;
    };
    union
    {
        volatile const uint32_t PCellID3 [32UL];
        DMA_BITBANDING_PCellID3_t PCellID3_Bit;
    };
}DMA_BITBANDING_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_BITBANDING_H_ */
