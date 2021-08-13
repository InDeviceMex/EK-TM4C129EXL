/**
 *
 * @file NVIC_RegisterDefines_Set1_ISPR.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_SET1_NVIC_REGISTERDEFINES_SET1_ISPR_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_SET1_NVIC_REGISTERDEFINES_SET1_ISPR_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/********************************************************************************************/
/************************************* ISPR1 ***********************************************/
/********************************************************************************************/

/*----------*/
#define NVIC_ISPR1_R_NVIC_GPIOH_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_R_NVIC_GPIOH_BIT    (0UL)
#define NVIC_ISPR1_R_NVIC_GPIOH_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_GPIOH_ENA    ((uint32_t) 0x00000001UL)

#define NVIC_ISPR1_NVIC_GPIOH_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_GPIOH_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_GPIOH_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UART2_MASK    ((uint32_t) 0x00000002UL)
#define NVIC_ISPR1_R_NVIC_UART2_BIT    (1UL)
#define NVIC_ISPR1_R_NVIC_UART2_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_UART2_ENA    ((uint32_t) 0x00000002UL)

#define NVIC_ISPR1_NVIC_UART2_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_UART2_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_UART2_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_SSI1_MASK    ((uint32_t) 0x00000004UL)
#define NVIC_ISPR1_R_NVIC_SSI1_BIT    (2UL)
#define NVIC_ISPR1_R_NVIC_SSI1_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_SSI1_ENA    ((uint32_t) 0x00000004UL)

#define NVIC_ISPR1_NVIC_SSI1_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_SSI1_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_SSI1_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_TIMER3A_MASK    ((uint32_t) 0x00000008UL)
#define NVIC_ISPR1_R_NVIC_TIMER3A_BIT    (3UL)
#define NVIC_ISPR1_R_NVIC_TIMER3A_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_TIMER3A_ENA    ((uint32_t) 0x00000008UL)

#define NVIC_ISPR1_NVIC_TIMER3A_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_TIMER3A_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_TIMER3A_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_TIMER3B_MASK    ((uint32_t) 0x00000010UL)
#define NVIC_ISPR1_R_NVIC_TIMER3B_BIT    (4UL)
#define NVIC_ISPR1_R_NVIC_TIMER3B_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_TIMER3B_ENA    ((uint32_t) 0x00000010UL)

#define NVIC_ISPR1_NVIC_TIMER3B_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_TIMER3B_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_TIMER3B_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_I2C1_MASK    ((uint32_t) 0x00000020UL)
#define NVIC_ISPR1_R_NVIC_I2C1_BIT    (5UL)
#define NVIC_ISPR1_R_NVIC_I2C1_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_I2C1_ENA    ((uint32_t) 0x00000020UL)

#define NVIC_ISPR1_NVIC_I2C1_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_I2C1_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_I2C1_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_CAN0_MASK    ((uint32_t) 0x00000040UL)
#define NVIC_ISPR1_R_NVIC_CAN0_BIT    (6UL)
#define NVIC_ISPR1_R_NVIC_CAN0_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_CAN0_ENA    ((uint32_t) 0x00000040UL)

#define NVIC_ISPR1_NVIC_CAN0_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_CAN0_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_CAN0_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_CAN1_MASK    ((uint32_t) 0x00000080UL)
#define NVIC_ISPR1_R_NVIC_CAN1_BIT    (7UL)
#define NVIC_ISPR1_R_NVIC_CAN1_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_CAN1_ENA    ((uint32_t) 0x00000080UL)

#define NVIC_ISPR1_NVIC_CAN1_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_CAN1_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_CAN1_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_ETH_MASK    ((uint32_t) 0x00000100UL)
#define NVIC_ISPR1_R_NVIC_ETH_BIT    (8UL)
#define NVIC_ISPR1_R_NVIC_ETH_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_ETH_ENA    ((uint32_t) 0x00000100UL)

#define NVIC_ISPR1_NVIC_ETH_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_ETH_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_ETH_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_HIB_MASK    ((uint32_t) 0x00000200UL)
#define NVIC_ISPR1_R_NVIC_HIB_BIT    (9UL)
#define NVIC_ISPR1_R_NVIC_HIB_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_HIB_ENA    ((uint32_t) 0x00000200UL)

