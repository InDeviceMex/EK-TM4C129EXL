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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef volatile struct
{
    volatile const uint32_t MASTEN;
    const uint32_t reserved [3UL];
    volatile const uint32_t STATE [4UL];
    const uint32_t reserved1 [8UL];
    volatile const uint32_t CHANS [5UL];
    const uint32_t reserved2 [11UL];
}DMA_BITBANDING_STAT_t;

typedef volatile struct
{
    volatile uint32_t MASTEN;
    const uint32_t reserved [31UL];
}DMA_BITBANDING_CFG_t;

typedef volatile struct
{
    volatile uint32_t ADDR [32UL];
}DMA_BITBANDING_CTLBASE_t;

typedef volatile struct
{
    volatile const uint32_t ADDR [32UL];
}DMA_BITBANDING_ALTBASE_t;

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
}DMA_BITBANDING_CH_WAITSTAT_t;

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
}DMA_BITBANDING_CH_SWREQ_t;

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
}DMA_BITBANDING_CH_SET_t;

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
}DMA_BITBANDING_CH_CLR_t;

typedef volatile struct
{
    volatile uint32_t ERRCLR;
    const uint32_t reserved [31UL];
}DMA_BITBANDING_ERRCLR_t;


typedef volatile struct
{
    volatile uint32_t ASGN0;
    volatile uint32_t ASGN1;
    volatile uint32_t ASGN2;
    volatile uint32_t ASGN3;
    volatile uint32_t ASGN4;
    volatile uint32_t ASGN5;
    volatile uint32_t ASGN6;
    volatile uint32_t ASGN7;
    volatile uint32_t ASGN8;
    volatile uint32_t ASGN9;
    volatile uint32_t ASGN10;
    volatile uint32_t ASGN11;
    volatile uint32_t ASGN12;
    volatile uint32_t ASGN13;
    volatile uint32_t ASGN14;
    volatile uint32_t ASGN15;
    volatile uint32_t ASGN16;
    volatile uint32_t ASGN17;
    volatile uint32_t ASGN18;
    volatile uint32_t ASGN19;
    volatile uint32_t ASGN20;
    volatile uint32_t ASGN21;
    volatile uint32_t ASGN22;
    volatile uint32_t ASGN23;
    volatile uint32_t ASGN24;
    volatile uint32_t ASGN25;
    volatile uint32_t ASGN26;
    volatile uint32_t ASGN27;
    volatile uint32_t ASGN28;
    volatile uint32_t ASGN29;
    volatile uint32_t ASGN30;
    volatile uint32_t ASGN31;
}DMA_BITBANDING_CH_ASGN_t;

typedef volatile struct
{
    volatile uint32_t IS0;
    volatile uint32_t IS1;
    volatile uint32_t IS2;
    volatile uint32_t IS3;
    volatile uint32_t IS4;
    volatile uint32_t IS5;
    volatile uint32_t IS6;
    volatile uint32_t IS7;
    volatile uint32_t IS8;
    volatile uint32_t IS9;
    volatile uint32_t IS10;
    volatile uint32_t IS11;
    volatile uint32_t IS12;
    volatile uint32_t IS13;
    volatile uint32_t IS14;
    volatile uint32_t IS15;
    volatile uint32_t IS16;
    volatile uint32_t IS17;
    volatile uint32_t IS18;
    volatile uint32_t IS19;
    volatile uint32_t IS20;
    volatile uint32_t IS21;
    volatile uint32_t IS22;
    volatile uint32_t IS23;
    volatile uint32_t IS24;
    volatile uint32_t IS25;
    volatile uint32_t IS26;
    volatile uint32_t IS27;
    volatile uint32_t IS28;
    volatile uint32_t IS29;
    volatile uint32_t IS30;
    volatile uint32_t IS31;
}DMA_BITBANDING_CH_IS_t;

typedef volatile struct
{
    volatile uint32_t MAP0 [4UL];
    volatile uint32_t MAP1 [4UL];
    volatile uint32_t MAP2 [4UL];
    volatile uint32_t MAP3 [4UL];
    volatile uint32_t MAP4 [4UL];
    volatile uint32_t MAP5 [4UL];
    volatile uint32_t MAP6 [4UL];
    volatile uint32_t MAP7 [4UL];
}DMA_BITBANDING_CH_MAP0_t;

typedef volatile struct
{
    volatile uint32_t MAP8 [4UL];
    volatile uint32_t MAP9 [4UL];
    volatile uint32_t MAP10 [4UL];
    volatile uint32_t MAP11 [4UL];
    volatile uint32_t MAP12 [4UL];
    volatile uint32_t MAP13 [4UL];
    volatile uint32_t MAP14 [4UL];
    volatile uint32_t MAP15 [4UL];
}DMA_BITBANDING_CH_MAP1_t;

typedef volatile struct
{
    volatile uint32_t MAP16 [4UL];
    volatile uint32_t MAP17 [4UL];
    volatile uint32_t MAP18 [4UL];
    volatile uint32_t MAP19 [4UL];
    volatile uint32_t MAP20 [4UL];
    volatile uint32_t MAP21 [4UL];
    volatile uint32_t MAP22 [4UL];
    volatile uint32_t MAP23 [4UL];
}DMA_BITBANDING_CH_MAP2_t;

typedef volatile struct
{
    volatile uint32_t MAP24 [4UL];
    volatile uint32_t MAP25 [4UL];
    volatile uint32_t MAP26 [4UL];
    volatile uint32_t MAP27 [4UL];
    volatile uint32_t MAP28 [4UL];
    volatile uint32_t MAP29 [4UL];
    volatile uint32_t MAP30 [4UL];
    volatile uint32_t MAP31 [4UL];
}DMA_BITBANDING_CH_MAP3_t;

typedef volatile struct
{
    volatile const uint32_t PID0 [8UL];
    const uint32_t reserved [24UL];
}DMA_BITBANDING_PeriphID0_t;

typedef volatile struct
{
    volatile const uint32_t PID1 [8UL];
    const uint32_t reserved [24UL];
}DMA_BITBANDING_PeriphID1_t;

typedef volatile struct
{
    volatile const uint32_t PID2 [8UL];
    const uint32_t reserved [24UL];
}DMA_BITBANDING_PeriphID2_t;

typedef volatile struct
{
    volatile const uint32_t PID3 [8UL];
    const uint32_t reserved [24UL];
}DMA_BITBANDING_PeriphID3_t;

typedef volatile struct
{
    volatile const uint32_t PID4 [8UL];
    const uint32_t reserved [24UL];
}DMA_BITBANDING_PeriphID4_t;

typedef volatile struct
{
    volatile const uint32_t CID0 [8UL];
    const uint32_t reserved [24UL];
}DMA_BITBANDING_PCellID0_t;

typedef volatile struct
{
    volatile const uint32_t CID1 [8UL];
    const uint32_t reserved [24UL];
}DMA_BITBANDING_PCellID1_t;

typedef volatile struct
{
    volatile const uint32_t CID2 [8UL];
    const uint32_t reserved [24UL];
}DMA_BITBANDING_PCellID2_t;

typedef volatile struct
{
    volatile const uint32_t CID3 [8UL];
    const uint32_t reserved [24UL];
}DMA_BITBANDING_PCellID3_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTER_BITBANDING_H_ */
