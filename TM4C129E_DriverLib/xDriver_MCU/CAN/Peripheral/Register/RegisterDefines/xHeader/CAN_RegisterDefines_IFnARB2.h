/**
 *
 * @file CAN_RegisterDefines_IFnARB2.h
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
 * @verbatim Apr 30, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 30, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_IFNARB2_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_IFNARB2_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 18-19 IFnARB2 *********************************************
******************************************************************************************/
/*--------*/
#define CAN_IFnARB2_R_ID_MASK    ((uint32_t) 0x00001FFFUL)
#define CAN_IFnARB2_R_ID_BIT    ((uint32_t) 0UL)
#define CAN_IFnARB2_R_ID_EX_ID16    ((uint32_t) 0x00000001UL)
#define CAN_IFnARB2_R_ID_EX_ID17    ((uint32_t) 0x00000002UL)
#define CAN_IFnARB2_R_ID_EX_ID18    ((uint32_t) 0x00000004UL)
#define CAN_IFnARB2_R_ID_EX_ID19    ((uint32_t) 0x00000008UL)
#define CAN_IFnARB2_R_ID_EX_ID20    ((uint32_t) 0x00000010UL)
#define CAN_IFnARB2_R_ID_EX_ID21    ((uint32_t) 0x00000020UL)
#define CAN_IFnARB2_R_ID_EX_ID22    ((uint32_t) 0x00000040UL)
#define CAN_IFnARB2_R_ID_EX_ID23    ((uint32_t) 0x00000080UL)
#define CAN_IFnARB2_R_ID_EX_ID24    ((uint32_t) 0x00000100UL)
#define CAN_IFnARB2_R_ID_EX_ID25    ((uint32_t) 0x00000200UL)
#define CAN_IFnARB2_R_ID_EX_ID26    ((uint32_t) 0x00000400UL)
#define CAN_IFnARB2_R_ID_EX_ID27    ((uint32_t) 0x00000800UL)
#define CAN_IFnARB2_R_ID_EX_ID28    ((uint32_t) 0x00001000UL)

#define CAN_IFnARB2_R_ID_ID0    ((uint32_t) 0x00000004UL)
#define CAN_IFnARB2_R_ID_ID1    ((uint32_t) 0x00000008UL)
#define CAN_IFnARB2_R_ID_ID2    ((uint32_t) 0x00000010UL)
#define CAN_IFnARB2_R_ID_ID3    ((uint32_t) 0x00000020UL)
#define CAN_IFnARB2_R_ID_ID4    ((uint32_t) 0x00000040UL)
#define CAN_IFnARB2_R_ID_ID5    ((uint32_t) 0x00000080UL)
#define CAN_IFnARB2_R_ID_ID6    ((uint32_t) 0x00000100UL)
#define CAN_IFnARB2_R_ID_ID7    ((uint32_t) 0x00000200UL)
#define CAN_IFnARB2_R_ID_ID8    ((uint32_t) 0x00000400UL)
#define CAN_IFnARB2_R_ID_ID9    ((uint32_t) 0x00000800UL)
#define CAN_IFnARB2_R_ID_ID10    ((uint32_t) 0x00001000UL)

#define CAN_IFnARB2_ID_MASK    ((uint32_t) 0x00001FFFUL)
#define CAN_IFnARB2_ID_EX_ID16    ((uint32_t) 0x00000001UL)
#define CAN_IFnARB2_ID_EX_ID17    ((uint32_t) 0x00000002UL)
#define CAN_IFnARB2_ID_EX_ID18    ((uint32_t) 0x00000004UL)
#define CAN_IFnARB2_ID_EX_ID19    ((uint32_t) 0x00000008UL)
#define CAN_IFnARB2_ID_EX_ID20    ((uint32_t) 0x00000010UL)
#define CAN_IFnARB2_ID_EX_ID21    ((uint32_t) 0x00000020UL)
#define CAN_IFnARB2_ID_EX_ID22    ((uint32_t) 0x00000040UL)
#define CAN_IFnARB2_ID_EX_ID23    ((uint32_t) 0x00000080UL)
#define CAN_IFnARB2_ID_EX_ID24    ((uint32_t) 0x00000100UL)
#define CAN_IFnARB2_ID_EX_ID25    ((uint32_t) 0x00000200UL)
#define CAN_IFnARB2_ID_EX_ID26    ((uint32_t) 0x00000400UL)
#define CAN_IFnARB2_ID_EX_ID27    ((uint32_t) 0x00000800UL)
#define CAN_IFnARB2_ID_EX_ID28    ((uint32_t) 0x00001000UL)

