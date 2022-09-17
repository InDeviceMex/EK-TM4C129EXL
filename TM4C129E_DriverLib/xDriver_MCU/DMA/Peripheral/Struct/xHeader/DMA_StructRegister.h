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

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

typedef volatile struct
{
    volatile const uint32_t MASTEN :1;
    const uint32_t reserved :3;
    volatile const uint32_t STATE :4;
    const uint32_t reserved1:8;
    volatile const uint32_t CHANS :5;
    const uint32_t reserved2:11;
}DMA_STAT_t;

typedef volatile struct
{
    volatile uint32_t MASTEN :1;
    const uint32_t reserved :31;
}DMA_CFG_t;

typedef volatile struct
{
    volatile uint32_t ADDR :32;
}DMA_CTLBASE_t;

typedef volatile struct
{
    volatile const uint32_t ADDR :32;
}DMA_ALTBASE_t;

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
}DMA_CH_WAITSTAT_t;

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
}DMA_CH_SWREQ_t;

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
}DMA_CH_SET_t;

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
}DMA_CH_CLR_t;

typedef volatile struct
{
    volatile uint32_t ERRCLR :1;
    const uint32_t reserved :31;
}DMA_ERRCLR_t;

typedef volatile struct
{
    volatile uint32_t ASGN0 :1;
    volatile uint32_t ASGN1 :1;
    volatile uint32_t ASGN2 :1;
    volatile uint32_t ASGN3 :1;
    volatile uint32_t ASGN4 :1;
    volatile uint32_t ASGN5 :1;
    volatile uint32_t ASGN6 :1;
    volatile uint32_t ASGN7 :1;
    volatile uint32_t ASGN8 :1;
    volatile uint32_t ASGN9 :1;
    volatile uint32_t ASGN10 :1;
    volatile uint32_t ASGN11 :1;
    volatile uint32_t ASGN12 :1;
    volatile uint32_t ASGN13 :1;
    volatile uint32_t ASGN14 :1;
    volatile uint32_t ASGN15 :1;
    volatile uint32_t ASGN16 :1;
    volatile uint32_t ASGN17 :1;
    volatile uint32_t ASGN18 :1;
    volatile uint32_t ASGN19 :1;
    volatile uint32_t ASGN20 :1;
    volatile uint32_t ASGN21 :1;
    volatile uint32_t ASGN22 :1;
    volatile uint32_t ASGN23 :1;
    volatile uint32_t ASGN24 :1;
    volatile uint32_t ASGN25 :1;
    volatile uint32_t ASGN26 :1;
    volatile uint32_t ASGN27 :1;
    volatile uint32_t ASGN28 :1;
    volatile uint32_t ASGN29 :1;
    volatile uint32_t ASGN30 :1;
    volatile uint32_t ASGN31 :1;
}DMA_CH_ASGN_t;

typedef volatile struct
{
    volatile uint32_t IS0 :1;
    volatile uint32_t IS1 :1;
    volatile uint32_t IS2 :1;
    volatile uint32_t IS3 :1;
    volatile uint32_t IS4 :1;
    volatile uint32_t IS5 :1;
    volatile uint32_t IS6 :1;
    volatile uint32_t IS7 :1;
    volatile uint32_t IS8 :1;
    volatile uint32_t IS9 :1;
    volatile uint32_t IS10 :1;
    volatile uint32_t IS11 :1;
    volatile uint32_t IS12 :1;
    volatile uint32_t IS13 :1;
    volatile uint32_t IS14 :1;
    volatile uint32_t IS15 :1;
    volatile uint32_t IS16 :1;
    volatile uint32_t IS17 :1;
    volatile uint32_t IS18 :1;
    volatile uint32_t IS19 :1;
    volatile uint32_t IS20 :1;
    volatile uint32_t IS21 :1;
    volatile uint32_t IS22 :1;
    volatile uint32_t IS23 :1;
    volatile uint32_t IS24 :1;
    volatile uint32_t IS25 :1;
    volatile uint32_t IS26 :1;
    volatile uint32_t IS27 :1;
    volatile uint32_t IS28 :1;
    volatile uint32_t IS29 :1;
    volatile uint32_t IS30 :1;
    volatile uint32_t IS31 :1;
}DMA_CH_IS_t;

typedef volatile struct
{
    volatile uint32_t MAP0 :4;
    volatile uint32_t MAP1 :4;
    volatile uint32_t MAP2 :4;
    volatile uint32_t MAP3 :4;
    volatile uint32_t MAP4 :4;
    volatile uint32_t MAP5 :4;
    volatile uint32_t MAP6 :4;
    volatile uint32_t MAP7 :4;
}DMA_CH_MAP0_t;

typedef volatile struct
{
    volatile uint32_t MAP8 :4;
    volatile uint32_t MAP9 :4;
    volatile uint32_t MAP10 :4;
    volatile uint32_t MAP11 :4;
    volatile uint32_t MAP12 :4;
    volatile uint32_t MAP13 :4;
    volatile uint32_t MAP14 :4;
    volatile uint32_t MAP15 :4;
}DMA_CH_MAP1_t;

typedef volatile struct
{
    volatile uint32_t MAP16 :4;
    volatile uint32_t MAP17 :4;
    volatile uint32_t MAP18 :4;
    volatile uint32_t MAP19 :4;
    volatile uint32_t MAP20 :4;
    volatile uint32_t MAP21 :4;
    volatile uint32_t MAP22 :4;
    volatile uint32_t MAP23 :4;
}DMA_CH_MAP2_t;

typedef volatile struct
{
    volatile uint32_t MAP24 :4;
    volatile uint32_t MAP25 :4;
    volatile uint32_t MAP26 :4;
    volatile uint32_t MAP27 :4;
    volatile uint32_t MAP28 :4;
    volatile uint32_t MAP29 :4;
    volatile uint32_t MAP30 :4;
    volatile uint32_t MAP31 :4;
}DMA_CH_MAP3_t;

typedef volatile struct
{
        union
        {
                volatile uint32_t MAP [4UL];
                DMA_CH_MAP0_t MAP_bit [4UL];
        };
}DMA_CH_MAP_t;

typedef volatile struct
{
    volatile const uint32_t PID0 :8;
    const uint32_t reserved :24;
}DMA_PeriphID0_t;

typedef volatile struct
{
    volatile const uint32_t PID1 :8;
    const uint32_t reserved :24;
}DMA_PeriphID1_t;

typedef volatile struct
{
    volatile const uint32_t PID2 :8;
    const uint32_t reserved :24;
}DMA_PeriphID2_t;

typedef volatile struct
{
    volatile const uint32_t PID3 :8;
    const uint32_t reserved :24;
}DMA_PeriphID3_t;

typedef volatile struct
{
    volatile const uint32_t PID4 :8;
    const uint32_t reserved :24;
}DMA_PeriphID4_t;

typedef volatile struct
{
    volatile const uint32_t CID0 :8;
    const uint32_t reserved :24;
}DMA_PCellID0_t;

typedef volatile struct
{
    volatile const uint32_t CID1 :8;
    const uint32_t reserved :24;
}DMA_PCellID1_t;

typedef volatile struct
{
    volatile const uint32_t CID2 :8;
    const uint32_t reserved :24;
}DMA_PCellID2_t;

typedef volatile struct
{
    volatile const uint32_t CID3 :8;
    const uint32_t reserved :24;
}DMA_PCellID3_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTER_H_ */
