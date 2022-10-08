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
        volatile const UBase_t STAT;
        DMA_STAT_t STAT_Bit;
    };
    union
    {
        volatile UBase_t CFG;
        DMA_CFG_t CFG_Bit;
    };
    union
    {
        volatile UBase_t CTLBASE;
        DMA_CTLBASE_t CTLBASE_Bit;
    };
    union
    {
        volatile const UBase_t ALTBASE;
        DMA_ALTBASE_t ALTBASE_Bit;
    };
    union
    {
        volatile const UBase_t CH_WAITSTAT;
        DMA_CH_WAITSTAT_t CH_WAITSTAT_Bit;
    };
    union
    {
        volatile UBase_t CH_SWREQ;
        DMA_CH_SWREQ_t CH_SWREQ_Bit;
    };
    union
    {
        volatile UBase_t CH_USEBURSTSET;
        DMA_CH_SET_t CH_USEBURSTSET_Bit;
    };
    union
    {
        volatile UBase_t CH_USEBURSTCLR;
        DMA_CH_CLR_t CH_USEBURSTCLR_Bit;
    };
    union
    {
        volatile UBase_t CH_REQMASKSET;
        DMA_CH_SET_t CH_REQMASKSET_Bit;
    };
    union
    {
        volatile UBase_t CH_REQMASKCLR;
        DMA_CH_CLR_t CH_REQMASKCLR_Bit;
    };
    union
    {
        volatile UBase_t CH_ENASET;
        DMA_CH_SET_t CH_ENASET_Bit;
    };
    union
    {
        volatile UBase_t CH_ENACLR;
        DMA_CH_CLR_t CH_ENACLR_Bit;
    };
    union
    {
        volatile UBase_t CH_ALTSET;
        DMA_CH_SET_t CH_ALTSET_Bit;
    };
    union
    {
        volatile UBase_t CH_ALTCLR;
        DMA_CH_CLR_t CH_ALTCLR_Bit;
    };
    union
    {
        volatile UBase_t CH_PRIOSET;
        DMA_CH_SET_t CH_PRIOSET_Bit;
    };
    union
    {
        volatile UBase_t CH_PRIOCLR;
        DMA_CH_CLR_t CH_PRIOCLR_Bit;
    };
    const UBase_t reserved [3UL];
    union
    {
        volatile UBase_t ERRCLR;
        DMA_ERRCLR_t ERRCLR_Bit;
    };
    const UBase_t reserved1 [300UL];
    union
    {
        volatile UBase_t CH_ASGN;
        DMA_CH_ASGN_t CH_ASGN_Bit;
    };
    union
    {
        volatile UBase_t CH_IS;
        DMA_CH_IS_t CH_IS_Bit;
    };
    const UBase_t reserved2 [2UL];
#if 0
    union
    {
        volatile UBase_t CH_MAP0;
        DMA_CH_MAP0_t CH_MAP0_Bit;
    };
    union
    {
        volatile UBase_t CH_MAP1;
        DMA_CH_MAP1_t CH_MAP1_Bit;
    };
    union
    {
        volatile UBase_t CH_MAP2;
        DMA_CH_MAP2_t CH_MAP2_Bit;
    };
    union
    {
        volatile UBase_t CH_MAP3;
        DMA_CH_MAP3_t CH_MAP3_Bit;
    };
#endif
    union
    {
        volatile UBase_t CH_MAP [4UL];
        DMA_CH_MAP0_t CH_MAP_Bit [4UL];
    };
    const UBase_t reserved3 [688UL];
    union
    {
        volatile const UBase_t PeriphID0;
        DMA_PeriphID0_t PeriphID0_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID1;
        DMA_PeriphID1_t PeriphID1_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID2;
        DMA_PeriphID2_t PeriphID2_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID3;
        DMA_PeriphID3_t PeriphID3_Bit;
    };
    union
    {
        volatile const UBase_t PeriphID4;
        DMA_PeriphID4_t PeriphID4_Bit;
    };
    const UBase_t reserved4 [7UL];
    union
    {
        volatile const UBase_t PCellID0;
        DMA_PCellID0_t PCellID0_Bit;
    };
    union
    {
        volatile const UBase_t PCellID1;
        DMA_PCellID1_t PCellID1_Bit;
    };
    union
    {
        volatile const UBase_t PCellID2;
        DMA_PCellID2_t PCellID2_Bit;
    };
    union
    {
        volatile const UBase_t PCellID3;
        DMA_PCellID3_t PCellID3_Bit;
    };
}DMA_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_H_ */
