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

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

typedef volatile struct
{
    volatile const UBase_t MASTEN;
    const UBase_t reserved [3UL];
    volatile const UBase_t STATE [4UL];
    const UBase_t reserved1 [8UL];
    volatile const UBase_t CHANS [5UL];
    const UBase_t reserved2 [11UL];
}DMA_BITBANDING_STAT_t;

typedef volatile struct
{
    volatile UBase_t MASTEN;
    const UBase_t reserved [31UL];
}DMA_BITBANDING_CFG_t;

typedef volatile struct
{
    volatile UBase_t ADDR [32UL];
}DMA_BITBANDING_CTLBASE_t;

typedef volatile struct
{
    volatile const UBase_t ADDR [32UL];
}DMA_BITBANDING_ALTBASE_t;

typedef volatile struct
{
    volatile const UBase_t WAITREQ0;
    volatile const UBase_t WAITREQ1;
    volatile const UBase_t WAITREQ2;
    volatile const UBase_t WAITREQ3;
    volatile const UBase_t WAITREQ4;
    volatile const UBase_t WAITREQ5;
    volatile const UBase_t WAITREQ6;
    volatile const UBase_t WAITREQ7;
    volatile const UBase_t WAITREQ8;
    volatile const UBase_t WAITREQ9;
    volatile const UBase_t WAITREQ10;
    volatile const UBase_t WAITREQ11;
    volatile const UBase_t WAITREQ12;
    volatile const UBase_t WAITREQ13;
    volatile const UBase_t WAITREQ14;
    volatile const UBase_t WAITREQ15;
    volatile const UBase_t WAITREQ16;
    volatile const UBase_t WAITREQ17;
    volatile const UBase_t WAITREQ18;
    volatile const UBase_t WAITREQ19;
    volatile const UBase_t WAITREQ20;
    volatile const UBase_t WAITREQ21;
    volatile const UBase_t WAITREQ22;
    volatile const UBase_t WAITREQ23;
    volatile const UBase_t WAITREQ24;
    volatile const UBase_t WAITREQ25;
    volatile const UBase_t WAITREQ26;
    volatile const UBase_t WAITREQ27;
    volatile const UBase_t WAITREQ28;
    volatile const UBase_t WAITREQ29;
    volatile const UBase_t WAITREQ30;
    volatile const UBase_t WAITREQ31;
}DMA_BITBANDING_CH_WAITSTAT_t;

typedef volatile struct
{
    volatile UBase_t SWREQ0;
    volatile UBase_t SWREQ1;
    volatile UBase_t SWREQ2;
    volatile UBase_t SWREQ3;
    volatile UBase_t SWREQ4;
    volatile UBase_t SWREQ5;
    volatile UBase_t SWREQ6;
    volatile UBase_t SWREQ7;
    volatile UBase_t SWREQ8;
    volatile UBase_t SWREQ9;
    volatile UBase_t SWREQ10;
    volatile UBase_t SWREQ11;
    volatile UBase_t SWREQ12;
    volatile UBase_t SWREQ13;
    volatile UBase_t SWREQ14;
    volatile UBase_t SWREQ15;
    volatile UBase_t SWREQ16;
    volatile UBase_t SWREQ17;
    volatile UBase_t SWREQ18;
    volatile UBase_t SWREQ19;
    volatile UBase_t SWREQ20;
    volatile UBase_t SWREQ21;
    volatile UBase_t SWREQ22;
    volatile UBase_t SWREQ23;
    volatile UBase_t SWREQ24;
    volatile UBase_t SWREQ25;
    volatile UBase_t SWREQ26;
    volatile UBase_t SWREQ27;
    volatile UBase_t SWREQ28;
    volatile UBase_t SWREQ29;
    volatile UBase_t SWREQ30;
    volatile UBase_t SWREQ31;
}DMA_BITBANDING_CH_SWREQ_t;

