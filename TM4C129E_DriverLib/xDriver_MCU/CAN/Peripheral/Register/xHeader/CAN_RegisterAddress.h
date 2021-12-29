/**
 *
 * @file CAN_RegisterAddress.h
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
 * @verbatim Apr 13, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 13, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_XHEADER_CAN_REGISTERADDRESS_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_XHEADER_CAN_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define CAN_INTERFACE_REGISTER_NUM    ((uint32_t) 24UL)
#define CAN_MESSAGE_REGISTER_NUM    ((uint32_t) 4UL)

#define CAN_BASE    ((uint32_t) 0x40040000UL)
#define CAN0_BASE    ((uint32_t) 0x40040000UL)
#define CAN1_BASE    ((uint32_t) 0x40041000UL)

#define CAN_OFFSET    ((uint32_t) 0x00040000UL)
#define CAN0_OFFSET    ((uint32_t) 0x00040000UL)
#define CAN1_OFFSET    ((uint32_t) 0x00041000UL)

#define CAN_BITBANDING_BASE    ((uint32_t) 0x42000000UL)

#define CAN_CTL_OFFSET    ((uint32_t) 0x0000UL)
#define CAN_STS_OFFSET    ((uint32_t) 0x0004UL)
#define CAN_ERR_OFFSET    ((uint32_t) 0x0008UL)
#define CAN_BIT_OFFSET    ((uint32_t) 0x000CUL)
#define CAN_INT_OFFSET    ((uint32_t) 0x0010UL)
#define CAN_TST_OFFSET    ((uint32_t) 0x0014UL)
#define CAN_BRPE_OFFSET    ((uint32_t) 0x0018UL)

#define CAN_IFnCRQ_OFFSET    ((uint32_t) 0x0000UL)
#define CAN_IFnCMSK_OFFSET    ((uint32_t) 0x0004UL)
#define CAN_IFnMSK1_OFFSET    ((uint32_t) 0x0008UL)
#define CAN_IFnMSK2_OFFSET    ((uint32_t) 0x000CUL)
#define CAN_IFnARB1_OFFSET    ((uint32_t) 0x0010UL)
#define CAN_IFnARB2_OFFSET    ((uint32_t) 0x0014UL)
#define CAN_IFnMCTL_OFFSET    ((uint32_t) 0x0018UL)
#define CAN_IFnDA1_OFFSET    ((uint32_t) 0x001CUL)
#define CAN_IFnDA2_OFFSET    ((uint32_t) 0x0020UL)
#define CAN_IFnDB1_OFFSET    ((uint32_t) 0x0024UL)
#define CAN_IFnDB2_OFFSET    ((uint32_t) 0x0028UL)

#define CAN_INTERFACE_REGISTER_INITIAL    ((uint32_t) 0x0020UL)
#define CAN_INTERFACE_REGISTER_OFFSET    ((uint32_t) 0x0060UL)


#define CAN_IF1CRQ_OFFSET    ((uint32_t) 0x0020UL)
#define CAN_IF1CMSK_OFFSET    ((uint32_t) 0x0024UL)
#define CAN_IF1MSK1_OFFSET    ((uint32_t) 0x0028UL)
#define CAN_IF1MSK2_OFFSET    ((uint32_t) 0x002CUL)
#define CAN_IF1ARB1_OFFSET    ((uint32_t) 0x0030UL)
#define CAN_IF1ARB2_OFFSET    ((uint32_t) 0x0034UL)
#define CAN_IF1MCTL_OFFSET    ((uint32_t) 0x0038UL)
#define CAN_IF1DA1_OFFSET    ((uint32_t) 0x003CUL)
#define CAN_IF1DA2_OFFSET    ((uint32_t) 0x0040UL)
#define CAN_IF1DB1_OFFSET    ((uint32_t) 0x0044UL)
#define CAN_IF1DB2_OFFSET    ((uint32_t) 0x0048UL)

#define CAN_IF2CRQ_OFFSET    ((uint32_t) 0x0080UL)
#define CAN_IF2CMSK_OFFSET    ((uint32_t) 0x0084UL)
#define CAN_IF2MSK1_OFFSET    ((uint32_t) 0x0088UL)
#define CAN_IF2MSK2_OFFSET    ((uint32_t) 0x008CUL)
#define CAN_IF2ARB1_OFFSET    ((uint32_t) 0x0090UL)
#define CAN_IF2ARB2_OFFSET    ((uint32_t) 0x0094UL)
#define CAN_IF2MCTL_OFFSET    ((uint32_t) 0x0098UL)
#define CAN_IF2DA1_OFFSET    ((uint32_t) 0x009CUL)
#define CAN_IF2DA2_OFFSET    ((uint32_t) 0x00A0UL)
#define CAN_IF2DB1_OFFSET    ((uint32_t) 0x00A4UL)
#define CAN_IF2DB2_OFFSET    ((uint32_t) 0x00A8UL)

#define CAN_MESSAGE_REGISTER_INITIAL    ((uint32_t) 0x0100UL)
#define CAN_MESSAGE_REGISTER_OFFSET    ((uint32_t) 0x0020UL)

#define CAN_TXRQ_OFFSET    ((uint32_t) 0x0100UL)
#define CAN_TXRQ1_OFFSET    ((uint32_t) 0x0100UL)
#define CAN_TXRQ_LOW_OFFSET    ((uint32_t) 0x0100UL)
#define CAN_TXRQ2_OFFSET    ((uint32_t) 0x0104UL)
#define CAN_TXRQ_HIGH_OFFSET    ((uint32_t) 0x0104UL)

#define CAN_NWDA_OFFSET    ((uint32_t) 0x0120UL)
#define CAN_NWDA1_OFFSET    ((uint32_t) 0x0120UL)
#define CAN_NWDA_LOW_OFFSET    ((uint32_t) 0x0120UL)
#define CAN_NWDA2_OFFSET    ((uint32_t) 0x0124UL)
#define CAN_NWDA_HIGH_OFFSET    ((uint32_t) 0x0124UL)

#define CAN_MSGINT_OFFSET    ((uint32_t) 0x0140UL)
#define CAN_MSG1INT_OFFSET    ((uint32_t) 0x0140UL)
#define CAN_MSGINT_LOW_OFFSET    ((uint32_t) 0x0140UL)
#define CAN_MSG2INT_OFFSET    ((uint32_t) 0x0144UL)
#define CAN_MSGINT_HIGH_OFFSET    ((uint32_t) 0x0144UL)

#define CAN_MSGVAL_OFFSET    ((uint32_t) 0x0160UL)
#define CAN_MSG1VAL_OFFSET    ((uint32_t) 0x0160UL)
#define CAN_MSGVAL_LOW_OFFSET    ((uint32_t) 0x0160UL)
#define CAN_MSG2VAL_OFFSET    ((uint32_t) 0x0164UL)
#define CAN_MSGVAL_HIGH_OFFSET    ((uint32_t) 0x0164UL)


#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_XHEADER_CAN_REGISTERADDRESS_H_ */
