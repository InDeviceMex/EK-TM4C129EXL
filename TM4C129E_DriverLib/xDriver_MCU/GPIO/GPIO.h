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

#define GPIO_PIN0    ((UBase_t) 0x000000001UL)
#define GPIO_PIN1    ((UBase_t) 0x000000002UL)
#define GPIO_PIN2    ((UBase_t) 0x000000004UL)
#define GPIO_PIN3    ((UBase_t) 0x000000008UL)
#define GPIO_PIN4    ((UBase_t) 0x000000010UL)
#define GPIO_PIN5    ((UBase_t) 0x000000020UL)
#define GPIO_PIN6    ((UBase_t) 0x000000040UL)
#define GPIO_PIN7    ((UBase_t) 0x000000080UL)
#define GPIO_PIN8    ((UBase_t) 0x000000100UL)
#define GPIO_PIN9    ((UBase_t) 0x000000200UL)
#define GPIO_PIN10    ((UBase_t) 0x000000400UL)
#define GPIO_PIN11    ((UBase_t) 0x000000800UL)
#define GPIO_PIN12    ((UBase_t) 0x000001000UL)
#define GPIO_PIN13    ((UBase_t) 0x000002000UL)
#define GPIO_PIN14    ((UBase_t) 0x000004000UL)
#define GPIO_PIN15    ((UBase_t) 0x000008000UL)
#define GPIO_PIN16    ((UBase_t) 0x000100000UL)
#define GPIO_PIN17    ((UBase_t) 0x000200000UL)
#define GPIO_PIN18    ((UBase_t) 0x000400000UL)
#define GPIO_PIN19    ((UBase_t) 0x000800000UL)
#define GPIO_PIN20    ((UBase_t) 0x001000000UL)
#define GPIO_PIN21    ((UBase_t) 0x002000000UL)
#define GPIO_PIN22    ((UBase_t) 0x004000000UL)
#define GPIO_PIN23    ((UBase_t) 0x008000000UL)
#define GPIO_PIN24    ((UBase_t) 0x010000000UL)
#define GPIO_PIN25    ((UBase_t) 0x020000000UL)
#define GPIO_PIN26    ((UBase_t) 0x040000000UL)
#define GPIO_PIN27    ((UBase_t) 0x080000000UL)
#define GPIO_PIN28    ((UBase_t) 0x100000000UL)
#define GPIO_PIN29    ((UBase_t) 0x200000000UL)
#define GPIO_PIN30    ((UBase_t) 0x400000000UL)
#define GPIO_PIN31    ((UBase_t) 0x800000000UL)

#define GPIO_BIT0    ((UBase_t) 0x000000001UL)
#define GPIO_BIT1    ((UBase_t) 0x000000002UL)
#define GPIO_BIT2    ((UBase_t) 0x000000004UL)
#define GPIO_BIT3    ((UBase_t) 0x000000008UL)
#define GPIO_BIT4    ((UBase_t) 0x000000010UL)
#define GPIO_BIT5    ((UBase_t) 0x000000020UL)
#define GPIO_BIT6    ((UBase_t) 0x000000040UL)
#define GPIO_BIT7    ((UBase_t) 0x000000080UL)
#define GPIO_BIT8    ((UBase_t) 0x000000100UL)
#define GPIO_BIT9    ((UBase_t) 0x000000200UL)
#define GPIO_BIT10    ((UBase_t) 0x000000400UL)
#define GPIO_BIT11    ((UBase_t) 0x000000800UL)
#define GPIO_BIT12    ((UBase_t) 0x000001000UL)
#define GPIO_BIT13    ((UBase_t) 0x000002000UL)
#define GPIO_BIT14    ((UBase_t) 0x000004000UL)
#define GPIO_BIT15    ((UBase_t) 0x000008000UL)
#define GPIO_BIT16    ((UBase_t) 0x000100000UL)
#define GPIO_BIT17    ((UBase_t) 0x000200000UL)
#define GPIO_BIT18    ((UBase_t) 0x000400000UL)
#define GPIO_BIT19    ((UBase_t) 0x000800000UL)
#define GPIO_BIT20    ((UBase_t) 0x001000000UL)
#define GPIO_BIT21    ((UBase_t) 0x002000000UL)
#define GPIO_BIT22    ((UBase_t) 0x004000000UL)
#define GPIO_BIT23    ((UBase_t) 0x008000000UL)
#define GPIO_BIT24    ((UBase_t) 0x010000000UL)
#define GPIO_BIT25    ((UBase_t) 0x020000000UL)
#define GPIO_BIT26    ((UBase_t) 0x040000000UL)
#define GPIO_BIT27    ((UBase_t) 0x080000000UL)
#define GPIO_BIT28    ((UBase_t) 0x100000000UL)
#define GPIO_BIT29    ((UBase_t) 0x200000000UL)
#define GPIO_BIT30    ((UBase_t) 0x400000000UL)
#define GPIO_BIT31    ((UBase_t) 0x800000000UL)

#endif /* GPIO_H_ */
