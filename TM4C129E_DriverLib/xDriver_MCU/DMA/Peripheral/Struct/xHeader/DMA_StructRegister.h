/**
 *
 * @file DMA_StructRegister.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTER_H_

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile const uint32_t MASTEN :1;
    const uint32_t reserved :3;
    volatile const uint32_t STATE :4;
    const uint32_t reserved1:8;
    volatile const uint32_t DMACHANS :5;
    const uint32_t reserved2:11;
}DMASTAT_TypeDef;

typedef volatile struct
{
    volatile uint32_t MASTEN :1;
    const uint32_t reserved :31;
}DMACFG_TypeDef;

typedef volatile struct
{
    volatile uint32_t ADDR :32;
}DMACTLBASE_TypeDef;

typedef volatile struct
{
    volatile const uint32_t ADDR :32;
}DMAALTBASE_TypeDef;

typedef volatile struct
{
    volatile const uint32_t WAITREQ0 :1;
    volatile const uint32_t WAITREQ1 :1;
    volatile const uint32_t WAITREQ2 :1;
    volatile const uint32_t WAITREQ3 :1;
    volatile const uint32_t WAITREQ4 :1;
    volatile const uint32_t WAITREQ5 :1;
    volatile const uint32_t WAITREQ6 :1;
    volatile const uint32_t WAITREQ7 :1;
    volatile const uint32_t WAITREQ8 :1;
    volatile const uint32_t WAITREQ9 :1;
    volatile const uint32_t WAITREQ10 :1;
    volatile const uint32_t WAITREQ11 :1;
    volatile const uint32_t WAITREQ12 :1;
    volatile const uint32_t WAITREQ13 :1;
    volatile const uint32_t WAITREQ14 :1;
    volatile const uint32_t WAITREQ15 :1;
    volatile const uint32_t WAITREQ16 :1;
    volatile const uint32_t WAITREQ17 :1;
    volatile const uint32_t WAITREQ18 :1;
    volatile const uint32_t WAITREQ19 :1;
    volatile const uint32_t WAITREQ20 :1;
    volatile const uint32_t WAITREQ21 :1;
    volatile const uint32_t WAITREQ22 :1;
    volatile const uint32_t WAITREQ23 :1;
    volatile const uint32_t WAITREQ24 :1;
    volatile const uint32_t WAITREQ25 :1;
    volatile const uint32_t WAITREQ26 :1;
    volatile const uint32_t WAITREQ27 :1;
    volatile const uint32_t WAITREQ28 :1;
    volatile const uint32_t WAITREQ29 :1;
    volatile const uint32_t WAITREQ30 :1;
    volatile const uint32_t WAITREQ31 :1;
}DMAWAITSTAT_TypeDef;

typedef volatile struct
{
    volatile uint32_t SWREQ0 :1;
    volatile uint32_t SWREQ1 :1;
    volatile uint32_t SWREQ2 :1;
    volatile uint32_t SWREQ3 :1;
    volatile uint32_t SWREQ4 :1;
    volatile uint32_t SWREQ5 :1;
    volatile uint32_t SWREQ6 :1;
    volatile uint32_t SWREQ7 :1;
    volatile uint32_t SWREQ8 :1;
    volatile uint32_t SWREQ9 :1;
    volatile uint32_t SWREQ10 :1;
    volatile uint32_t SWREQ11 :1;
    volatile uint32_t SWREQ12 :1;
    volatile uint32_t SWREQ13 :1;
    volatile uint32_t SWREQ14 :1;
    volatile uint32_t SWREQ15 :1;
    volatile uint32_t SWREQ16 :1;
    volatile uint32_t SWREQ17 :1;
    volatile uint32_t SWREQ18 :1;
    volatile uint32_t SWREQ19 :1;
    volatile uint32_t SWREQ20 :1;
    volatile uint32_t SWREQ21 :1;
    volatile uint32_t SWREQ22 :1;
    volatile uint32_t SWREQ23 :1;
    volatile uint32_t SWREQ24 :1;
    volatile uint32_t SWREQ25 :1;
    volatile uint32_t SWREQ26 :1;
    volatile uint32_t SWREQ27 :1;
    volatile uint32_t SWREQ28 :1;
    volatile uint32_t SWREQ29 :1;
    volatile uint32_t SWREQ30 :1;
    volatile uint32_t SWREQ31 :1;
}DMASWREQ_TypeDef;

typedef volatile struct
{
    volatile uint32_t SET0 :1;
    volatile uint32_t SET1 :1;
    volatile uint32_t SET2 :1;
    volatile uint32_t SET3 :1;
    volatile uint32_t SET4 :1;
    volatile uint32_t SET5 :1;
    volatile uint32_t SET6 :1;
    volatile uint32_t SET7 :1;
    volatile uint32_t SET8 :1;
    volatile uint32_t SET9 :1;
    volatile uint32_t SET10 :1;
    volatile uint32_t SET11 :1;
    volatile uint32_t SET12 :1;
    volatile uint32_t SET13 :1;
    volatile uint32_t SET14 :1;
    volatile uint32_t SET15 :1;
    volatile uint32_t SET16 :1;
    volatile uint32_t SET17 :1;
    volatile uint32_t SET18 :1;
    volatile uint32_t SET19 :1;
    volatile uint32_t SET20 :1;
    volatile uint32_t SET21 :1;
    volatile uint32_t SET22 :1;
    volatile uint32_t SET23 :1;
    volatile uint32_t SET24 :1;
    volatile uint32_t SET25 :1;
    volatile uint32_t SET26 :1;
    volatile uint32_t SET27 :1;
    volatile uint32_t SET28 :1;
    volatile uint32_t SET29 :1;
    volatile uint32_t SET30 :1;
    volatile uint32_t SET31 :1;
}DMASET_TypeDef;

typedef volatile struct
{
    volatile uint32_t CLR0 :1;
    volatile uint32_t CLR1 :1;
    volatile uint32_t CLR2 :1;
    volatile uint32_t CLR3 :1;
    volatile uint32_t CLR4 :1;
    volatile uint32_t CLR5 :1;
    volatile uint32_t CLR6 :1;
    volatile uint32_t CLR7 :1;
    volatile uint32_t CLR8 :1;
    volatile uint32_t CLR9 :1;
    volatile uint32_t CLR10 :1;
    volatile uint32_t CLR11 :1;
    volatile uint32_t CLR12 :1;
    volatile uint32_t CLR13 :1;
    volatile uint32_t CLR14 :1;
    volatile uint32_t CLR15 :1;
    volatile uint32_t CLR16 :1;
    volatile uint32_t CLR17 :1;
    volatile uint32_t CLR18 :1;
    volatile uint32_t CLR19 :1;
    volatile uint32_t CLR20 :1;
    volatile uint32_t CLR21 :1;
    volatile uint32_t CLR22 :1;
    volatile uint32_t CLR23 :1;
    volatile uint32_t CLR24 :1;
    volatile uint32_t CLR25 :1;
    volatile uint32_t CLR26 :1;
    volatile uint32_t CLR27 :1;
    volatile uint32_t CLR28 :1;
    volatile uint32_t CLR29 :1;
    volatile uint32_t CLR30 :1;
    volatile uint32_t CLR31 :1;
}DMACLR_TypeDef;

typedef volatile struct
{
    volatile uint32_t ERRCLR :1;
    const uint32_t reserved :31;
}DMAERRCLR_TypeDef;

typedef volatile struct
{
    volatile uint32_t CHASGN0 :1;
    volatile uint32_t CHASGN1 :1;
    volatile uint32_t CHASGN2 :1;
    volatile uint32_t CHASGN3 :1;
    volatile uint32_t CHASGN4 :1;
    volatile uint32_t CHASGN5 :1;
    volatile uint32_t CHASGN6 :1;
    volatile uint32_t CHASGN7 :1;
    volatile uint32_t CHASGN8 :1;
    volatile uint32_t CHASGN9 :1;
    volatile uint32_t CHASGN10 :1;
    volatile uint32_t CHASGN11 :1;
    volatile uint32_t CHASGN12 :1;
    volatile uint32_t CHASGN13 :1;
    volatile uint32_t CHASGN14 :1;
    volatile uint32_t CHASGN15 :1;
    volatile uint32_t CHASGN16 :1;
    volatile uint32_t CHASGN17 :1;
    volatile uint32_t CHASGN18 :1;
    volatile uint32_t CHASGN19 :1;
    volatile uint32_t CHASGN20 :1;
    volatile uint32_t CHASGN21 :1;
    volatile uint32_t CHASGN22 :1;
    volatile uint32_t CHASGN23 :1;
    volatile uint32_t CHASGN24 :1;
    volatile uint32_t CHASGN25 :1;
    volatile uint32_t CHASGN26 :1;
    volatile uint32_t CHASGN27 :1;
    volatile uint32_t CHASGN28 :1;
    volatile uint32_t CHASGN29 :1;
    volatile uint32_t CHASGN30 :1;
    volatile uint32_t CHASGN31 :1;
}DMACHASGN_TypeDef;

typedef volatile struct
{
    volatile uint32_t CHIS0 :1;
    volatile uint32_t CHIS1 :1;
    volatile uint32_t CHIS2 :1;
    volatile uint32_t CHIS3 :1;
    volatile uint32_t CHIS4 :1;
    volatile uint32_t CHIS5 :1;
    volatile uint32_t CHIS6 :1;
    volatile uint32_t CHIS7 :1;
    volatile uint32_t CHIS8 :1;
    volatile uint32_t CHIS9 :1;
    volatile uint32_t CHIS10 :1;
    volatile uint32_t CHIS11 :1;
    volatile uint32_t CHIS12 :1;
    volatile uint32_t CHIS13 :1;
    volatile uint32_t CHIS14 :1;
    volatile uint32_t CHIS15 :1;
    volatile uint32_t CHIS16 :1;
    volatile uint32_t CHIS17 :1;
    volatile uint32_t CHIS18 :1;
    volatile uint32_t CHIS19 :1;
    volatile uint32_t CHIS20 :1;
    volatile uint32_t CHIS21 :1;
    volatile uint32_t CHIS22 :1;
    volatile uint32_t CHIS23 :1;
    volatile uint32_t CHIS24 :1;
    volatile uint32_t CHIS25 :1;
    volatile uint32_t CHIS26 :1;
    volatile uint32_t CHIS27 :1;
    volatile uint32_t CHIS28 :1;
    volatile uint32_t CHIS29 :1;
    volatile uint32_t CHIS30 :1;
    volatile uint32_t CHIS31 :1;
}DMACHIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t CH0SEL :4;
    volatile uint32_t CH1SEL :4;
    volatile uint32_t CH2SEL :4;
    volatile uint32_t CH3SEL :4;
    volatile uint32_t CH4SEL :4;
    volatile uint32_t CH5SEL :4;
    volatile uint32_t CH6SEL :4;
    volatile uint32_t CH7SEL :4;
}DMACHMAP0_TypeDef;

typedef volatile struct
{
    volatile uint32_t CH8SEL :4;
    volatile uint32_t CH9SEL :4;
    volatile uint32_t CH10SEL :4;
    volatile uint32_t CH11SEL :4;
    volatile uint32_t CH12SEL :4;
    volatile uint32_t CH13SEL :4;
    volatile uint32_t CH14SEL :4;
    volatile uint32_t CH15SEL :4;
}DMACHMAP1_TypeDef;

typedef volatile struct
{
    volatile uint32_t CH16SEL :4;
    volatile uint32_t CH17SEL :4;
    volatile uint32_t CH18SEL :4;
    volatile uint32_t CH19SEL :4;
    volatile uint32_t CH20SEL :4;
    volatile uint32_t CH21SEL :4;
    volatile uint32_t CH22SEL :4;
    volatile uint32_t CH23SEL :4;
}DMACHMAP2_TypeDef;

typedef volatile struct
{
    volatile uint32_t CH24SEL :4;
    volatile uint32_t CH25SEL :4;
    volatile uint32_t CH26SEL :4;
    volatile uint32_t CH27SEL :4;
    volatile uint32_t CH28SEL :4;
    volatile uint32_t CH29SEL :4;
    volatile uint32_t CH30SEL :4;
    volatile uint32_t CH31SEL :4;
}DMACHMAP3_TypeDef;

typedef volatile struct
{
        union
        {
                volatile uint32_t CHMAP [4UL];
                DMACHMAP0_TypeDef CHMAP_bit [4UL];
        };
}DMACHMAP_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID0 :8;
    const uint32_t reserved :24;
}DMAPeriphID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID1 :8;
    const uint32_t reserved :24;
}DMAPeriphID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID2 :8;
    const uint32_t reserved :24;
}DMAPeriphID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID3 :8;
    const uint32_t reserved :24;
}DMAPeriphID3_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID4 :8;
    const uint32_t reserved :24;
}DMAPeriphID4_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID0 :8;
    const uint32_t reserved :24;
}DMAPCellID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID1 :8;
    const uint32_t reserved :24;
}DMAPCellID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID2 :8;
    const uint32_t reserved :24;
}DMAPCellID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID3 :8;
    const uint32_t reserved :24;
}DMAPCellID3_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTER_H_ */