#define NVIC_ISPR1_NVIC_HIB_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_HIB_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_HIB_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_USB_MASK    ((uint32_t) 0x00000400UL)
#define NVIC_ISPR1_R_NVIC_USB_BIT    (10UL)
#define NVIC_ISPR1_R_NVIC_USB_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_USB_ENA    ((uint32_t) 0x00000400UL)

#define NVIC_ISPR1_NVIC_USB_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_USB_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_USB_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_PWM0GEN3_MASK    ((uint32_t) 0x00000800UL)
#define NVIC_ISPR1_R_NVIC_PWM0GEN3_BIT    (11UL)
#define NVIC_ISPR1_R_NVIC_PWM0GEN3_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_PWM0GEN3_ENA    ((uint32_t) 0x00000800UL)

#define NVIC_ISPR1_NVIC_PWM0GEN3_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_PWM0GEN3_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_PWM0GEN3_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UDMASOFT_MASK    ((uint32_t) 0x00001000UL)
#define NVIC_ISPR1_R_NVIC_UDMASOFT_BIT    (12UL)
#define NVIC_ISPR1_R_NVIC_UDMASOFT_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_UDMASOFT_ENA    ((uint32_t) 0x00001000UL)

#define NVIC_ISPR1_NVIC_UDMASOFT_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_UDMASOFT_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_UDMASOFT_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UDMAERROR_MASK    ((uint32_t) 0x00002000UL)
#define NVIC_ISPR1_R_NVIC_UDMAERROR_BIT    (13UL)
#define NVIC_ISPR1_R_NVIC_UDMAERROR_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_UDMAERROR_ENA    ((uint32_t) 0x00002000UL)

#define NVIC_ISPR1_NVIC_UDMAERROR_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_UDMAERROR_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_UDMAERROR_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_ADC1SEQ0_MASK    ((uint32_t) 0x00004000UL)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ0_BIT    (14UL)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ0_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ0_ENA    ((uint32_t) 0x00004000UL)

#define NVIC_ISPR1_NVIC_ADC1SEQ0_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_ADC1SEQ0_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_ADC1SEQ0_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_ADC1SEQ1_MASK    ((uint32_t) 0x00008000UL)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ1_BIT    (15UL)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ1_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ1_ENA    ((uint32_t) 0x00008000UL)

#define NVIC_ISPR1_NVIC_ADC1SEQ1_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_ADC1SEQ1_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_ADC1SEQ1_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_ADC1SEQ2_MASK    ((uint32_t) 0x00010000UL)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ2_BIT    (16UL)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ2_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ2_ENA    ((uint32_t) 0x00010000UL)

#define NVIC_ISPR1_NVIC_ADC1SEQ2_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_ADC1SEQ2_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_ADC1SEQ2_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_ADC1SEQ3_MASK    ((uint32_t) 0x00020000UL)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ3_BIT    (17UL)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ3_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ3_ENA    ((uint32_t) 0x00020000UL)

#define NVIC_ISPR1_NVIC_ADC1SEQ3_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_ADC1SEQ3_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_ADC1SEQ3_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_EPI0_MASK    ((uint32_t) 0x00040000UL)
#define NVIC_ISPR1_R_NVIC_EPI0_BIT    (18UL)
#define NVIC_ISPR1_R_NVIC_EPI0_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_EPI0_ENA    ((uint32_t) 0x00040000UL)

#define NVIC_ISPR1_NVIC_EPI0_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_EPI0_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_EPI0_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_GPIOJ_MASK    ((uint32_t) 0x00080000UL)
#define NVIC_ISPR1_R_NVIC_GPIOJ_BIT    (19UL)
#define NVIC_ISPR1_R_NVIC_GPIOJ_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_GPIOJ_ENA    ((uint32_t) 0x00080000UL)

#define NVIC_ISPR1_NVIC_GPIOJ_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_GPIOJ_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_GPIOJ_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_GPIOK_MASK    ((uint32_t) 0x00100000UL)
#define NVIC_ISPR1_R_NVIC_GPIOK_BIT    (20UL)
#define NVIC_ISPR1_R_NVIC_GPIOK_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_GPIOK_ENA    ((uint32_t) 0x00100000UL)

#define NVIC_ISPR1_NVIC_GPIOK_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_GPIOK_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_GPIOK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_GPIOL_MASK    ((uint32_t) 0x00200000UL)
#define NVIC_ISPR1_R_NVIC_GPIOL_BIT    (21UL)
#define NVIC_ISPR1_R_NVIC_GPIOL_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_GPIOL_ENA    ((uint32_t) 0x00200000UL)

