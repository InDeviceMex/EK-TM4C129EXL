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

#include <xDriver_MCU/CAN/Peripheral/xHeader/CAN_Enum.h>

/******************************************************************************************
************************************ 2 STS *********************************************
******************************************************************************************/
/*--------*/
#define CAN_STS_R_LEC_MASK    ((UBase_t) 0x00000007UL)
#define CAN_STS_R_LEC_BIT    ((UBase_t) 0UL)
#define CAN_STS_R_LEC_NOERROR    ((UBase_t) 0x00000000UL)
#define CAN_STS_R_LEC_STUFF    ((UBase_t) 0x00000001UL)
#define CAN_STS_R_LEC_FORMAT    ((UBase_t) 0x00000002UL)
#define CAN_STS_R_LEC_ACK    ((UBase_t) 0x00000003UL)
#define CAN_STS_R_LEC_BIT1    ((UBase_t) 0x00000004UL)
#define CAN_STS_R_LEC_BIT0    ((UBase_t) 0x00000005UL)
#define CAN_STS_R_LEC_CRC    ((UBase_t) 0x00000006UL)
#define CAN_STS_R_LEC_NOEVENT    ((UBase_t) 0x00000007UL)

#define CAN_STS_LEC_MASK    ((UBase_t) 0x00000007UL)
#define CAN_STS_LEC_NOERROR    ((UBase_t) 0x00000000UL)
#define CAN_STS_LEC_STUFF    ((UBase_t) 0x00000001UL)
#define CAN_STS_LEC_FORMAT    ((UBase_t) 0x00000002UL)
#define CAN_STS_LEC_ACK    ((UBase_t) 0x00000003UL)
#define CAN_STS_LEC_BIT1    ((UBase_t) 0x00000004UL)
#define CAN_STS_LEC_BIT0    ((UBase_t) 0x00000005UL)
#define CAN_STS_LEC_CRC    ((UBase_t) 0x00000006UL)
#define CAN_STS_LEC_NOEVENT    ((UBase_t) 0x00000007UL)
/*--------*/

/*--------*/
#define CAN_STS_R_TXOK_MASK    ((UBase_t) 0x00000008UL)
#define CAN_STS_R_TXOK_BIT    ((UBase_t) 3UL)
#define CAN_STS_R_TXOK_CLEAR    ((UBase_t) 0x00000000UL)
#define CAN_STS_R_TXOK_NOK    ((UBase_t) 0x00000000UL)
#define CAN_STS_R_TXOK_OK    ((UBase_t) 0x00000008UL)

#define CAN_STS_TXOK_MASK    ((UBase_t) 0x00000001UL)
#define CAN_STS_TXOK_CLEAR    ((UBase_t) 0x00000000UL)
#define CAN_STS_TXOK_NOK    ((UBase_t) 0x00000000UL)
#define CAN_STS_TXOK_OK    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_STS_R_RXOK_MASK    ((UBase_t) 0x00000010UL)
#define CAN_STS_R_RXOK_BIT    ((UBase_t) 4UL)
#define CAN_STS_R_RXOK_CLEAR    ((UBase_t) 0x00000000UL)
#define CAN_STS_R_RXOK_NOK    ((UBase_t) 0x00000000UL)
#define CAN_STS_R_RXOK_OK    ((UBase_t) 0x00000010UL)

#define CAN_STS_RXOK_MASK    ((UBase_t) 0x00000001UL)
#define CAN_STS_RXOK_CLEAR    ((UBase_t) 0x00000000UL)
#define CAN_STS_RXOK_NOK    ((UBase_t) 0x00000000UL)
#define CAN_STS_RXOK_OK    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_STS_R_EPASS_MASK    ((UBase_t) 0x00000020UL)
#define CAN_STS_R_EPASS_BIT    ((UBase_t) 5UL)
#define CAN_STS_R_EPASS_EQ    ((UBase_t) 0x00000000UL)
#define CAN_STS_R_EPASS_LS    ((UBase_t) 0x00000000UL)
#define CAN_STS_R_EPASS_GT    ((UBase_t) 0x00000020UL)

#define CAN_STS_EPASS_MASK    ((UBase_t) 0x00000001UL)
#define CAN_STS_EPASS_EQ    ((UBase_t) 0x00000000UL)
#define CAN_STS_EPASS_LS    ((UBase_t) 0x00000000UL)
#define CAN_STS_EPASS_GT    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_STS_R_EWARN_MASK    ((UBase_t) 0x00000040UL)
#define CAN_STS_R_EWARN_BIT    ((UBase_t) 6UL)
#define CAN_STS_R_EWARN_LESS    ((UBase_t) 0x00000000UL)
#define CAN_STS_R_EWARN_LIMIT    ((UBase_t) 0x00000040UL)

#define CAN_STS_EWARN_MASK    ((UBase_t) 0x00000001UL)
#define CAN_STS_EWARN_LESS    ((UBase_t) 0x00000000UL)
#define CAN_STS_EWARN_LIMIT    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_STS_R_BOFF_MASK    ((UBase_t) 0x00000080UL)
#define CAN_STS_R_BOFF_BIT    ((UBase_t) 7UL)
#define CAN_STS_R_BOFF_ON    ((UBase_t) 0x00000000UL)
#define CAN_STS_R_BOFF_OFF    ((UBase_t) 0x00000080UL)

#define CAN_STS_BOFF_MASK    ((UBase_t) 0x00000001UL)
#define CAN_STS_BOFF_ON    ((UBase_t) 0x00000000UL)
#define CAN_STS_BOFF_OFF    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_STS_H_ */
