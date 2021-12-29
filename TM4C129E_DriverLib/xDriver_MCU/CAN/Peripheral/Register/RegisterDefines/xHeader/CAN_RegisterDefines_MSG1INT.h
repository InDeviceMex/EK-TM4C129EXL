/**
 *
 * @file CAN_RegisterDefines_MSG1INT.h
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

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_MSG1INT_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_MSG1INT_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 34 MSG1INT *********************************************
******************************************************************************************/
/*--------*/
#define CAN_MSG1INT_R_INTPND_MASK    ((uint32_t) 0x0000FFFFUL)
#define CAN_MSG1INT_R_INTPND_BIT    ((uint32_t) 0UL)
#define CAN_MSG1INT_R_INTPND_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND_PEND0    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_R_INTPND_PEND1    ((uint32_t) 0x00000002UL)
#define CAN_MSG1INT_R_INTPND_PEND2    ((uint32_t) 0x00000004UL)
#define CAN_MSG1INT_R_INTPND_PEND3    ((uint32_t) 0x00000008UL)
#define CAN_MSG1INT_R_INTPND_PEND4    ((uint32_t) 0x00000010UL)
#define CAN_MSG1INT_R_INTPND_PEND5    ((uint32_t) 0x00000020UL)
#define CAN_MSG1INT_R_INTPND_PEND6    ((uint32_t) 0x00000040UL)
#define CAN_MSG1INT_R_INTPND_PEND7    ((uint32_t) 0x00000080UL)
#define CAN_MSG1INT_R_INTPND_PEND8    ((uint32_t) 0x00000100UL)
#define CAN_MSG1INT_R_INTPND_PEND9    ((uint32_t) 0x00000200UL)
#define CAN_MSG1INT_R_INTPND_PEND10    ((uint32_t) 0x00000400UL)
#define CAN_MSG1INT_R_INTPND_PEND11    ((uint32_t) 0x00000800UL)
#define CAN_MSG1INT_R_INTPND_PEND12    ((uint32_t) 0x00001000UL)
#define CAN_MSG1INT_R_INTPND_PEND13    ((uint32_t) 0x00002000UL)
#define CAN_MSG1INT_R_INTPND_PEND14    ((uint32_t) 0x00004000UL)
#define CAN_MSG1INT_R_INTPND_PEND15    ((uint32_t) 0x00008000UL)

#define CAN_MSG1INT_INTPND_MASK    ((uint32_t) 0x0000FFFFUL)
#define CAN_MSG1INT_INTPND_BIT    ((uint32_t) 0UL)
#define CAN_MSG1INT_INTPND_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND_PEND0    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND_PEND1    ((uint32_t) 0x00000002UL)
#define CAN_MSG1INT_INTPND_PEND2    ((uint32_t) 0x00000004UL)
#define CAN_MSG1INT_INTPND_PEND3    ((uint32_t) 0x00000008UL)
#define CAN_MSG1INT_INTPND_PEND4    ((uint32_t) 0x00000010UL)
#define CAN_MSG1INT_INTPND_PEND5    ((uint32_t) 0x00000020UL)
#define CAN_MSG1INT_INTPND_PEND6    ((uint32_t) 0x00000040UL)
#define CAN_MSG1INT_INTPND_PEND7    ((uint32_t) 0x00000080UL)
#define CAN_MSG1INT_INTPND_PEND8    ((uint32_t) 0x00000100UL)
#define CAN_MSG1INT_INTPND_PEND9    ((uint32_t) 0x00000200UL)
#define CAN_MSG1INT_INTPND_PEND10    ((uint32_t) 0x00000400UL)
#define CAN_MSG1INT_INTPND_PEND11    ((uint32_t) 0x00000800UL)
#define CAN_MSG1INT_INTPND_PEND12    ((uint32_t) 0x00001000UL)
#define CAN_MSG1INT_INTPND_PEND13    ((uint32_t) 0x00002000UL)
#define CAN_MSG1INT_INTPND_PEND14    ((uint32_t) 0x00004000UL)
#define CAN_MSG1INT_INTPND_PEND15    ((uint32_t) 0x00008000UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND0_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_R_INTPND0_BIT    ((uint32_t) 0UL)
#define CAN_MSG1INT_R_INTPND0_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND0_PEND    ((uint32_t) 0x00000001UL)

#define CAN_MSG1INT_INTPND0_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND0_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND0_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND1_MASK    ((uint32_t) 0x00000002UL)
#define CAN_MSG1INT_R_INTPND1_BIT    ((uint32_t) 1UL)
#define CAN_MSG1INT_R_INTPND1_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND1_PEND    ((uint32_t) 0x00000002UL)

#define CAN_MSG1INT_INTPND1_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND1_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND1_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND2_MASK    ((uint32_t) 0x00000004UL)
#define CAN_MSG1INT_R_INTPND2_BIT    ((uint32_t) 2UL)
#define CAN_MSG1INT_R_INTPND2_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND2_PEND    ((uint32_t) 0x00000004UL)

