/*
 * GPIO.h
 *
 *  Created on: Dec 27, 2017
 *      Author: Lalo_Alvarez
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <xDriver_MCU/GPIO/App/GPIO_App.h>
#include <xDriver_MCU/GPIO/Driver/GPIO_Driver.h>

#define PIN0    ((uint32_t) 0x000000001UL)
#define PIN1    ((uint32_t) 0x000000002UL)
#define PIN2    ((uint32_t) 0x000000004UL)
#define PIN3    ((uint32_t) 0x000000008UL)
#define PIN4    ((uint32_t) 0x000000010UL)
#define PIN5    ((uint32_t) 0x000000020UL)
#define PIN6    ((uint32_t) 0x000000040UL)
#define PIN7    ((uint32_t) 0x000000080UL)
#define PIN8    ((uint32_t) 0x000000100UL)
#define PIN9    ((uint32_t) 0x000000200UL)
#define PIN10    ((uint32_t) 0x000000400UL)
#define PIN11    ((uint32_t) 0x000000800UL)
#define PIN12    ((uint32_t) 0x000001000UL)
#define PIN13    ((uint32_t) 0x000002000UL)
#define PIN14    ((uint32_t) 0x000004000UL)
#define PIN15    ((uint32_t) 0x000008000UL)
#define PIN16    ((uint32_t) 0x000100000UL)
#define PIN17    ((uint32_t) 0x000200000UL)
#define PIN18    ((uint32_t) 0x000400000UL)
#define PIN19    ((uint32_t) 0x000800000UL)
#define PIN20    ((uint32_t) 0x001000000UL)
#define PIN21    ((uint32_t) 0x002000000UL)
#define PIN22    ((uint32_t) 0x004000000UL)
#define PIN23    ((uint32_t) 0x008000000UL)
#define PIN24    ((uint32_t) 0x010000000UL)
#define PIN25    ((uint32_t) 0x020000000UL)
#define PIN26    ((uint32_t) 0x040000000UL)
#define PIN27    ((uint32_t) 0x080000000UL)
#define PIN28    ((uint32_t) 0x100000000UL)
#define PIN29    ((uint32_t) 0x200000000UL)
#define PIN30    ((uint32_t) 0x400000000UL)
#define PIN31    ((uint32_t) 0x800000000UL)

#define BIT0    ((uint32_t) 0x000000001UL)
#define BIT1    ((uint32_t) 0x000000002UL)
#define BIT2    ((uint32_t) 0x000000004UL)
#define BIT3    ((uint32_t) 0x000000008UL)
#define BIT4    ((uint32_t) 0x000000010UL)
#define BIT5    ((uint32_t) 0x000000020UL)
#define BIT6    ((uint32_t) 0x000000040UL)
#define BIT7    ((uint32_t) 0x000000080UL)
#define BIT8    ((uint32_t) 0x000000100UL)
#define BIT9    ((uint32_t) 0x000000200UL)
#define BIT10    ((uint32_t) 0x000000400UL)
#define BIT11    ((uint32_t) 0x000000800UL)
#define BIT12    ((uint32_t) 0x000001000UL)
#define BIT13    ((uint32_t) 0x000002000UL)
#define BIT14    ((uint32_t) 0x000004000UL)
#define BIT15    ((uint32_t) 0x000008000UL)
#define BIT16    ((uint32_t) 0x000100000UL)
#define BIT17    ((uint32_t) 0x000200000UL)
#define BIT18    ((uint32_t) 0x000400000UL)
#define BIT19    ((uint32_t) 0x000800000UL)
#define BIT20    ((uint32_t) 0x001000000UL)
#define BIT21    ((uint32_t) 0x002000000UL)
#define BIT22    ((uint32_t) 0x004000000UL)
#define BIT23    ((uint32_t) 0x008000000UL)
#define BIT24    ((uint32_t) 0x010000000UL)
#define BIT25    ((uint32_t) 0x020000000UL)
#define BIT26    ((uint32_t) 0x040000000UL)
#define BIT27    ((uint32_t) 0x080000000UL)
#define BIT28    ((uint32_t) 0x100000000UL)
#define BIT29    ((uint32_t) 0x200000000UL)
#define BIT30    ((uint32_t) 0x400000000UL)
#define BIT31    ((uint32_t) 0x800000000UL)

#endif /* GPIO_H_ */
