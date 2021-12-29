/**
 *
 * @file CAN_RegisterDefines_MSG2INT.h
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
 * @verbatim May 28, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * May 28, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_MSG2INT_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_MSG2INT_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 35 MSG2INT *********************************************
******************************************************************************************/
/*--------*/
#define CAN_MSG2INT_R_INTPND_MASK    ((uint32_t) 0x0000FFFFUL)
#define CAN_MSG2INT_R_INTPND_BIT    ((uint32_t) 0UL)
#define CAN_MSG2INT_R_INTPND_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND_PEND16    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_R_INTPND_PEND17    ((uint32_t) 0x00000002UL)
#define CAN_MSG2INT_R_INTPND_PEND18    ((uint32_t) 0x00000004UL)
#define CAN_MSG2INT_R_INTPND_PEND19    ((uint32_t) 0x00000008UL)
#define CAN_MSG2INT_R_INTPND_PEND20    ((uint32_t) 0x00000010UL)
#define CAN_MSG2INT_R_INTPND_PEND21    ((uint32_t) 0x00000020UL)
#define CAN_MSG2INT_R_INTPND_PEND22    ((uint32_t) 0x00000040UL)
#define CAN_MSG2INT_R_INTPND_PEND23    ((uint32_t) 0x00000080UL)
#define CAN_MSG2INT_R_INTPND_PEND24    ((uint32_t) 0x00000100UL)
#define CAN_MSG2INT_R_INTPND_PEND25    ((uint32_t) 0x00000200UL)
#define CAN_MSG2INT_R_INTPND_PEND26    ((uint32_t) 0x00000400UL)
#define CAN_MSG2INT_R_INTPND_PEND27    ((uint32_t) 0x00000800UL)
#define CAN_MSG2INT_R_INTPND_PEND28    ((uint32_t) 0x00001000UL)
#define CAN_MSG2INT_R_INTPND_PEND29    ((uint32_t) 0x00002000UL)
#define CAN_MSG2INT_R_INTPND_PEND30    ((uint32_t) 0x00004000UL)
#define CAN_MSG2INT_R_INTPND_PEND31    ((uint32_t) 0x00008000UL)

#define CAN_MSG2INT_INTPND_MASK    ((uint32_t) 0x0000FFFFUL)
#define CAN_MSG2INT_INTPND_BIT    ((uint32_t) 0UL)
#define CAN_MSG2INT_INTPND_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND_PEND0    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND_PEND1    ((uint32_t) 0x00000002UL)
#define CAN_MSG2INT_INTPND_PEND2    ((uint32_t) 0x00000004UL)
#define CAN_MSG2INT_INTPND_PEND3    ((uint32_t) 0x00000008UL)
#define CAN_MSG2INT_INTPND_PEND4    ((uint32_t) 0x00000010UL)
#define CAN_MSG2INT_INTPND_PEND5    ((uint32_t) 0x00000020UL)
#define CAN_MSG2INT_INTPND_PEND6    ((uint32_t) 0x00000040UL)
#define CAN_MSG2INT_INTPND_PEND7    ((uint32_t) 0x00000080UL)
#define CAN_MSG2INT_INTPND_PEND8    ((uint32_t) 0x00000100UL)
#define CAN_MSG2INT_INTPND_PEND9    ((uint32_t) 0x00000200UL)
#define CAN_MSG2INT_INTPND_PEND10    ((uint32_t) 0x00000400UL)
#define CAN_MSG2INT_INTPND_PEND11    ((uint32_t) 0x00000800UL)
#define CAN_MSG2INT_INTPND_PEND12    ((uint32_t) 0x00001000UL)
#define CAN_MSG2INT_INTPND_PEND13    ((uint32_t) 0x00002000UL)
#define CAN_MSG2INT_INTPND_PEND14    ((uint32_t) 0x00004000UL)
#define CAN_MSG2INT_INTPND_PEND15    ((uint32_t) 0x00008000UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND16_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_R_INTPND16_BIT    ((uint32_t) 0UL)
#define CAN_MSG2INT_R_INTPND16_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND16_PEND    ((uint32_t) 0x00000001UL)

#define CAN_MSG2INT_INTPND16_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND16_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND16_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND17_MASK    ((uint32_t) 0x00000002UL)
#define CAN_MSG2INT_R_INTPND17_BIT    ((uint32_t) 1UL)
#define CAN_MSG2INT_R_INTPND17_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND17_PEND    ((uint32_t) 0x00000002UL)

#define CAN_MSG2INT_INTPND17_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND17_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND17_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND18_MASK    ((uint32_t) 0x00000004UL)
#define CAN_MSG2INT_R_INTPND18_BIT    ((uint32_t) 2UL)
#define CAN_MSG2INT_R_INTPND18_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND18_PEND    ((uint32_t) 0x00000004UL)

