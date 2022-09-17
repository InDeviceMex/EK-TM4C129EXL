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

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_DATA_t;

typedef volatile struct
{
        union
        {
                volatile uint32_t DATA_MASK [255UL][32UL];
                GPIO_BITBANDING_DATA_t DATA_MASK_Bit [255UL];
        };
        union
        {
                volatile uint32_t DATA [32UL];
                GPIO_BITBANDING_DATA_t DATA_Bit;
        };
}GPIO_BITBANDING_DATA_MASK_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_DIR_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_IS_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_IBE_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_IEV_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        volatile uint32_t DMAIME;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_IM_t;

typedef volatile struct
{
        volatile const uint32_t PIN0;
        volatile const uint32_t PIN1;
        volatile const uint32_t PIN2;
        volatile const uint32_t PIN3;
        volatile const uint32_t PIN4;
        volatile const uint32_t PIN5;
        volatile const uint32_t PIN6;
        volatile const uint32_t PIN7;
        volatile const uint32_t DMARIS;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_RIS_t;

typedef volatile struct
{
        volatile const uint32_t PIN0;
        volatile const uint32_t PIN1;
        volatile const uint32_t PIN2;
        volatile const uint32_t PIN3;
        volatile const uint32_t PIN4;
        volatile const uint32_t PIN5;
        volatile const uint32_t PIN6;
        volatile const uint32_t PIN7;
        volatile const uint32_t DMAMIS;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_MIS_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        volatile uint32_t DMAIC;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_ICR_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_AFSEL_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_DRR_t;

typedef volatile struct
{
        union
        {
                volatile uint32_t DRV [3UL][32UL];
                GPIO_BITBANDING_DRR_t DRV_bit [3UL];
        };
}GPIO_BITBANDING_DRR_ARRAY_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_DR2R_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_DR4R_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_DR8R_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_ODR_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_PUR_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_PDR_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_SLR_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_DEN_t;

typedef volatile struct
{
        volatile uint32_t LOCK [32UL];
}GPIO_BITBANDING_LOCK_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_CR_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_AMSEL_t;

typedef volatile struct
{
        volatile uint32_t PIN0 [4UL];
        volatile uint32_t PIN1 [4UL];
        volatile uint32_t PIN2 [4UL];
        volatile uint32_t PIN3 [4UL];
        volatile uint32_t PIN4 [4UL];
        volatile uint32_t PIN5 [4UL];
        volatile uint32_t PIN6 [4UL];
        volatile uint32_t PIN7 [4UL];
}GPIO_BITBANDING_PCTL_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_ADCCTL_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_DMACTL_t;

typedef volatile struct
{
        volatile uint32_t SUM;
        const uint32_t reserved [31UL];
}GPIO_BITBANDING_SI_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_DR12R_t;

typedef volatile struct
{
        const uint32_t reserved [4UL];
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved1 [24UL];
}GPIO_BITBANDING_WAKEPEN_t;

typedef volatile struct
{
        const uint32_t reserved [4UL];
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved1 [24UL];
}GPIO_BITBANDING_WAKELVL_t;

typedef volatile struct
{
        const uint32_t reserved [4UL];
        volatile const uint32_t PIN4;
        volatile const uint32_t PIN5;
        volatile const uint32_t PIN6;
        volatile const uint32_t PIN7;
        const uint32_t reserved1 [24UL];
}GPIO_BITBANDING_WAKESTAT_t;

typedef volatile struct
{
        volatile const uint32_t EDE;
        const uint32_t reserved1 [31UL];
}GPIO_BITBANDING_PP_t;

typedef volatile struct
{
        volatile uint32_t PIN0 [2UL];
        volatile uint32_t PIN1 [2UL];
        volatile uint32_t PIN2 [2UL];
        volatile uint32_t PIN3 [2UL];
        volatile uint32_t PIN4 [2UL];
        volatile uint32_t PIN5 [2UL];
        volatile uint32_t PIN6 [2UL];
        volatile uint32_t PIN7 [2UL];
        const uint32_t reserved [16UL];
}GPIO_BITBANDING_PC_t;

typedef volatile struct
{
        volatile const uint32_t PID4 [8UL];
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_PeriphID4_t;

typedef volatile struct
{
        volatile const uint32_t PID5 [8UL];
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_PeriphID5_t;

typedef volatile struct
{
        volatile const uint32_t PID6 [8UL];
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_PeriphID6_t;

typedef volatile struct
{
        volatile const uint32_t PID7 [8UL];
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_PeriphID7_t;

typedef volatile struct
{
        volatile const uint32_t PID0 [8UL];
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_PeriphID0_t;

typedef volatile struct
{
        volatile const uint32_t PID1 [8UL];
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_PeriphID1_t;

typedef volatile struct
{
        volatile const uint32_t PID2 [8UL];
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_PeriphID2_t;

typedef volatile struct
{
        volatile const uint32_t PID3 [8UL];
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_PeriphID3_t;

typedef volatile struct
{
        volatile const uint32_t CID0 [8UL];
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_PCellID0_t;

typedef volatile struct
{
        volatile const uint32_t CID1 [8UL];
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_PCellID1_t;

typedef volatile struct
{
        volatile const uint32_t CID2 [8UL];
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_PCellID2_t;

typedef volatile struct
{
        volatile const uint32_t CID3 [8UL];
        const uint32_t reserved [24UL];
}GPIO_BITBANDING_PCellID3_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        const uint32_t reserved [24UL];
} BITBANDING_PINES8_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        volatile uint32_t PIN8;
        volatile uint32_t PIN9;
        volatile uint32_t PIN10;
        volatile uint32_t PIN11;
        volatile uint32_t PIN12;
        volatile uint32_t PIN13;
        volatile uint32_t PIN14;
        volatile uint32_t PIN15;
        const uint32_t reserved [16UL];
} BITBANDING_PINES16_t;

typedef volatile struct
{
        volatile uint32_t PIN0;
        volatile uint32_t PIN1;
        volatile uint32_t PIN2;
        volatile uint32_t PIN3;
        volatile uint32_t PIN4;
        volatile uint32_t PIN5;
        volatile uint32_t PIN6;
        volatile uint32_t PIN7;
        volatile uint32_t PIN8;
        volatile uint32_t PIN9;
        volatile uint32_t PIN10;
        volatile uint32_t PIN11;
        volatile uint32_t PIN12;
        volatile uint32_t PIN13;
        volatile uint32_t PIN14;
        volatile uint32_t PIN15;
        volatile uint32_t PIN16;
        volatile uint32_t PIN17;
        volatile uint32_t PIN18;
        volatile uint32_t PIN19;
        volatile uint32_t PIN20;
        volatile uint32_t PIN21;
        volatile uint32_t PIN22;
        volatile uint32_t PIN23;
        volatile uint32_t PIN24;
        volatile uint32_t PIN25;
        volatile uint32_t PIN26;
        volatile uint32_t PIN27;
        volatile uint32_t PIN28;
        volatile uint32_t PIN29;
        volatile uint32_t PIN30;
        volatile uint32_t PIN31;
} BITBANDING_PINES32_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTREGISTER_BITBANDING_H_ */
