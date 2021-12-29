/**
 *
 * @file CAN_RegisterPeripheral_Module1.h
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
 * @verbatim Apr 16, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 16, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_CAN_REGISTERPERIPHERAL_MODULE1_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_CAN_REGISTERPERIPHERAL_MODULE1_H_

#include <xDriver_MCU/CAN/Peripheral/Register/xHeader/CAN_RegisterAddress.h>
#include <xDriver_MCU/CAN/Peripheral/Struct/xHeader/CAN_StructPeripheral.h>

/******************************************************************************************
************************************ CAN1 *********************************************
******************************************************************************************/

#define CAN1    ((CAN_TypeDef*) (CAN1_BASE))

/******************************************************************************************
************************************ 1 CTL *********************************************
******************************************************************************************/
#define CAN1_CTL    ((CANCTL_TypeDef*) (CAN1_BASE + CAN_CTL_OFFSET))
#define CAN1_CTL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CTL_OFFSET)))

/******************************************************************************************
************************************ 2 STS *********************************************
******************************************************************************************/
#define CAN1_STS    ((CANSTS_TypeDef*) (CAN1_BASE + CAN_STS_OFFSET))
#define CAN1_STS_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_STS_OFFSET)))

/******************************************************************************************
************************************ 3 ERR *********************************************
******************************************************************************************/
#define CAN1_ERR    ((CANERR_TypeDef*) (CAN1_BASE + CAN_ERR_OFFSET))
#define CAN1_ERR_R    (*((volatile const uint32_t*) (CAN1_BASE + CAN_ERR_OFFSET)))

/******************************************************************************************
************************************ 4 BIT *********************************************
******************************************************************************************/
#define CAN1_BIT    ((CANBIT_TypeDef*) (CAN1_BASE + CAN_BIT_OFFSET))
#define CAN1_BIT_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_BIT_OFFSET)))

/******************************************************************************************
************************************ 5 INT *********************************************
******************************************************************************************/
#define CAN1_INT    ((CANINT_TypeDef*) (CAN1_BASE + CAN_INT_OFFSET))
#define CAN1_INT_R    (*((volatile const uint32_t*) (CAN1_BASE + CAN_INT_OFFSET)))

/******************************************************************************************
************************************6 TST *********************************************
******************************************************************************************/
#define CAN1_TST    ((CANTST_TypeDef*) (CAN1_BASE + CAN_TST_OFFSET))
#define CAN1_TST_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_TST_OFFSET)))

/******************************************************************************************
************************************7 BRPE *********************************************
******************************************************************************************/
#define CAN1_BRPE    ((CANBRPE_TypeDef*) (CAN1_BASE + CAN_BRPE_OFFSET))
#define CAN1_BRPE_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_BRPE_OFFSET)))

/******************************************************************************************
************************************8-9 IFnCRQ *********************************************
******************************************************************************************/
#define CAN1_IF1CRQ    ((CANIFnCRQ_TypeDef*) (CAN1_BASE + CAN_IF1CRQ_OFFSET))
#define CAN1_IF1CRQ_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1CRQ_OFFSET)))

#define CAN1_IF2CRQ    ((CANIFnCRQ_TypeDef*) (CAN1_BASE + CAN_IF2CRQ_OFFSET))
#define CAN1_IF2CRQ_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2CRQ_OFFSET)))

/******************************************************************************************
************************************10-11 IFnCMSK *********************************************
******************************************************************************************/
#define CAN1_IF1CMSK    ((CANIFnCMSK_TypeDef*) (CAN1_BASE + CAN_IF1CMSK_OFFSET))
#define CAN1_IF1CMSK_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1CMSK_OFFSET)))

#define CAN1_IF2CMSK    ((CANIFnCMSK_TypeDef*) (CAN1_BASE + CAN_IF2CMSK_OFFSET))
#define CAN1_IF2CMSK_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2CMSK_OFFSET)))

/******************************************************************************************
************************************12-13 IFnMSK1 *********************************************
******************************************************************************************/
#define CAN1_IF1MSK1    ((CANIFnMSK1_TypeDef*) (CAN1_BASE + CAN_IF1MSK1_OFFSET))
#define CAN1_IF1MSK1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1MSK1_OFFSET)))

