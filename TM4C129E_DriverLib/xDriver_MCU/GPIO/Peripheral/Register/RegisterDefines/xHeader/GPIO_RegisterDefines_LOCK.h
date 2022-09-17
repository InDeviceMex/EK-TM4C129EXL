/**
 *
 * @file GPIO_RegisterDefines_LOCK.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_LOCK_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_LOCK_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIO_LOCK_R_PIN_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define GPIO_LOCK_R_PIN_BIT    (0UL)
#define GPIO_LOCK_R_PIN_KEY    ((uint32_t) 0x4C4F434BUL)
#define GPIO_LOCK_R_PIN_UNLOCK    ((uint32_t) 0x00000000UL)
#define GPIO_LOCK_R_PIN_LOCK    ((uint32_t) 0x00000001UL)

#define GPIO_LOCK_PIN_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define GPIO_LOCK_PIN_KEY    ((uint32_t) 0x4C4F434BUL)
#define GPIO_LOCK_PIN_UNLOCK    ((uint32_t) 0x00000000UL)
#define GPIO_LOCK_PIN_LOCK    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_LOCK_H_ */
