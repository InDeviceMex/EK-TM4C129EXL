/**
 *
 * @file CAN_RegisterDefines_IFnCRQ.h
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
 * @verbatim Apr 15, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 15, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_IFNCRQ_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_IFNCRQ_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 8-9 IFnCRQ *********************************************
******************************************************************************************/
/*--------*/
#define CAN_IFnCRQ_R_MNUM_MASK    ((uint32_t) 0x0000003FUL)
#define CAN_IFnCRQ_R_MNUM_BIT    ((uint32_t) 0UL)
#define CAN_IFnCRQ_R_MNUM_MSG1    ((uint32_t) 0x00000001UL)
#define CAN_IFnCRQ_R_MNUM_MSG2    ((uint32_t) 0x00000002UL)
#define CAN_IFnCRQ_R_MNUM_MSG3    ((uint32_t) 0x00000003UL)
#define CAN_IFnCRQ_R_MNUM_MSG4    ((uint32_t) 0x00000004UL)
#define CAN_IFnCRQ_R_MNUM_MSG5    ((uint32_t) 0x00000005UL)
#define CAN_IFnCRQ_R_MNUM_MSG6    ((uint32_t) 0x00000006UL)
#define CAN_IFnCRQ_R_MNUM_MSG7    ((uint32_t) 0x00000007UL)
#define CAN_IFnCRQ_R_MNUM_MSG8    ((uint32_t) 0x00000008UL)
#define CAN_IFnCRQ_R_MNUM_MSG9    ((uint32_t) 0x00000009UL)
#define CAN_IFnCRQ_R_MNUM_MSG10    ((uint32_t) 0x0000000AUL)
#define CAN_IFnCRQ_R_MNUM_MSG11    ((uint32_t) 0x0000000BUL)
#define CAN_IFnCRQ_R_MNUM_MSG12    ((uint32_t) 0x0000000CUL)
#define CAN_IFnCRQ_R_MNUM_MSG13    ((uint32_t) 0x0000000DUL)
#define CAN_IFnCRQ_R_MNUM_MSG14    ((uint32_t) 0x0000000EUL)
#define CAN_IFnCRQ_R_MNUM_MSG15    ((uint32_t) 0x0000000FUL)
#define CAN_IFnCRQ_R_MNUM_MSG16    ((uint32_t) 0x00000010UL)
#define CAN_IFnCRQ_R_MNUM_MSG17    ((uint32_t) 0x00000011UL)
#define CAN_IFnCRQ_R_MNUM_MSG18    ((uint32_t) 0x00000012UL)
#define CAN_IFnCRQ_R_MNUM_MSG19    ((uint32_t) 0x00000013UL)
#define CAN_IFnCRQ_R_MNUM_MSG20    ((uint32_t) 0x00000014UL)
#define CAN_IFnCRQ_R_MNUM_MSG21    ((uint32_t) 0x00000015UL)
#define CAN_IFnCRQ_R_MNUM_MSG22    ((uint32_t) 0x00000016UL)
#define CAN_IFnCRQ_R_MNUM_MSG23    ((uint32_t) 0x00000017UL)
#define CAN_IFnCRQ_R_MNUM_MSG24    ((uint32_t) 0x00000018UL)
#define CAN_IFnCRQ_R_MNUM_MSG25    ((uint32_t) 0x00000019UL)
#define CAN_IFnCRQ_R_MNUM_MSG26    ((uint32_t) 0x0000001AUL)
#define CAN_IFnCRQ_R_MNUM_MSG27    ((uint32_t) 0x0000001BUL)
#define CAN_IFnCRQ_R_MNUM_MSG28    ((uint32_t) 0x0000001CUL)
#define CAN_IFnCRQ_R_MNUM_MSG29    ((uint32_t) 0x0000001DUL)
#define CAN_IFnCRQ_R_MNUM_MSG30    ((uint32_t) 0x0000001EUL)
#define CAN_IFnCRQ_R_MNUM_MSG31    ((uint32_t) 0x0000001FUL)
#define CAN_IFnCRQ_R_MNUM_MSG32    ((uint32_t) 0x00000020UL)

