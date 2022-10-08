/**
 *
 * @file SYSCTL_RegisterDefines_DCGC.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_DCGC_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_DCGC_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************40 DCGCWD *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCWD_R_WDT0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCWD_R_WDT0_BIT    (0UL)
#define SYSCTL_DCGCWD_R_WDT0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWD_R_WDT0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCWD_WDT0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCWD_WDT0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWD_WDT0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWD_R_WDT1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_DCGCWD_R_WDT1_BIT    (1UL)
#define SYSCTL_DCGCWD_R_WDT1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWD_R_WDT1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_DCGCWD_WDT1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCWD_WDT1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWD_WDT1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************41 DCGCTIMER *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCTIMER_R_TIMER0_BIT    (0UL)
#define SYSCTL_DCGCTIMER_R_TIMER0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_R_TIMER0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCTIMER_TIMER0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCTIMER_TIMER0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_TIMER0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_DCGCTIMER_R_TIMER1_BIT    (1UL)
#define SYSCTL_DCGCTIMER_R_TIMER1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_R_TIMER1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_DCGCTIMER_TIMER1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCTIMER_TIMER1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_TIMER1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER2_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_DCGCTIMER_R_TIMER2_BIT    (2UL)
#define SYSCTL_DCGCTIMER_R_TIMER2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_R_TIMER2_ENA    ((UBase_t) 0x00000004UL)

#define SYSCTL_DCGCTIMER_TIMER2_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCTIMER_TIMER2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_TIMER2_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER3_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_DCGCTIMER_R_TIMER3_BIT    (3UL)
#define SYSCTL_DCGCTIMER_R_TIMER3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_R_TIMER3_ENA    ((UBase_t) 0x00000008UL)

#define SYSCTL_DCGCTIMER_TIMER3_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCTIMER_TIMER3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_TIMER3_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER4_MASK    ((UBase_t) 0x00000010UL)
#define SYSCTL_DCGCTIMER_R_TIMER4_BIT    (4UL)
#define SYSCTL_DCGCTIMER_R_TIMER4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_R_TIMER4_ENA    ((UBase_t) 0x00000010UL)

#define SYSCTL_DCGCTIMER_TIMER4_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCTIMER_TIMER4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_TIMER4_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER5_MASK    ((UBase_t) 0x00000020UL)
#define SYSCTL_DCGCTIMER_R_TIMER5_BIT    (5UL)
#define SYSCTL_DCGCTIMER_R_TIMER5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_R_TIMER5_ENA    ((UBase_t) 0x00000020UL)

#define SYSCTL_DCGCTIMER_TIMER5_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCTIMER_TIMER5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_TIMER5_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER6_MASK    ((UBase_t) 0x00000040UL)
#define SYSCTL_DCGCTIMER_R_TIMER6_BIT    (6UL)
#define SYSCTL_DCGCTIMER_R_TIMER6_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_R_TIMER6_ENA    ((UBase_t) 0x00000040UL)

#define SYSCTL_DCGCTIMER_TIMER6_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCTIMER_TIMER6_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_TIMER6_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCTIMER_R_TIMER7_MASK    ((UBase_t) 0x00000080UL)
#define SYSCTL_DCGCTIMER_R_TIMER7_BIT    (7UL)
#define SYSCTL_DCGCTIMER_R_TIMER7_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_R_TIMER7_ENA    ((UBase_t) 0x00000080UL)

#define SYSCTL_DCGCTIMER_TIMER7_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCTIMER_TIMER7_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCTIMER_TIMER7_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************42 DCGCGPIO *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOA_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_R_GPIOA_BIT    (0UL)
#define SYSCTL_DCGCGPIO_R_GPIOA_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOA_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCGPIO_GPIOA_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOA_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOA_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOB_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_DCGCGPIO_R_GPIOB_BIT    (1UL)
#define SYSCTL_DCGCGPIO_R_GPIOB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOB_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_DCGCGPIO_GPIOB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOB_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOC_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_DCGCGPIO_R_GPIOC_BIT    (2UL)
#define SYSCTL_DCGCGPIO_R_GPIOC_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOC_ENA    ((UBase_t) 0x00000004UL)

#define SYSCTL_DCGCGPIO_GPIOC_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOC_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOD_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_DCGCGPIO_R_GPIOD_BIT    (3UL)
#define SYSCTL_DCGCGPIO_R_GPIOD_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOD_ENA    ((UBase_t) 0x00000008UL)

#define SYSCTL_DCGCGPIO_GPIOD_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOD_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOD_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOE_MASK    ((UBase_t) 0x00000010UL)
#define SYSCTL_DCGCGPIO_R_GPIOE_BIT    (4UL)
#define SYSCTL_DCGCGPIO_R_GPIOE_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOE_ENA    ((UBase_t) 0x00000010UL)

#define SYSCTL_DCGCGPIO_GPIOE_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOE_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOF_MASK    ((UBase_t) 0x00000020UL)
#define SYSCTL_DCGCGPIO_R_GPIOF_BIT    (5UL)
#define SYSCTL_DCGCGPIO_R_GPIOF_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOF_ENA    ((UBase_t) 0x00000020UL)

#define SYSCTL_DCGCGPIO_GPIOF_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOF_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOF_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOG_MASK    ((UBase_t) 0x00000040UL)
#define SYSCTL_DCGCGPIO_R_GPIOG_BIT    (6UL)
#define SYSCTL_DCGCGPIO_R_GPIOG_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOG_ENA    ((UBase_t) 0x00000040UL)

#define SYSCTL_DCGCGPIO_GPIOG_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOG_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOG_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOG_MASK    ((UBase_t) 0x00000040UL)
#define SYSCTL_DCGCGPIO_R_GPIOG_BIT    (6UL)
#define SYSCTL_DCGCGPIO_R_GPIOG_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOG_ENA    ((UBase_t) 0x00000040UL)

#define SYSCTL_DCGCGPIO_GPIOG_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOG_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOG_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOH_MASK    ((UBase_t) 0x00000080UL)
#define SYSCTL_DCGCGPIO_R_GPIOH_BIT    (7UL)
#define SYSCTL_DCGCGPIO_R_GPIOH_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOH_ENA    ((UBase_t) 0x00000080UL)

#define SYSCTL_DCGCGPIO_GPIOH_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOH_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOH_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOJ_MASK    ((UBase_t) 0x00000100UL)
#define SYSCTL_DCGCGPIO_R_GPIOJ_BIT    (8UL)
#define SYSCTL_DCGCGPIO_R_GPIOJ_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOJ_ENA    ((UBase_t) 0x00000100UL)

#define SYSCTL_DCGCGPIO_GPIOJ_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOJ_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOJ_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOK_MASK    ((UBase_t) 0x00000200UL)
#define SYSCTL_DCGCGPIO_R_GPIOK_BIT    (9UL)
#define SYSCTL_DCGCGPIO_R_GPIOK_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOK_ENA    ((UBase_t) 0x00000200UL)

#define SYSCTL_DCGCGPIO_GPIOK_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOK_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOK_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOL_MASK    ((UBase_t) 0x00000400UL)
#define SYSCTL_DCGCGPIO_R_GPIOL_BIT    (10UL)
#define SYSCTL_DCGCGPIO_R_GPIOL_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOL_ENA    ((UBase_t) 0x00000400UL)

#define SYSCTL_DCGCGPIO_GPIOL_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOL_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOL_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOM_MASK    ((UBase_t) 0x00000800UL)
#define SYSCTL_DCGCGPIO_R_GPIOM_BIT    (11UL)
#define SYSCTL_DCGCGPIO_R_GPIOM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOM_ENA    ((UBase_t) 0x00000800UL)

#define SYSCTL_DCGCGPIO_GPIOM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPION_MASK    ((UBase_t) 0x00001000UL)
#define SYSCTL_DCGCGPIO_R_GPION_BIT    (12UL)
#define SYSCTL_DCGCGPIO_R_GPION_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPION_ENA    ((UBase_t) 0x00001000UL)

#define SYSCTL_DCGCGPIO_GPION_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPION_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPION_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOP_MASK    ((UBase_t) 0x00002000UL)
#define SYSCTL_DCGCGPIO_R_GPIOP_BIT    (13UL)
#define SYSCTL_DCGCGPIO_R_GPIOP_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOP_ENA    ((UBase_t) 0x00002000UL)

#define SYSCTL_DCGCGPIO_GPIOP_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOP_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOP_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCGPIO_R_GPIOQ_MASK    ((UBase_t) 0x00004000UL)
#define SYSCTL_DCGCGPIO_R_GPIOQ_BIT    (14UL)
#define SYSCTL_DCGCGPIO_R_GPIOQ_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_R_GPIOQ_ENA    ((UBase_t) 0x00004000UL)

#define SYSCTL_DCGCGPIO_GPIOQ_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCGPIO_GPIOQ_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCGPIO_GPIOQ_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************43 DCGCDMA *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCDMA_R_UDMA_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCDMA_R_UDMA_BIT    (0UL)
#define SYSCTL_DCGCDMA_R_UDMA_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCDMA_R_UDMA_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCDMA_UDMA_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCDMA_UDMA_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCDMA_UDMA_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************44 DCGCEPI *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCEPI_R_EPI0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCEPI_R_EPI0_BIT    (0UL)
#define SYSCTL_DCGCEPI_R_EPI0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCEPI_R_EPI0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCEPI_EPI0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCEPI_EPI0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCEPI_EPI0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************45 DCGCHIB *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCHIB_R_HIB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCHIB_R_HIB_BIT    (0UL)
#define SYSCTL_DCGCHIB_R_HIB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCHIB_R_HIB_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCHIB_HIB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCHIB_HIB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCHIB_HIB_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************46 DCGCUART *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCUART_R_UART0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCUART_R_UART0_BIT    (0UL)
#define SYSCTL_DCGCUART_R_UART0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_R_UART0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCUART_UART0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCUART_UART0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_UART0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_DCGCUART_R_UART1_BIT    (1UL)
#define SYSCTL_DCGCUART_R_UART1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_R_UART1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_DCGCUART_UART1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCUART_UART1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_UART1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART2_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_DCGCUART_R_UART2_BIT    (2UL)
#define SYSCTL_DCGCUART_R_UART2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_R_UART2_ENA    ((UBase_t) 0x00000004UL)

#define SYSCTL_DCGCUART_UART2_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCUART_UART2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_UART2_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART3_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_DCGCUART_R_UART3_BIT    (3UL)
#define SYSCTL_DCGCUART_R_UART3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_R_UART3_ENA    ((UBase_t) 0x00000008UL)

#define SYSCTL_DCGCUART_UART3_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCUART_UART3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_UART3_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART4_MASK    ((UBase_t) 0x00000010UL)
#define SYSCTL_DCGCUART_R_UART4_BIT    (4UL)
#define SYSCTL_DCGCUART_R_UART4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_R_UART4_ENA    ((UBase_t) 0x00000010UL)

#define SYSCTL_DCGCUART_UART4_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCUART_UART4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_UART4_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART5_MASK    ((UBase_t) 0x00000020UL)
#define SYSCTL_DCGCUART_R_UART5_BIT    (5UL)
#define SYSCTL_DCGCUART_R_UART5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_R_UART5_ENA    ((UBase_t) 0x00000020UL)

#define SYSCTL_DCGCUART_UART5_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCUART_UART5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_UART5_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART6_MASK    ((UBase_t) 0x00000040UL)
#define SYSCTL_DCGCUART_R_UART6_BIT    (6UL)
#define SYSCTL_DCGCUART_R_UART6_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_R_UART6_ENA    ((UBase_t) 0x00000040UL)

#define SYSCTL_DCGCUART_UART6_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCUART_UART6_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_UART6_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCUART_R_UART7_MASK    ((UBase_t) 0x00000080UL)
#define SYSCTL_DCGCUART_R_UART7_BIT    (7UL)
#define SYSCTL_DCGCUART_R_UART7_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_R_UART7_ENA    ((UBase_t) 0x00000080UL)

#define SYSCTL_DCGCUART_UART7_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCUART_UART7_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUART_UART7_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************47 DCGCSSI *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCSSI_R_SSI0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCSSI_R_SSI0_BIT    (0UL)
#define SYSCTL_DCGCSSI_R_SSI0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCSSI_R_SSI0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCSSI_SSI0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCSSI_SSI0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCSSI_SSI0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCSSI_R_SSI1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_DCGCSSI_R_SSI1_BIT    (1UL)
#define SYSCTL_DCGCSSI_R_SSI1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCSSI_R_SSI1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_DCGCSSI_SSI1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCSSI_SSI1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCSSI_SSI1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCSSI_R_SSI2_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_DCGCSSI_R_SSI2_BIT    (2UL)
#define SYSCTL_DCGCSSI_R_SSI2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCSSI_R_SSI2_ENA    ((UBase_t) 0x00000004UL)

#define SYSCTL_DCGCSSI_SSI2_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCSSI_SSI2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCSSI_SSI2_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCSSI_R_SSI3_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_DCGCSSI_R_SSI3_BIT    (3UL)
#define SYSCTL_DCGCSSI_R_SSI3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCSSI_R_SSI3_ENA    ((UBase_t) 0x00000008UL)

#define SYSCTL_DCGCSSI_SSI3_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCSSI_SSI3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCSSI_SSI3_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************48 DCGCI2C *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCI2C_R_I2C0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCI2C_R_I2C0_BIT    (0UL)
#define SYSCTL_DCGCI2C_R_I2C0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_R_I2C0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCI2C_I2C0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCI2C_I2C0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_I2C0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_DCGCI2C_R_I2C1_BIT    (1UL)
#define SYSCTL_DCGCI2C_R_I2C1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_R_I2C1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_DCGCI2C_I2C1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCI2C_I2C1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_I2C1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C2_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_DCGCI2C_R_I2C2_BIT    (2UL)
#define SYSCTL_DCGCI2C_R_I2C2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_R_I2C2_ENA    ((UBase_t) 0x00000004UL)

#define SYSCTL_DCGCI2C_I2C2_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCI2C_I2C2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_I2C2_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C3_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_DCGCI2C_R_I2C3_BIT    (3UL)
#define SYSCTL_DCGCI2C_R_I2C3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_R_I2C3_ENA    ((UBase_t) 0x00000008UL)

#define SYSCTL_DCGCI2C_I2C3_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCI2C_I2C3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_I2C3_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C4_MASK    ((UBase_t) 0x00000010UL)
#define SYSCTL_DCGCI2C_R_I2C4_BIT    (4UL)
#define SYSCTL_DCGCI2C_R_I2C4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_R_I2C4_ENA    ((UBase_t) 0x00000010UL)

#define SYSCTL_DCGCI2C_I2C4_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCI2C_I2C4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_I2C4_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C5_MASK    ((UBase_t) 0x00000020UL)
#define SYSCTL_DCGCI2C_R_I2C5_BIT    (5UL)
#define SYSCTL_DCGCI2C_R_I2C5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_R_I2C5_ENA    ((UBase_t) 0x00000020UL)

#define SYSCTL_DCGCI2C_I2C5_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCI2C_I2C5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_I2C5_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C6_MASK    ((UBase_t) 0x00000040UL)
#define SYSCTL_DCGCI2C_R_I2C6_BIT    (6UL)
#define SYSCTL_DCGCI2C_R_I2C6_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_R_I2C6_ENA    ((UBase_t) 0x00000040UL)

#define SYSCTL_DCGCI2C_I2C6_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCI2C_I2C6_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_I2C6_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C7_MASK    ((UBase_t) 0x00000080UL)
#define SYSCTL_DCGCI2C_R_I2C7_BIT    (7UL)
#define SYSCTL_DCGCI2C_R_I2C7_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_R_I2C7_ENA    ((UBase_t) 0x00000080UL)

#define SYSCTL_DCGCI2C_I2C7_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCI2C_I2C7_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_I2C7_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C8_MASK    ((UBase_t) 0x00000100UL)
#define SYSCTL_DCGCI2C_R_I2C8_BIT    (8UL)
#define SYSCTL_DCGCI2C_R_I2C8_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_R_I2C8_ENA    ((UBase_t) 0x00000100UL)

#define SYSCTL_DCGCI2C_I2C8_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCI2C_I2C8_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_I2C8_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCI2C_R_I2C9_MASK    ((UBase_t) 0x00000200UL)
#define SYSCTL_DCGCI2C_R_I2C9_BIT    (9UL)
#define SYSCTL_DCGCI2C_R_I2C9_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_R_I2C9_ENA    ((UBase_t) 0x00000200UL)

#define SYSCTL_DCGCI2C_I2C9_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCI2C_I2C9_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCI2C_I2C9_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************49 DCGCUSB *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCUSB_R_USB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCUSB_R_USB_BIT    (0UL)
#define SYSCTL_DCGCUSB_R_USB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUSB_R_USB_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCUSB_USB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCUSB_USB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCUSB_USB_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************50 DCGCEPHY *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCEPHY_R_EPHY_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCEPHY_R_EPHY_BIT    (0UL)
#define SYSCTL_DCGCEPHY_R_EPHY_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCEPHY_R_EPHY_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCEPHY_EPHY_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCEPHY_EPHY_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCEPHY_EPHY_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************51 DCGCCAN *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCCAN_R_CAN0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCCAN_R_CAN0_BIT    (0UL)
#define SYSCTL_DCGCCAN_R_CAN0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCCAN_R_CAN0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCCAN_CAN0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCCAN_CAN0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCCAN_CAN0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCCAN_R_CAN1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_DCGCCAN_R_CAN1_BIT    (1UL)
#define SYSCTL_DCGCCAN_R_CAN1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCCAN_R_CAN1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_DCGCCAN_CAN1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCCAN_CAN1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCCAN_CAN1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************52 DCGCADC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCADC_R_ADC0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCADC_R_ADC0_BIT    (0UL)
#define SYSCTL_DCGCADC_R_ADC0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCADC_R_ADC0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCADC_ADC0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCADC_ADC0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCADC_ADC0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCADC_R_ADC1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_DCGCADC_R_ADC1_BIT    (1UL)
#define SYSCTL_DCGCADC_R_ADC1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCADC_R_ADC1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_DCGCADC_ADC1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCADC_ADC1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCADC_ADC1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************53 DCGCACMP *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCACMP_R_ACMP_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCACMP_R_ACMP_BIT    (0UL)
#define SYSCTL_DCGCACMP_R_ACMP_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCACMP_R_ACMP_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCACMP_ACMP_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCACMP_ACMP_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCACMP_ACMP_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/****************************************************************************************
************************************54 DCGCPWM *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCPWM_R_PWM0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCPWM_R_PWM0_BIT    (0UL)
#define SYSCTL_DCGCPWM_R_PWM0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCPWM_R_PWM0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCPWM_PWM0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCPWM_PWM0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCPWM_PWM0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCPWM_R_PWM1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_DCGCPWM_R_PWM1_BIT    (1UL)
#define SYSCTL_DCGCPWM_R_PWM1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCPWM_R_PWM1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_DCGCPWM_PWM1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCPWM_PWM1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCPWM_PWM1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************55 DCGCQEI *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCQEI_R_QEI0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCQEI_R_QEI0_BIT    (0UL)
#define SYSCTL_DCGCQEI_R_QEI0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCQEI_R_QEI0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCQEI_QEI0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCQEI_QEI0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCQEI_QEI0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCQEI_R_QEI1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_DCGCQEI_R_QEI1_BIT    (1UL)
#define SYSCTL_DCGCQEI_R_QEI1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCQEI_R_QEI1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_DCGCQEI_QEI1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCQEI_QEI1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCQEI_QEI1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************56 DCGCLPC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCLPC_R_LPC_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCLPC_R_LPC_BIT    (0UL)
#define SYSCTL_DCGCLPC_R_LPC_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCLPC_R_LPC_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCLPC_LPC_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCLPC_LPC_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCLPC_LPC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************57 DCGCPECI *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCPECI_R_PECI_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCPECI_R_PECI_BIT    (0UL)
#define SYSCTL_DCGCPECI_R_PECI_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCPECI_R_PECI_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCPECI_PECI_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCPECI_PECI_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCPECI_PECI_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************58 DCGCFAN *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCFAN_R_FAN_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCFAN_R_FAN_BIT    (0UL)
#define SYSCTL_DCGCFAN_R_FAN_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCFAN_R_FAN_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCFAN_FAN_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCFAN_FAN_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCFAN_FAN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************59 DCGCEEPROM *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCEEPROM_R_EEPROM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCEEPROM_R_EEPROM_BIT    (0UL)
#define SYSCTL_DCGCEEPROM_R_EEPROM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCEEPROM_R_EEPROM_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCEEPROM_EEPROM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCEEPROM_EEPROM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCEEPROM_EEPROM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/**********************************************************************************
************************************60 DCGCWTIMER *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER0_BIT    (0UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCWTIMER_WTIMER0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCWTIMER_WTIMER0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWTIMER_WTIMER0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER1_BIT    (1UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_DCGCWTIMER_WTIMER1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCWTIMER_WTIMER1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWTIMER_WTIMER1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER2_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER2_BIT    (2UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER2_ENA    ((UBase_t) 0x00000004UL)

#define SYSCTL_DCGCWTIMER_WTIMER2_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCWTIMER_WTIMER2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWTIMER_WTIMER2_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER3_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER3_BIT    (3UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER3_ENA    ((UBase_t) 0x00000008UL)

#define SYSCTL_DCGCWTIMER_WTIMER3_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCWTIMER_WTIMER3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWTIMER_WTIMER3_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER4_MASK    ((UBase_t) 0x00000010UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER4_BIT    (4UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER4_ENA    ((UBase_t) 0x00000010UL)

#define SYSCTL_DCGCWTIMER_WTIMER4_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCWTIMER_WTIMER4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWTIMER_WTIMER4_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DCGCWTIMER_R_WTIMER5_MASK    ((UBase_t) 0x00000020UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER5_BIT    (5UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWTIMER_R_WTIMER5_ENA    ((UBase_t) 0x00000020UL)

#define SYSCTL_DCGCWTIMER_WTIMER5_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCWTIMER_WTIMER5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCWTIMER_WTIMER5_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************61 DCGCRTS *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCRTS_R_RTS_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCRTS_R_RTS_BIT    (0UL)
#define SYSCTL_DCGCRTS_R_RTS_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCRTS_R_RTS_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCRTS_RTS_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCRTS_RTS_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCRTS_RTS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************62 DCGCCCM *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCCCM_R_CCM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCCCM_R_CCM_BIT    (0UL)
#define SYSCTL_DCGCCCM_R_CCM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCCCM_R_CCM_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCCCM_CCM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCCCM_CCM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCCCM_CCM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************63 DCGCLCD *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCLCD_R_LCD_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCLCD_R_LCD_BIT    (0UL)
#define SYSCTL_DCGCLCD_R_LCD_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCLCD_R_LCD_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCLCD_LCD_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCLCD_LCD_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCLCD_LCD_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************64 DCGCOWIRE *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCOWIRE_R_OWIRE_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCOWIRE_R_OWIRE_BIT    (0UL)
#define SYSCTL_DCGCOWIRE_R_OWIRE_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCOWIRE_R_OWIRE_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCOWIRE_OWIRE_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCOWIRE_OWIRE_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCOWIRE_OWIRE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************65 DCGCEMAC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCEMAC_R_EMAC_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCEMAC_R_EMAC_BIT    (0UL)
#define SYSCTL_DCGCEMAC_R_EMAC_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCEMAC_R_EMAC_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCEMAC_EMAC_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCEMAC_EMAC_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCEMAC_EMAC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************66 DCGCPRB *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCPRB_R_PRB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCPRB_R_PRB_BIT    (0UL)
#define SYSCTL_DCGCPRB_R_PRB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCPRB_R_PRB_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCPRB_PRB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCPRB_PRB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCPRB_PRB_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************67 DCGCHIM *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DCGCHIM_R_HIM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCHIM_R_HIM_BIT    (0UL)
#define SYSCTL_DCGCHIM_R_HIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCHIM_R_HIM_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_DCGCHIM_HIM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DCGCHIM_HIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DCGCHIM_HIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_DCGC_H_ */
