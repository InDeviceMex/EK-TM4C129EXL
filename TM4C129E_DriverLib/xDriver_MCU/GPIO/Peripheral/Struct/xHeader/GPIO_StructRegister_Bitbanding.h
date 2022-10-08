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
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_DATA_t;

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
}GPIO_BITBANDING_DATA_MASK_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_DIR_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_IS_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_IBE_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_IEV_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        volatile UBase_t DMAIME;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_IM_t;

typedef volatile struct
{
        volatile const UBase_t PIN0;
        volatile const UBase_t PIN1;
        volatile const UBase_t PIN2;
        volatile const UBase_t PIN3;
        volatile const UBase_t PIN4;
        volatile const UBase_t PIN5;
        volatile const UBase_t PIN6;
        volatile const UBase_t PIN7;
        volatile const UBase_t DMARIS;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_RIS_t;

typedef volatile struct
{
        volatile const UBase_t PIN0;
        volatile const UBase_t PIN1;
        volatile const UBase_t PIN2;
        volatile const UBase_t PIN3;
        volatile const UBase_t PIN4;
        volatile const UBase_t PIN5;
        volatile const UBase_t PIN6;
        volatile const UBase_t PIN7;
        volatile const UBase_t DMAMIS;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_MIS_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        volatile UBase_t DMAIC;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_ICR_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_AFSEL_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_DRR_t;

typedef volatile struct
{
        union
        {
                volatile UBase_t DRV [3UL][32UL];
                GPIO_BITBANDING_DRR_t DRV_bit [3UL];
        };
}GPIO_BITBANDING_DRR_ARRAY_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_DR2R_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_DR4R_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_DR8R_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_ODR_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_PUR_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_PDR_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_SLR_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_DEN_t;

typedef volatile struct
{
        volatile UBase_t LOCK [32UL];
}GPIO_BITBANDING_LOCK_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_CR_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_AMSEL_t;

typedef volatile struct
{
        volatile UBase_t PIN0 [4UL];
        volatile UBase_t PIN1 [4UL];
        volatile UBase_t PIN2 [4UL];
        volatile UBase_t PIN3 [4UL];
        volatile UBase_t PIN4 [4UL];
        volatile UBase_t PIN5 [4UL];
        volatile UBase_t PIN6 [4UL];
        volatile UBase_t PIN7 [4UL];
}GPIO_BITBANDING_PCTL_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_ADCCTL_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_DMACTL_t;

typedef volatile struct
{
        volatile UBase_t SUM;
        const UBase_t reserved [31UL];
}GPIO_BITBANDING_SI_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_DR12R_t;

typedef volatile struct
{
        const UBase_t reserved [4UL];
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved1 [24UL];
}GPIO_BITBANDING_WAKEPEN_t;

typedef volatile struct
{
        const UBase_t reserved [4UL];
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved1 [24UL];
}GPIO_BITBANDING_WAKELVL_t;

typedef volatile struct
{
        const UBase_t reserved [4UL];
        volatile const UBase_t PIN4;
        volatile const UBase_t PIN5;
        volatile const UBase_t PIN6;
        volatile const UBase_t PIN7;
        const UBase_t reserved1 [24UL];
}GPIO_BITBANDING_WAKESTAT_t;

typedef volatile struct
{
        volatile const UBase_t EDE;
        const UBase_t reserved1 [31UL];
}GPIO_BITBANDING_PP_t;

typedef volatile struct
{
        volatile UBase_t PIN0 [2UL];
        volatile UBase_t PIN1 [2UL];
        volatile UBase_t PIN2 [2UL];
        volatile UBase_t PIN3 [2UL];
        volatile UBase_t PIN4 [2UL];
        volatile UBase_t PIN5 [2UL];
        volatile UBase_t PIN6 [2UL];
        volatile UBase_t PIN7 [2UL];
        const UBase_t reserved [16UL];
}GPIO_BITBANDING_PC_t;

typedef volatile struct
{
        volatile const UBase_t PID4 [8UL];
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_PeriphID4_t;

typedef volatile struct
{
        volatile const UBase_t PID5 [8UL];
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_PeriphID5_t;

typedef volatile struct
{
        volatile const UBase_t PID6 [8UL];
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_PeriphID6_t;

typedef volatile struct
{
        volatile const UBase_t PID7 [8UL];
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_PeriphID7_t;

typedef volatile struct
{
        volatile const UBase_t PID0 [8UL];
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_PeriphID0_t;

typedef volatile struct
{
        volatile const UBase_t PID1 [8UL];
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_PeriphID1_t;

typedef volatile struct
{
        volatile const UBase_t PID2 [8UL];
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_PeriphID2_t;

typedef volatile struct
{
        volatile const UBase_t PID3 [8UL];
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_PeriphID3_t;

typedef volatile struct
{
        volatile const UBase_t CID0 [8UL];
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_PCellID0_t;

typedef volatile struct
{
        volatile const UBase_t CID1 [8UL];
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_PCellID1_t;

typedef volatile struct
{
        volatile const UBase_t CID2 [8UL];
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_PCellID2_t;

typedef volatile struct
{
        volatile const UBase_t CID3 [8UL];
        const UBase_t reserved [24UL];
}GPIO_BITBANDING_PCellID3_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        const UBase_t reserved [24UL];
} BITBANDING_PINES8_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        volatile UBase_t PIN8;
        volatile UBase_t PIN9;
        volatile UBase_t PIN10;
        volatile UBase_t PIN11;
        volatile UBase_t PIN12;
        volatile UBase_t PIN13;
        volatile UBase_t PIN14;
        volatile UBase_t PIN15;
        const UBase_t reserved [16UL];
} BITBANDING_PINES16_t;

typedef volatile struct
{
        volatile UBase_t PIN0;
        volatile UBase_t PIN1;
        volatile UBase_t PIN2;
        volatile UBase_t PIN3;
        volatile UBase_t PIN4;
        volatile UBase_t PIN5;
        volatile UBase_t PIN6;
        volatile UBase_t PIN7;
        volatile UBase_t PIN8;
        volatile UBase_t PIN9;
        volatile UBase_t PIN10;
        volatile UBase_t PIN11;
        volatile UBase_t PIN12;
        volatile UBase_t PIN13;
        volatile UBase_t PIN14;
        volatile UBase_t PIN15;
        volatile UBase_t PIN16;
        volatile UBase_t PIN17;
        volatile UBase_t PIN18;
        volatile UBase_t PIN19;
        volatile UBase_t PIN20;
        volatile UBase_t PIN21;
        volatile UBase_t PIN22;
        volatile UBase_t PIN23;
        volatile UBase_t PIN24;
        volatile UBase_t PIN25;
        volatile UBase_t PIN26;
        volatile UBase_t PIN27;
        volatile UBase_t PIN28;
        volatile UBase_t PIN29;
        volatile UBase_t PIN30;
        volatile UBase_t PIN31;
} BITBANDING_PINES32_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTREGISTER_BITBANDING_H_ */
