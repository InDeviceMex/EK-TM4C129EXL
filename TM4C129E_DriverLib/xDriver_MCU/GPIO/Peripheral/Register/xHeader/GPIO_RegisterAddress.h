/**
 *
 * @file GPIO_RegisterAddress.h
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
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERADDRESS_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

#define GPIO_BASE    ((UBase_t) 0x40058000UL)
#define GPIOA_BASE    ((UBase_t) 0x40058000UL)
#define GPIOB_BASE    ((UBase_t) 0x40059000UL)
#define GPIOC_BASE    ((UBase_t) 0x4005A000UL)
#define GPIOD_BASE    ((UBase_t) 0x4005B000UL)
#define GPIOE_BASE    ((UBase_t) 0x4005C000UL)
#define GPIOF_BASE    ((UBase_t) 0x4005D000UL)
#define GPIOG_BASE    ((UBase_t) 0x4005E000UL)
#define GPIOH_BASE    ((UBase_t) 0x4005F000UL)
#define GPIOJ_BASE    ((UBase_t) 0x40060000UL)
#define GPIOK_BASE    ((UBase_t) 0x40061000UL)
#define GPIOL_BASE    ((UBase_t) 0x40062000UL)
#define GPIOM_BASE    ((UBase_t) 0x40063000UL)
#define GPION_BASE    ((UBase_t) 0x40064000UL)
#define GPIOP_BASE    ((UBase_t) 0x40065000UL)
#define GPIOQ_BASE    ((UBase_t) 0x40066000UL)

#define GPIO_OFFSET    ((UBase_t) 0x00058000UL)
#define GPIOA_OFFSET    ((UBase_t) 0x00058000UL)
#define GPIOB_OFFSET    ((UBase_t) 0x00059000UL)
#define GPIOC_OFFSET    ((UBase_t) 0x0005A000UL)
#define GPIOD_OFFSET    ((UBase_t) 0x0005B000UL)
#define GPIOE_OFFSET    ((UBase_t) 0x0005C000UL)
#define GPIOF_OFFSET    ((UBase_t) 0x0005D000UL)
#define GPIOG_OFFSET    ((UBase_t) 0x0005E000UL)
#define GPIOH_OFFSET    ((UBase_t) 0x0005F000UL)
#define GPIOJ_OFFSET    ((UBase_t) 0x00060000UL)
#define GPIOK_OFFSET    ((UBase_t) 0x00061000UL)
#define GPIOL_OFFSET    ((UBase_t) 0x00062000UL)
#define GPIOM_OFFSET    ((UBase_t) 0x00063000UL)
#define GPION_OFFSET    ((UBase_t) 0x00064000UL)
#define GPIOP_OFFSET    ((UBase_t) 0x00065000UL)
#define GPIOQ_OFFSET    ((UBase_t) 0x00066000UL)

#define GPIO_BITBANDING_BASE    ((UBase_t) 0x42000000UL)

#define GPIO_DATA_MASK_OFFSET    ((UBase_t) 0x000UL)
#define GPIO_DATA_PINMASK0_OFFSET    ((UBase_t) 0x004UL)
#define GPIO_DATA_PINMASK1_OFFSET    ((UBase_t) 0x008UL)
#define GPIO_DATA_PINMASK2_OFFSET    ((UBase_t) 0x010UL)
#define GPIO_DATA_PINMASK3_OFFSET    ((UBase_t) 0x020UL)
#define GPIO_DATA_PINMASK4_OFFSET    ((UBase_t) 0x040UL)
#define GPIO_DATA_PINMASK5_OFFSET    ((UBase_t) 0x080UL)
#define GPIO_DATA_PINMASK6_OFFSET    ((UBase_t) 0x100UL)
#define GPIO_DATA_PINMASK7_OFFSET    ((UBase_t) 0x200UL)
#define GPIO_DATA_OFFSET    ((UBase_t) 0x3FCUL)
#define GPIO_DIR_OFFSET    ((UBase_t) 0x400UL)
#define GPIO_IS_OFFSET    ((UBase_t) 0x404UL)
#define GPIO_IBE_OFFSET    ((UBase_t) 0x408UL)
#define GPIO_IEV_OFFSET    ((UBase_t) 0x40CUL)
#define GPIO_IM_OFFSET    ((UBase_t) 0x410UL)
#define GPIO_RIS_OFFSET    ((UBase_t) 0x414UL)
#define GPIO_MIS_OFFSET    ((UBase_t) 0x418UL)
#define GPIO_ICR_OFFSET    ((UBase_t) 0x41CUL)
#define GPIO_AFSEL_OFFSET    ((UBase_t) 0x420UL)
#define GPIO_DRR_OFFSET    ((UBase_t) 0x500UL)
#define GPIO_DR2R_OFFSET    ((UBase_t) 0x500UL)
#define GPIO_DR4R_OFFSET    ((UBase_t) 0x504UL)
#define GPIO_DR8R_OFFSET    ((UBase_t) 0x508UL)
#define GPIO_ODR_OFFSET    ((UBase_t) 0x50CUL)
#define GPIO_PUR_OFFSET    ((UBase_t) 0x510UL)
#define GPIO_PDR_OFFSET    ((UBase_t) 0x514UL)
#define GPIO_SLR_OFFSET    ((UBase_t) 0x518UL)
#define GPIO_DEN_OFFSET    ((UBase_t) 0x51CUL)
#define GPIO_LOCK_OFFSET    ((UBase_t) 0x520UL)
#define GPIO_CR_OFFSET    ((UBase_t) 0x524UL)
#define GPIO_AMSEL_OFFSET    ((UBase_t) 0x528UL)
#define GPIO_PCTL_OFFSET    ((UBase_t) 0x52CUL)
#define GPIO_ADCCTL_OFFSET    ((UBase_t) 0x530UL)
#define GPIO_DMACTL_OFFSET    ((UBase_t) 0x534UL)
#define GPIO_SI_OFFSET    ((UBase_t) 0x538UL)
#define GPIO_DR12R_OFFSET    ((UBase_t) 0x53CUL)
#define GPIO_WAKEPEN_OFFSET    ((UBase_t) 0x540UL)
#define GPIO_WAKELVL_OFFSET    ((UBase_t) 0x544UL)
#define GPIO_WAKESTAT_OFFSET    ((UBase_t) 0x548UL)
#define GPIO_PP_OFFSET    ((UBase_t) 0xFC0UL)
#define GPIO_PC_OFFSET    ((UBase_t) 0xFC4UL)
#define GPIO_PeriphID4_OFFSET    ((UBase_t) 0xFD0UL)
#define GPIO_PeriphID5_OFFSET    ((UBase_t) 0xFD4UL)
#define GPIO_PeriphID6_OFFSET    ((UBase_t) 0xFD8UL)
#define GPIO_PeriphID7_OFFSET    ((UBase_t) 0xFDCUL)
#define GPIO_PeriphID0_OFFSET    ((UBase_t) 0xFE0UL)
#define GPIO_PeriphID1_OFFSET    ((UBase_t) 0xFE4UL)
#define GPIO_PeriphID2_OFFSET    ((UBase_t) 0xFE8UL)
#define GPIO_PeriphID3_OFFSET    ((UBase_t) 0xFECUL)
#define GPIO_PCellID0_OFFSET    ((UBase_t) 0xFF0UL)
#define GPIO_PCellID1_OFFSET    ((UBase_t) 0xFF4UL)
#define GPIO_PCellID2_OFFSET    ((UBase_t) 0xFF8UL)
#define GPIO_PCellID3_OFFSET    ((UBase_t) 0xFFCUL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERADDRESS_H_ */