#define NVIC_ISPR1_NVIC_GPIOL_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_GPIOL_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_GPIOL_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_SSI2_MASK    ((uint32_t) 0x00400000UL)
#define NVIC_ISPR1_R_NVIC_SSI2_BIT    (22UL)
#define NVIC_ISPR1_R_NVIC_SSI2_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_SSI2_ENA    ((uint32_t) 0x00400000UL)

#define NVIC_ISPR1_NVIC_SSI2_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_SSI2_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_SSI2_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_SSI3_MASK    ((uint32_t) 0x00800000UL)
#define NVIC_ISPR1_R_NVIC_SSI3_BIT    (23UL)
#define NVIC_ISPR1_R_NVIC_SSI3_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_SSI3_ENA    ((uint32_t) 0x00800000UL)

#define NVIC_ISPR1_NVIC_SSI3_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_SSI3_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_SSI3_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UART3_MASK    ((uint32_t) 0x01000000UL)
#define NVIC_ISPR1_R_NVIC_UART3_BIT    (24UL)
#define NVIC_ISPR1_R_NVIC_UART3_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_UART3_ENA    ((uint32_t) 0x01000000UL)

#define NVIC_ISPR1_NVIC_UART3_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_UART3_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_UART3_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UART4_MASK    ((uint32_t) 0x02000000UL)
#define NVIC_ISPR1_R_NVIC_UART4_BIT    (25UL)
#define NVIC_ISPR1_R_NVIC_UART4_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_UART4_ENA    ((uint32_t) 0x02000000UL)

#define NVIC_ISPR1_NVIC_UART4_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_UART4_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_UART4_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UART5_MASK    ((uint32_t) 0x04000000UL)
#define NVIC_ISPR1_R_NVIC_UART5_BIT    (26UL)
#define NVIC_ISPR1_R_NVIC_UART5_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_UART5_ENA    ((uint32_t) 0x04000000UL)

#define NVIC_ISPR1_NVIC_UART5_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_UART5_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_UART5_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UART6_MASK    ((uint32_t) 0x08000000UL)
#define NVIC_ISPR1_R_NVIC_UART6_BIT    (27UL)
#define NVIC_ISPR1_R_NVIC_UART6_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_UART6_ENA    ((uint32_t) 0x08000000UL)

#define NVIC_ISPR1_NVIC_UART6_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_UART6_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_UART6_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UART7_MASK    ((uint32_t) 0x10000000UL)
#define NVIC_ISPR1_R_NVIC_UART7_BIT    (28UL)
#define NVIC_ISPR1_R_NVIC_UART7_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_UART7_ENA    ((uint32_t) 0x10000000UL)

#define NVIC_ISPR1_NVIC_UART7_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_UART7_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_UART7_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_I2C2_MASK    ((uint32_t) 0x20000000UL)
#define NVIC_ISPR1_R_NVIC_I2C2_BIT    (29UL)
#define NVIC_ISPR1_R_NVIC_I2C2_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_I2C2_ENA    ((uint32_t) 0x20000000UL)

#define NVIC_ISPR1_NVIC_I2C2_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_I2C2_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_I2C2_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_I2C3_MASK    ((uint32_t) 0x40000000UL)
#define NVIC_ISPR1_R_NVIC_I2C3_BIT    (30UL)
#define NVIC_ISPR1_R_NVIC_I2C3_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_I2C3_ENA    ((uint32_t) 0x40000000UL)

#define NVIC_ISPR1_NVIC_I2C3_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_I2C3_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_I2C3_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_TIMER4A_MASK    ((uint32_t) 0x80000000UL)
#define NVIC_ISPR1_R_NVIC_TIMER4A_BIT    (31UL)
#define NVIC_ISPR1_R_NVIC_TIMER4A_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_R_NVIC_TIMER4A_ENA    ((uint32_t) 0x80000000UL)

#define NVIC_ISPR1_NVIC_TIMER4A_MASK    ((uint32_t) 0x00000001UL)
#define NVIC_ISPR1_NVIC_TIMER4A_DIS    ((uint32_t) 0x00000000UL)
#define NVIC_ISPR1_NVIC_TIMER4A_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_SET1_NVIC_REGISTERDEFINES_SET1_ISPR_H_ */
