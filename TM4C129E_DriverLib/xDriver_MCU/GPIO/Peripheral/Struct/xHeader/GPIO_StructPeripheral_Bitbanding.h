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
                volatile UBase_t DATA_MASK [255UL][32UL];
                GPIO_BITBANDING_DATA_t DATA_MASK_Bit [255UL];
        };
        union
        {
                volatile UBase_t DATA [32UL];
                GPIO_BITBANDING_DATA_t DATA_Bit;
        };
        union
        {
                volatile UBase_t DIR [32UL];
                GPIO_BITBANDING_DIR_t DIR_Bit;
        };
        union
        {
                volatile UBase_t IS [32UL];
                GPIO_BITBANDING_IS_t IS_Bit;
        };
        union
        {
                volatile UBase_t IBE [32UL];
                GPIO_BITBANDING_IBE_t IBE_Bit;
        };
        union
        {
                volatile UBase_t IEV [32UL];
                GPIO_BITBANDING_IEV_t IEV_Bit;
        };
        union
        {
                volatile UBase_t IM [32UL];
                GPIO_BITBANDING_IM_t IM_Bit;
        };
        union
        {
                volatile const UBase_t RIS [32UL];
                GPIO_BITBANDING_RIS_t RIS_Bit;
        };
        union
        {
                volatile const UBase_t MIS [32UL];
                GPIO_BITBANDING_MIS_t MIS_Bit;
        };
        union
        {
                volatile UBase_t ICR [32UL];
                GPIO_BITBANDING_ICR_t ICR_Bit;
        };
        union
        {
                volatile UBase_t AFSEL [32UL];
                GPIO_BITBANDING_AFSEL_t AFSEL_Bit;
        };
        const UBase_t reserved [55UL * 32UL];
        union
        {
                volatile UBase_t DR2R [32UL];
                GPIO_BITBANDING_DR2R_t DR2R_Bit;
        };
        union
        {
                volatile UBase_t DR4R [32UL];
                GPIO_BITBANDING_DR4R_t DR4R_Bit;
        };
        union
        {
                volatile UBase_t DR8R [32UL];
                GPIO_BITBANDING_DR8R_t DR8R_Bit;
        };
        union
        {
                volatile UBase_t ODR [32UL];
                GPIO_BITBANDING_ODR_t ODR_Bit;
        };
        union
        {
                volatile UBase_t PUR [32UL];
                GPIO_BITBANDING_PUR_t PUR_Bit;
        };
        union
        {
                volatile UBase_t PDR [32UL];
                GPIO_BITBANDING_PDR_t PDR_Bit;
        };
        union
        {
                volatile UBase_t SLR [32UL];
                GPIO_BITBANDING_SLR_t SLR_Bit;
        };
        union
        {
                volatile UBase_t DEN [32UL];
                GPIO_BITBANDING_DEN_t DEN_Bit;
        };
        union
        {
                volatile UBase_t LOCK [32UL];
                GPIO_BITBANDING_LOCK_t LOCK_Bit;
        };
        union
        {
                volatile UBase_t CR [32UL];
                GPIO_BITBANDING_CR_t CR_Bit;
        };
        union
        {
                volatile UBase_t AMSEL [32UL];
                GPIO_BITBANDING_AMSEL_t AMSEL_Bit;
        };
        union
        {
                volatile UBase_t PCTL [32UL];
                GPIO_BITBANDING_PCTL_t PCTL_Bit;
        };
        union
        {
                volatile UBase_t ADCCTL [32UL];
                GPIO_BITBANDING_ADCCTL_t ADCCTL_Bit;
        };
        union
        {
                volatile UBase_t DMACTL [32UL];
                GPIO_BITBANDING_DMACTL_t DMACTL_Bit;
        };
        union
        {
                volatile UBase_t SI [32UL];
                GPIO_BITBANDING_SI_t SI_Bit;
        };
        union
        {
                volatile UBase_t DR12R [32UL];
                GPIO_BITBANDING_DR12R_t DR12R_Bit;
        };
        union
        {
                volatile UBase_t WAKEPEN [32UL];
                GPIO_BITBANDING_WAKEPEN_t WAKEPEN_Bit;
        };
        union
        {
                volatile UBase_t WAKELVL [32UL];
                GPIO_BITBANDING_WAKELVL_t WAKELVL_Bit;
        };
        union
        {
                volatile UBase_t WAKESTAT [32UL];
                GPIO_BITBANDING_WAKESTAT_t WAKESTAT_Bit;
        };
        const UBase_t reserved1 [669UL * 32UL];
        union
        {
                volatile UBase_t PP [32UL];
                GPIO_BITBANDING_PP_t PP_Bit;
        };
        union
        {
                volatile UBase_t PC [32UL];
                GPIO_BITBANDING_PC_t PC_Bit;
        };
        const UBase_t reserved2 [2UL * 32UL];
        union
        {
                volatile UBase_t PeriphID4 [32UL];
                GPIO_BITBANDING_PeriphID4_t PeriphID4_Bit;
        };
        union
        {
                volatile UBase_t PeriphID5 [32UL];
                GPIO_BITBANDING_PeriphID5_t PeriphID5_Bit;
        };
        union
        {
                volatile UBase_t PeriphID6 [32UL];
                GPIO_BITBANDING_PeriphID6_t PeriphID6_Bit;
        };
        union
        {
                volatile UBase_t PeriphID7 [32UL];
                GPIO_BITBANDING_PeriphID7_t PeriphID7_Bit;
        };
        union
        {
                volatile UBase_t PeriphID0 [32UL];
                GPIO_BITBANDING_PeriphID0_t PeriphID0_Bit;
        };
        union
        {
                volatile UBase_t PeriphID1 [32UL];
                GPIO_BITBANDING_PeriphID1_t PeriphID1_Bit;
        };
        union
        {
                volatile UBase_t PeriphID2 [32UL];
                GPIO_BITBANDING_PeriphID2_t PeriphID2_Bit;
        };
        union
        {
                volatile UBase_t PeriphID3 [32UL];
                GPIO_BITBANDING_PeriphID3_t PeriphID3_Bit;
        };
        union
        {
                volatile UBase_t PCellID0 [32UL];
                GPIO_BITBANDING_PCellID0_t PCellID0_Bit;
        };
        union
        {
                volatile UBase_t PCellID1 [32UL];
                GPIO_BITBANDING_PCellID1_t PCellID1_Bit;
        };
        union
        {
                volatile UBase_t PCellID2 [32UL];
                GPIO_BITBANDING_PCellID2_t PCellID2_Bit;
        };
        union
        {
                volatile UBase_t PCellID3 [32UL];
                GPIO_BITBANDING_PCellID3_t PCellID3_Bit;
        };
} GPIO_BITBANDING_t;

