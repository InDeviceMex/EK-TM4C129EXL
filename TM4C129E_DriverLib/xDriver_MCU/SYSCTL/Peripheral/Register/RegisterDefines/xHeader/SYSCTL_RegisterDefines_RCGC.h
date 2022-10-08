/**
 *
 * @file SYSCTL_RegisterDefines_RCGC.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RCGC_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RCGC_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************40 RCGCWD *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCWD_R_WDT0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCWD_R_WDT0_BIT    (0UL)
#define SYSCTL_RCGCWD_R_WDT0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWD_R_WDT0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCWD_WDT0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCWD_WDT0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWD_WDT0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWD_R_WDT1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_RCGCWD_R_WDT1_BIT    (1UL)
#define SYSCTL_RCGCWD_R_WDT1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWD_R_WDT1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_RCGCWD_WDT1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCWD_WDT1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWD_WDT1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************41 RCGCTIMER *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCTIMER_R_TIMER0_BIT    (0UL)
#define SYSCTL_RCGCTIMER_R_TIMER0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_R_TIMER0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCTIMER_TIMER0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCTIMER_TIMER0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_TIMER0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_RCGCTIMER_R_TIMER1_BIT    (1UL)
#define SYSCTL_RCGCTIMER_R_TIMER1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_R_TIMER1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_RCGCTIMER_TIMER1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCTIMER_TIMER1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_TIMER1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER2_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_RCGCTIMER_R_TIMER2_BIT    (2UL)
#define SYSCTL_RCGCTIMER_R_TIMER2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_R_TIMER2_ENA    ((UBase_t) 0x00000004UL)

#define SYSCTL_RCGCTIMER_TIMER2_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCTIMER_TIMER2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_TIMER2_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER3_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_RCGCTIMER_R_TIMER3_BIT    (3UL)
#define SYSCTL_RCGCTIMER_R_TIMER3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_R_TIMER3_ENA    ((UBase_t) 0x00000008UL)

#define SYSCTL_RCGCTIMER_TIMER3_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCTIMER_TIMER3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_TIMER3_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER4_MASK    ((UBase_t) 0x00000010UL)
#define SYSCTL_RCGCTIMER_R_TIMER4_BIT    (4UL)
#define SYSCTL_RCGCTIMER_R_TIMER4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_R_TIMER4_ENA    ((UBase_t) 0x00000010UL)

#define SYSCTL_RCGCTIMER_TIMER4_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCTIMER_TIMER4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_TIMER4_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER5_MASK    ((UBase_t) 0x00000020UL)
#define SYSCTL_RCGCTIMER_R_TIMER5_BIT    (5UL)
#define SYSCTL_RCGCTIMER_R_TIMER5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_R_TIMER5_ENA    ((UBase_t) 0x00000020UL)

#define SYSCTL_RCGCTIMER_TIMER5_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCTIMER_TIMER5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_TIMER5_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER6_MASK    ((UBase_t) 0x00000040UL)
#define SYSCTL_RCGCTIMER_R_TIMER6_BIT    (6UL)
#define SYSCTL_RCGCTIMER_R_TIMER6_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_R_TIMER6_ENA    ((UBase_t) 0x00000040UL)

#define SYSCTL_RCGCTIMER_TIMER6_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCTIMER_TIMER6_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_TIMER6_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCTIMER_R_TIMER7_MASK    ((UBase_t) 0x00000080UL)
#define SYSCTL_RCGCTIMER_R_TIMER7_BIT    (7UL)
#define SYSCTL_RCGCTIMER_R_TIMER7_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_R_TIMER7_ENA    ((UBase_t) 0x00000080UL)

#define SYSCTL_RCGCTIMER_TIMER7_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCTIMER_TIMER7_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCTIMER_TIMER7_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************42 RCGCGPIO *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOA_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_R_GPIOA_BIT    (0UL)
#define SYSCTL_RCGCGPIO_R_GPIOA_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOA_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCGPIO_GPIOA_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOA_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOA_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOB_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_RCGCGPIO_R_GPIOB_BIT    (1UL)
#define SYSCTL_RCGCGPIO_R_GPIOB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOB_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_RCGCGPIO_GPIOB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOB_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOC_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_RCGCGPIO_R_GPIOC_BIT    (2UL)
#define SYSCTL_RCGCGPIO_R_GPIOC_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOC_ENA    ((UBase_t) 0x00000004UL)

#define SYSCTL_RCGCGPIO_GPIOC_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOC_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOD_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_RCGCGPIO_R_GPIOD_BIT    (3UL)
#define SYSCTL_RCGCGPIO_R_GPIOD_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOD_ENA    ((UBase_t) 0x00000008UL)

#define SYSCTL_RCGCGPIO_GPIOD_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOD_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOD_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOE_MASK    ((UBase_t) 0x00000010UL)
#define SYSCTL_RCGCGPIO_R_GPIOE_BIT    (4UL)
#define SYSCTL_RCGCGPIO_R_GPIOE_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOE_ENA    ((UBase_t) 0x00000010UL)

#define SYSCTL_RCGCGPIO_GPIOE_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOE_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOF_MASK    ((UBase_t) 0x00000020UL)
#define SYSCTL_RCGCGPIO_R_GPIOF_BIT    (5UL)
#define SYSCTL_RCGCGPIO_R_GPIOF_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOF_ENA    ((UBase_t) 0x00000020UL)

#define SYSCTL_RCGCGPIO_GPIOF_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOF_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOF_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOG_MASK    ((UBase_t) 0x00000040UL)
#define SYSCTL_RCGCGPIO_R_GPIOG_BIT    (6UL)
#define SYSCTL_RCGCGPIO_R_GPIOG_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOG_ENA    ((UBase_t) 0x00000040UL)

#define SYSCTL_RCGCGPIO_GPIOG_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOG_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOG_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOG_MASK    ((UBase_t) 0x00000040UL)
#define SYSCTL_RCGCGPIO_R_GPIOG_BIT    (6UL)
#define SYSCTL_RCGCGPIO_R_GPIOG_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOG_ENA    ((UBase_t) 0x00000040UL)

#define SYSCTL_RCGCGPIO_GPIOG_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOG_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOG_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOH_MASK    ((UBase_t) 0x00000080UL)
#define SYSCTL_RCGCGPIO_R_GPIOH_BIT    (7UL)
#define SYSCTL_RCGCGPIO_R_GPIOH_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOH_ENA    ((UBase_t) 0x00000080UL)

#define SYSCTL_RCGCGPIO_GPIOH_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOH_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOH_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOJ_MASK    ((UBase_t) 0x00000100UL)
#define SYSCTL_RCGCGPIO_R_GPIOJ_BIT    (8UL)
#define SYSCTL_RCGCGPIO_R_GPIOJ_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOJ_ENA    ((UBase_t) 0x00000100UL)

#define SYSCTL_RCGCGPIO_GPIOJ_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOJ_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOJ_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOK_MASK    ((UBase_t) 0x00000200UL)
#define SYSCTL_RCGCGPIO_R_GPIOK_BIT    (9UL)
#define SYSCTL_RCGCGPIO_R_GPIOK_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOK_ENA    ((UBase_t) 0x00000200UL)

#define SYSCTL_RCGCGPIO_GPIOK_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOK_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOK_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOL_MASK    ((UBase_t) 0x00000400UL)
#define SYSCTL_RCGCGPIO_R_GPIOL_BIT    (10UL)
#define SYSCTL_RCGCGPIO_R_GPIOL_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOL_ENA    ((UBase_t) 0x00000400UL)

#define SYSCTL_RCGCGPIO_GPIOL_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOL_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOL_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOM_MASK    ((UBase_t) 0x00000800UL)
#define SYSCTL_RCGCGPIO_R_GPIOM_BIT    (11UL)
#define SYSCTL_RCGCGPIO_R_GPIOM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOM_ENA    ((UBase_t) 0x00000800UL)

#define SYSCTL_RCGCGPIO_GPIOM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPION_MASK    ((UBase_t) 0x00001000UL)
#define SYSCTL_RCGCGPIO_R_GPION_BIT    (12UL)
#define SYSCTL_RCGCGPIO_R_GPION_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPION_ENA    ((UBase_t) 0x00001000UL)

#define SYSCTL_RCGCGPIO_GPION_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPION_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPION_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOP_MASK    ((UBase_t) 0x00002000UL)
#define SYSCTL_RCGCGPIO_R_GPIOP_BIT    (13UL)
#define SYSCTL_RCGCGPIO_R_GPIOP_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOP_ENA    ((UBase_t) 0x00002000UL)

#define SYSCTL_RCGCGPIO_GPIOP_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOP_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOP_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCGPIO_R_GPIOQ_MASK    ((UBase_t) 0x00004000UL)
#define SYSCTL_RCGCGPIO_R_GPIOQ_BIT    (14UL)
#define SYSCTL_RCGCGPIO_R_GPIOQ_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_R_GPIOQ_ENA    ((UBase_t) 0x00004000UL)

#define SYSCTL_RCGCGPIO_GPIOQ_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCGPIO_GPIOQ_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCGPIO_GPIOQ_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************43 RCGCDMA *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCDMA_R_UDMA_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCDMA_R_UDMA_BIT    (0UL)
#define SYSCTL_RCGCDMA_R_UDMA_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCDMA_R_UDMA_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCDMA_UDMA_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCDMA_UDMA_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCDMA_UDMA_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************44 RCGCEPI *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCEPI_R_EPI0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCEPI_R_EPI0_BIT    (0UL)
#define SYSCTL_RCGCEPI_R_EPI0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCEPI_R_EPI0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCEPI_EPI0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCEPI_EPI0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCEPI_EPI0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************45 RCGCHIB *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCHIB_R_HIB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCHIB_R_HIB_BIT    (0UL)
#define SYSCTL_RCGCHIB_R_HIB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCHIB_R_HIB_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCHIB_HIB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCHIB_HIB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCHIB_HIB_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************46 RCGCUART *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCUART_R_UART0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCUART_R_UART0_BIT    (0UL)
#define SYSCTL_RCGCUART_R_UART0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_R_UART0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCUART_UART0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCUART_UART0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_UART0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_RCGCUART_R_UART1_BIT    (1UL)
#define SYSCTL_RCGCUART_R_UART1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_R_UART1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_RCGCUART_UART1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCUART_UART1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_UART1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART2_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_RCGCUART_R_UART2_BIT    (2UL)
#define SYSCTL_RCGCUART_R_UART2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_R_UART2_ENA    ((UBase_t) 0x00000004UL)

#define SYSCTL_RCGCUART_UART2_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCUART_UART2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_UART2_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART3_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_RCGCUART_R_UART3_BIT    (3UL)
#define SYSCTL_RCGCUART_R_UART3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_R_UART3_ENA    ((UBase_t) 0x00000008UL)

#define SYSCTL_RCGCUART_UART3_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCUART_UART3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_UART3_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART4_MASK    ((UBase_t) 0x00000010UL)
#define SYSCTL_RCGCUART_R_UART4_BIT    (4UL)
#define SYSCTL_RCGCUART_R_UART4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_R_UART4_ENA    ((UBase_t) 0x00000010UL)

#define SYSCTL_RCGCUART_UART4_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCUART_UART4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_UART4_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART5_MASK    ((UBase_t) 0x00000020UL)
#define SYSCTL_RCGCUART_R_UART5_BIT    (5UL)
#define SYSCTL_RCGCUART_R_UART5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_R_UART5_ENA    ((UBase_t) 0x00000020UL)

#define SYSCTL_RCGCUART_UART5_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCUART_UART5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_UART5_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART6_MASK    ((UBase_t) 0x00000040UL)
#define SYSCTL_RCGCUART_R_UART6_BIT    (6UL)
#define SYSCTL_RCGCUART_R_UART6_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_R_UART6_ENA    ((UBase_t) 0x00000040UL)

#define SYSCTL_RCGCUART_UART6_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCUART_UART6_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_UART6_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCUART_R_UART7_MASK    ((UBase_t) 0x00000080UL)
#define SYSCTL_RCGCUART_R_UART7_BIT    (7UL)
#define SYSCTL_RCGCUART_R_UART7_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_R_UART7_ENA    ((UBase_t) 0x00000080UL)

#define SYSCTL_RCGCUART_UART7_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCUART_UART7_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUART_UART7_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************47 RCGCSSI *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCSSI_R_SSI0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCSSI_R_SSI0_BIT    (0UL)
#define SYSCTL_RCGCSSI_R_SSI0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCSSI_R_SSI0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCSSI_SSI0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCSSI_SSI0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCSSI_SSI0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCSSI_R_SSI1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_RCGCSSI_R_SSI1_BIT    (1UL)
#define SYSCTL_RCGCSSI_R_SSI1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCSSI_R_SSI1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_RCGCSSI_SSI1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCSSI_SSI1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCSSI_SSI1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCSSI_R_SSI2_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_RCGCSSI_R_SSI2_BIT    (2UL)
#define SYSCTL_RCGCSSI_R_SSI2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCSSI_R_SSI2_ENA    ((UBase_t) 0x00000004UL)

#define SYSCTL_RCGCSSI_SSI2_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCSSI_SSI2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCSSI_SSI2_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCSSI_R_SSI3_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_RCGCSSI_R_SSI3_BIT    (3UL)
#define SYSCTL_RCGCSSI_R_SSI3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCSSI_R_SSI3_ENA    ((UBase_t) 0x00000008UL)

#define SYSCTL_RCGCSSI_SSI3_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCSSI_SSI3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCSSI_SSI3_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************48 RCGCI2C *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCI2C_R_I2C0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCI2C_R_I2C0_BIT    (0UL)
#define SYSCTL_RCGCI2C_R_I2C0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_R_I2C0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCI2C_I2C0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCI2C_I2C0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_I2C0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_RCGCI2C_R_I2C1_BIT    (1UL)
#define SYSCTL_RCGCI2C_R_I2C1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_R_I2C1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_RCGCI2C_I2C1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCI2C_I2C1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_I2C1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C2_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_RCGCI2C_R_I2C2_BIT    (2UL)
#define SYSCTL_RCGCI2C_R_I2C2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_R_I2C2_ENA    ((UBase_t) 0x00000004UL)

#define SYSCTL_RCGCI2C_I2C2_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCI2C_I2C2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_I2C2_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C3_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_RCGCI2C_R_I2C3_BIT    (3UL)
#define SYSCTL_RCGCI2C_R_I2C3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_R_I2C3_ENA    ((UBase_t) 0x00000008UL)

#define SYSCTL_RCGCI2C_I2C3_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCI2C_I2C3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_I2C3_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C4_MASK    ((UBase_t) 0x00000010UL)
#define SYSCTL_RCGCI2C_R_I2C4_BIT    (4UL)
#define SYSCTL_RCGCI2C_R_I2C4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_R_I2C4_ENA    ((UBase_t) 0x00000010UL)

#define SYSCTL_RCGCI2C_I2C4_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCI2C_I2C4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_I2C4_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C5_MASK    ((UBase_t) 0x00000020UL)
#define SYSCTL_RCGCI2C_R_I2C5_BIT    (5UL)
#define SYSCTL_RCGCI2C_R_I2C5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_R_I2C5_ENA    ((UBase_t) 0x00000020UL)

#define SYSCTL_RCGCI2C_I2C5_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCI2C_I2C5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_I2C5_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C6_MASK    ((UBase_t) 0x00000040UL)
#define SYSCTL_RCGCI2C_R_I2C6_BIT    (6UL)
#define SYSCTL_RCGCI2C_R_I2C6_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_R_I2C6_ENA    ((UBase_t) 0x00000040UL)

#define SYSCTL_RCGCI2C_I2C6_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCI2C_I2C6_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_I2C6_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C7_MASK    ((UBase_t) 0x00000080UL)
#define SYSCTL_RCGCI2C_R_I2C7_BIT    (7UL)
#define SYSCTL_RCGCI2C_R_I2C7_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_R_I2C7_ENA    ((UBase_t) 0x00000080UL)

#define SYSCTL_RCGCI2C_I2C7_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCI2C_I2C7_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_I2C7_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C8_MASK    ((UBase_t) 0x00000100UL)
#define SYSCTL_RCGCI2C_R_I2C8_BIT    (8UL)
#define SYSCTL_RCGCI2C_R_I2C8_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_R_I2C8_ENA    ((UBase_t) 0x00000100UL)

#define SYSCTL_RCGCI2C_I2C8_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCI2C_I2C8_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_I2C8_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCI2C_R_I2C9_MASK    ((UBase_t) 0x00000200UL)
#define SYSCTL_RCGCI2C_R_I2C9_BIT    (9UL)
#define SYSCTL_RCGCI2C_R_I2C9_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_R_I2C9_ENA    ((UBase_t) 0x00000200UL)

#define SYSCTL_RCGCI2C_I2C9_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCI2C_I2C9_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCI2C_I2C9_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************49 RCGCUSB *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCUSB_R_USB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCUSB_R_USB_BIT    (0UL)
#define SYSCTL_RCGCUSB_R_USB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUSB_R_USB_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCUSB_USB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCUSB_USB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCUSB_USB_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************50 RCGCEPHY *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCEPHY_R_EPHY_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCEPHY_R_EPHY_BIT    (0UL)
#define SYSCTL_RCGCEPHY_R_EPHY_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCEPHY_R_EPHY_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCEPHY_EPHY_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCEPHY_EPHY_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCEPHY_EPHY_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************51 RCGCCAN *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCCAN_R_CAN0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCCAN_R_CAN0_BIT    (0UL)
#define SYSCTL_RCGCCAN_R_CAN0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCCAN_R_CAN0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCCAN_CAN0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCCAN_CAN0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCCAN_CAN0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCCAN_R_CAN1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_RCGCCAN_R_CAN1_BIT    (1UL)
#define SYSCTL_RCGCCAN_R_CAN1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCCAN_R_CAN1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_RCGCCAN_CAN1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCCAN_CAN1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCCAN_CAN1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************52 RCGCADC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCADC_R_ADC0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCADC_R_ADC0_BIT    (0UL)
#define SYSCTL_RCGCADC_R_ADC0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCADC_R_ADC0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCADC_ADC0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCADC_ADC0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCADC_ADC0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCADC_R_ADC1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_RCGCADC_R_ADC1_BIT    (1UL)
#define SYSCTL_RCGCADC_R_ADC1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCADC_R_ADC1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_RCGCADC_ADC1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCADC_ADC1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCADC_ADC1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************53 RCGCACMP *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCACMP_R_ACMP_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCACMP_R_ACMP_BIT    (0UL)
#define SYSCTL_RCGCACMP_R_ACMP_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCACMP_R_ACMP_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCACMP_ACMP_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCACMP_ACMP_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCACMP_ACMP_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/****************************************************************************************
************************************54 RCGCPWM *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCPWM_R_PWM0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCPWM_R_PWM0_BIT    (0UL)
#define SYSCTL_RCGCPWM_R_PWM0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCPWM_R_PWM0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCPWM_PWM0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCPWM_PWM0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCPWM_PWM0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCPWM_R_PWM1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_RCGCPWM_R_PWM1_BIT    (1UL)
#define SYSCTL_RCGCPWM_R_PWM1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCPWM_R_PWM1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_RCGCPWM_PWM1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCPWM_PWM1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCPWM_PWM1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************55 RCGCQEI *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCQEI_R_QEI0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCQEI_R_QEI0_BIT    (0UL)
#define SYSCTL_RCGCQEI_R_QEI0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCQEI_R_QEI0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCQEI_QEI0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCQEI_QEI0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCQEI_QEI0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCQEI_R_QEI1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_RCGCQEI_R_QEI1_BIT    (1UL)
#define SYSCTL_RCGCQEI_R_QEI1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCQEI_R_QEI1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_RCGCQEI_QEI1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCQEI_QEI1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCQEI_QEI1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************56 RCGCLPC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCLPC_R_LPC_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCLPC_R_LPC_BIT    (0UL)
#define SYSCTL_RCGCLPC_R_LPC_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCLPC_R_LPC_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCLPC_LPC_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCLPC_LPC_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCLPC_LPC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************57 RCGCPECI *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCPECI_R_PECI_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCPECI_R_PECI_BIT    (0UL)
#define SYSCTL_RCGCPECI_R_PECI_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCPECI_R_PECI_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCPECI_PECI_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCPECI_PECI_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCPECI_PECI_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************58 RCGCFAN *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCFAN_R_FAN_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCFAN_R_FAN_BIT    (0UL)
#define SYSCTL_RCGCFAN_R_FAN_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCFAN_R_FAN_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCFAN_FAN_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCFAN_FAN_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCFAN_FAN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************59 RCGCEEPROM *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCEEPROM_R_EEPROM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCEEPROM_R_EEPROM_BIT    (0UL)
#define SYSCTL_RCGCEEPROM_R_EEPROM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCEEPROM_R_EEPROM_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCEEPROM_EEPROM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCEEPROM_EEPROM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCEEPROM_EEPROM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/**********************************************************************************
************************************60 RCGCWTIMER *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER0_BIT    (0UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER0_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCWTIMER_WTIMER0_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCWTIMER_WTIMER0_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWTIMER_WTIMER0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER1_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER1_BIT    (1UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER1_ENA    ((UBase_t) 0x00000002UL)

#define SYSCTL_RCGCWTIMER_WTIMER1_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCWTIMER_WTIMER1_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWTIMER_WTIMER1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER2_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER2_BIT    (2UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER2_ENA    ((UBase_t) 0x00000004UL)

#define SYSCTL_RCGCWTIMER_WTIMER2_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCWTIMER_WTIMER2_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWTIMER_WTIMER2_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER3_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER3_BIT    (3UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER3_ENA    ((UBase_t) 0x00000008UL)

#define SYSCTL_RCGCWTIMER_WTIMER3_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCWTIMER_WTIMER3_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWTIMER_WTIMER3_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER4_MASK    ((UBase_t) 0x00000010UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER4_BIT    (4UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER4_ENA    ((UBase_t) 0x00000010UL)

#define SYSCTL_RCGCWTIMER_WTIMER4_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCWTIMER_WTIMER4_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWTIMER_WTIMER4_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_RCGCWTIMER_R_WTIMER5_MASK    ((UBase_t) 0x00000020UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER5_BIT    (5UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWTIMER_R_WTIMER5_ENA    ((UBase_t) 0x00000020UL)

#define SYSCTL_RCGCWTIMER_WTIMER5_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCWTIMER_WTIMER5_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCWTIMER_WTIMER5_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************61 RCGCRTS *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCRTS_R_RTS_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCRTS_R_RTS_BIT    (0UL)
#define SYSCTL_RCGCRTS_R_RTS_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCRTS_R_RTS_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCRTS_RTS_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCRTS_RTS_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCRTS_RTS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************62 RCGCCCM *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCCCM_R_CCM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCCCM_R_CCM_BIT    (0UL)
#define SYSCTL_RCGCCCM_R_CCM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCCCM_R_CCM_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCCCM_CCM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCCCM_CCM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCCCM_CCM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************63 RCGCLCD *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCLCD_R_LCD_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCLCD_R_LCD_BIT    (0UL)
#define SYSCTL_RCGCLCD_R_LCD_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCLCD_R_LCD_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCLCD_LCD_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCLCD_LCD_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCLCD_LCD_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************64 RCGCOWIRE *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCOWIRE_R_OWIRE_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCOWIRE_R_OWIRE_BIT    (0UL)
#define SYSCTL_RCGCOWIRE_R_OWIRE_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCOWIRE_R_OWIRE_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCOWIRE_OWIRE_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCOWIRE_OWIRE_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCOWIRE_OWIRE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************65 RCGCEMAC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCEMAC_R_EMAC_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCEMAC_R_EMAC_BIT    (0UL)
#define SYSCTL_RCGCEMAC_R_EMAC_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCEMAC_R_EMAC_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCEMAC_EMAC_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCEMAC_EMAC_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCEMAC_EMAC_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************66 RCGCPRB *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCPRB_R_PRB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCPRB_R_PRB_BIT    (0UL)
#define SYSCTL_RCGCPRB_R_PRB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCPRB_R_PRB_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCPRB_PRB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCPRB_PRB_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCPRB_PRB_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************67 RCGCHIM *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCGCHIM_R_HIM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCHIM_R_HIM_BIT    (0UL)
#define SYSCTL_RCGCHIM_R_HIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCHIM_R_HIM_ENA    ((UBase_t) 0x00000001UL)

#define SYSCTL_RCGCHIM_HIM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_RCGCHIM_HIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSCTL_RCGCHIM_HIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RCGC_H_ */
