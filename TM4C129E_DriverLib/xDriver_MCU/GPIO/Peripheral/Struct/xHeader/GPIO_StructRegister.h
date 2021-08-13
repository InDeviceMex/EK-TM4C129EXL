/**
 *
 * @file GPIO_StructRegister.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTREGISTER_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef volatile struct
{
        volatile uint32_t DATA0 :1;
        volatile uint32_t DATA1 :1;
        volatile uint32_t DATA2 :1;
        volatile uint32_t DATA3 :1;
        volatile uint32_t DATA4 :1;
        volatile uint32_t DATA5 :1;
        volatile uint32_t DATA6 :1;
        volatile uint32_t DATA7 :1;
        const uint32_t reserved :24;
} GPIODATA_TypeDef;

typedef volatile struct
{
        union
        {
                volatile uint32_t DATA_MASK [255UL];
                GPIODATA_TypeDef DATA_MASK_Bit [255UL];
        };
        union
        {
                volatile uint32_t DATA;
                GPIODATA_TypeDef DATA_Bit;
        };
} GPIODATA_MASK_TypeDef;

typedef volatile struct
{
        volatile uint32_t DIR0 :1;
        volatile uint32_t DIR1 :1;
        volatile uint32_t DIR2 :1;
        volatile uint32_t DIR3 :1;
        volatile uint32_t DIR4 :1;
        volatile uint32_t DIR5 :1;
        volatile uint32_t DIR6 :1;
        volatile uint32_t DIR7 :1;
        const uint32_t reserved :24;
} GPIODIR_TypeDef;

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
        const uint32_t reserved :24;
} GPIOIS_TypeDef;

typedef volatile struct
{
        volatile uint32_t IBE0 :1;
        volatile uint32_t IBE1 :1;
        volatile uint32_t IBE2 :1;
        volatile uint32_t IBE3 :1;
        volatile uint32_t IBE4 :1;
        volatile uint32_t IBE5 :1;
        volatile uint32_t IBE6 :1;
        volatile uint32_t IBE7 :1;
        const uint32_t reserved :24;
} GPIOIBE_TypeDef;

typedef volatile struct
{
        volatile uint32_t IEV0 :1;
        volatile uint32_t IEV1 :1;
        volatile uint32_t IEV2 :1;
        volatile uint32_t IEV3 :1;
        volatile uint32_t IEV4 :1;
        volatile uint32_t IEV5 :1;
        volatile uint32_t IEV6 :1;
        volatile uint32_t IEV7 :1;
        const uint32_t reserved :24;
} GPIOIEV_TypeDef;

typedef volatile struct
{
        volatile uint32_t IME0 :1;
        volatile uint32_t IME1 :1;
        volatile uint32_t IME2 :1;
        volatile uint32_t IME3 :1;
        volatile uint32_t IME4 :1;
        volatile uint32_t IME5 :1;
        volatile uint32_t IME6 :1;
        volatile uint32_t IME7 :1;
        volatile uint32_t DMAIME :1;
        const uint32_t reserved :24;
} GPIOIM_TypeDef;

typedef volatile struct
{
        volatile const uint32_t RIS0 :1;
        volatile const uint32_t RIS1 :1;
        volatile const uint32_t RIS2 :1;
        volatile const uint32_t RIS3 :1;
        volatile const uint32_t RIS4 :1;
        volatile const uint32_t RIS5 :1;
        volatile const uint32_t RIS6 :1;
        volatile const uint32_t RIS7 :1;
        volatile const uint32_t DMARIS :1;
        const uint32_t reserved :24;
} GPIORIS_TypeDef;

typedef volatile struct
{
        volatile const uint32_t MIS0 :1;
        volatile const uint32_t MIS1 :1;
        volatile const uint32_t MIS2 :1;
        volatile const uint32_t MIS3 :1;
        volatile const uint32_t MIS4 :1;
        volatile const uint32_t MIS5 :1;
        volatile const uint32_t MIS6 :1;
        volatile const uint32_t MIS7 :1;
        volatile const uint32_t DMAMIS :1;
        const uint32_t reserved :24;
} GPIOMIS_TypeDef;

typedef volatile struct
{
        volatile uint32_t IC0 :1;
        volatile uint32_t IC1 :1;
        volatile uint32_t IC2 :1;
        volatile uint32_t IC3 :1;
        volatile uint32_t IC4 :1;
        volatile uint32_t IC5 :1;
        volatile uint32_t IC6 :1;
        volatile uint32_t IC7 :1;
        volatile uint32_t DMAIC :1;
        const uint32_t reserved :24;
} GPIOICR_TypeDef;

typedef volatile struct
{
        volatile uint32_t AFSEL0 :1;
        volatile uint32_t AFSEL1 :1;
        volatile uint32_t AFSEL2 :1;
        volatile uint32_t AFSEL3 :1;
        volatile uint32_t AFSEL4 :1;
        volatile uint32_t AFSEL5 :1;
        volatile uint32_t AFSEL6 :1;
        volatile uint32_t AFSEL7 :1;
        const uint32_t reserved :24;
} GPIOAFSEL_TypeDef;

typedef volatile struct
{
        volatile uint32_t DRV0 :1;
        volatile uint32_t DRV1 :1;
        volatile uint32_t DRV2 :1;
        volatile uint32_t DRV3 :1;
        volatile uint32_t DRV4 :1;
        volatile uint32_t DRV5 :1;
        volatile uint32_t DRV6 :1;
        volatile uint32_t DRV7 :1;
        const uint32_t reserved :24;
} GPIODRR_TypeDef;

typedef volatile struct
{
        union
        {
                volatile uint32_t DRV [3UL];
                GPIODRR_TypeDef DRV_bit [3UL];
        };
} GPIODRR_ARRAY_TypeDef;

typedef volatile struct
{
        volatile uint32_t DRV20 :1;
        volatile uint32_t DRV21 :1;
        volatile uint32_t DRV22 :1;
        volatile uint32_t DRV23 :1;
        volatile uint32_t DRV24 :1;
        volatile uint32_t DRV25 :1;
        volatile uint32_t DRV26 :1;
        volatile uint32_t DRV27 :1;
        const uint32_t reserved :24;
} GPIODR2R_TypeDef;

typedef volatile struct
{
        volatile uint32_t DRV40 :1;
        volatile uint32_t DRV41 :1;
        volatile uint32_t DRV42 :1;
        volatile uint32_t DRV43 :1;
        volatile uint32_t DRV44 :1;
        volatile uint32_t DRV45 :1;
        volatile uint32_t DRV46 :1;
        volatile uint32_t DRV47 :1;
        const uint32_t reserved :24;
} GPIODR4R_TypeDef;

typedef volatile struct
{
        volatile uint32_t DRV80 :1;
        volatile uint32_t DRV81 :1;
        volatile uint32_t DRV82 :1;
        volatile uint32_t DRV83 :1;
        volatile uint32_t DRV84 :1;
        volatile uint32_t DRV85 :1;
        volatile uint32_t DRV86 :1;
        volatile uint32_t DRV87 :1;
        const uint32_t reserved :24;
} GPIODR8R_TypeDef;

typedef volatile struct
{
        volatile uint32_t ODE0 :1;
        volatile uint32_t ODE1 :1;
        volatile uint32_t ODE2 :1;
        volatile uint32_t ODE3 :1;
        volatile uint32_t ODE4 :1;
        volatile uint32_t ODE5 :1;
        volatile uint32_t ODE6 :1;
        volatile uint32_t ODE7 :1;
        const uint32_t reserved :24;
} GPIOODR_TypeDef;

typedef volatile struct
{
        volatile uint32_t PUE0 :1;
        volatile uint32_t PUE1 :1;
        volatile uint32_t PUE2 :1;
        volatile uint32_t PUE3 :1;
        volatile uint32_t PUE4 :1;
        volatile uint32_t PUE5 :1;
        volatile uint32_t PUE6 :1;
        volatile uint32_t PUE7 :1;
        const uint32_t reserved :24;
} GPIOPUR_TypeDef;

typedef volatile struct
{
        volatile uint32_t PDE0 :1;
        volatile uint32_t PDE1 :1;
        volatile uint32_t PDE2 :1;
        volatile uint32_t PDE3 :1;
        volatile uint32_t PDE4 :1;
        volatile uint32_t PDE5 :1;
        volatile uint32_t PDE6 :1;
        volatile uint32_t PDE7 :1;
        const uint32_t reserved :24;
} GPIOPDR_TypeDef;

typedef volatile struct
{
        volatile uint32_t SRL0 :1;
        volatile uint32_t SRL1 :1;
        volatile uint32_t SRL2 :1;
        volatile uint32_t SRL3 :1;
        volatile uint32_t SRL4 :1;
        volatile uint32_t SRL5 :1;
        volatile uint32_t SRL6 :1;
        volatile uint32_t SRL7 :1;
        const uint32_t reserved :24;
} GPIOSLR_TypeDef;

typedef volatile struct
{
        volatile uint32_t DEN0 :1;
        volatile uint32_t DEN1 :1;
        volatile uint32_t DEN2 :1;
        volatile uint32_t DEN3 :1;
        volatile uint32_t DEN4 :1;
        volatile uint32_t DEN5 :1;
        volatile uint32_t DEN6 :1;
        volatile uint32_t DEN7 :1;
        const uint32_t reserved :24;
} GPIODEN_TypeDef;

typedef volatile struct
{
        volatile uint32_t LOCK :32;
} GPIOLOCK_TypeDef;

typedef volatile struct
{
        volatile uint32_t CR0 :1;
        volatile uint32_t CR1 :1;
        volatile uint32_t CR2 :1;
        volatile uint32_t CR3 :1;
        volatile uint32_t CR4 :1;
        volatile uint32_t CR5 :1;
        volatile uint32_t CR6 :1;
        volatile uint32_t CR7 :1;
        const uint32_t reserved :24;
} GPIOCR_TypeDef;

typedef volatile struct
{
        volatile uint32_t AMSEL0 :1;
        volatile uint32_t AMSEL1 :1;
        volatile uint32_t AMSEL2 :1;
        volatile uint32_t AMSEL3 :1;
        volatile uint32_t AMSEL4 :1;
        volatile uint32_t AMSEL5 :1;
        volatile uint32_t AMSEL6 :1;
        volatile uint32_t AMSEL7 :1;
        const uint32_t reserved :24;
} GPIOAMSEL_TypeDef;

typedef volatile struct
{
        volatile uint32_t PMC0 :4;
        volatile uint32_t PMC1 :4;
        volatile uint32_t PMC2 :4;
        volatile uint32_t PMC3 :4;
        volatile uint32_t PMC4 :4;
        volatile uint32_t PMC5 :4;
        volatile uint32_t PMC6 :4;
        volatile uint32_t PMC7 :4;
} GPIOPCTL_TypeDef;

typedef volatile struct
{
        volatile uint32_t ADCEN0 :1;
        volatile uint32_t ADCEN1 :1;
        volatile uint32_t ADCEN2 :1;
        volatile uint32_t ADCEN3 :1;
        volatile uint32_t ADCEN4 :1;
        volatile uint32_t ADCEN5 :1;
        volatile uint32_t ADCEN6 :1;
        volatile uint32_t ADCEN7 :1;
        const uint32_t reserved :24;
} GPIOADCCTL_TypeDef;

typedef volatile struct
{
        volatile uint32_t DMAEN0 :1;
        volatile uint32_t DMAEN1 :1;
        volatile uint32_t DMAEN2 :1;
        volatile uint32_t DMAEN3 :1;
        volatile uint32_t DMAEN4 :1;
        volatile uint32_t DMAEN5 :1;
        volatile uint32_t DMAEN6 :1;
        volatile uint32_t DMAEN7 :1;
        const uint32_t reserved :24;
} GPIODMACTL_TypeDef;

typedef volatile struct
{
        volatile uint32_t SUM :1;
        const uint32_t reserved :31;
} GPIOSI_TypeDef;

typedef volatile struct
{
        volatile uint32_t DRV120 :1;
        volatile uint32_t DRV121 :1;
        volatile uint32_t DRV122 :1;
        volatile uint32_t DRV123 :1;
        volatile uint32_t DRV124 :1;
        volatile uint32_t DRV125 :1;
        volatile uint32_t DRV126 :1;
        volatile uint32_t DRV127 :1;
        const uint32_t reserved :24;
} GPIODR12R_TypeDef;

typedef volatile struct
{
        const uint32_t reserved :4;
        volatile uint32_t WAKEP4 :1;
        volatile uint32_t WAKEP5 :1;
        volatile uint32_t WAKEP6 :1;
        volatile uint32_t WAKEP7 :1;
        const uint32_t reserved1 :24;
} GPIOWAKEPEN_TypeDef;

typedef volatile struct
{
        const uint32_t reserved :4;
        volatile uint32_t WAKELVL4 :1;
        volatile uint32_t WAKELVL5 :1;
        volatile uint32_t WAKELVL6 :1;
        volatile uint32_t WAKELVL7 :1;
        const uint32_t reserved1 :24;
} GPIOWAKELVL_TypeDef;

typedef volatile struct
{
        const uint32_t reserved :4;
        volatile const uint32_t STAT4 :1;
        volatile const uint32_t STAT5 :1;
        volatile const uint32_t STAT6 :1;
        volatile const uint32_t STAT7 :1;
        const uint32_t reserved1 :24;
} GPIOWAKESTAT_TypeDef;

typedef volatile struct
{
        volatile const uint32_t EDE :1;
        const uint32_t reserved1 :31;
} GPIOPP_TypeDef;

typedef volatile struct
{
        volatile uint32_t EDM0 :2;
        volatile uint32_t EDM1 :2;
        volatile uint32_t EDM2 :2;
        volatile uint32_t EDM3 :2;
        volatile uint32_t EDM4 :2;
        volatile uint32_t EDM5 :2;
        volatile uint32_t EDM6 :2;
        volatile uint32_t EDM7 :2;
        const uint32_t reserved :16;
} GPIOPC_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID4 :8;
        const uint32_t reserved :24;
} GPIOPeriphID4_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID5 :8;
        const uint32_t reserved :24;
} GPIOPeriphID5_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID6 :8;
        const uint32_t reserved :24;
} GPIOPeriphID6_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID7 :8;
        const uint32_t reserved :24;
} GPIOPeriphID7_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID0 :8;
        const uint32_t reserved :24;
} GPIOPeriphID0_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID1 :8;
        const uint32_t reserved :24;
} GPIOPeriphID1_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID2 :8;
        const uint32_t reserved :24;
} GPIOPeriphID2_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID3 :8;
        const uint32_t reserved :24;
} GPIOPeriphID3_TypeDef;

typedef volatile struct
{
        volatile const uint32_t CID0 :8;
        const uint32_t reserved :24;
} GPIOPCellID0_TypeDef;

typedef volatile struct
{
        volatile const uint32_t CID1 :8;
        const uint32_t reserved :24;
} GPIOPCellID1_TypeDef;

typedef volatile struct
{
        volatile const uint32_t CID2 :8;
        const uint32_t reserved :24;
} GPIOPCellID2_TypeDef;

typedef volatile struct
{
        volatile const uint32_t CID3 :8;
        const uint32_t reserved :24;
} GPIOPCellID3_TypeDef;

typedef volatile struct
{
        volatile uint32_t P0 :1;
        volatile uint32_t P1 :1;
        volatile uint32_t P2 :1;
        volatile uint32_t P3 :1;
        volatile uint32_t P4 :1;
        volatile uint32_t P5 :1;
        volatile uint32_t P6 :1;
        volatile uint32_t P7 :1;
        const uint32_t reserved :24;
} PINES8_TypeDef;

typedef volatile struct
{
        volatile uint32_t P0 :1;
        volatile uint32_t P1 :1;
        volatile uint32_t P2 :1;
        volatile uint32_t P3 :1;
        volatile uint32_t P4 :1;
        volatile uint32_t P5 :1;
        volatile uint32_t P6 :1;
        volatile uint32_t P7 :1;
        volatile uint32_t P8 :1;
        volatile uint32_t P9 :1;
        volatile uint32_t P10 :1;
        volatile uint32_t P11 :1;
        volatile uint32_t P12 :1;
        volatile uint32_t P13 :1;
        volatile uint32_t P14 :1;
        volatile uint32_t P15 :1;
        const uint32_t reserved :16;
} PINES16_TypeDef;

typedef volatile struct
{
        volatile uint32_t P0 :1;
        volatile uint32_t P1 :1;
        volatile uint32_t P2 :1;
        volatile uint32_t P3 :1;
        volatile uint32_t P4 :1;
        volatile uint32_t P5 :1;
        volatile uint32_t P6 :1;
        volatile uint32_t P7 :1;
        volatile uint32_t P8 :1;
        volatile uint32_t P9 :1;
        volatile uint32_t P10 :1;
        volatile uint32_t P11 :1;
        volatile uint32_t P12 :1;
        volatile uint32_t P13 :1;
        volatile uint32_t P14 :1;
        volatile uint32_t P15 :1;
        volatile uint32_t P16 :1;
        volatile uint32_t P17 :1;
        volatile uint32_t P18 :1;
        volatile uint32_t P19 :1;
        volatile uint32_t P20 :1;
        volatile uint32_t P21 :1;
        volatile uint32_t P22 :1;
        volatile uint32_t P23 :1;
        volatile uint32_t P24 :1;
        volatile uint32_t P25 :1;
        volatile uint32_t P26 :1;
        volatile uint32_t P27 :1;
        volatile uint32_t P28 :1;
        volatile uint32_t P29 :1;
        volatile uint32_t P30 :1;
        volatile uint32_t P31 :1;
} PINES32_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTREGISTER_H_ */
