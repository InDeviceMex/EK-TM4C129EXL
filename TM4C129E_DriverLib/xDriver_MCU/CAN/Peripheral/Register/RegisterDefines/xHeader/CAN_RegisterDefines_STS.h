/**
 *
 * @file CAN_RegisterDefines_STS.h
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
 * @verbatim Apr 14, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 14, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_STS_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_STS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 2 STS *********************************************
******************************************************************************************/
/*--------*/
#define CAN_STS_R_LEC_MASK    ((uint32_t) 0x00000007UL)
#define CAN_STS_R_LEC_BIT    ((uint32_t) 0UL)
#define CAN_STS_R_LEC_NOERROR    ((uint32_t) 0x00000000UL)
#define CAN_STS_R_LEC_STUFF    ((uint32_t) 0x00000001UL)
#define CAN_STS_R_LEC_FORMAT    ((uint32_t) 0x00000002UL)
#define CAN_STS_R_LEC_ACK    ((uint32_t) 0x00000003UL)
#define CAN_STS_R_LEC_BIT1    ((uint32_t) 0x00000004UL)
#define CAN_STS_R_LEC_BIT0    ((uint32_t) 0x00000005UL)
#define CAN_STS_R_LEC_CRC    ((uint32_t) 0x00000006UL)
#define CAN_STS_R_LEC_NOEVENT    ((uint32_t) 0x00000007UL)

#define CAN_STS_LEC_MASK    ((uint32_t) 0x00000007UL)
#define CAN_STS_LEC_NOERROR    ((uint32_t) 0x00000000UL)
#define CAN_STS_LEC_STUFF    ((uint32_t) 0x00000001UL)
#define CAN_STS_LEC_FORMAT    ((uint32_t) 0x00000002UL)
#define CAN_STS_LEC_ACK    ((uint32_t) 0x00000003UL)
#define CAN_STS_LEC_BIT1    ((uint32_t) 0x00000004UL)
#define CAN_STS_LEC_BIT0    ((uint32_t) 0x00000005UL)
#define CAN_STS_LEC_CRC    ((uint32_t) 0x00000006UL)
#define CAN_STS_LEC_NOEVENT    ((uint32_t) 0x00000007UL)
/*--------*/

/*--------*/
#define CAN_STS_R_TXOK_MASK    ((uint32_t) 0x00000008UL)
#define CAN_STS_R_TXOK_BIT    ((uint32_t) 3UL)
#define CAN_STS_R_TXOK_CLEAR    ((uint32_t) 0x00000000UL)
#define CAN_STS_R_TXOK_NOK    ((uint32_t) 0x00000000UL)
#define CAN_STS_R_TXOK_OK    ((uint32_t) 0x00000008UL)

#define CAN_STS_TXOK_MASK    ((uint32_t) 0x00000001UL)
#define CAN_STS_TXOK_CLEAR    ((uint32_t) 0x00000000UL)
#define CAN_STS_TXOK_NOK    ((uint32_t) 0x00000000UL)
#define CAN_STS_TXOK_OK    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_STS_R_RXOK_MASK    ((uint32_t) 0x00000010UL)
#define CAN_STS_R_RXOK_BIT    ((uint32_t) 4UL)
#define CAN_STS_R_RXOK_CLEAR    ((uint32_t) 0x00000000UL)
#define CAN_STS_R_RXOK_NOK    ((uint32_t) 0x00000000UL)
#define CAN_STS_R_RXOK_OK    ((uint32_t) 0x00000010UL)

#define CAN_STS_RXOK_MASK    ((uint32_t) 0x00000001UL)
#define CAN_STS_RXOK_CLEAR    ((uint32_t) 0x00000000UL)
#define CAN_STS_RXOK_NOK    ((uint32_t) 0x00000000UL)
#define CAN_STS_RXOK_OK    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_STS_R_EPASS_MASK    ((uint32_t) 0x00000020UL)
#define CAN_STS_R_EPASS_BIT    ((uint32_t) 5UL)
#define CAN_STS_R_EPASS_EQ    ((uint32_t) 0x00000000UL)
#define CAN_STS_R_EPASS_LS    ((uint32_t) 0x00000000UL)
#define CAN_STS_R_EPASS_GT    ((uint32_t) 0x00000020UL)

#define CAN_STS_EPASS_MASK    ((uint32_t) 0x00000001UL)
#define CAN_STS_EPASS_EQ    ((uint32_t) 0x00000000UL)
#define CAN_STS_EPASS_LS    ((uint32_t) 0x00000000UL)
#define CAN_STS_EPASS_GT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_STS_R_EWARN_MASK    ((uint32_t) 0x00000040UL)
#define CAN_STS_R_EWARN_BIT    ((uint32_t) 6UL)
#define CAN_STS_R_EWARN_LESS    ((uint32_t) 0x00000000UL)
#define CAN_STS_R_EWARN_LIMIT    ((uint32_t) 0x00000040UL)

#define CAN_STS_EWARN_MASK    ((uint32_t) 0x00000001UL)
#define CAN_STS_EWARN_LESS    ((uint32_t) 0x00000000UL)
#define CAN_STS_EWARN_LIMIT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_STS_R_BOFF_MASK    ((uint32_t) 0x00000080UL)
#define CAN_STS_R_BOFF_BIT    ((uint32_t) 7UL)
#define CAN_STS_R_BOFF_ON    ((uint32_t) 0x00000000UL)
#define CAN_STS_R_BOFF_OFF    ((uint32_t) 0x00000080UL)

#define CAN_STS_BOFF_MASK    ((uint32_t) 0x00000001UL)
#define CAN_STS_BOFF_ON    ((uint32_t) 0x00000000UL)
#define CAN_STS_BOFF_OFF    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_STS_H_ */