typedef volatile struct
{
    volatile UBase_t SET0;
    volatile UBase_t SET1;
    volatile UBase_t SET2;
    volatile UBase_t SET3;
    volatile UBase_t SET4;
    volatile UBase_t SET5;
    volatile UBase_t SET6;
    volatile UBase_t SET7;
    volatile UBase_t SET8;
    volatile UBase_t SET9;
    volatile UBase_t SET10;
    volatile UBase_t SET11;
    volatile UBase_t SET12;
    volatile UBase_t SET13;
    volatile UBase_t SET14;
    volatile UBase_t SET15;
    volatile UBase_t SET16;
    volatile UBase_t SET17;
    volatile UBase_t SET18;
    volatile UBase_t SET19;
    volatile UBase_t SET20;
    volatile UBase_t SET21;
    volatile UBase_t SET22;
    volatile UBase_t SET23;
    volatile UBase_t SET24;
    volatile UBase_t SET25;
    volatile UBase_t SET26;
    volatile UBase_t SET27;
    volatile UBase_t SET28;
    volatile UBase_t SET29;
    volatile UBase_t SET30;
    volatile UBase_t SET31;
}DMA_BITBANDING_CH_SET_t;

typedef volatile struct
{
    volatile UBase_t CLR0;
    volatile UBase_t CLR1;
    volatile UBase_t CLR2;
    volatile UBase_t CLR3;
    volatile UBase_t CLR4;
    volatile UBase_t CLR5;
    volatile UBase_t CLR6;
    volatile UBase_t CLR7;
    volatile UBase_t CLR8;
    volatile UBase_t CLR9;
    volatile UBase_t CLR10;
    volatile UBase_t CLR11;
    volatile UBase_t CLR12;
    volatile UBase_t CLR13;
    volatile UBase_t CLR14;
    volatile UBase_t CLR15;
    volatile UBase_t CLR16;
    volatile UBase_t CLR17;
    volatile UBase_t CLR18;
    volatile UBase_t CLR19;
    volatile UBase_t CLR20;
    volatile UBase_t CLR21;
    volatile UBase_t CLR22;
    volatile UBase_t CLR23;
    volatile UBase_t CLR24;
    volatile UBase_t CLR25;
    volatile UBase_t CLR26;
    volatile UBase_t CLR27;
    volatile UBase_t CLR28;
    volatile UBase_t CLR29;
    volatile UBase_t CLR30;
    volatile UBase_t CLR31;
}DMA_BITBANDING_CH_CLR_t;

typedef volatile struct
{
    volatile UBase_t ERRCLR;
    const UBase_t reserved [31UL];
}DMA_BITBANDING_ERRCLR_t;


typedef volatile struct
{
    volatile UBase_t ASGN0;
    volatile UBase_t ASGN1;
    volatile UBase_t ASGN2;
    volatile UBase_t ASGN3;
    volatile UBase_t ASGN4;
    volatile UBase_t ASGN5;
    volatile UBase_t ASGN6;
    volatile UBase_t ASGN7;
    volatile UBase_t ASGN8;
    volatile UBase_t ASGN9;
    volatile UBase_t ASGN10;
    volatile UBase_t ASGN11;
    volatile UBase_t ASGN12;
    volatile UBase_t ASGN13;
    volatile UBase_t ASGN14;
    volatile UBase_t ASGN15;
    volatile UBase_t ASGN16;
    volatile UBase_t ASGN17;
    volatile UBase_t ASGN18;
    volatile UBase_t ASGN19;
    volatile UBase_t ASGN20;
    volatile UBase_t ASGN21;
    volatile UBase_t ASGN22;
    volatile UBase_t ASGN23;
    volatile UBase_t ASGN24;
    volatile UBase_t ASGN25;
    volatile UBase_t ASGN26;
    volatile UBase_t ASGN27;
    volatile UBase_t ASGN28;
    volatile UBase_t ASGN29;
    volatile UBase_t ASGN30;
    volatile UBase_t ASGN31;
}DMA_BITBANDING_CH_ASGN_t;

