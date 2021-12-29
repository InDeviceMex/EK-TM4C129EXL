/**
 *
 * @file CAN_RegisterDefines_INT.h
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

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_INT_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_INT_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 5 INT *********************************************
******************************************************************************************/
/*--------*/
#define CAN_INT_R_INTID_MASK    ((uint32_t) 0x0000FFFFUL)
#define CAN_INT_R_INTID_BIT    ((uint32_t) 0UL)
#define CAN_INT_R_INTID_NOINT    ((uint32_t) 0x00000000UL)
#define CAN_INT_R_INTID_MSG0    ((uint32_t) 0x00000001UL)
#define CAN_INT_R_INTID_MSG1    ((uint32_t) 0x00000002UL)
#define CAN_INT_R_INTID_MSG2    ((uint32_t) 0x00000003UL)
#define CAN_INT_R_INTID_MSG3    ((uint32_t) 0x00000004UL)
#define CAN_INT_R_INTID_MSG4    ((uint32_t) 0x00000005UL)
#define CAN_INT_R_INTID_MSG5    ((uint32_t) 0x00000006UL)
#define CAN_INT_R_INTID_MSG6    ((uint32_t) 0x00000007UL)
#define CAN_INT_R_INTID_MSG7    ((uint32_t) 0x00000008UL)
#define CAN_INT_R_INTID_MSG8    ((uint32_t) 0x00000009UL)
#define CAN_INT_R_INTID_MSG9    ((uint32_t) 0x0000000AUL)
#define CAN_INT_R_INTID_MSG10    ((uint32_t) 0x0000000BUL)
#define CAN_INT_R_INTID_MSG11    ((uint32_t) 0x0000000CUL)
#define CAN_INT_R_INTID_MSG12    ((uint32_t) 0x0000000DUL)
#define CAN_INT_R_INTID_MSG13    ((uint32_t) 0x0000000EUL)
#define CAN_INT_R_INTID_MSG14    ((uint32_t) 0x0000000FUL)
#define CAN_INT_R_INTID_MSG15    ((uint32_t) 0x00000010UL)
#define CAN_INT_R_INTID_MSG16    ((uint32_t) 0x00000011UL)
#define CAN_INT_R_INTID_MSG17    ((uint32_t) 0x00000012UL)
#define CAN_INT_R_INTID_MSG18    ((uint32_t) 0x00000013UL)
#define CAN_INT_R_INTID_MSG19    ((uint32_t) 0x00000014UL)
#define CAN_INT_R_INTID_MSG20    ((uint32_t) 0x00000015UL)
#define CAN_INT_R_INTID_MSG21    ((uint32_t) 0x00000016UL)
#define CAN_INT_R_INTID_MSG22    ((uint32_t) 0x00000017UL)
#define CAN_INT_R_INTID_MSG23    ((uint32_t) 0x00000018UL)
#define CAN_INT_R_INTID_MSG24    ((uint32_t) 0x00000019UL)
#define CAN_INT_R_INTID_MSG25    ((uint32_t) 0x0000001AUL)
#define CAN_INT_R_INTID_MSG26    ((uint32_t) 0x0000001BUL)
#define CAN_INT_R_INTID_MSG27    ((uint32_t) 0x0000001CUL)
#define CAN_INT_R_INTID_MSG28    ((uint32_t) 0x0000001DUL)
#define CAN_INT_R_INTID_MSG29    ((uint32_t) 0x0000001EUL)
#define CAN_INT_R_INTID_MSG30    ((uint32_t) 0x0000001FUL)
#define CAN_INT_R_INTID_MSG31    ((uint32_t) 0x00000020UL)
#define CAN_INT_R_INTID_STATUS    ((uint32_t) 0x00008000UL)

#define CAN_INT_INTID_MASK    ((uint32_t) 0x0000FFFFUL)
#define CAN_INT_INTID_NOINT    ((uint32_t) 0x00000000UL)
#define CAN_INT_INTID_MSG0    ((uint32_t) 0x00000001UL)
#define CAN_INT_INTID_MSG1    ((uint32_t) 0x00000002UL)
#define CAN_INT_INTID_MSG2    ((uint32_t) 0x00000003UL)
#define CAN_INT_INTID_MSG3    ((uint32_t) 0x00000004UL)
#define CAN_INT_INTID_MSG4    ((uint32_t) 0x00000005UL)
#define CAN_INT_INTID_MSG5    ((uint32_t) 0x00000006UL)
#define CAN_INT_INTID_MSG6    ((uint32_t) 0x00000007UL)
#define CAN_INT_INTID_MSG7    ((uint32_t) 0x00000008UL)
#define CAN_INT_INTID_MSG8    ((uint32_t) 0x00000009UL)
#define CAN_INT_INTID_MSG9    ((uint32_t) 0x0000000AUL)
#define CAN_INT_INTID_MSG10    ((uint32_t) 0x0000000BUL)
#define CAN_INT_INTID_MSG11    ((uint32_t) 0x0000000CUL)
#define CAN_INT_INTID_MSG12    ((uint32_t) 0x0000000DUL)
#define CAN_INT_INTID_MSG13    ((uint32_t) 0x0000000EUL)
#define CAN_INT_INTID_MSG14    ((uint32_t) 0x0000000FUL)
#define CAN_INT_INTID_MSG15    ((uint32_t) 0x00000010UL)
#define CAN_INT_INTID_MSG16    ((uint32_t) 0x00000011UL)
#define CAN_INT_INTID_MSG17    ((uint32_t) 0x00000012UL)
#define CAN_INT_INTID_MSG18    ((uint32_t) 0x00000013UL)
#define CAN_INT_INTID_MSG19    ((uint32_t) 0x00000014UL)
#define CAN_INT_INTID_MSG20    ((uint32_t) 0x00000015UL)
#define CAN_INT_INTID_MSG21    ((uint32_t) 0x00000016UL)
#define CAN_INT_INTID_MSG22    ((uint32_t) 0x00000017UL)
#define CAN_INT_INTID_MSG23    ((uint32_t) 0x00000018UL)
#define CAN_INT_INTID_MSG24    ((uint32_t) 0x00000019UL)
#define CAN_INT_INTID_MSG25    ((uint32_t) 0x0000001AUL)
#define CAN_INT_INTID_MSG26    ((uint32_t) 0x0000001BUL)
#define CAN_INT_INTID_MSG27    ((uint32_t) 0x0000001CUL)
#define CAN_INT_INTID_MSG28    ((uint32_t) 0x0000001DUL)
#define CAN_INT_INTID_MSG29    ((uint32_t) 0x0000001EUL)
#define CAN_INT_INTID_MSG30    ((uint32_t) 0x0000001FUL)
#define CAN_INT_INTID_MSG31    ((uint32_t) 0x00000020UL)
#define CAN_INT_INTID_STATUS    ((uint32_t) 0x00008000UL)
/*--------*/


#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_INT_H_ */