#define CAN_IFnCRQ_MNUM_MASK    ((uint32_t) 0x0000003FUL)
#define CAN_IFnCRQ_MNUM_MSG1    ((uint32_t) 0x00000001UL)
#define CAN_IFnCRQ_MNUM_MSG2    ((uint32_t) 0x00000002UL)
#define CAN_IFnCRQ_MNUM_MSG3    ((uint32_t) 0x00000003UL)
#define CAN_IFnCRQ_MNUM_MSG4    ((uint32_t) 0x00000004UL)
#define CAN_IFnCRQ_MNUM_MSG5    ((uint32_t) 0x00000005UL)
#define CAN_IFnCRQ_MNUM_MSG6    ((uint32_t) 0x00000006UL)
#define CAN_IFnCRQ_MNUM_MSG7    ((uint32_t) 0x00000007UL)
#define CAN_IFnCRQ_MNUM_MSG8    ((uint32_t) 0x00000008UL)
#define CAN_IFnCRQ_MNUM_MSG9    ((uint32_t) 0x00000009UL)
#define CAN_IFnCRQ_MNUM_MSG10    ((uint32_t) 0x0000000AUL)
#define CAN_IFnCRQ_MNUM_MSG11    ((uint32_t) 0x0000000BUL)
#define CAN_IFnCRQ_MNUM_MSG12    ((uint32_t) 0x0000000CUL)
#define CAN_IFnCRQ_MNUM_MSG13    ((uint32_t) 0x0000000DUL)
#define CAN_IFnCRQ_MNUM_MSG14    ((uint32_t) 0x0000000EUL)
#define CAN_IFnCRQ_MNUM_MSG15    ((uint32_t) 0x0000000FUL)
#define CAN_IFnCRQ_MNUM_MSG16    ((uint32_t) 0x00000010UL)
#define CAN_IFnCRQ_MNUM_MSG17    ((uint32_t) 0x00000011UL)
#define CAN_IFnCRQ_MNUM_MSG18    ((uint32_t) 0x00000012UL)
#define CAN_IFnCRQ_MNUM_MSG19    ((uint32_t) 0x00000013UL)
#define CAN_IFnCRQ_MNUM_MSG20    ((uint32_t) 0x00000014UL)
#define CAN_IFnCRQ_MNUM_MSG21    ((uint32_t) 0x00000015UL)
#define CAN_IFnCRQ_MNUM_MSG22    ((uint32_t) 0x00000016UL)
#define CAN_IFnCRQ_MNUM_MSG23    ((uint32_t) 0x00000017UL)
#define CAN_IFnCRQ_MNUM_MSG24    ((uint32_t) 0x00000018UL)
#define CAN_IFnCRQ_MNUM_MSG25    ((uint32_t) 0x00000019UL)
#define CAN_IFnCRQ_MNUM_MSG26    ((uint32_t) 0x0000001AUL)
#define CAN_IFnCRQ_MNUM_MSG27    ((uint32_t) 0x0000001BUL)
#define CAN_IFnCRQ_MNUM_MSG28    ((uint32_t) 0x0000001CUL)
#define CAN_IFnCRQ_MNUM_MSG29    ((uint32_t) 0x0000001DUL)
#define CAN_IFnCRQ_MNUM_MSG30    ((uint32_t) 0x0000001EUL)
#define CAN_IFnCRQ_MNUM_MSG31    ((uint32_t) 0x0000001FUL)
#define CAN_IFnCRQ_MNUM_MSG32    ((uint32_t) 0x00000020UL)
/*--------*/

/*--------*/
#define CAN_IFnCRQ_R_BUSY_MASK    ((uint32_t) 0x00008000UL)
#define CAN_IFnCRQ_R_BUSY_BIT    ((uint32_t) 15UL)
#define CAN_IFnCRQ_R_BUSY_IDLE    ((uint32_t) 0x00000000UL)
#define CAN_IFnCRQ_R_BUSY_BUSY    ((uint32_t) 0x00008000UL)

#define CAN_IFnCRQ_BUSY_MASK    ((uint32_t) 0x00000001UL)
#define CAN_IFnCRQ_BUSY_IDLE    ((uint32_t) 0x00000000UL)
#define CAN_IFnCRQ_BUSY_BUSY    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_CAN_REGISTERDEFINES_IFNCRQ_H_ */