typedef volatile struct
{
        union
        {
                volatile UBase_t DATA_MASK [255UL][32UL];
                GPIO_BITBANDING_DATA_t DATA_MASK_Bit [255UL];
        };
        union
        {
                volatile UBase_t DATA [32UL];
                GPIO_BITBANDING_DATA_t DATA_Bit;
        };
        union
        {
                volatile UBase_t DIR [32UL];
                GPIO_BITBANDING_DIR_t DIR_Bit;
        };
        union
        {
                volatile UBase_t IS [32UL];
                GPIO_BITBANDING_IS_t IS_Bit;
        };
        union
        {
                volatile UBase_t IBE [32UL];
                GPIO_BITBANDING_IBE_t IBE_Bit;
        };
        union
        {
                volatile UBase_t IEV [32UL];
                GPIO_BITBANDING_IEV_t IEV_Bit;
        };
        union
        {
                volatile UBase_t IM [32UL];
                GPIO_BITBANDING_IM_t IM_Bit;
        };
        union
        {
                volatile const UBase_t RIS [32UL];
                GPIO_BITBANDING_RIS_t RIS_Bit;
        };
        union
        {
                volatile const UBase_t MIS [32UL];
                GPIO_BITBANDING_MIS_t MIS_Bit;
        };
        union
        {
                volatile UBase_t ICR [32UL];
                GPIO_BITBANDING_ICR_t ICR_Bit;
        };
        union
        {
                volatile UBase_t AFSEL [32UL];
                GPIO_BITBANDING_AFSEL_t AFSEL_Bit;
        };
        const UBase_t reserved [55UL * 32UL];
        union
        {
                volatile UBase_t DRR [32UL][3UL];
                GPIO_BITBANDING_DRR_t DRR_Bit [3UL];
        };
        union
        {
                volatile UBase_t ODR [32UL];
                GPIO_BITBANDING_ODR_t ODR_Bit;
        };
        union
        {
                volatile UBase_t PUR [32UL];
                GPIO_BITBANDING_PUR_t PUR_Bit;
        };
        union
        {
                volatile UBase_t PDR [32UL];
                GPIO_BITBANDING_PDR_t PDR_Bit;
        };
        union
        {
                volatile UBase_t SLR [32UL];
                GPIO_BITBANDING_SLR_t SLR_Bit;
        };
        union
        {
                volatile UBase_t DEN [32UL];
                GPIO_BITBANDING_DEN_t DEN_Bit;
        };
        union
        {
                volatile UBase_t LOCK [32UL];
                GPIO_BITBANDING_LOCK_t LOCK_Bit;
        };
        union
        {
                volatile UBase_t CR [32UL];
                GPIO_BITBANDING_CR_t CR_Bit;
        };
        union
        {
                volatile UBase_t AMSEL [32UL];
                GPIO_BITBANDING_AMSEL_t AMSEL_Bit;
        };
        union
        {
                volatile UBase_t PCTL [32UL];
                GPIO_BITBANDING_PCTL_t PCTL_Bit;
        };
        union
        {
                volatile UBase_t ADCCTL [32UL];
                GPIO_BITBANDING_ADCCTL_t ADCCTL_Bit;
        };
        union
        {
                volatile UBase_t DMACTL [32UL];
                GPIO_BITBANDING_DMACTL_t DMACTL_Bit;
        };
        union
        {
                volatile UBase_t SI [32UL];
                GPIO_BITBANDING_SI_t SI_Bit;
        };
        union
        {
                volatile UBase_t DR12R [32UL];
                GPIO_BITBANDING_DR12R_t DR12R_Bit;
        };
        union
        {
                volatile UBase_t WAKEPEN [32UL];
                GPIO_BITBANDING_WAKEPEN_t WAKEPEN_Bit;
        };
        union
        {
                volatile UBase_t WAKELVL [32UL];
                GPIO_BITBANDING_WAKELVL_t WAKELVL_Bit;
        };
        union
        {
                volatile UBase_t WAKESTAT [32UL];
                GPIO_BITBANDING_WAKESTAT_t WAKESTAT_Bit;
        };
        const UBase_t reserved1 [669UL * 32UL];
        union
        {
                volatile UBase_t PP [32UL];
                GPIO_BITBANDING_PP_t PP_Bit;
        };
        union
        {
                volatile UBase_t PC [32UL];
                GPIO_BITBANDING_PC_t PC_Bit;
        };
        const UBase_t reserved2 [2UL * 32UL];
        union
        {
                volatile UBase_t PeriphID4 [32UL];
                GPIO_BITBANDING_PeriphID4_t PeriphID4_Bit;
        };
        union
        {
                volatile UBase_t PeriphID5 [32UL];
                GPIO_BITBANDING_PeriphID5_t PeriphID5_Bit;
        };
        union
        {
                volatile UBase_t PeriphID6 [32UL];
                GPIO_BITBANDING_PeriphID6_t PeriphID6_Bit;
        };
        union
        {
                volatile UBase_t PeriphID7 [32UL];
                GPIO_BITBANDING_PeriphID7_t PeriphID7_Bit;
        };
        union
        {
                volatile UBase_t PeriphID0 [32UL];
                GPIO_BITBANDING_PeriphID0_t PeriphID0_Bit;
        };
        union
        {
                volatile UBase_t PeriphID1 [32UL];
                GPIO_BITBANDING_PeriphID1_t PeriphID1_Bit;
        };
        union
        {
                volatile UBase_t PeriphID2 [32UL];
                GPIO_BITBANDING_PeriphID2_t PeriphID2_Bit;
        };
        union
        {
                volatile UBase_t PeriphID3 [32UL];
                GPIO_BITBANDING_PeriphID3_t PeriphID3_Bit;
        };
        union
        {
                volatile UBase_t PCellID0 [32UL];
                GPIO_BITBANDING_PCellID0_t PCellID0_Bit;
        };
        union
        {
                volatile UBase_t PCellID1 [32UL];
                GPIO_BITBANDING_PCellID1_t PCellID1_Bit;
        };
        union
        {
                volatile UBase_t PCellID2 [32UL];
                GPIO_BITBANDING_PCellID2_t PCellID2_Bit;
        };
        union
        {
                volatile UBase_t PCellID3 [32UL];
                GPIO_BITBANDING_PCellID3_t PCellID3_Bit;
        };
} GPIO_AUX_BITBANDING_t;

typedef volatile struct
{
        GPIO_BITBANDING_t PORT [(UBase_t) GPIO_enPORT_MAX];
} GPIO_PORT_BITBANDING_t;

typedef volatile struct
{
        GPIO_AUX_BITBANDING_t PORT [(UBase_t) GPIO_enPORT_MAX];
} GPIO_PORT_AUX_BITBANDING_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_BITBANDING_H_ */
