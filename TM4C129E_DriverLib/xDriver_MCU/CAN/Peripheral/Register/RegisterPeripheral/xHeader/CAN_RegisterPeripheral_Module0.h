/**
 *
 * @file CAN_RegisterPeripheral_Module0.h
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

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_CAN_REGISTERPERIPHERAL_MODULE0_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_CAN_REGISTERPERIPHERAL_MODULE0_H_

#include <xDriver_MCU/CAN/Peripheral/Register/xHeader/CAN_RegisterAddress.h>
#include <xDriver_MCU/CAN/Peripheral/Struct/xHeader/CAN_StructPeripheral.h>

/******************************************************************************************
************************************ CAN0 *********************************************
******************************************************************************************/

#define CAN0    ((CAN_TypeDef*) (CAN0_BASE))

/******************************************************************************************
************************************ 1 CTL *********************************************
******************************************************************************************/
#define CAN0_CTL    ((CANCTL_TypeDef*) (CAN0_BASE + CAN_CTL_OFFSET))
#define CAN0_CTL_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_CTL_OFFSET)))

/******************************************************************************************
************************************ 2 STS *********************************************
******************************************************************************************/
#define CAN0_STS    ((CANSTS_TypeDef*) (CAN0_BASE + CAN_STS_OFFSET))
#define CAN0_STS_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_STS_OFFSET)))

/******************************************************************************************
************************************ 3 ERR *********************************************
******************************************************************************************/
#define CAN0_ERR    ((CANERR_TypeDef*) (CAN0_BASE + CAN_ERR_OFFSET))
#define CAN0_ERR_R    (*((volatile const uint32_t*) (CAN0_BASE + CAN_ERR_OFFSET)))

/******************************************************************************************
************************************ 4 BIT *********************************************
******************************************************************************************/
#define CAN0_BIT    ((CANBIT_TypeDef*) (CAN0_BASE + CAN_BIT_OFFSET))
#define CAN0_BIT_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_BIT_OFFSET)))

/******************************************************************************************
************************************ 5 INT *********************************************
******************************************************************************************/
#define CAN0_INT    ((CANINT_TypeDef*) (CAN0_BASE + CAN_INT_OFFSET))
#define CAN0_INT_R    (*((volatile const uint32_t*) (CAN0_BASE + CAN_INT_OFFSET)))

/******************************************************************************************
************************************6 TST *********************************************
******************************************************************************************/
#define CAN0_TST    ((CANTST_TypeDef*) (CAN0_BASE + CAN_TST_OFFSET))
#define CAN0_TST_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_TST_OFFSET)))

/******************************************************************************************
************************************7 BRPE *********************************************
******************************************************************************************/
#define CAN0_BRPE    ((CANBRPE_TypeDef*) (CAN0_BASE + CAN_BRPE_OFFSET))
#define CAN0_BRPE_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_BRPE_OFFSET)))

/******************************************************************************************
************************************8-9 IFnCRQ *********************************************
******************************************************************************************/
#define CAN0_IF1CRQ    ((CANIFnCRQ_TypeDef*) (CAN0_BASE + CAN_IF1CRQ_OFFSET))
#define CAN0_IF1CRQ_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1CRQ_OFFSET)))

#define CAN0_IF2CRQ    ((CANIFnCRQ_TypeDef*) (CAN0_BASE + CAN_IF2CRQ_OFFSET))
#define CAN0_IF2CRQ_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2CRQ_OFFSET)))

/******************************************************************************************
************************************10-11 IFnCMSK *********************************************
******************************************************************************************/
#define CAN0_IF1CMSK    ((CANIFnCMSK_TypeDef*) (CAN0_BASE + CAN_IF1CMSK_OFFSET))
#define CAN0_IF1CMSK_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1CMSK_OFFSET)))

#define CAN0_IF2CMSK    ((CANIFnCMSK_TypeDef*) (CAN0_BASE + CAN_IF2CMSK_OFFSET))
#define CAN0_IF2CMSK_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2CMSK_OFFSET)))

