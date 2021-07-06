/**
 *
 * @file DMA_StructRegister_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTER_BITBANDING_H_

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile const uint32_t MASTEN;
    const uint32_t reserved [3UL];
    volatile const uint32_t STATE [4UL];
    const uint32_t reserved1 [8UL];
    volatile const uint32_t DMACHANS [5UL];
    const uint32_t reserved2 [11UL];
}BITBANDING_DMASTAT_TypeDef;

typedef volatile struct
{
    volatile uint32_t MASTEN;
    const uint32_t reserved [31UL];
}BITBANDING_DMACFG_TypeDef;

typedef volatile struct
{
    volatile uint32_t ADDR [32UL];
}BITBANDING_DMACTLBASE_TypeDef;

typedef volatile struct
{
    volatile const uint32_t ADDR [32UL];
}BITBANDING_DMAALTBASE_TypeDef;

typedef volatile struct
{
    volatile const uint32_t WAITREQ0;
    volatile const uint32_t WAITREQ1;
    volatile const uint32_t WAITREQ2;
    volatile const uint32_t WAITREQ3;
    volatile const uint32_t WAITREQ4;
    volatile const uint32_t WAITREQ5;
    volatile const uint32_t WAITREQ6;
    volatile const uint32_t WAITREQ7;
    volatile const uint32_t WAITREQ8;
    volatile const uint32_t WAITREQ9;
    volatile const uint32_t WAITREQ10;
    volatile const uint32_t WAITREQ11;
    volatile const uint32_t WAITREQ12;
    volatile const uint32_t WAITREQ13;
    volatile const uint32_t WAITREQ14;
    volatile const uint32_t WAITREQ15;
    volatile const uint32_t WAITREQ16;
    volatile const uint32_t WAITREQ17;
    volatile const uint32_t WAITREQ18;
    volatile const uint32_t WAITREQ19;
    volatile const uint32_t WAITREQ20;
    volatile const uint32_t WAITREQ21;
    volatile const uint32_t WAITREQ22;
    volatile const uint32_t WAITREQ23;
    volatile const uint32_t WAITREQ24;
    volatile const uint32_t WAITREQ25;
    volatile const uint32_t WAITREQ26;
    volatile const uint32_t WAITREQ27;
    volatile const uint32_t WAITREQ28;
    volatile const uint32_t WAITREQ29;
    volatile const uint32_t WAITREQ30;
    volatile const uint32_t WAITREQ31;
}BITBANDING_DMAWAITSTAT_TypeDef;

typedef volatile struct
{
    volatile uint32_t SWREQ0;
    volatile uint32_t SWREQ1;
    volatile uint32_t SWREQ2;
    volatile uint32_t SWREQ3;
    volatile uint32_t SWREQ4;
    volatile uint32_t SWREQ5;
    volatile uint32_t SWREQ6;
    volatile uint32_t SWREQ7;
    volatile uint32_t SWREQ8;
    volatile uint32_t SWREQ9;
    volatile uint32_t SWREQ10;
    volatile uint32_t SWREQ11;
    volatile uint32_t SWREQ12;
    volatile uint32_t SWREQ13;
    volatile uint32_t SWREQ14;
    volatile uint32_t SWREQ15;
    volatile uint32_t SWREQ16;
    volatile uint32_t SWREQ17;
    volatile uint32_t SWREQ18;
    volatile uint32_t SWREQ19;
    volatile uint32_t SWREQ20;
    volatile uint32_t SWREQ21;
    volatile uint32_t SWREQ22;
    volatile uint32_t SWREQ23;
    volatile uint32_t SWREQ24;
    volatile uint32_t SWREQ25;
    volatile uint32_t SWREQ26;
    volatile uint32_t SWREQ27;
    volatile uint32_t SWREQ28;
    volatile uint32_t SWREQ29;
    volatile uint32_t SWREQ30;
    volatile uint32_t SWREQ31;
}BITBANDING_DMASWREQ_TypeDef;

typedef volatile struct
{
    volatile uint32_t SET0;
    volatile uint32_t SET1;
    volatile uint32_t SET2;
    volatile uint32_t SET3;
    volatile uint32_t SET4;
    volatile uint32_t SET5;
    volatile uint32_t SET6;
    volatile uint32_t SET7;
    volatile uint32_t SET8;
    volatile uint32_t SET9;
    volatile uint32_t SET10;
    volatile uint32_t SET11;
    volatile uint32_t SET12;
    volatile uint32_t SET13;
    volatile uint32_t SET14;
    volatile uint32_t SET15;
    volatile uint32_t SET16;
    volatile uint32_t SET17;
    volatile uint32_t SET18;
    volatile uint32_t SET19;
    volatile uint32_t SET20;
    volatile uint32_t SET21;
    volatile uint32_t SET22;
    volatile uint32_t SET23;
    volatile uint32_t SET24;
    volatile uint32_t SET25;
    volatile uint32_t SET26;
    volatile uint32_t SET27;
    volatile uint32_t SET28;
    volatile uint32_t SET29;
    volatile uint32_t SET30;
    volatile uint32_t SET31;
}BITBANDING_DMASET_TypeDef;

typedef volatile struct
{
    volatile uint32_t CLR0;
    volatile uint32_t CLR1;
    volatile uint32_t CLR2;
    volatile uint32_t CLR3;
    volatile uint32_t CLR4;
    volatile uint32_t CLR5;
    volatile uint32_t CLR6;
    volatile uint32_t CLR7;
    volatile uint32_t CLR8;
    volatile uint32_t CLR9;
    volatile uint32_t CLR10;
    volatile uint32_t CLR11;
    volatile uint32_t CLR12;
    volatile uint32_t CLR13;
    volatile uint32_t CLR14;
    volatile uint32_t CLR15;
    volatile uint32_t CLR16;
    volatile uint32_t CLR17;
    volatile uint32_t CLR18;
    volatile uint32_t CLR19;
    volatile uint32_t CLR20;
    volatile uint32_t CLR21;
    volatile uint32_t CLR22;
    volatile uint32_t CLR23;
    volatile uint32_t CLR24;
    volatile uint32_t CLR25;
    volatile uint32_t CLR26;
    volatile uint32_t CLR27;
    volatile uint32_t CLR28;
    volatile uint32_t CLR29;
    volatile uint32_t CLR30;
    volatile uint32_t CLR31;
}BITBANDING_DMACLR_TypeDef;

typedef volatile struct
{
    volatile uint32_t ERRCLR;
    const uint32_t reserved [31UL];
}BITBANDING_DMAERRCLR_TypeDef;


typedef volatile struct
{
    volatile uint32_t CHASGN0;
    volatile uint32_t CHASGN1;
    volatile uint32_t CHASGN2;
    volatile uint32_t CHASGN3;
    volatile uint32_t CHASGN4;
    volatile uint32_t CHASGN5;
    volatile uint32_t CHASGN6;
    volatile uint32_t CHASGN7;
    volatile uint32_t CHASGN8;
    volatile uint32_t CHASGN9;
    volatile uint32_t CHASGN10;
    volatile uint32_t CHASGN11;
    volatile uint32_t CHASGN12;
    volatile uint32_t CHASGN13;
    volatile uint32_t CHASGN14;
    volatile uint32_t CHASGN15;
    volatile uint32_t CHASGN16;
    volatile uint32_t CHASGN17;
    volatile uint32_t CHASGN18;
    volatile uint32_t CHASGN19;
    volatile uint32_t CHASGN20;
    volatile uint32_t CHASGN21;
    volatile uint32_t CHASGN22;
    volatile uint32_t CHASGN23;
    volatile uint32_t CHASGN24;
    volatile uint32_t CHASGN25;
    volatile uint32_t CHASGN26;
    volatile uint32_t CHASGN27;
    volatile uint32_t CHASGN28;
    volatile uint32_t CHASGN29;
    volatile uint32_t CHASGN30;
    volatile uint32_t CHASGN31;
}BITBANDING_DMACHASGN_TypeDef;

typedef volatile struct
{
    volatile uint32_t CHIS0;
    volatile uint32_t CHIS1;
    volatile uint32_t CHIS2;
    volatile uint32_t CHIS3;
    volatile uint32_t CHIS4;
    volatile uint32_t CHIS5;
    volatile uint32_t CHIS6;
    volatile uint32_t CHIS7;
    volatile uint32_t CHIS8;
    volatile uint32_t CHIS9;
    volatile uint32_t CHIS10;
    volatile uint32_t CHIS11;
    volatile uint32_t CHIS12;
    volatile uint32_t CHIS13;
    volatile uint32_t CHIS14;
    volatile uint32_t CHIS15;
    volatile uint32_t CHIS16;
    volatile uint32_t CHIS17;
    volatile uint32_t CHIS18;
    volatile uint32_t CHIS19;
    volatile uint32_t CHIS20;
    volatile uint32_t CHIS21;
    volatile uint32_t CHIS22;
    volatile uint32_t CHIS23;
    volatile uint32_t CHIS24;
    volatile uint32_t CHIS25;
    volatile uint32_t CHIS26;
    volatile uint32_t CHIS27;
    volatile uint32_t CHIS28;
    volatile uint32_t CHIS29;
    volatile uint32_t CHIS30;
    volatile uint32_t CHIS31;
}BITBANDING_DMACHIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t CH0SEL [4UL];
    volatile uint32_t CH1SEL [4UL];
    volatile uint32_t CH2SEL [4UL];
    volatile uint32_t CH3SEL [4UL];
    volatile uint32_t CH4SEL [4UL];
    volatile uint32_t CH5SEL [4UL];
    volatile uint32_t CH6SEL [4UL];
    volatile uint32_t CH7SEL [4UL];
}BITBANDING_DMACHMAP0_TypeDef;

typedef volatile struct
{
    volatile uint32_t CH8SEL [4UL];
    volatile uint32_t CH9SEL [4UL];
    volatile uint32_t CH10SEL [4UL];
    volatile uint32_t CH11SEL [4UL];
    volatile uint32_t CH12SEL [4UL];
    volatile uint32_t CH13SEL [4UL];
    volatile uint32_t CH14SEL [4UL];
    volatile uint32_t CH15SEL [4UL];
}BITBANDING_DMACHMAP1_TypeDef;

typedef volatile struct
{
    volatile uint32_t CH16SEL [4UL];
    volatile uint32_t CH17SEL [4UL];
    volatile uint32_t CH18SEL [4UL];
    volatile uint32_t CH19SEL [4UL];
    volatile uint32_t CH20SEL [4UL];
    volatile uint32_t CH21SEL [4UL];
    volatile uint32_t CH22SEL [4UL];
    volatile uint32_t CH23SEL [4UL];
}BITBANDING_DMACHMAP2_TypeDef;

typedef volatile struct
{
    volatile uint32_t CH24SEL [4UL];
    volatile uint32_t CH25SEL [4UL];
    volatile uint32_t CH26SEL [4UL];
    volatile uint32_t CH27SEL [4UL];
    volatile uint32_t CH28SEL [4UL];
    volatile uint32_t CH29SEL [4UL];
    volatile uint32_t CH30SEL [4UL];
    volatile uint32_t CH31SEL [4UL];
}BITBANDING_DMACHMAP3_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID0 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_DMAPeriphID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID1 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_DMAPeriphID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID2 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_DMAPeriphID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID3 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_DMAPeriphID3_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID4 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_DMAPeriphID4_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID0 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_DMAPCellID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID1 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_DMAPCellID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID2 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_DMAPCellID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID3 [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_DMAPCellID3_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTER_BITBANDING_H_ */
