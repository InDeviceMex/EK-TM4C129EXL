/**
 *
 * @file GPIO_StructPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructRegister.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

typedef volatile struct
{
        union
        {
                volatile uint32_t DATA_MASK [255UL];
                GPIODATA_t DATA_MASK_Bit [255UL];
        };
        union
        {
                volatile uint32_t DATA;
                GPIODATA_t DATA_Bit;
        };
        union
        {
                volatile uint32_t DIR;
                GPIODIR_t DIR_Bit;
        };
        union
        {
                volatile uint32_t IS;
                GPIOIS_t IS_Bit;
        };
        union
        {
                volatile uint32_t IBE;
                GPIOIBE_t IBE_Bit;
        };
        union
        {
                volatile uint32_t IEV;
                GPIOIEV_t IEV_Bit;
        };
        union
        {
                volatile uint32_t IM;
                GPIOIM_t IM_Bit;
        };
        union
        {
                volatile const uint32_t RIS;
                GPIORIS_t RIS_Bit;
        };
        union
        {
                volatile const uint32_t MIS;
                GPIOMIS_t MIS_Bit;
        };
        union
        {
                volatile uint32_t ICR;
                GPIOICR_t ICR_Bit;
        };
        union
        {
                volatile uint32_t AFSEL;
                GPIOAFSEL_t AFSEL_Bit;
        };
        const uint32_t reserved [55UL];
        union
        {
                volatile uint32_t DR2R;
                GPIODR2R_t DR2R_Bit;
        };
        union
        {
                volatile uint32_t DR4R;
                GPIODR4R_t DR4R_Bit;
        };
        union
        {
                volatile uint32_t DR8R;
                GPIODR8R_t DR8R_Bit;
        };
        union
        {
                volatile uint32_t ODR;
                GPIOODR_t ODR_Bit;
        };
        union
        {
                volatile uint32_t PUR;
                GPIOPUR_t PUR_Bit;
        };
        union
        {
                volatile uint32_t PDR;
                GPIOPDR_t PDR_Bit;
        };
        union
        {
                volatile uint32_t SLR;
                GPIOSLR_t SLR_Bit;
        };
        union
        {
                volatile uint32_t DEN;
                GPIODEN_t DEN_Bit;
        };
        union
        {
                volatile uint32_t LOCK;
                GPIOLOCK_t LOCK_Bit;
        };
        union
        {
                volatile uint32_t CR;
                GPIOCR_t CR_Bit;
        };
        union
        {
                volatile uint32_t AMSEL;
                GPIOAMSEL_t AMSEL_Bit;
        };
        union
        {
                volatile uint32_t PCTL;
                GPIOPCTL_t PCTL_Bit;
        };
        union
        {
                volatile uint32_t ADCCTL;
                GPIOADCCTL_t ADCCTL_Bit;
        };
        union
        {
                volatile uint32_t DMACTL;
                GPIODMACTL_t DMACTL_Bit;
        };
        union
        {
                volatile uint32_t SI;
                GPIOSI_t SI_Bit;
        };
        union
        {
                volatile uint32_t DR12R;
                GPIODR12R_t DR12R_Bit;
        };
        union
        {
                volatile uint32_t WAKEPEN;
                GPIOWAKEPEN_t WAKEPEN_Bit;
        };
        union
        {
                volatile uint32_t WAKELVL;
                GPIOWAKELVL_t WAKELVL_Bit;
        };
        union
        {
                volatile uint32_t WAKESTAT;
                GPIOWAKESTAT_t WAKESTAT_Bit;
        };
        const uint32_t reserved1 [669UL];
        union
        {
                volatile uint32_t PP;
                GPIOPP_t PP_Bit;
        };
        union
        {
                volatile uint32_t PC;
                GPIOPC_t PC_Bit;
        };
        const uint32_t reserved2 [2UL];
        union
        {
                volatile uint32_t PeriphID4;
                GPIOPeriphID4_t PeriphID4_Bit;
        };
        union
        {
                volatile uint32_t PeriphID5;
                GPIOPeriphID5_t PeriphID5_Bit;
        };
        union
        {
                volatile uint32_t PeriphID6;
                GPIOPeriphID6_t PeriphID6_Bit;
        };
        union
        {
                volatile uint32_t PeriphID7;
                GPIOPeriphID7_t PeriphID7_Bit;
        };
        union
        {
                volatile uint32_t PeriphID0;
                GPIOPeriphID0_t PeriphID0_Bit;
        };
        union
        {
                volatile uint32_t PeriphID1;
                GPIOPeriphID1_t PeriphID1_Bit;
        };
        union
        {
                volatile uint32_t PeriphID2;
                GPIOPeriphID2_t PeriphID2_Bit;
        };
        union
        {
                volatile uint32_t PeriphID3;
                GPIOPeriphID3_t PeriphID3_Bit;
        };
        union
        {
                volatile uint32_t PCellID0;
                GPIOPCellID0_t PCellID0_Bit;
        };
        union
        {
                volatile uint32_t PCellID1;
                GPIOPCellID1_t PCellID1_Bit;
        };
        union
        {
                volatile uint32_t PCellID2;
                GPIOPCellID2_t PCellID2_Bit;
        };
        union
        {
                volatile uint32_t PCellID3;
                GPIOPCellID3_t PCellID3_Bit;
        };
} GPIO_t;

typedef volatile struct
{
        union
        {
                volatile uint32_t DATA_MASK [255UL];
                GPIODATA_t DATA_MASK_Bit [255UL];
        };
        union
        {
                volatile uint32_t DATA;
                GPIODATA_t DATA_Bit;
        };
        union
        {
                volatile uint32_t DIR;
                GPIODIR_t DIR_Bit;
        };
        union
        {
                volatile uint32_t IS;
                GPIOIS_t IS_Bit;
        };
        union
        {
                volatile uint32_t IBE;
                GPIOIBE_t IBE_Bit;
        };
        union
        {
                volatile uint32_t IEV;
                GPIOIEV_t IEV_Bit;
        };
        union
        {
                volatile uint32_t IM;
                GPIOIM_t IM_Bit;
        };
        union
        {
                volatile const uint32_t RIS;
                GPIORIS_t RIS_Bit;
        };
        union
        {
                volatile const uint32_t MIS;
                GPIOMIS_t MIS_Bit;
        };
        union
        {
                volatile uint32_t ICR;
                GPIOICR_t ICR_Bit;
        };
        union
        {
                volatile uint32_t AFSEL;
                GPIOAFSEL_t AFSEL_Bit;
        };
        const uint32_t reserved [55UL];
        union
        {
                volatile uint32_t DRR [3UL];
                GPIODRR_t DRR_Bit [3UL];
        };

        union
        {
                volatile uint32_t ODR;
                GPIOODR_t ODR_Bit;
        };
        union
        {
                volatile uint32_t PUR;
                GPIOPUR_t PUR_Bit;
        };
        union
        {
                volatile uint32_t PDR;
                GPIOPDR_t PDR_Bit;
        };
        union
        {
                volatile uint32_t SLR;
                GPIOSLR_t SLR_Bit;
        };
        union
        {
                volatile uint32_t DEN;
                GPIODEN_t DEN_Bit;
        };
        union
        {
                volatile uint32_t LOCK;
                GPIOLOCK_t LOCK_Bit;
        };
        union
        {
                volatile uint32_t CR;
                GPIOCR_t CR_Bit;
        };
        union
        {
                volatile uint32_t AMSEL;
                GPIOAMSEL_t AMSEL_Bit;
        };
        union
        {
                volatile uint32_t PCTL;
                GPIOPCTL_t PCTL_Bit;
        };
        union
        {
                volatile uint32_t ADCCTL;
                GPIOADCCTL_t ADCCTL_Bit;
        };
        union
        {
                volatile uint32_t DMACTL;
                GPIODMACTL_t DMACTL_Bit;
        };
        union
        {
                volatile uint32_t SI;
                GPIOSI_t SI_Bit;
        };
        union
        {
                volatile uint32_t DR12R;
                GPIODR12R_t DR12R_Bit;
        };
        union
        {
                volatile uint32_t WAKEPEN;
                GPIOWAKEPEN_t WAKEPEN_Bit;
        };
        union
        {
                volatile uint32_t WAKELVL;
                GPIOWAKELVL_t WAKELVL_Bit;
        };
        union
        {
                volatile uint32_t WAKESTAT;
                GPIOWAKESTAT_t WAKESTAT_Bit;
        };
        const uint32_t reserved1 [669UL];
        union
        {
                volatile uint32_t PP;
                GPIOPP_t PP_Bit;
        };
        union
        {
                volatile uint32_t PC;
                GPIOPC_t PC_Bit;
        };
        const uint32_t reserved2 [2UL];
        union
        {
                volatile uint32_t PeriphID4;
                GPIOPeriphID4_t PeriphID4_Bit;
        };
        union
        {
                volatile uint32_t PeriphID5;
                GPIOPeriphID5_t PeriphID5_Bit;
        };
        union
        {
                volatile uint32_t PeriphID6;
                GPIOPeriphID6_t PeriphID6_Bit;
        };
        union
        {
                volatile uint32_t PeriphID7;
                GPIOPeriphID7_t PeriphID7_Bit;
        };
        union
        {
                volatile uint32_t PeriphID0;
                GPIOPeriphID0_t PeriphID0_Bit;
        };
        union
        {
                volatile uint32_t PeriphID1;
                GPIOPeriphID1_t PeriphID1_Bit;
        };
        union
        {
                volatile uint32_t PeriphID2;
                GPIOPeriphID2_t PeriphID2_Bit;
        };
        union
        {
                volatile uint32_t PeriphID3;
                GPIOPeriphID3_t PeriphID3_Bit;
        };
        union
        {
                volatile uint32_t PCellID0;
                GPIOPCellID0_t PCellID0_Bit;
        };
        union
        {
                volatile uint32_t PCellID1;
                GPIOPCellID1_t PCellID1_Bit;
        };
        union
        {
                volatile uint32_t PCellID2;
                GPIOPCellID2_t PCellID2_Bit;
        };
        union
        {
                volatile uint32_t PCellID3;
                GPIOPCellID3_t PCellID3_Bit;
        };
} GPIO_AUX_t;

typedef volatile struct
{
        GPIO_t PORT [(uint32_t) GPIO_enPORT_MAX];
} GPIO_PORT_t;

typedef volatile struct
{
        GPIO_AUX_t PORT [(uint32_t) GPIO_enPORT_MAX];
} GPIO_PORT_AUX_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_H_ */