typedef volatile struct
{
    volatile UBase_t IS0;
    volatile UBase_t IS1;
    volatile UBase_t IS2;
    volatile UBase_t IS3;
    volatile UBase_t IS4;
    volatile UBase_t IS5;
    volatile UBase_t IS6;
    volatile UBase_t IS7;
    volatile UBase_t IS8;
    volatile UBase_t IS9;
    volatile UBase_t IS10;
    volatile UBase_t IS11;
    volatile UBase_t IS12;
    volatile UBase_t IS13;
    volatile UBase_t IS14;
    volatile UBase_t IS15;
    volatile UBase_t IS16;
    volatile UBase_t IS17;
    volatile UBase_t IS18;
    volatile UBase_t IS19;
    volatile UBase_t IS20;
    volatile UBase_t IS21;
    volatile UBase_t IS22;
    volatile UBase_t IS23;
    volatile UBase_t IS24;
    volatile UBase_t IS25;
    volatile UBase_t IS26;
    volatile UBase_t IS27;
    volatile UBase_t IS28;
    volatile UBase_t IS29;
    volatile UBase_t IS30;
    volatile UBase_t IS31;
}DMA_BITBANDING_CH_IS_t;

typedef volatile struct
{
    volatile UBase_t MAP0 [4UL];
    volatile UBase_t MAP1 [4UL];
    volatile UBase_t MAP2 [4UL];
    volatile UBase_t MAP3 [4UL];
    volatile UBase_t MAP4 [4UL];
    volatile UBase_t MAP5 [4UL];
    volatile UBase_t MAP6 [4UL];
    volatile UBase_t MAP7 [4UL];
}DMA_BITBANDING_CH_MAP0_t;

typedef volatile struct
{
    volatile UBase_t MAP8 [4UL];
    volatile UBase_t MAP9 [4UL];
    volatile UBase_t MAP10 [4UL];
    volatile UBase_t MAP11 [4UL];
    volatile UBase_t MAP12 [4UL];
    volatile UBase_t MAP13 [4UL];
    volatile UBase_t MAP14 [4UL];
    volatile UBase_t MAP15 [4UL];
}DMA_BITBANDING_CH_MAP1_t;

typedef volatile struct
{
    volatile UBase_t MAP16 [4UL];
    volatile UBase_t MAP17 [4UL];
    volatile UBase_t MAP18 [4UL];
    volatile UBase_t MAP19 [4UL];
    volatile UBase_t MAP20 [4UL];
    volatile UBase_t MAP21 [4UL];
    volatile UBase_t MAP22 [4UL];
    volatile UBase_t MAP23 [4UL];
}DMA_BITBANDING_CH_MAP2_t;

typedef volatile struct
{
    volatile UBase_t MAP24 [4UL];
    volatile UBase_t MAP25 [4UL];
    volatile UBase_t MAP26 [4UL];
    volatile UBase_t MAP27 [4UL];
    volatile UBase_t MAP28 [4UL];
    volatile UBase_t MAP29 [4UL];
    volatile UBase_t MAP30 [4UL];
    volatile UBase_t MAP31 [4UL];
}DMA_BITBANDING_CH_MAP3_t;

typedef volatile struct
{
    volatile const UBase_t PID0 [8UL];
    const UBase_t reserved [24UL];
}DMA_BITBANDING_PeriphID0_t;

typedef volatile struct
{
    volatile const UBase_t PID1 [8UL];
    const UBase_t reserved [24UL];
}DMA_BITBANDING_PeriphID1_t;

typedef volatile struct
{
    volatile const UBase_t PID2 [8UL];
    const UBase_t reserved [24UL];
}DMA_BITBANDING_PeriphID2_t;

typedef volatile struct
{
    volatile const UBase_t PID3 [8UL];
    const UBase_t reserved [24UL];
}DMA_BITBANDING_PeriphID3_t;

typedef volatile struct
{
    volatile const UBase_t PID4 [8UL];
    const UBase_t reserved [24UL];
}DMA_BITBANDING_PeriphID4_t;

typedef volatile struct
{
    volatile const UBase_t CID0 [8UL];
    const UBase_t reserved [24UL];
}DMA_BITBANDING_PCellID0_t;

typedef volatile struct
{
    volatile const UBase_t CID1 [8UL];
    const UBase_t reserved [24UL];
}DMA_BITBANDING_PCellID1_t;

typedef volatile struct
{
    volatile const UBase_t CID2 [8UL];
    const UBase_t reserved [24UL];
}DMA_BITBANDING_PCellID2_t;

typedef volatile struct
{
    volatile const UBase_t CID3 [8UL];
    const UBase_t reserved [24UL];
}DMA_BITBANDING_PCellID3_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTER_BITBANDING_H_ */
