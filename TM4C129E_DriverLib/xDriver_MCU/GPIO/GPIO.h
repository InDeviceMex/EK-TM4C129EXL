/*
 * GPIO.h
 *
 *  Created on: Dec 27, 2017
 *      Author: Lalo_Alvarez
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <xDriver_MCU/GPIO/Driver/GPIO_Driver.h>
#include <xDriver_MCU/GPIO/App/GPIO_App.h>

#define GPIO_PIN0    ((uint32_t) 0x000000001UL)
#define GPIO_PIN1    ((uint32_t) 0x000000002UL)
#define GPIO_PIN2    ((uint32_t) 0x000000004UL)
#define GPIO_PIN3    ((uint32_t) 0x000000008UL)
#define GPIO_PIN4    ((uint32_t) 0x000000010UL)
#define GPIO_PIN5    ((uint32_t) 0x000000020UL)
#define GPIO_PIN6    ((uint32_t) 0x000000040UL)
#define GPIO_PIN7    ((uint32_t) 0x000000080UL)
#define GPIO_PIN8    ((uint32_t) 0x000000100UL)
#define GPIO_PIN9    ((uint32_t) 0x000000200UL)
#define GPIO_PIN10    ((uint32_t) 0x000000400UL)
#define GPIO_PIN11    ((uint32_t) 0x000000800UL)
#define GPIO_PIN12    ((uint32_t) 0x000001000UL)
#define GPIO_PIN13    ((uint32_t) 0x000002000UL)
#define GPIO_PIN14    ((uint32_t) 0x000004000UL)
#define GPIO_PIN15    ((uint32_t) 0x000008000UL)
#define GPIO_PIN16    ((uint32_t) 0x000100000UL)
#define GPIO_PIN17    ((uint32_t) 0x000200000UL)
#define GPIO_PIN18    ((uint32_t) 0x000400000UL)
#define GPIO_PIN19    ((uint32_t) 0x000800000UL)
#define GPIO_PIN20    ((uint32_t) 0x001000000UL)
#define GPIO_PIN21    ((uint32_t) 0x002000000UL)
#define GPIO_PIN22    ((uint32_t) 0x004000000UL)
#define GPIO_PIN23    ((uint32_t) 0x008000000UL)
#define GPIO_PIN24    ((uint32_t) 0x010000000UL)
#define GPIO_PIN25    ((uint32_t) 0x020000000UL)
#define GPIO_PIN26    ((uint32_t) 0x040000000UL)
#define GPIO_PIN27    ((uint32_t) 0x080000000UL)
#define GPIO_PIN28    ((uint32_t) 0x100000000UL)
#define GPIO_PIN29    ((uint32_t) 0x200000000UL)
#define GPIO_PIN30    ((uint32_t) 0x400000000UL)
#define GPIO_PIN31    ((uint32_t) 0x800000000UL)

#define GPIO_BIT0    ((uint32_t) 0x000000001UL)
#define GPIO_BIT1    ((uint32_t) 0x000000002UL)
#define GPIO_BIT2    ((uint32_t) 0x000000004UL)
#define GPIO_BIT3    ((uint32_t) 0x000000008UL)
#define GPIO_BIT4    ((uint32_t) 0x000000010UL)
#define GPIO_BIT5    ((uint32_t) 0x000000020UL)
#define GPIO_BIT6    ((uint32_t) 0x000000040UL)
#define GPIO_BIT7    ((uint32_t) 0x000000080UL)
#define GPIO_BIT8    ((uint32_t) 0x000000100UL)
#define GPIO_BIT9    ((uint32_t) 0x000000200UL)
#define GPIO_BIT10    ((uint32_t) 0x000000400UL)
#define GPIO_BIT11    ((uint32_t) 0x000000800UL)
#define GPIO_BIT12    ((uint32_t) 0x000001000UL)
#define GPIO_BIT13    ((uint32_t) 0x000002000UL)
#define GPIO_BIT14    ((uint32_t) 0x000004000UL)
#define GPIO_BIT15    ((uint32_t) 0x000008000UL)
#define GPIO_BIT16    ((uint32_t) 0x000100000UL)
#define GPIO_BIT17    ((uint32_t) 0x000200000UL)
#define GPIO_BIT18    ((uint32_t) 0x000400000UL)
#define GPIO_BIT19    ((uint32_t) 0x000800000UL)
#define GPIO_BIT20    ((uint32_t) 0x001000000UL)
#define GPIO_BIT21    ((uint32_t) 0x002000000UL)
#define GPIO_BIT22    ((uint32_t) 0x004000000UL)
#define GPIO_BIT23    ((uint32_t) 0x008000000UL)
#define GPIO_BIT24    ((uint32_t) 0x010000000UL)
#define GPIO_BIT25    ((uint32_t) 0x020000000UL)
#define GPIO_BIT26    ((uint32_t) 0x040000000UL)
#define GPIO_BIT27    ((uint32_t) 0x080000000UL)
#define GPIO_BIT28    ((uint32_t) 0x100000000UL)
#define GPIO_BIT29    ((uint32_t) 0x200000000UL)
#define GPIO_BIT30    ((uint32_t) 0x400000000UL)
#define GPIO_BIT31    ((uint32_t) 0x800000000UL)

#endif /* GPIO_H_ */
