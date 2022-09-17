/**
 *
 * @file GPIO_RegisterDefines_WAKESTAT.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 9 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_WAKE_XHEADER_GPIO_REGISTERDEFINES_WAKESTAT_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_WAKE_XHEADER_GPIO_REGISTERDEFINES_WAKESTAT_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

/******************************************************************************************
 ************************************ 13 WAKESTAT *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIO_WAKESTAT_R_STAT4_MASK    ((uint32_t) 0x00000010UL)
#define GPIO_WAKESTAT_R_STAT4_BIT    (4UL)
#define GPIO_WAKESTAT_R_STAT4_NOTWAKE    ((uint32_t) 0x00000000UL)
#define GPIO_WAKESTAT_R_STAT4_WAKE    ((uint32_t) 0x00000010UL)

#define GPIO_WAKESTAT_STAT4_MASK    ((uint32_t) 0x00000001UL)
#define GPIO_WAKESTAT_STAT4_NOTWAKE    ((uint32_t) 0x00000000UL)
#define GPIO_WAKESTAT_STAT4_WAKE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPIO_WAKESTAT_R_STAT5_MASK    ((uint32_t) 0x00000020UL)
#define GPIO_WAKESTAT_R_STAT5_BIT    (5UL)
#define GPIO_WAKESTAT_R_STAT5_NOTWAKE    ((uint32_t) 0x00000000UL)
#define GPIO_WAKESTAT_R_STAT5_WAKE    ((uint32_t) 0x00000020UL)

#define GPIO_WAKESTAT_STAT5_MASK    ((uint32_t) 0x00000001UL)
#define GPIO_WAKESTAT_STAT5_NOTWAKE    ((uint32_t) 0x00000000UL)
#define GPIO_WAKESTAT_STAT5_WAKE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPIO_WAKESTAT_R_STAT6_MASK    ((uint32_t) 0x00000040UL)
#define GPIO_WAKESTAT_R_STAT6_BIT    (6UL)
#define GPIO_WAKESTAT_R_STAT6_NOTWAKE    ((uint32_t) 0x00000000UL)
#define GPIO_WAKESTAT_R_STAT6_WAKE    ((uint32_t) 0x00000040UL)

#define GPIO_WAKESTAT_STAT6_MASK    ((uint32_t) 0x00000001UL)
#define GPIO_WAKESTAT_STAT6_NOTWAKE    ((uint32_t) 0x00000000UL)
#define GPIO_WAKESTAT_STAT6_WAKE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPIO_WAKESTAT_R_STAT7_MASK    ((uint32_t) 0x00000080UL)
#define GPIO_WAKESTAT_R_STAT7_BIT    (7UL)
#define GPIO_WAKESTAT_R_STAT7_NOTWAKE    ((uint32_t) 0x00000000UL)
#define GPIO_WAKESTAT_R_STAT7_WAKE    ((uint32_t) 0x00000080UL)

#define GPIO_WAKESTAT_STAT7_MASK    ((uint32_t) 0x00000001UL)
#define GPIO_WAKESTAT_STAT7_NOTWAKE    ((uint32_t) 0x00000000UL)
#define GPIO_WAKESTAT_STAT7_WAKE    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_WAKE_XHEADER_GPIO_REGISTERDEFINES_WAKESTAT_H_ */
