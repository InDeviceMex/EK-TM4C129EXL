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

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_DATA_t;

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
}GPIO_DATA_MASK_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_DIR_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_IS_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_IBE_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_IEV_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        volatile uint32_t DMAIME :1;
        const uint32_t reserved :24;
}GPIO_IM_t;

typedef volatile struct
{
        volatile const uint32_t PIN0 :1;
        volatile const uint32_t PIN1 :1;
        volatile const uint32_t PIN2 :1;
        volatile const uint32_t PIN3 :1;
        volatile const uint32_t PIN4 :1;
        volatile const uint32_t PIN5 :1;
        volatile const uint32_t PIN6 :1;
        volatile const uint32_t PIN7 :1;
        volatile const uint32_t DMARIS :1;
        const uint32_t reserved :24;
}GPIO_RIS_t;

typedef volatile struct
{
        volatile const uint32_t PIN0 :1;
        volatile const uint32_t PIN1 :1;
        volatile const uint32_t PIN2 :1;
        volatile const uint32_t PIN3 :1;
        volatile const uint32_t PIN4 :1;
        volatile const uint32_t PIN5 :1;
        volatile const uint32_t PIN6 :1;
        volatile const uint32_t PIN7 :1;
        volatile const uint32_t DMAMIS :1;
        const uint32_t reserved :24;
}GPIO_MIS_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        volatile uint32_t DMAIC :1;
        const uint32_t reserved :24;
}GPIO_ICR_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_AFSEL_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_DRR_t;

typedef volatile struct
{
        union
        {
                volatile uint32_t DRV [3UL];
                GPIO_DRR_t DRV_bit [3UL];
        };
}GPIO_DRR_ARRAY_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_DR2R_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_DR4R_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_DR8R_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_ODR_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
} GPI0_PUR_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_PDR_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_SLR_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_DEN_t;

typedef volatile struct
{
        volatile uint32_t LOCK :32;
}GPIO_LOCK_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_CR_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_AMSEL_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :4;
        volatile uint32_t PIN1 :4;
        volatile uint32_t PIN2 :4;
        volatile uint32_t PIN3 :4;
        volatile uint32_t PIN4 :4;
        volatile uint32_t PIN5 :4;
        volatile uint32_t PIN6 :4;
        volatile uint32_t PIN7 :4;
}GPIO_PCTL_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_ADCCTL_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_DMACTL_t;

typedef volatile struct
{
        volatile uint32_t SUM :1;
        const uint32_t reserved :31;
}GPIO_SI_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}GPIO_DR12R_t;

typedef volatile struct
{
        const uint32_t reserved :4;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved1 :24;
}GPIO_WAKEPEN_t;

typedef volatile struct
{
        const uint32_t reserved :4;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved1 :24;
}GPIO_WAKELVL_t;

typedef volatile struct
{
        const uint32_t reserved :4;
        volatile const uint32_t PIN4 :1;
        volatile const uint32_t PIN5 :1;
        volatile const uint32_t PIN6 :1;
        volatile const uint32_t PIN7 :1;
        const uint32_t reserved1 :24;
}GPIO_WAKESTAT_t;

typedef volatile struct
{
        volatile const uint32_t EDE :1;
        const uint32_t reserved1 :31;
}GPIO_PP_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :2;
        volatile uint32_t PIN1 :2;
        volatile uint32_t PIN2 :2;
        volatile uint32_t PIN3 :2;
        volatile uint32_t PIN4 :2;
        volatile uint32_t PIN5 :2;
        volatile uint32_t PIN6 :2;
        volatile uint32_t PIN7 :2;
        const uint32_t reserved :16;
}GPIO_PC_t;

typedef volatile struct
{
        volatile const uint32_t PID4 :8;
        const uint32_t reserved :24;
}GPIO_PeriphID4_t;

typedef volatile struct
{
        volatile const uint32_t PID5 :8;
        const uint32_t reserved :24;
}GPIO_PeriphID5_t;

typedef volatile struct
{
        volatile const uint32_t PID6 :8;
        const uint32_t reserved :24;
}GPIO_PeriphID6_t;

typedef volatile struct
{
        volatile const uint32_t PID7 :8;
        const uint32_t reserved :24;
}GPIO_PeriphID7_t;

typedef volatile struct
{
        volatile const uint32_t PID0 :8;
        const uint32_t reserved :24;
}GPIO_PeriphID0_t;

typedef volatile struct
{
        volatile const uint32_t PID1 :8;
        const uint32_t reserved :24;
}GPIO_PeriphID1_t;

typedef volatile struct
{
        volatile const uint32_t PID2 :8;
        const uint32_t reserved :24;
}GPIO_PeriphID2_t;

typedef volatile struct
{
        volatile const uint32_t PID3 :8;
        const uint32_t reserved :24;
}GPIO_PeriphID3_t;

typedef volatile struct
{
        volatile const uint32_t CID0 :8;
        const uint32_t reserved :24;
}GPIO_PCellID0_t;

typedef volatile struct
{
        volatile const uint32_t CID1 :8;
        const uint32_t reserved :24;
}GPIO_PCellID1_t;

typedef volatile struct
{
        volatile const uint32_t CID2 :8;
        const uint32_t reserved :24;
}GPIO_PCellID2_t;

typedef volatile struct
{
        volatile const uint32_t CID3 :8;
        const uint32_t reserved :24;
}GPIO_PCellID3_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        const uint32_t reserved :24;
}PINES8_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        volatile uint32_t PIN8 :1;
        volatile uint32_t PIN9 :1;
        volatile uint32_t PIN10 :1;
        volatile uint32_t PIN11 :1;
        volatile uint32_t PIN12 :1;
        volatile uint32_t PIN13 :1;
        volatile uint32_t PIN14 :1;
        volatile uint32_t PIN15 :1;
        const uint32_t reserved :16;
}PINES16_t;

typedef volatile struct
{
        volatile uint32_t PIN0 :1;
        volatile uint32_t PIN1 :1;
        volatile uint32_t PIN2 :1;
        volatile uint32_t PIN3 :1;
        volatile uint32_t PIN4 :1;
        volatile uint32_t PIN5 :1;
        volatile uint32_t PIN6 :1;
        volatile uint32_t PIN7 :1;
        volatile uint32_t PIN8 :1;
        volatile uint32_t PIN9 :1;
        volatile uint32_t PIN10 :1;
        volatile uint32_t PIN11 :1;
        volatile uint32_t PIN12 :1;
        volatile uint32_t PIN13 :1;
        volatile uint32_t PIN14 :1;
        volatile uint32_t PIN15 :1;
        volatile uint32_t PIN16 :1;
        volatile uint32_t PIN17 :1;
        volatile uint32_t PIN18 :1;
        volatile uint32_t PIN19 :1;
        volatile uint32_t PIN20 :1;
        volatile uint32_t PIN21 :1;
        volatile uint32_t PIN22 :1;
        volatile uint32_t PIN23 :1;
        volatile uint32_t PIN24 :1;
        volatile uint32_t PIN25 :1;
        volatile uint32_t PIN26 :1;
        volatile uint32_t PIN27 :1;
        volatile uint32_t PIN28 :1;
        volatile uint32_t PIN29 :1;
        volatile uint32_t PIN30 :1;
        volatile uint32_t PIN31 :1;
}PINES32_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTREGISTER_H_ */
