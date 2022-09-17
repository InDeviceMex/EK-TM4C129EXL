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

#include <xDriver_MCU/CAN/Peripheral/xHeader/CAN_Enum.h>

#define CAN_IF_REGISTER_NUM    ((uint32_t) 24UL)
#define CAN_MSG_REGISTER_NUM    ((uint32_t) 4UL)

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

#define CAN_IFn_CRQ_OFFSET    ((uint32_t) 0x0000UL)
#define CAN_IFn_CMSK_OFFSET    ((uint32_t) 0x0004UL)
#define CAN_IFn_MSK1_OFFSET    ((uint32_t) 0x0008UL)
#define CAN_IFn_MSK2_OFFSET    ((uint32_t) 0x000CUL)
#define CAN_IFn_ARB1_OFFSET    ((uint32_t) 0x0010UL)
#define CAN_IFn_ARB2_OFFSET    ((uint32_t) 0x0014UL)
#define CAN_IFn_MCTL_OFFSET    ((uint32_t) 0x0018UL)
#define CAN_IFn_DA1_OFFSET    ((uint32_t) 0x001CUL)
#define CAN_IFn_DA2_OFFSET    ((uint32_t) 0x0020UL)
#define CAN_IFn_DB1_OFFSET    ((uint32_t) 0x0024UL)
#define CAN_IFn_DB2_OFFSET    ((uint32_t) 0x0028UL)

#define CAN_IF_REGISTER_INITIAL    ((uint32_t) 0x0020UL)
#define CAN_IF_REGISTER_OFFSET    ((uint32_t) 0x0060UL)


#define CAN_IF1_CRQ_OFFSET    ((uint32_t) 0x0020UL)
#define CAN_IF1_CMSK_OFFSET    ((uint32_t) 0x0024UL)
#define CAN_IF1_MSK1_OFFSET    ((uint32_t) 0x0028UL)
#define CAN_IF1_MSK2_OFFSET    ((uint32_t) 0x002CUL)
#define CAN_IF1_ARB1_OFFSET    ((uint32_t) 0x0030UL)
#define CAN_IF1_ARB2_OFFSET    ((uint32_t) 0x0034UL)
#define CAN_IF1_MCTL_OFFSET    ((uint32_t) 0x0038UL)
#define CAN_IF1_DA1_OFFSET    ((uint32_t) 0x003CUL)
#define CAN_IF1_DA2_OFFSET    ((uint32_t) 0x0040UL)
#define CAN_IF1_DB1_OFFSET    ((uint32_t) 0x0044UL)
#define CAN_IF1_DB2_OFFSET    ((uint32_t) 0x0048UL)

#define CAN_IF2_CRQ_OFFSET    ((uint32_t) 0x0080UL)
#define CAN_IF2_CMSK_OFFSET    ((uint32_t) 0x0084UL)
#define CAN_IF2_MSK1_OFFSET    ((uint32_t) 0x0088UL)
#define CAN_IF2_MSK2_OFFSET    ((uint32_t) 0x008CUL)
#define CAN_IF2_ARB1_OFFSET    ((uint32_t) 0x0090UL)
#define CAN_IF2_ARB2_OFFSET    ((uint32_t) 0x0094UL)
#define CAN_IF2_MCTL_OFFSET    ((uint32_t) 0x0098UL)
#define CAN_IF2_DA1_OFFSET    ((uint32_t) 0x009CUL)
#define CAN_IF2_DA2_OFFSET    ((uint32_t) 0x00A0UL)
#define CAN_IF2_DB1_OFFSET    ((uint32_t) 0x00A4UL)
#define CAN_IF2_DB2_OFFSET    ((uint32_t) 0x00A8UL)

#define CAN_MSG_REGISTER_INITIAL    ((uint32_t) 0x0100UL)
#define CAN_MSG_REGISTER_OFFSET    ((uint32_t) 0x0020UL)

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

#define CAN_MSG_INT_OFFSET    ((uint32_t) 0x0140UL)
#define CAN_MSG1_INT_OFFSET    ((uint32_t) 0x0140UL)
#define CAN_MSG_INT_LOW_OFFSET    ((uint32_t) 0x0140UL)
#define CAN_MSG2_INT_OFFSET    ((uint32_t) 0x0144UL)
#define CAN_MSG_INT_HIGH_OFFSET    ((uint32_t) 0x0144UL)

#define CAN_MSG_VAL_OFFSET    ((uint32_t) 0x0160UL)
#define CAN_MSG1_VAL_OFFSET    ((uint32_t) 0x0160UL)
#define CAN_MSG_VAL_LOW_OFFSET    ((uint32_t) 0x0160UL)
#define CAN_MSG2_VAL_OFFSET    ((uint32_t) 0x0164UL)
#define CAN_MSG_VAL_HIGH_OFFSET    ((uint32_t) 0x0164UL)


#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_XHEADER_CAN_REGISTERADDRESS_H_ */