#define CAN_MSG2INT_INTPND18_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND18_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND18_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND19_MASK    ((uint32_t) 0x00000008UL)
#define CAN_MSG2INT_R_INTPND19_BIT    ((uint32_t) 3UL)
#define CAN_MSG2INT_R_INTPND19_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND19_PEND    ((uint32_t) 0x00000008UL)

#define CAN_MSG2INT_INTPND19_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND19_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND19_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND20_MASK    ((uint32_t) 0x00000010UL)
#define CAN_MSG2INT_R_INTPND20_BIT    ((uint32_t) 4UL)
#define CAN_MSG2INT_R_INTPND20_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND20_PEND    ((uint32_t) 0x00000010UL)

#define CAN_MSG2INT_INTPND20_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND20_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND20_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND21_MASK    ((uint32_t) 0x00000020UL)
#define CAN_MSG2INT_R_INTPND21_BIT    ((uint32_t) 5UL)
#define CAN_MSG2INT_R_INTPND21_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND21_PEND    ((uint32_t) 0x00000020UL)

#define CAN_MSG2INT_INTPND21_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND21_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND21_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND22_MASK    ((uint32_t) 0x00000040UL)
#define CAN_MSG2INT_R_INTPND22_BIT    ((uint32_t) 6UL)
#define CAN_MSG2INT_R_INTPND22_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND22_PEND    ((uint32_t) 0x00000040UL)

#define CAN_MSG2INT_INTPND22_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND22_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND22_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND23_MASK    ((uint32_t) 0x00000080UL)
#define CAN_MSG2INT_R_INTPND23_BIT    ((uint32_t) 7UL)
#define CAN_MSG2INT_R_INTPND23_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND23_PEND    ((uint32_t) 0x00000080UL)

#define CAN_MSG2INT_INTPND23_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND23_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND23_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND24_MASK    ((uint32_t) 0x00000100UL)
#define CAN_MSG2INT_R_INTPND24_BIT    ((uint32_t) 8UL)
#define CAN_MSG2INT_R_INTPND24_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND24_PEND    ((uint32_t) 0x00000100UL)

#define CAN_MSG2INT_INTPND24_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND24_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND24_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND25_MASK    ((uint32_t) 0x00000200UL)
#define CAN_MSG2INT_R_INTPND25_BIT    ((uint32_t) 9UL)
#define CAN_MSG2INT_R_INTPND25_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND25_PEND    ((uint32_t) 0x00000200UL)

#define CAN_MSG2INT_INTPND25_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND25_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND25_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND26_MASK    ((uint32_t) 0x00000400UL)
#define CAN_MSG2INT_R_INTPND26_BIT    ((uint32_t) 10UL)
#define CAN_MSG2INT_R_INTPND26_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND26_PEND    ((uint32_t) 0x00000400UL)

#define CAN_MSG2INT_INTPND26_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND26_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND26_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND27_MASK    ((uint32_t) 0x00000800UL)
#define CAN_MSG2INT_R_INTPND27_BIT    ((uint32_t) 11UL)
#define CAN_MSG2INT_R_INTPND27_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND27_PEND    ((uint32_t) 0x00000800UL)

#define CAN_MSG2INT_INTPND27_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND27_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND27_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND28_MASK    ((uint32_t) 0x00001000UL)
#define CAN_MSG2INT_R_INTPND28_BIT    ((uint32_t) 12UL)
#define CAN_MSG2INT_R_INTPND28_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND28_PEND    ((uint32_t) 0x00001000UL)

#define CAN_MSG2INT_INTPND28_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND28_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND28_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND29_MASK    ((uint32_t) 0x00002000UL)
#define CAN_MSG2INT_R_INTPND29_BIT    ((uint32_t) 13UL)
#define CAN_MSG2INT_R_INTPND29_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND29_PEND    ((uint32_t) 0x00002000UL)

#define CAN_MSG2INT_INTPND29_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND29_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND29_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND30_MASK    ((uint32_t) 0x00004000UL)
#define CAN_MSG2INT_R_INTPND30_BIT    ((uint32_t) 14UL)
#define CAN_MSG2INT_R_INTPND30_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND30_PEND    ((uint32_t) 0x00004000UL)

#define CAN_MSG2INT_INTPND30_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND30_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND30_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG2INT_R_INTPND31_MASK    ((uint32_t) 0x00008000UL)
#define CAN_MSG2INT_R_INTPND31_BIT    ((uint32_t) 15UL)
#define CAN_MSG2INT_R_INTPND31_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_R_INTPND31_PEND    ((uint32_t) 0x00008000UL)

#define CAN_MSG2INT_INTPND31_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG2INT_INTPND31_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG2INT_INTPND31_PEND    ((uint32_t) 0x00000001UL)
/*--------*/



#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_MSG2INT_H_ */
