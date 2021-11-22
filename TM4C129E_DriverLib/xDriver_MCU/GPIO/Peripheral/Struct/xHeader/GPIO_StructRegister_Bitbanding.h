/**
 *
 * @file GPIO_StructRegister_Bitbanding.h
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 24 jun. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTREGISTER_BITBANDING_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef volatile struct
{
        volatile uint32_t DATA0;
        volatile uint32_t DATA1;
        volatile uint32_t DATA2;
        volatile uint32_t DATA3;
        volatile uint32_t DATA4;
        volatile uint32_t DATA5;
        volatile uint32_t DATA6;
        volatile uint32_t DATA7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODATA_t;

typedef volatile struct
{
        union
        {
                volatile uint32_t DATA_MASK [255UL][32UL];
                BITBANDING_GPIODATA_t DATA_MASK_Bit [255UL];
        };
        union
        {
                volatile uint32_t DATA [32UL];
                BITBANDING_GPIODATA_t DATA_Bit;
        };
} BITBANDING_GPIODATA_MASK_t;

typedef volatile struct
{
        volatile uint32_t DIR0;
        volatile uint32_t DIR1;
        volatile uint32_t DIR2;
        volatile uint32_t DIR3;
        volatile uint32_t DIR4;
        volatile uint32_t DIR5;
        volatile uint32_t DIR6;
        volatile uint32_t DIR7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODIR_t;

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
        const uint32_t reserved [24UL];
} BITBANDING_GPIOIS_t;

typedef volatile struct
{
        volatile uint32_t IBE0;
        volatile uint32_t IBE1;
        volatile uint32_t IBE2;
        volatile uint32_t IBE3;
        volatile uint32_t IBE4;
        volatile uint32_t IBE5;
        volatile uint32_t IBE6;
        volatile uint32_t IBE7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOIBE_t;

typedef volatile struct
{
        volatile uint32_t IEV0;
        volatile uint32_t IEV1;
        volatile uint32_t IEV2;
        volatile uint32_t IEV3;
        volatile uint32_t IEV4;
        volatile uint32_t IEV5;
        volatile uint32_t IEV6;
        volatile uint32_t IEV7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOIEV_t;

typedef volatile struct
{
        volatile uint32_t IME0;
        volatile uint32_t IME1;
        volatile uint32_t IME2;
        volatile uint32_t IME3;
        volatile uint32_t IME4;
        volatile uint32_t IME5;
        volatile uint32_t IME6;
        volatile uint32_t IME7;
        volatile uint32_t DMAIME;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOIM_t;

typedef volatile struct
{
        volatile const uint32_t RIS0;
        volatile const uint32_t RIS1;
        volatile const uint32_t RIS2;
        volatile const uint32_t RIS3;
        volatile const uint32_t RIS4;
        volatile const uint32_t RIS5;
        volatile const uint32_t RIS6;
        volatile const uint32_t RIS7;
        volatile const uint32_t DMARIS;
        const uint32_t reserved [24UL];
} BITBANDING_GPIORIS_t;

typedef volatile struct
{
        volatile const uint32_t MIS0;
        volatile const uint32_t MIS1;
        volatile const uint32_t MIS2;
        volatile const uint32_t MIS3;
        volatile const uint32_t MIS4;
        volatile const uint32_t MIS5;
        volatile const uint32_t MIS6;
        volatile const uint32_t MIS7;
        volatile const uint32_t DMAMIS;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOMIS_t;

typedef volatile struct
{
        volatile uint32_t IC0;
        volatile uint32_t IC1;
        volatile uint32_t IC2;
        volatile uint32_t IC3;
        volatile uint32_t IC4;
        volatile uint32_t IC5;
        volatile uint32_t IC6;
        volatile uint32_t IC7;
        volatile uint32_t DMAIC;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOICR_t;

typedef volatile struct
{
        volatile uint32_t AFSEL0;
        volatile uint32_t AFSEL1;
        volatile uint32_t AFSEL2;
        volatile uint32_t AFSEL3;
        volatile uint32_t AFSEL4;
        volatile uint32_t AFSEL5;
        volatile uint32_t AFSEL6;
        volatile uint32_t AFSEL7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOAFSEL_t;

typedef volatile struct
{
        volatile uint32_t DRV0;
        volatile uint32_t DRV1;
        volatile uint32_t DRV2;
        volatile uint32_t DRV3;
        volatile uint32_t DRV4;
        volatile uint32_t DRV5;
        volatile uint32_t DRV6;
        volatile uint32_t DRV7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODRR_t;

typedef volatile struct
{
        union
        {
                volatile uint32_t DRV [3UL][32UL];
                BITBANDING_GPIODRR_t DRV_bit [3UL];
        };
} BITBANDING_GPIODRR_ARRAY_t;

typedef volatile struct
{
        volatile uint32_t DRV20;
        volatile uint32_t DRV21;
        volatile uint32_t DRV22;
        volatile uint32_t DRV23;
        volatile uint32_t DRV24;
        volatile uint32_t DRV25;
        volatile uint32_t DRV26;
        volatile uint32_t DRV27;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODR2R_t;

typedef volatile struct
{
        volatile uint32_t DRV40;
        volatile uint32_t DRV41;
        volatile uint32_t DRV42;
        volatile uint32_t DRV43;
        volatile uint32_t DRV44;
        volatile uint32_t DRV45;
        volatile uint32_t DRV46;
        volatile uint32_t DRV47;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODR4R_t;

typedef volatile struct
{
        volatile uint32_t DRV80;
        volatile uint32_t DRV81;
        volatile uint32_t DRV82;
        volatile uint32_t DRV83;
        volatile uint32_t DRV84;
        volatile uint32_t DRV85;
        volatile uint32_t DRV86;
        volatile uint32_t DRV87;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODR8R_t;

typedef volatile struct
{
        volatile uint32_t ODE0;
        volatile uint32_t ODE1;
        volatile uint32_t ODE2;
        volatile uint32_t ODE3;
        volatile uint32_t ODE4;
        volatile uint32_t ODE5;
        volatile uint32_t ODE6;
        volatile uint32_t ODE7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOODR_t;

typedef volatile struct
{
        volatile uint32_t PUE0;
        volatile uint32_t PUE1;
        volatile uint32_t PUE2;
        volatile uint32_t PUE3;
        volatile uint32_t PUE4;
        volatile uint32_t PUE5;
        volatile uint32_t PUE6;
        volatile uint32_t PUE7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPUR_t;

typedef volatile struct
{
        volatile uint32_t PDE0;
        volatile uint32_t PDE1;
        volatile uint32_t PDE2;
        volatile uint32_t PDE3;
        volatile uint32_t PDE4;
        volatile uint32_t PDE5;
        volatile uint32_t PDE6;
        volatile uint32_t PDE7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPDR_t;

typedef volatile struct
{
        volatile uint32_t SRL0;
        volatile uint32_t SRL1;
        volatile uint32_t SRL2;
        volatile uint32_t SRL3;
        volatile uint32_t SRL4;
        volatile uint32_t SRL5;
        volatile uint32_t SRL6;
        volatile uint32_t SRL7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOSLR_t;

typedef volatile struct
{
        volatile uint32_t DEN0;
        volatile uint32_t DEN1;
        volatile uint32_t DEN2;
        volatile uint32_t DEN3;
        volatile uint32_t DEN4;
        volatile uint32_t DEN5;
        volatile uint32_t DEN6;
        volatile uint32_t DEN7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODEN_t;

typedef volatile struct
{
        volatile uint32_t LOCK [32UL];
} BITBANDING_GPIOLOCK_t;

typedef volatile struct
{
        volatile uint32_t CR0;
        volatile uint32_t CR1;
        volatile uint32_t CR2;
        volatile uint32_t CR3;
        volatile uint32_t CR4;
        volatile uint32_t CR5;
        volatile uint32_t CR6;
        volatile uint32_t CR7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOCR_t;

typedef volatile struct
{
        volatile uint32_t AMSEL0;
        volatile uint32_t AMSEL1;
        volatile uint32_t AMSEL2;
        volatile uint32_t AMSEL3;
        volatile uint32_t AMSEL4;
        volatile uint32_t AMSEL5;
        volatile uint32_t AMSEL6;
        volatile uint32_t AMSEL7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOAMSEL_t;

typedef volatile struct
{
        volatile uint32_t PMC0 [4UL];
        volatile uint32_t PMC1 [4UL];
        volatile uint32_t PMC2 [4UL];
        volatile uint32_t PMC3 [4UL];
        volatile uint32_t PMC4 [4UL];
        volatile uint32_t PMC5 [4UL];
        volatile uint32_t PMC6 [4UL];
        volatile uint32_t PMC7 [4UL];
} BITBANDING_GPIOPCTL_t;

typedef volatile struct
{
        volatile uint32_t ADCEN0;
        volatile uint32_t ADCEN1;
        volatile uint32_t ADCEN2;
        volatile uint32_t ADCEN3;
        volatile uint32_t ADCEN4;
        volatile uint32_t ADCEN5;
        volatile uint32_t ADCEN6;
        volatile uint32_t ADCEN7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOADCCTL_t;

typedef volatile struct
{
        volatile uint32_t DMAEN0;
        volatile uint32_t DMAEN1;
        volatile uint32_t DMAEN2;
        volatile uint32_t DMAEN3;
        volatile uint32_t DMAEN4;
        volatile uint32_t DMAEN5;
        volatile uint32_t DMAEN6;
        volatile uint32_t DMAEN7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODMACTL_t;

typedef volatile struct
{
        volatile uint32_t SUM;
        const uint32_t reserved [31UL];
} BITBANDING_GPIOSI_t;

typedef volatile struct
{
        volatile uint32_t DRV120;
        volatile uint32_t DRV121;
        volatile uint32_t DRV122;
        volatile uint32_t DRV123;
        volatile uint32_t DRV124;
        volatile uint32_t DRV125;
        volatile uint32_t DRV126;
        volatile uint32_t DRV127;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODR12R_t;

typedef volatile struct
{
        const uint32_t reserved [4UL];
        volatile uint32_t WAKEP4;
        volatile uint32_t WAKEP5;
        volatile uint32_t WAKEP6;
        volatile uint32_t WAKEP7;
        const uint32_t reserved1 [24UL];
} BITBANDING_GPIOWAKEPEN_t;

typedef volatile struct
{
        const uint32_t reserved [4UL];
        volatile uint32_t WAKELVL4;
        volatile uint32_t WAKELVL5;
        volatile uint32_t WAKELVL6;
        volatile uint32_t WAKELVL7;
        const uint32_t reserved1 [24UL];
} BITBANDING_GPIOWAKELVL_t;

typedef volatile struct
{
        const uint32_t reserved [4UL];
        volatile const uint32_t STAT4;
        volatile const uint32_t STAT5;
        volatile const uint32_t STAT6;
        volatile const uint32_t STAT7;
        const uint32_t reserved1 [24UL];
} BITBANDING_GPIOWAKESTAT_t;

typedef volatile struct
{
        volatile const uint32_t EDE;
        const uint32_t reserved1 [31UL];
} BITBANDING_GPIOPP_t;

typedef volatile struct
{
        volatile uint32_t EDM0 [2UL];
        volatile uint32_t EDM1 [2UL];
        volatile uint32_t EDM2 [2UL];
        volatile uint32_t EDM3 [2UL];
        volatile uint32_t EDM4 [2UL];
        volatile uint32_t EDM5 [2UL];
        volatile uint32_t EDM6 [2UL];
        volatile uint32_t EDM7 [2UL];
        const uint32_t reserved [16UL];
} BITBANDING_GPIOPC_t;

typedef volatile struct
{
        volatile const uint32_t PID4 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID4_t;

typedef volatile struct
{
        volatile const uint32_t PID5 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID5_t;

typedef volatile struct
{
        volatile const uint32_t PID6 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID6_t;

typedef volatile struct
{
        volatile const uint32_t PID7 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID7_t;

typedef volatile struct
{
        volatile const uint32_t PID0 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID0_t;

typedef volatile struct
{
        volatile const uint32_t PID1 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID1_t;

typedef volatile struct
{
        volatile const uint32_t PID2 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID2_t;

typedef volatile struct
{
        volatile const uint32_t PID3 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID3_t;

typedef volatile struct
{
        volatile const uint32_t CID0 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPCellID0_t;

typedef volatile struct
{
        volatile const uint32_t CID1 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPCellID1_t;

typedef volatile struct
{
        volatile const uint32_t CID2 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPCellID2_t;

typedef volatile struct
{
        volatile const uint32_t CID3 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPCellID3_t;

typedef volatile struct
{
        volatile uint32_t P0;
        volatile uint32_t P1;
        volatile uint32_t P2;
        volatile uint32_t P3;
        volatile uint32_t P4;
        volatile uint32_t P5;
        volatile uint32_t P6;
        volatile uint32_t P7;
        const uint32_t reserved [24UL];
} BITBANDING_PINES8_t;

typedef volatile struct
{
        volatile uint32_t P0;
        volatile uint32_t P1;
        volatile uint32_t P2;
        volatile uint32_t P3;
        volatile uint32_t P4;
        volatile uint32_t P5;
        volatile uint32_t P6;
        volatile uint32_t P7;
        volatile uint32_t P8;
        volatile uint32_t P9;
        volatile uint32_t P10;
        volatile uint32_t P11;
        volatile uint32_t P12;
        volatile uint32_t P13;
        volatile uint32_t P14;
        volatile uint32_t P15;
        const uint32_t reserved [16UL];
} BITBANDING_PINES16_t;

typedef volatile struct
{
        volatile uint32_t P0;
        volatile uint32_t P1;
        volatile uint32_t P2;
        volatile uint32_t P3;
        volatile uint32_t P4;
        volatile uint32_t P5;
        volatile uint32_t P6;
        volatile uint32_t P7;
        volatile uint32_t P8;
        volatile uint32_t P9;
        volatile uint32_t P10;
        volatile uint32_t P11;
        volatile uint32_t P12;
        volatile uint32_t P13;
        volatile uint32_t P14;
        volatile uint32_t P15;
        volatile uint32_t P16;
        volatile uint32_t P17;
        volatile uint32_t P18;
        volatile uint32_t P19;
        volatile uint32_t P20;
        volatile uint32_t P21;
        volatile uint32_t P22;
        volatile uint32_t P23;
        volatile uint32_t P24;
        volatile uint32_t P25;
        volatile uint32_t P26;
        volatile uint32_t P27;
        volatile uint32_t P28;
        volatile uint32_t P29;
        volatile uint32_t P30;
        volatile uint32_t P31;
} BITBANDING_PINES32_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTREGISTER_BITBANDING_H_ */
