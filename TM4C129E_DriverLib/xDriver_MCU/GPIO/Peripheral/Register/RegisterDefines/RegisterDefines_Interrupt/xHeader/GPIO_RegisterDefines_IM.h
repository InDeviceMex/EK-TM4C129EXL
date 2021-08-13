/**
 *
 * @file GPIO_RegisterDefines_IM.h
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
 * @verbatim 25 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_IM_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_IM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIO_IM_R_IME_MASK    ((uint32_t) 0x000000FFUL)
#define GPIO_IM_R_IME_BIT    (0UL)
#define GPIO_IM_R_IME_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_R_IME_ENA    ((uint32_t) 0x000000FFUL)

#define GPIO_IM_IME_MASK    ((uint32_t) 0x000000FFUL)
#define GPIO_IM_IME_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_IME_ENA    ((uint32_t) 0x000000FFUL)
/*----------*/

/*----------*/
#define GPIO_IM_R_IME0_MASK    ((uint32_t) 0x00000001UL)
#define GPIO_IM_R_IME0_BIT    (0UL)
#define GPIO_IM_R_IME0_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_R_IME0_ENA    ((uint32_t) 0x00000001UL)

#define GPIO_IM_IME0_MASK    ((uint32_t) 0x00000001UL)
#define GPIO_IM_IME0_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_IME0_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPIO_IM_R_IME1_MASK    ((uint32_t) 0x00000002UL)
#define GPIO_IM_R_IME1_BIT    (1UL)
#define GPIO_IM_R_IME1_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_R_IME1_ENA    ((uint32_t) 0x00000002UL)

#define GPIO_IM_IME1_MASK    ((uint32_t) 0x00000001UL)
#define GPIO_IM_IME1_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_IME1_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPIO_IM_R_IME2_MASK    ((uint32_t) 0x00000004UL)
#define GPIO_IM_R_IME2_BIT    (2UL)
#define GPIO_IM_R_IME2_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_R_IME2_ENA    ((uint32_t) 0x00000004UL)

#define GPIO_IM_IME2_MASK    ((uint32_t) 0x00000001UL)
#define GPIO_IM_IME2_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_IME2_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPIO_IM_R_IME3_MASK    ((uint32_t) 0x00000008UL)
#define GPIO_IM_R_IME3_BIT    (3UL)
#define GPIO_IM_R_IME3_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_R_IME3_ENA    ((uint32_t) 0x00000008UL)

#define GPIO_IM_IME3_MASK    ((uint32_t) 0x00000001UL)
#define GPIO_IM_IME3_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_IME3_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPIO_IM_R_IME4_MASK    ((uint32_t) 0x00000010UL)
#define GPIO_IM_R_IME4_BIT    (4UL)
#define GPIO_IM_R_IME4_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_R_IME4_ENA    ((uint32_t) 0x00000010UL)

#define GPIO_IM_IME4_MASK    ((uint32_t) 0x00000001UL)
#define GPIO_IM_IME4_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_IME4_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPIO_IM_R_IME5_MASK    ((uint32_t) 0x00000020UL)
#define GPIO_IM_R_IME5_BIT    (5UL)
#define GPIO_IM_R_IME5_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_R_IME5_ENA    ((uint32_t) 0x00000020UL)

#define GPIO_IM_IME5_MASK    ((uint32_t) 0x00000001UL)
#define GPIO_IM_IME5_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_IME5_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPIO_IM_R_IME6_MASK    ((uint32_t) 0x00000040UL)
#define GPIO_IM_R_IME6_BIT    (6UL)
#define GPIO_IM_R_IME6_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_R_IME6_ENA    ((uint32_t) 0x00000040UL)

#define GPIO_IM_IME6_MASK    ((uint32_t) 0x00000001UL)
#define GPIO_IM_IME6_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_IME6_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPIO_IM_R_IME7_MASK    ((uint32_t) 0x00000080UL)
#define GPIO_IM_R_IME7_BIT    (7UL)
#define GPIO_IM_R_IME7_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_R_IME7_ENA    ((uint32_t) 0x00000080UL)

#define GPIO_IM_IME7_MASK    ((uint32_t) 0x00000001UL)
#define GPIO_IM_IME7_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_IME7_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPIO_IM_R_DMAIME_MASK    ((uint32_t) 0x00000100UL)
#define GPIO_IM_R_DMAIME_BIT    (8UL)
#define GPIO_IM_R_DMAIME_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_R_DMAIME_ENA    ((uint32_t) 0x00000100UL)

#define GPIO_IM_DMAIME_MASK    ((uint32_t) 0x00000001UL)
#define GPIO_IM_DMAIME_DIS    ((uint32_t) 0x00000000UL)
#define GPIO_IM_DMAIME_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_IM_H_ */