#define CAN1_IF2MSK1    ((CANIFnMSK1_TypeDef*) (CAN1_BASE + CAN_IF2MSK1_OFFSET))
#define CAN1_IF2MSK1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2MSK1_OFFSET)))

/******************************************************************************************
************************************14-15 IFnMSK2 *********************************************
******************************************************************************************/
#define CAN1_IF1MSK2    ((CANIFnMSK2_TypeDef*) (CAN1_BASE + CAN_IF1MSK2_OFFSET))
#define CAN1_IF1MSK2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1MSK2_OFFSET)))

#define CAN1_IF2MSK2    ((CANIFnMSK2_TypeDef*) (CAN1_BASE + CAN_IF2MSK2_OFFSET))
#define CAN1_IF2MSK2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2MSK2_OFFSET)))

/******************************************************************************************
************************************16-17 IFnARB1 *********************************************
******************************************************************************************/
#define CAN1_IF1ARB1    ((CANIFnARB1_TypeDef*) (CAN1_BASE + CAN_IF1ARB1_OFFSET))
#define CAN1_IF1ARB1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1ARB1_OFFSET)))

#define CAN1_IF2ARB1    ((CANIFnARB1_TypeDef*) (CAN1_BASE + CAN_IF2ARB1_OFFSET))
#define CAN1_IF2ARB1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2ARB1_OFFSET)))

/******************************************************************************************
************************************18-19 IFnARB2 *********************************************
******************************************************************************************/
#define CAN1_IF1ARB2    ((CANIFnARB2_TypeDef*) (CAN1_BASE + CAN_IF1ARB2_OFFSET))
#define CAN1_IF1ARB2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1ARB2_OFFSET)))

#define CAN1_IF2ARB2    ((CANIFnARB2_TypeDef*) (CAN1_BASE + CAN_IF2ARB2_OFFSET))
#define CAN1_IF2ARB2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2ARB2_OFFSET)))

/******************************************************************************************
************************************20-21 IFnMCTL *********************************************
******************************************************************************************/
#define CAN1_IF1MCTL    ((CANIFnMCTL_TypeDef*) (CAN1_BASE + CAN_IF1MCTL_OFFSET))
#define CAN1_IF1MCTL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1MCTL_OFFSET)))

#define CAN1_IF2MCTL    ((CANIFnMCTL_TypeDef*) (CAN1_BASE + CAN_IF2MCTL_OFFSET))
#define CAN1_IF2MCTL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2MCTL_OFFSET)))

/******************************************************************************************
************************************22-23 IFnDA1 *********************************************
******************************************************************************************/
#define CAN1_IF1DA1    ((CANIFnDA1_TypeDef*) (CAN1_BASE + CAN_IF1DA1_OFFSET))
#define CAN1_IF1DA1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1DA1_OFFSET)))

#define CAN1_IF2DA1    ((CANIFnDA1_TypeDef*) (CAN1_BASE + CAN_IF2DA1_OFFSET))
#define CAN1_IF2DA1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2DA1_OFFSET)))

/******************************************************************************************
************************************24-25 IFnDA2 *********************************************
******************************************************************************************/
#define CAN1_IF1DA2    ((CANIFnDA2_TypeDef*) (CAN1_BASE + CAN_IF1DA2_OFFSET))
#define CAN1_IF1DA2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1DA2_OFFSET)))

#define CAN1_IF2DA2    ((CANIFnDA2_TypeDef*) (CAN1_BASE + CAN_IF2DA2_OFFSET))
#define CAN1_IF2DA2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2DA2_OFFSET)))

/******************************************************************************************
************************************26-27 IFnDB1 *********************************************
******************************************************************************************/
#define CAN1_IF1DB1    ((CANIFnDB1_TypeDef*) (CAN1_BASE + CAN_IF1DB1_OFFSET))
#define CAN1_IF1DB1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1DB1_OFFSET)))