#define CAN_IFnARB2_ID_ID0    ((uint32_t) 0x00000004UL)
#define CAN_IFnARB2_ID_ID1    ((uint32_t) 0x00000008UL)
#define CAN_IFnARB2_ID_ID2    ((uint32_t) 0x00000010UL)
#define CAN_IFnARB2_ID_ID3    ((uint32_t) 0x00000020UL)
#define CAN_IFnARB2_ID_ID4    ((uint32_t) 0x00000040UL)
#define CAN_IFnARB2_ID_ID5    ((uint32_t) 0x00000080UL)
#define CAN_IFnARB2_ID_ID6    ((uint32_t) 0x00000100UL)
#define CAN_IFnARB2_ID_ID7    ((uint32_t) 0x00000200UL)
#define CAN_IFnARB2_ID_ID8    ((uint32_t) 0x00000400UL)
#define CAN_IFnARB2_ID_ID9    ((uint32_t) 0x00000800UL)
#define CAN_IFnARB2_ID_ID10    ((uint32_t) 0x00001000UL)
/*--------*/

/*--------*/
#define CAN_IFnARB2_R_DIR_MASK    ((uint32_t) 0x00002000UL)
#define CAN_IFnARB2_R_DIR_BIT    ((uint32_t) 13UL)
#define CAN_IFnARB2_R_DIR_RECEIVE    ((uint32_t) 0x00000000UL)
#define CAN_IFnARB2_R_DIR_TRANSMIT    ((uint32_t) 0x00002000UL)

#define CAN_IFnARB2_DIR_MASK    ((uint32_t) 0x00000001UL)
#define CAN_IFnARB2_DIR_RECEIVE    ((uint32_t) 0x00000000UL)
#define CAN_IFnARB2_DIR_TRANSMIT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_IFnARB2_R_XTD_MASK    ((uint32_t) 0x00004000UL)
#define CAN_IFnARB2_R_XTD_BIT    ((uint32_t) 14UL)
#define CAN_IFnARB2_R_XTD_STANDARD    ((uint32_t) 0x00000000UL)
#define CAN_IFnARB2_R_XTD_EXTENDED    ((uint32_t) 0x00004000UL)

#define CAN_IFnARB2_XTD_MASK    ((uint32_t) 0x00000001UL)
#define CAN_IFnARB2_XTD_STANDARD    ((uint32_t) 0x00000000UL)
#define CAN_IFnARB2_XTD_EXTENDED    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define CAN_IFnARB2_R_MSGVAL_MASK    ((uint32_t) 0x00008000UL)
#define CAN_IFnARB2_R_MSGVAL_BIT    ((uint32_t) 15UL)
#define CAN_IFnARB2_R_MSGVAL_IGNORED    ((uint32_t) 0x00000000UL)
#define CAN_IFnARB2_R_MSGVAL_READY    ((uint32_t) 0x00008000UL)

#define CAN_IFnARB2_MSGVAL_MASK    ((uint32_t) 0x00000001UL)
#define CAN_IFnARB2_MSGVAL_IGNORED    ((uint32_t) 0x00000000UL)
#define CAN_IFnARB2_MSGVAL_READY    ((uint32_t) 0x00000001UL)
/*--------*/



#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_IFNARB2_H_ */