/******************************************************************************************
************************************12-13 IFnMSK1 *********************************************
******************************************************************************************/
#define CAN0_IF1MSK1    ((CANIFnMSK1_TypeDef*) (CAN0_BASE + CAN_IF1MSK1_OFFSET))
#define CAN0_IF1MSK1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1MSK1_OFFSET)))

#define CAN0_IF2MSK1    ((CANIFnMSK1_TypeDef*) (CAN0_BASE + CAN_IF2MSK1_OFFSET))
#define CAN0_IF2MSK1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2MSK1_OFFSET)))

/******************************************************************************************
************************************14-15 IFnMSK2 *********************************************
******************************************************************************************/
#define CAN0_IF1MSK2    ((CANIFnMSK2_TypeDef*) (CAN0_BASE + CAN_IF1MSK2_OFFSET))
#define CAN0_IF1MSK2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1MSK2_OFFSET)))

#define CAN0_IF2MSK2    ((CANIFnMSK2_TypeDef*) (CAN0_BASE + CAN_IF2MSK2_OFFSET))
#define CAN0_IF2MSK2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2MSK2_OFFSET)))

/******************************************************************************************
************************************16-17 IFnARB1 *********************************************
******************************************************************************************/
#define CAN0_IF1ARB1    ((CANIFnARB1_TypeDef*) (CAN0_BASE + CAN_IF1ARB1_OFFSET))
#define CAN0_IF1ARB1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1ARB1_OFFSET)))

#define CAN0_IF2ARB1    ((CANIFnARB1_TypeDef*) (CAN0_BASE + CAN_IF2ARB1_OFFSET))
#define CAN0_IF2ARB1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2ARB1_OFFSET)))

/******************************************************************************************
************************************18-19 IFnARB2 *********************************************
******************************************************************************************/
#define CAN0_IF1ARB2    ((CANIFnARB2_TypeDef*) (CAN0_BASE + CAN_IF1ARB2_OFFSET))
#define CAN0_IF1ARB2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1ARB2_OFFSET)))

#define CAN0_IF2ARB2    ((CANIFnARB2_TypeDef*) (CAN0_BASE + CAN_IF2ARB2_OFFSET))
#define CAN0_IF2ARB2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2ARB2_OFFSET)))

/******************************************************************************************
************************************20-21 IFnMCTL *********************************************
******************************************************************************************/
#define CAN0_IF1MCTL    ((CANIFnMCTL_TypeDef*) (CAN0_BASE + CAN_IF1MCTL_OFFSET))
#define CAN0_IF1MCTL_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1MCTL_OFFSET)))

#define CAN0_IF2MCTL    ((CANIFnMCTL_TypeDef*) (CAN0_BASE + CAN_IF2MCTL_OFFSET))
#define CAN0_IF2MCTL_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2MCTL_OFFSET)))

/******************************************************************************************
************************************22-23 IFnDA1 *********************************************
******************************************************************************************/
#define CAN0_IF1DA1    ((CANIFnDA1_TypeDef*) (CAN0_BASE + CAN_IF1DA1_OFFSET))
#define CAN0_IF1DA1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1DA1_OFFSET)))

#define CAN0_IF2DA1    ((CANIFnDA1_TypeDef*) (CAN0_BASE + CAN_IF2DA1_OFFSET))
#define CAN0_IF2DA1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2DA1_OFFSET)))

/******************************************************************************************
************************************24-25 IFnDA2 *********************************************
******************************************************************************************/
#define CAN0_IF1DA2    ((CANIFnDA2_TypeDef*) (CAN0_BASE + CAN_IF1DA2_OFFSET))
#define CAN0_IF1DA2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1DA2_OFFSET)))

#define CAN0_IF2DA2    ((CANIFnDA2_TypeDef*) (CAN0_BASE + CAN_IF2DA2_OFFSET))
#define CAN0_IF2DA2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2DA2_OFFSET)))

/******************************************************************************************
************************************26-27 IFnDB1 *********************************************
******************************************************************************************/
#define CAN0_IF1DB1    ((CANIFnDB1_TypeDef*) (CAN0_BASE + CAN_IF1DB1_OFFSET))
#define CAN0_IF1DB1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1DB1_OFFSET)))