#define CAN1_IF2DB1    ((CANIFnDB1_TypeDef*) (CAN1_BASE + CAN_IF2DB1_OFFSET))
#define CAN1_IF2DB1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2DB1_OFFSET)))

/******************************************************************************************
************************************28-29 IFnDB2 *********************************************
******************************************************************************************/
#define CAN1_IF1DB2    ((CANIFnDB2_TypeDef*) (CAN1_BASE + CAN_IF1DB2_OFFSET))
#define CAN1_IF1DB2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1DB2_OFFSET)))

#define CAN1_IF2DB2    ((CANIFnDB2_TypeDef*) (CAN1_BASE + CAN_IF2DB2_OFFSET))
#define CAN1_IF2DB2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2DB2_OFFSET)))

/******************************************************************************************
************************************30-31 TXRQn *********************************************
******************************************************************************************/
#define CAN1_TXRQ    ((CANTXRQ_TypeDef*) (CAN1_BASE + CAN_TXRQ_OFFSET))
#define CAN1_TXRQ_R    (*((volatile uint64_t*) (CAN1_BASE + CAN_TXRQ_OFFSET)))

#define CAN1_TXRQ1    ((CANTXRQn_TypeDef*) (CAN1_BASE + CAN_TXRQ1_OFFSET))
#define CAN1_TXRQ1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_TXRQ1_OFFSET)))

#define CAN1_TXRQ2    ((CANTXRQn_TypeDef*) (CAN1_BASE + CAN_TXRQ2_OFFSET))
#define CAN1_TXRQ2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_TXRQ2_OFFSET)))

/******************************************************************************************
************************************32-33 NWDAn *********************************************
******************************************************************************************/
#define CAN1_NWDA    ((CANNWDA_TypeDef*) (CAN1_BASE + CAN_NWDA_OFFSET))
#define CAN1_NWDA_R    (*((volatile uint64_t*) (CAN1_BASE + CAN_NWDA_OFFSET)))

#define CAN1_NWDA1    ((CANNWDAn_TypeDef*) (CAN1_BASE + CAN_NWDA1_OFFSET))
#define CAN1_NWDA1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_NWDA1_OFFSET)))

#define CAN1_NWDA2    ((CANNWDAn_TypeDef*) (CAN1_BASE + CAN_NWDA2_OFFSET))
#define CAN1_NWDA2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_NWDA2_OFFSET)))

/******************************************************************************************
************************************34-35 MSGnINT *********************************************
******************************************************************************************/
#define CAN1_MSGINT    ((CANMSGINT_TypeDef*) (CAN1_BASE + CAN_MSGINT_OFFSET))
#define CAN1_MSGINT_R    (*((volatile uint64_t*) (CAN1_BASE + CAN_MSGINT_OFFSET)))

#define CAN1_MSG1INT    ((CANMSGnINT_TypeDef*) (CAN1_BASE + CAN_MSG1INT_OFFSET))
#define CAN1_MSG1INT_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_MSG1INT_OFFSET)))

#define CAN1_MSG2INT    ((CANMSGnINT_TypeDef*) (CAN1_BASE + CAN_MSG2INT_OFFSET))
#define CAN1_MSG2INT_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_MSG2INT_OFFSET)))

/******************************************************************************************
************************************36-37 MSGnVAL *********************************************
******************************************************************************************/
#define CAN1_MSGVAL    ((CANMSGVAL_TypeDef*) (CAN1_BASE + CAN_MSGVAL_OFFSET))
#define CAN1_MSGVAL_R    (*((volatile uint64_t*) (CAN1_BASE + CAN_MSGVAL_OFFSET)))

#define CAN1_MSG1VAL    ((CANMSGnVAL_TypeDef*) (CAN1_BASE + CAN_MSG1VAL_OFFSET))
#define CAN1_MSG1VAL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_MSG1VAL_OFFSET)))

#define CAN1_MSG2VAL    ((CANMSGnVAL_TypeDef*) (CAN1_BASE + CAN_MSG2VAL_OFFSET))
#define CAN1_MSG2VAL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_MSG2VAL_OFFSET)))

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_CAN_REGISTERPERIPHERAL_MODULE1_H_ */
