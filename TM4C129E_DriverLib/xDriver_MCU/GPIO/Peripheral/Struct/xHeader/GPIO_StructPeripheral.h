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
                GPIO_DATA_t DATA_MASK_Bit [255UL];
        };
        union
        {
                volatile uint32_t DATA;
                GPIO_DATA_t DATA_Bit;
        };
        union
        {
                volatile uint32_t DIR;
                GPIO_DIR_t DIR_Bit;
        };
        union
        {
                volatile uint32_t IS;
                GPIO_IS_t IS_Bit;
        };
        union
        {
                volatile uint32_t IBE;
                GPIO_IBE_t IBE_Bit;
        };
        union
        {
                volatile uint32_t IEV;
                GPIO_IEV_t IEV_Bit;
        };
        union
        {
                volatile uint32_t IM;
                GPIO_IM_t IM_Bit;
        };
        union
        {
                volatile const uint32_t RIS;
                GPIO_RIS_t RIS_Bit;
        };
        union
        {
                volatile const uint32_t MIS;
                GPIO_MIS_t MIS_Bit;
        };
        union
        {
                volatile uint32_t ICR;
                GPIO_ICR_t ICR_Bit;
        };
        union
        {
                volatile uint32_t AFSEL;
                GPIO_AFSEL_t AFSEL_Bit;
        };
        const uint32_t reserved [55UL];
        union
        {
                volatile uint32_t DR2R;
                GPIO_DR2R_t DR2R_Bit;
        };
        union
        {
                volatile uint32_t DR4R;
                GPIO_DR4R_t DR4R_Bit;
        };
        union
        {
                volatile uint32_t DR8R;
                GPIO_DR8R_t DR8R_Bit;
        };
        union
        {
                volatile uint32_t ODR;
                GPIO_ODR_t ODR_Bit;
        };
        union
        {
                volatile uint32_t PUR;
                GPI0_PUR_t PUR_Bit;
        };
        union
        {
                volatile uint32_t PDR;
                GPIO_PDR_t PDR_Bit;
        };
        union
        {
                volatile uint32_t SLR;
                GPIO_SLR_t SLR_Bit;
        };
        union
        {
                volatile uint32_t DEN;
                GPIO_DEN_t DEN_Bit;
        };
        union
        {
                volatile uint32_t LOCK;
                GPIO_LOCK_t LOCK_Bit;
        };
        union
        {
                volatile uint32_t CR;
                GPIO_CR_t CR_Bit;
        };
        union
        {
                volatile uint32_t AMSEL;
                GPIO_AMSEL_t AMSEL_Bit;
        };
        union
        {
                volatile uint32_t PCTL;
                GPIO_PCTL_t PCTL_Bit;
        };
        union
        {
                volatile uint32_t ADCCTL;
                GPIO_ADCCTL_t ADCCTL_Bit;
        };
        union
        {
                volatile uint32_t DMACTL;
                GPIO_DMACTL_t DMACTL_Bit;
        };
        union
        {
                volatile uint32_t SI;
                GPIO_SI_t SI_Bit;
        };
        union
        {
                volatile uint32_t DR12R;
                GPIO_DR12R_t DR12R_Bit;
        };
        union
        {
                volatile uint32_t WAKEPEN;
                GPIO_WAKEPEN_t WAKEPEN_Bit;
        };
        union
        {
                volatile uint32_t WAKELVL;
                GPIO_WAKELVL_t WAKELVL_Bit;
        };
        union
        {
                volatile uint32_t WAKESTAT;
                GPIO_WAKESTAT_t WAKESTAT_Bit;
        };
        const uint32_t reserved1 [669UL];
        union
        {
                volatile uint32_t PP;
                GPIO_PP_t PP_Bit;
        };
        union
        {
                volatile uint32_t PC;
                GPIO_PC_t PC_Bit;
        };
        const uint32_t reserved2 [2UL];
        union
        {
                volatile uint32_t PeriphID4;
                GPIO_PeriphID4_t PeriphID4_Bit;
        };
        union
        {
                volatile uint32_t PeriphID5;
                GPIO_PeriphID5_t PeriphID5_Bit;
        };
        union
        {
                volatile uint32_t PeriphID6;
                GPIO_PeriphID6_t PeriphID6_Bit;
        };
        union
        {
                volatile uint32_t PeriphID7;
                GPIO_PeriphID7_t PeriphID7_Bit;
        };
        union
        {
                volatile uint32_t PeriphID0;
                GPIO_PeriphID0_t PeriphID0_Bit;
        };
        union
        {
                volatile uint32_t PeriphID1;
                GPIO_PeriphID1_t PeriphID1_Bit;
        };
        union
        {
                volatile uint32_t PeriphID2;
                GPIO_PeriphID2_t PeriphID2_Bit;
        };
        union
        {
                volatile uint32_t PeriphID3;
                GPIO_PeriphID3_t PeriphID3_Bit;
        };
        union
        {
                volatile uint32_t PCellID0;
                GPIO_PCellID0_t PCellID0_Bit;
        };
        union
        {
                volatile uint32_t PCellID1;
                GPIO_PCellID1_t PCellID1_Bit;
        };
        union
        {
                volatile uint32_t PCellID2;
                GPIO_PCellID2_t PCellID2_Bit;
        };
        union
        {
                volatile uint32_t PCellID3;
                GPIO_PCellID3_t PCellID3_Bit;
        };
} GPIO_t;

