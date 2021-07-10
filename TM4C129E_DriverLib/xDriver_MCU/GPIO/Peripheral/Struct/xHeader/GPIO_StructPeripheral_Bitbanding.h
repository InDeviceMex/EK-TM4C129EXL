/**
 *
 * @file GPIO_StructPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructRegister_Bitbanding.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

typedef volatile struct
{
        union
        {
                volatile uint32_t DATA_MASK [255UL][32UL];
                BITBANDING_GPIODATA_TypeDef DATA_MASK_Bit [255UL];
        };
        union
        {
                volatile uint32_t DATA [32UL];
                BITBANDING_GPIODATA_TypeDef DATA_Bit;
        };
        union
        {
                volatile uint32_t DIR [32UL];
                BITBANDING_GPIODIR_TypeDef DIR_Bit;
        };
        union
        {
                volatile uint32_t IS [32UL];
                BITBANDING_GPIOIS_TypeDef IS_Bit;
        };
        union
        {
                volatile uint32_t IBE [32UL];
                BITBANDING_GPIOIBE_TypeDef IBE_Bit;
        };
        union
        {
                volatile uint32_t IEV [32UL];
                BITBANDING_GPIOIEV_TypeDef IEV_Bit;
        };
        union
        {
                volatile uint32_t IM [32UL];
                BITBANDING_GPIOIM_TypeDef IM_Bit;
        };
        union
        {
                volatile const uint32_t RIS [32UL];
                BITBANDING_GPIORIS_TypeDef RIS_Bit;
        };
        union
        {
                volatile const uint32_t MIS [32UL];
                BITBANDING_GPIOMIS_TypeDef MIS_Bit;
        };
        union
        {
                volatile uint32_t ICR [32UL];
                BITBANDING_GPIOICR_TypeDef ICR_Bit;
        };
        union
        {
                volatile uint32_t AFSEL [32UL];
                BITBANDING_GPIOAFSEL_TypeDef AFSEL_Bit;
        };
        const uint32_t reserved [55UL * 32UL];
        union
        {
                volatile uint32_t DR2R [32UL];
                BITBANDING_GPIODR2R_TypeDef DR2R_Bit;
        };
        union
        {
                volatile uint32_t DR4R [32UL];
                BITBANDING_GPIODR4R_TypeDef DR4R_Bit;
        };
        union
        {
                volatile uint32_t DR8R [32UL];
                BITBANDING_GPIODR8R_TypeDef DR8R_Bit;
        };
        union
        {
                volatile uint32_t ODR [32UL];
                BITBANDING_GPIOODR_TypeDef ODR_Bit;
        };
        union
        {
                volatile uint32_t PUR [32UL];
                BITBANDING_GPIOPUR_TypeDef PUR_Bit;
        };
        union
        {
                volatile uint32_t PDR [32UL];
                BITBANDING_GPIOPDR_TypeDef PDR_Bit;
        };
        union
        {
                volatile uint32_t SLR [32UL];
                BITBANDING_GPIOSLR_TypeDef SLR_Bit;
        };
        union
        {
                volatile uint32_t DEN [32UL];
                BITBANDING_GPIODEN_TypeDef DEN_Bit;
        };
        union
        {
                volatile uint32_t LOCK [32UL];
                BITBANDING_GPIOLOCK_TypeDef LOCK_Bit;
        };
        union
        {
                volatile uint32_t CR [32UL];
                BITBANDING_GPIOCR_TypeDef CR_Bit;
        };
        union
        {
                volatile uint32_t AMSEL [32UL];
                BITBANDING_GPIOAMSEL_TypeDef AMSEL_Bit;
        };
        union
        {
                volatile uint32_t PCTL [32UL];
                BITBANDING_GPIOPCTL_TypeDef PCTL_Bit;
        };
        union
        {
                volatile uint32_t ADCCTL [32UL];
                BITBANDING_GPIOADCCTL_TypeDef ADCCTL_Bit;
        };
        union
        {
                volatile uint32_t DMACTL [32UL];
                BITBANDING_GPIODMACTL_TypeDef DMACTL_Bit;
        };
        union
        {
                volatile uint32_t SI [32UL];
                BITBANDING_GPIOSI_TypeDef SI_Bit;
        };
        union
        {
                volatile uint32_t DR12R [32UL];
                BITBANDING_GPIODR12R_TypeDef DR12R_Bit;
        };
        union
        {
                volatile uint32_t WAKEPEN [32UL];
                BITBANDING_GPIOWAKEPEN_TypeDef WAKEPEN_Bit;
        };
        union
        {
                volatile uint32_t WAKELVL [32UL];
                BITBANDING_GPIOWAKELVL_TypeDef WAKELVL_Bit;
        };
        union
        {
                volatile uint32_t WAKESTAT [32UL];
                BITBANDING_GPIOWAKESTAT_TypeDef WAKESTAT_Bit;
        };
        const uint32_t reserved1 [669UL * 32UL];
        union
        {
                volatile uint32_t PP [32UL];
                BITBANDING_GPIOPP_TypeDef PP_Bit;
        };
        union
        {
                volatile uint32_t PC [32UL];
                BITBANDING_GPIOPC_TypeDef PC_Bit;
        };
        const uint32_t reserved2 [2UL * 32UL];
        union
        {
                volatile uint32_t PeriphID4 [32UL];
                BITBANDING_GPIOPeriphID4_TypeDef PeriphID4_Bit;
        };
        union
        {
                volatile uint32_t PeriphID5 [32UL];
                BITBANDING_GPIOPeriphID5_TypeDef PeriphID5_Bit;
        };
        union
        {
                volatile uint32_t PeriphID6 [32UL];
                BITBANDING_GPIOPeriphID6_TypeDef PeriphID6_Bit;
        };
        union
        {
                volatile uint32_t PeriphID7 [32UL];
                BITBANDING_GPIOPeriphID7_TypeDef PeriphID7_Bit;
        };
        union
        {
                volatile uint32_t PeriphID0 [32UL];
                BITBANDING_GPIOPeriphID0_TypeDef PeriphID0_Bit;
        };
        union
        {
                volatile uint32_t PeriphID1 [32UL];
                BITBANDING_GPIOPeriphID1_TypeDef PeriphID1_Bit;
        };
        union
        {
                volatile uint32_t PeriphID2 [32UL];
                BITBANDING_GPIOPeriphID2_TypeDef PeriphID2_Bit;
        };
        union
        {
                volatile uint32_t PeriphID3 [32UL];
                BITBANDING_GPIOPeriphID3_TypeDef PeriphID3_Bit;
        };
        union
        {
                volatile uint32_t PCellID0 [32UL];
                BITBANDING_GPIOPCellID0_TypeDef PCellID0_Bit;
        };
        union
        {
                volatile uint32_t PCellID1 [32UL];
                BITBANDING_GPIOPCellID1_TypeDef PCellID1_Bit;
        };
        union
        {
                volatile uint32_t PCellID2 [32UL];
                BITBANDING_GPIOPCellID2_TypeDef PCellID2_Bit;
        };
        union
        {
                volatile uint32_t PCellID3 [32UL];
                BITBANDING_GPIOPCellID3_TypeDef PCellID3_Bit;
        };
} GPIO_BITBANDING_TypeDef;

typedef volatile struct
{
        union
        {
                volatile uint32_t DATA_MASK [255UL][32UL];
                BITBANDING_GPIODATA_TypeDef DATA_MASK_Bit [255UL];
        };
        union
        {
                volatile uint32_t DATA [32UL];
                BITBANDING_GPIODATA_TypeDef DATA_Bit;
        };
        union
        {
                volatile uint32_t DIR [32UL];
                BITBANDING_GPIODIR_TypeDef DIR_Bit;
        };
        union
        {
                volatile uint32_t IS [32UL];
                BITBANDING_GPIOIS_TypeDef IS_Bit;
        };
        union
        {
                volatile uint32_t IBE [32UL];
                BITBANDING_GPIOIBE_TypeDef IBE_Bit;
        };
        union
        {
                volatile uint32_t IEV [32UL];
                BITBANDING_GPIOIEV_TypeDef IEV_Bit;
        };
        union
        {
                volatile uint32_t IM [32UL];
                BITBANDING_GPIOIM_TypeDef IM_Bit;
        };
        union
        {
                volatile const uint32_t RIS [32UL];
                BITBANDING_GPIORIS_TypeDef RIS_Bit;
        };
        union
        {
                volatile const uint32_t MIS [32UL];
                BITBANDING_GPIOMIS_TypeDef MIS_Bit;
        };
        union
        {
                volatile uint32_t ICR [32UL];
                BITBANDING_GPIOICR_TypeDef ICR_Bit;
        };
        union
        {
                volatile uint32_t AFSEL [32UL];
                BITBANDING_GPIOAFSEL_TypeDef AFSEL_Bit;
        };
        const uint32_t reserved [55UL * 32UL];
        union
        {
                volatile uint32_t DRR [32UL][3UL];
                BITBANDING_GPIODRR_TypeDef DRR_Bit [3UL];
        };
        union
        {
                volatile uint32_t ODR [32UL];
                BITBANDING_GPIOODR_TypeDef ODR_Bit;
        };
        union
        {
                volatile uint32_t PUR [32UL];
                BITBANDING_GPIOPUR_TypeDef PUR_Bit;
        };
        union
        {
                volatile uint32_t PDR [32UL];
                BITBANDING_GPIOPDR_TypeDef PDR_Bit;
        };
        union
        {
                volatile uint32_t SLR [32UL];
                BITBANDING_GPIOSLR_TypeDef SLR_Bit;
        };
        union
        {
                volatile uint32_t DEN [32UL];
                BITBANDING_GPIODEN_TypeDef DEN_Bit;
        };
        union
        {
                volatile uint32_t LOCK [32UL];
                BITBANDING_GPIOLOCK_TypeDef LOCK_Bit;
        };
        union
        {
                volatile uint32_t CR [32UL];
                BITBANDING_GPIOCR_TypeDef CR_Bit;
        };
        union
        {
                volatile uint32_t AMSEL [32UL];
                BITBANDING_GPIOAMSEL_TypeDef AMSEL_Bit;
        };
        union
        {
                volatile uint32_t PCTL [32UL];
                BITBANDING_GPIOPCTL_TypeDef PCTL_Bit;
        };
        union
        {
                volatile uint32_t ADCCTL [32UL];
                BITBANDING_GPIOADCCTL_TypeDef ADCCTL_Bit;
        };
        union
        {
                volatile uint32_t DMACTL [32UL];
                BITBANDING_GPIODMACTL_TypeDef DMACTL_Bit;
        };
        union
        {
                volatile uint32_t SI [32UL];
                BITBANDING_GPIOSI_TypeDef SI_Bit;
        };
        union
        {
                volatile uint32_t DR12R [32UL];
                BITBANDING_GPIODR12R_TypeDef DR12R_Bit;
        };
        union
        {
                volatile uint32_t WAKEPEN [32UL];
                BITBANDING_GPIOWAKEPEN_TypeDef WAKEPEN_Bit;
        };
        union
        {
                volatile uint32_t WAKELVL [32UL];
                BITBANDING_GPIOWAKELVL_TypeDef WAKELVL_Bit;
        };
        union
        {
                volatile uint32_t WAKESTAT [32UL];
                BITBANDING_GPIOWAKESTAT_TypeDef WAKESTAT_Bit;
        };
        const uint32_t reserved1 [669UL * 32UL];
        union
        {
                volatile uint32_t PP [32UL];
                BITBANDING_GPIOPP_TypeDef PP_Bit;
        };
        union
        {
                volatile uint32_t PC [32UL];
                BITBANDING_GPIOPC_TypeDef PC_Bit;
        };
        const uint32_t reserved2 [2UL * 32UL];
        union
        {
                volatile uint32_t PeriphID4 [32UL];
                BITBANDING_GPIOPeriphID4_TypeDef PeriphID4_Bit;
        };
        union
        {
                volatile uint32_t PeriphID5 [32UL];
                BITBANDING_GPIOPeriphID5_TypeDef PeriphID5_Bit;
        };
        union
        {
                volatile uint32_t PeriphID6 [32UL];
                BITBANDING_GPIOPeriphID6_TypeDef PeriphID6_Bit;
        };
        union
        {
                volatile uint32_t PeriphID7 [32UL];
                BITBANDING_GPIOPeriphID7_TypeDef PeriphID7_Bit;
        };
        union
        {
                volatile uint32_t PeriphID0 [32UL];
                BITBANDING_GPIOPeriphID0_TypeDef PeriphID0_Bit;
        };
        union
        {
                volatile uint32_t PeriphID1 [32UL];
                BITBANDING_GPIOPeriphID1_TypeDef PeriphID1_Bit;
        };
        union
        {
                volatile uint32_t PeriphID2 [32UL];
                BITBANDING_GPIOPeriphID2_TypeDef PeriphID2_Bit;
        };
        union
        {
                volatile uint32_t PeriphID3 [32UL];
                BITBANDING_GPIOPeriphID3_TypeDef PeriphID3_Bit;
        };
        union
        {
                volatile uint32_t PCellID0 [32UL];
                BITBANDING_GPIOPCellID0_TypeDef PCellID0_Bit;
        };
        union
        {
                volatile uint32_t PCellID1 [32UL];
                BITBANDING_GPIOPCellID1_TypeDef PCellID1_Bit;
        };
        union
        {
                volatile uint32_t PCellID2 [32UL];
                BITBANDING_GPIOPCellID2_TypeDef PCellID2_Bit;
        };
        union
        {
                volatile uint32_t PCellID3 [32UL];
                BITBANDING_GPIOPCellID3_TypeDef PCellID3_Bit;
        };
} GPIO_AUX_BITBANDING_TypeDef;

typedef volatile struct
{
        GPIO_BITBANDING_TypeDef PORT [(uint32_t) GPIO_enPORT_MAX];
} GPIO_PORT_BITBANDING_TypeDef;

typedef volatile struct
{
        GPIO_AUX_BITBANDING_TypeDef PORT [(uint32_t) GPIO_enPORT_MAX];
} GPIO_PORT_AUX_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_BITBANDING_H_ */