#define CAN0_IF2DB1    ((CANIFnDB1_TypeDef*) (CAN0_BASE + CAN_IF2DB1_OFFSET))
#define CAN0_IF2DB1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2DB1_OFFSET)))

/******************************************************************************************
************************************28-29 IFnDB2 *********************************************
******************************************************************************************/
#define CAN0_IF1DB2    ((CANIFnDB2_TypeDef*) (CAN0_BASE + CAN_IF1DB2_OFFSET))
#define CAN0_IF1DB2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1DB2_OFFSET)))

#define CAN0_IF2DB2    ((CANIFnDB2_TypeDef*) (CAN0_BASE + CAN_IF2DB2_OFFSET))
#define CAN0_IF2DB2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2DB2_OFFSET)))

/******************************************************************************************
************************************30-31 TXRQn *********************************************
******************************************************************************************/
#define CAN0_TXRQ    ((CANTXRQ_TypeDef*) (CAN0_BASE + CAN_TXRQ_OFFSET))
#define CAN0_TXRQ_R    (*((volatile uint64_t*) (CAN0_BASE + CAN_TXRQ_OFFSET)))

#define CAN0_TXRQ1    ((CANTXRQn_TypeDef*) (CAN0_BASE + CAN_TXRQ1_OFFSET))
#define CAN0_TXRQ1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_TXRQ1_OFFSET)))

#define CAN0_TXRQ2    ((CANTXRQn_TypeDef*) (CAN0_BASE + CAN_TXRQ2_OFFSET))
#define CAN0_TXRQ2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_TXRQ2_OFFSET)))

/******************************************************************************************
************************************32-33 NWDAn *********************************************
******************************************************************************************/
#define CAN0_NWDA    ((CANNWDA_TypeDef*) (CAN0_BASE + CAN_NWDA_OFFSET))
#define CAN0_NWDA_R    (*((volatile uint64_t*) (CAN0_BASE + CAN_NWDA_OFFSET)))

#define CAN0_NWDA1    ((CANNWDAn_TypeDef*) (CAN0_BASE + CAN_NWDA1_OFFSET))
#define CAN0_NWDA1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_NWDA1_OFFSET)))

#define CAN0_NWDA2    ((CANNWDAn_TypeDef*) (CAN0_BASE + CAN_NWDA2_OFFSET))
#define CAN0_NWDA2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_NWDA2_OFFSET)))

/******************************************************************************************
************************************34-35 MSGnINT *********************************************
******************************************************************************************/
#define CAN0_MSGINT    ((CANMSGINT_TypeDef*) (CAN0_BASE + CAN_MSGINT_OFFSET))
#define CAN0_MSGINT_R    (*((volatile uint64_t*) (CAN0_BASE + CAN_MSGINT_OFFSET)))

#define CAN0_MSG1INT    ((CANMSGnINT_TypeDef*) (CAN0_BASE + CAN_MSG1INT_OFFSET))
#define CAN0_MSG1INT_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_MSG1INT_OFFSET)))

#define CAN0_MSG2INT    ((CANMSGnINT_TypeDef*) (CAN0_BASE + CAN_MSG2INT_OFFSET))
#define CAN0_MSG2INT_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_MSG2INT_OFFSET)))

/******************************************************************************************
************************************36-37 MSGnVAL *********************************************
******************************************************************************************/
#define CAN0_MSGVAL    ((CANMSGVAL_TypeDef*) (CAN0_BASE + CAN_MSGVAL_OFFSET))
#define CAN0_MSGVAL_R    (*((volatile uint64_t*) (CAN0_BASE + CAN_MSGVAL_OFFSET)))

#define CAN0_MSG1VAL    ((CANMSGnVAL_TypeDef*) (CAN0_BASE + CAN_MSG1VAL_OFFSET))
#define CAN0_MSG1VAL_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_MSG1VAL_OFFSET)))

#define CAN0_MSG2VAL    ((CANMSGnVAL_TypeDef*) (CAN0_BASE + CAN_MSG2VAL_OFFSET))
#define CAN0_MSG2VAL_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_MSG2VAL_OFFSET)))



#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_CAN_REGISTERPERIPHERAL_MODULE0_H_ */