#define CAN_MSG1INT_INTPND2_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND2_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND2_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND3_MASK    ((uint32_t) 0x00000008UL)
#define CAN_MSG1INT_R_INTPND3_BIT    ((uint32_t) 3UL)
#define CAN_MSG1INT_R_INTPND3_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND3_PEND    ((uint32_t) 0x00000008UL)

#define CAN_MSG1INT_INTPND3_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND3_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND3_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND4_MASK    ((uint32_t) 0x00000010UL)
#define CAN_MSG1INT_R_INTPND4_BIT    ((uint32_t) 4UL)
#define CAN_MSG1INT_R_INTPND4_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND4_PEND    ((uint32_t) 0x00000010UL)

#define CAN_MSG1INT_INTPND4_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND4_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND4_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND5_MASK    ((uint32_t) 0x00000020UL)
#define CAN_MSG1INT_R_INTPND5_BIT    ((uint32_t) 5UL)
#define CAN_MSG1INT_R_INTPND5_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND5_PEND    ((uint32_t) 0x00000020UL)

#define CAN_MSG1INT_INTPND5_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND5_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND5_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND6_MASK    ((uint32_t) 0x00000040UL)
#define CAN_MSG1INT_R_INTPND6_BIT    ((uint32_t) 6UL)
#define CAN_MSG1INT_R_INTPND6_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND6_PEND    ((uint32_t) 0x00000040UL)

#define CAN_MSG1INT_INTPND6_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND6_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND6_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND7_MASK    ((uint32_t) 0x00000080UL)
#define CAN_MSG1INT_R_INTPND7_BIT    ((uint32_t) 7UL)
#define CAN_MSG1INT_R_INTPND7_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND7_PEND    ((uint32_t) 0x00000080UL)

#define CAN_MSG1INT_INTPND7_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND7_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND7_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND8_MASK    ((uint32_t) 0x00000100UL)
#define CAN_MSG1INT_R_INTPND8_BIT    ((uint32_t) 8UL)
#define CAN_MSG1INT_R_INTPND8_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND8_PEND    ((uint32_t) 0x00000100UL)

#define CAN_MSG1INT_INTPND8_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND8_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND8_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND9_MASK    ((uint32_t) 0x00000200UL)
#define CAN_MSG1INT_R_INTPND9_BIT    ((uint32_t) 9UL)
#define CAN_MSG1INT_R_INTPND9_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND9_PEND    ((uint32_t) 0x00000200UL)

#define CAN_MSG1INT_INTPND9_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND9_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND9_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND10_MASK    ((uint32_t) 0x00000400UL)
#define CAN_MSG1INT_R_INTPND10_BIT    ((uint32_t) 10UL)
#define CAN_MSG1INT_R_INTPND10_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND10_PEND    ((uint32_t) 0x00000400UL)

#define CAN_MSG1INT_INTPND10_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND10_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND10_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND11_MASK    ((uint32_t) 0x00000800UL)
#define CAN_MSG1INT_R_INTPND11_BIT    ((uint32_t) 11UL)
#define CAN_MSG1INT_R_INTPND11_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND11_PEND    ((uint32_t) 0x00000800UL)

#define CAN_MSG1INT_INTPND11_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND11_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND11_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND12_MASK    ((uint32_t) 0x00001000UL)
#define CAN_MSG1INT_R_INTPND12_BIT    ((uint32_t) 12UL)
#define CAN_MSG1INT_R_INTPND12_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND12_PEND    ((uint32_t) 0x00001000UL)

#define CAN_MSG1INT_INTPND12_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND12_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND12_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND13_MASK    ((uint32_t) 0x00002000UL)
#define CAN_MSG1INT_R_INTPND13_BIT    ((uint32_t) 13UL)
#define CAN_MSG1INT_R_INTPND13_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND13_PEND    ((uint32_t) 0x00002000UL)

#define CAN_MSG1INT_INTPND13_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND13_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND13_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND14_MASK    ((uint32_t) 0x00004000UL)
#define CAN_MSG1INT_R_INTPND14_BIT    ((uint32_t) 14UL)
#define CAN_MSG1INT_R_INTPND14_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND14_PEND    ((uint32_t) 0x00004000UL)

#define CAN_MSG1INT_INTPND14_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND14_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND14_PEND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_MSG1INT_R_INTPND15_MASK    ((uint32_t) 0x00008000UL)
#define CAN_MSG1INT_R_INTPND15_BIT    ((uint32_t) 15UL)
#define CAN_MSG1INT_R_INTPND15_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_R_INTPND15_PEND    ((uint32_t) 0x00008000UL)

#define CAN_MSG1INT_INTPND15_MASK    ((uint32_t) 0x00000001UL)
#define CAN_MSG1INT_INTPND15_NO    ((uint32_t) 0x00000000UL)
#define CAN_MSG1INT_INTPND15_PEND    ((uint32_t) 0x00000001UL)
/*--------*/



#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_MSG1INT_H_ */