typedef volatile struct
{
        union
        {
                volatile uint32_t DATA_MASK [255UL];
                GPIO_DATA_t DATA_MASK_Bit [255UL];
        };
        union
        {
                volatile uint32_t DATA;
                GPIO_DATA_t DATA_Bit;
        };
        union
        {
                volatile uint32_t DIR;
                GPIO_DIR_t DIR_Bit;
        };
        union
        {
                volatile uint32_t IS;
                GPIO_IS_t IS_Bit;
        };
        union
        {
                volatile uint32_t IBE;
                GPIO_IBE_t IBE_Bit;
        };
        union
        {
                volatile uint32_t IEV;
                GPIO_IEV_t IEV_Bit;
        };
        union
        {
                volatile uint32_t IM;
                GPIO_IM_t IM_Bit;
        };
        union
        {
                volatile const uint32_t RIS;
                GPIO_RIS_t RIS_Bit;
        };
        union
        {
                volatile const uint32_t MIS;
                GPIO_MIS_t MIS_Bit;
        };
        union
        {
                volatile uint32_t ICR;
                GPIO_ICR_t ICR_Bit;
        };
        union
        {
                volatile uint32_t AFSEL;
                GPIO_AFSEL_t AFSEL_Bit;
        };
        const uint32_t reserved [55UL];
        union
        {
                volatile uint32_t DRR [3UL];
                GPIO_DRR_t DRR_Bit [3UL];
        };

        union
        {
                volatile uint32_t ODR;
                GPIO_ODR_t ODR_Bit;
        };
        union
        {
                volatile uint32_t PUR;
                GPI0_PUR_t PUR_Bit;
        };
        union
        {
                volatile uint32_t PDR;
                GPIO_PDR_t PDR_Bit;
        };
        union
        {
                volatile uint32_t SLR;
                GPIO_SLR_t SLR_Bit;
        };
        union
        {
                volatile uint32_t DEN;
                GPIO_DEN_t DEN_Bit;
        };
        union
        {
                volatile uint32_t LOCK;
                GPIO_LOCK_t LOCK_Bit;
        };
        union
        {
                volatile uint32_t CR;
                GPIO_CR_t CR_Bit;
        };
        union
        {
                volatile uint32_t AMSEL;
                GPIO_AMSEL_t AMSEL_Bit;
        };
        union
        {
                volatile uint32_t PCTL;
                GPIO_PCTL_t PCTL_Bit;
        };
        union
        {
                volatile uint32_t ADCCTL;
                GPIO_ADCCTL_t ADCCTL_Bit;
        };
        union
        {
                volatile uint32_t DMACTL;
                GPIO_DMACTL_t DMACTL_Bit;
        };
        union
        {
                volatile uint32_t SI;
                GPIO_SI_t SI_Bit;
        };
        union
        {
                volatile uint32_t DR12R;
                GPIO_DR12R_t DR12R_Bit;
        };
        union
        {
                volatile uint32_t WAKEPEN;
                GPIO_WAKEPEN_t WAKEPEN_Bit;
        };
        union
        {
                volatile uint32_t WAKELVL;
                GPIO_WAKELVL_t WAKELVL_Bit;
        };
        union
        {
                volatile uint32_t WAKESTAT;
                GPIO_WAKESTAT_t WAKESTAT_Bit;
        };
        const uint32_t reserved1 [669UL];
        union
        {
                volatile uint32_t PP;
                GPIO_PP_t PP_Bit;
        };
        union
        {
                volatile uint32_t PC;
                GPIO_PC_t PC_Bit;
        };
        const uint32_t reserved2 [2UL];
        union
        {
                volatile uint32_t PeriphID4;
                GPIO_PeriphID4_t PeriphID4_Bit;
        };
        union
        {
                volatile uint32_t PeriphID5;
                GPIO_PeriphID5_t PeriphID5_Bit;
        };
        union
        {
                volatile uint32_t PeriphID6;
                GPIO_PeriphID6_t PeriphID6_Bit;
        };
        union
        {
                volatile uint32_t PeriphID7;
                GPIO_PeriphID7_t PeriphID7_Bit;
        };
        union
        {
                volatile uint32_t PeriphID0;
                GPIO_PeriphID0_t PeriphID0_Bit;
        };
        union
        {
                volatile uint32_t PeriphID1;
                GPIO_PeriphID1_t PeriphID1_Bit;
        };
        union
        {
                volatile uint32_t PeriphID2;
                GPIO_PeriphID2_t PeriphID2_Bit;
        };
        union
        {
                volatile uint32_t PeriphID3;
                GPIO_PeriphID3_t PeriphID3_Bit;
        };
        union
        {
                volatile uint32_t PCellID0;
                GPIO_PCellID0_t PCellID0_Bit;
        };
        union
        {
                volatile uint32_t PCellID1;
                GPIO_PCellID1_t PCellID1_Bit;
        };
        union
        {
                volatile uint32_t PCellID2;
                GPIO_PCellID2_t PCellID2_Bit;
        };
        union
        {
                volatile uint32_t PCellID3;
                GPIO_PCellID3_t PCellID3_Bit;
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
