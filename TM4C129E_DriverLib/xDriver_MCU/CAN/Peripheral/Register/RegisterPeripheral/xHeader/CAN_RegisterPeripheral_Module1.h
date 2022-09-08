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

#define CAN1    ((CAN_t*) (CAN1_BASE))

/******************************************************************************************
************************************ 1 CTL *********************************************
******************************************************************************************/
#define CAN1_CTL    ((CAN_CTL_t*) (CAN1_BASE + CAN_CTL_OFFSET))
#define CAN1_CTL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_CTL_OFFSET)))

/******************************************************************************************
************************************ 2 STS *********************************************
******************************************************************************************/
#define CAN1_STS    ((CAN_STS_t*) (CAN1_BASE + CAN_STS_OFFSET))
#define CAN1_STS_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_STS_OFFSET)))

/******************************************************************************************
************************************ 3 ERR *********************************************
******************************************************************************************/
#define CAN1_ERR    ((CAN_ERR_t*) (CAN1_BASE + CAN_ERR_OFFSET))
#define CAN1_ERR_R    (*((volatile const uint32_t*) (CAN1_BASE + CAN_ERR_OFFSET)))

/******************************************************************************************
************************************ 4 BIT *********************************************
******************************************************************************************/
#define CAN1_BIT    ((CAN_BIT_t*) (CAN1_BASE + CAN_BIT_OFFSET))
#define CAN1_BIT_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_BIT_OFFSET)))

/******************************************************************************************
************************************ 5 INT *********************************************
******************************************************************************************/
#define CAN1_INT    ((CAN_INT_t*) (CAN1_BASE + CAN_INT_OFFSET))
#define CAN1_INT_R    (*((volatile const uint32_t*) (CAN1_BASE + CAN_INT_OFFSET)))

/******************************************************************************************
************************************6 TST *********************************************
******************************************************************************************/
#define CAN1_TST    ((CAN_TST_t*) (CAN1_BASE + CAN_TST_OFFSET))
#define CAN1_TST_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_TST_OFFSET)))

/******************************************************************************************
************************************7 BRPE *********************************************
******************************************************************************************/
#define CAN1_BRPE    ((CAN_BRPE_t*) (CAN1_BASE + CAN_BRPE_OFFSET))
#define CAN1_BRPE_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_BRPE_OFFSET)))

/******************************************************************************************
************************************8-9 IFn_CRQ *********************************************
******************************************************************************************/
#define CAN1_IF1_CRQ    ((CAN_IFn_CRQ_t*) (CAN1_BASE + CAN_IF1_CRQ_OFFSET))
#define CAN1_IF1_CRQ_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1_CRQ_OFFSET)))

#define CAN1_IF2_CRQ    ((CAN_IFn_CRQ_t*) (CAN1_BASE + CAN_IF2_CRQ_OFFSET))
#define CAN1_IF2_CRQ_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2_CRQ_OFFSET)))

/******************************************************************************************
************************************10-11 IFn_CMSK *********************************************
******************************************************************************************/
#define CAN1_IF1_CMSK    ((CAN_IFn_CMSK_t*) (CAN1_BASE + CAN_IF1_CMSK_OFFSET))
#define CAN1_IF1_CMSK_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1_CMSK_OFFSET)))

#define CAN1_IF2_CMSK    ((CAN_IFn_CMSK_t*) (CAN1_BASE + CAN_IF2_CMSK_OFFSET))
#define CAN1_IF2_CMSK_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2_CMSK_OFFSET)))

/******************************************************************************************
************************************12-13 IFn_MSK1 *********************************************
******************************************************************************************/
#define CAN1_IF1_MSK1    ((CAN_IFn_MSK1_t*) (CAN1_BASE + CAN_IF1_MSK1_OFFSET))
#define CAN1_IF1_MSK1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1_MSK1_OFFSET)))

#define CAN1_IF2_MSK1    ((CAN_IFn_MSK1_t*) (CAN1_BASE + CAN_IF2_MSK1_OFFSET))
#define CAN1_IF2_MSK1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2_MSK1_OFFSET)))

/******************************************************************************************
************************************14-15 IFn_MSK2 *********************************************
******************************************************************************************/
#define CAN1_IF1_MSK2    ((CAN_IFn_MSK2_t*) (CAN1_BASE + CAN_IF1_MSK2_OFFSET))
#define CAN1_IF1_MSK2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1_MSK2_OFFSET)))

#define CAN1_IF2_MSK2    ((CAN_IFn_MSK2_t*) (CAN1_BASE + CAN_IF2_MSK2_OFFSET))
#define CAN1_IF2_MSK2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2_MSK2_OFFSET)))

/******************************************************************************************
************************************16-17 IFn_ARB1 *********************************************
******************************************************************************************/
#define CAN1_IF1_ARB1    ((CAN_IFn_ARB1_t*) (CAN1_BASE + CAN_IF1_ARB1_OFFSET))
#define CAN1_IF1_ARB1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1_ARB1_OFFSET)))

#define CAN1_IF2_ARB1    ((CAN_IFn_ARB1_t*) (CAN1_BASE + CAN_IF2_ARB1_OFFSET))
#define CAN1_IF2_ARB1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2_ARB1_OFFSET)))

/******************************************************************************************
************************************18-19 IFn_ARB2 *********************************************
******************************************************************************************/
#define CAN1_IF1_ARB2    ((CAN_IFn_ARB2_t*) (CAN1_BASE + CAN_IF1_ARB2_OFFSET))
#define CAN1_IF1_ARB2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1_ARB2_OFFSET)))

#define CAN1_IF2_ARB2    ((CAN_IFn_ARB2_t*) (CAN1_BASE + CAN_IF2_ARB2_OFFSET))
#define CAN1_IF2_ARB2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2_ARB2_OFFSET)))

/******************************************************************************************
************************************20-21 IFn_MCTL *********************************************
******************************************************************************************/
#define CAN1_IF1_MCTL    ((CAN_IFn_MCTL_t*) (CAN1_BASE + CAN_IF1_MCTL_OFFSET))
#define CAN1_IF1_MCTL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1_MCTL_OFFSET)))

#define CAN1_IF2_MCTL    ((CAN_IFn_MCTL_t*) (CAN1_BASE + CAN_IF2_MCTL_OFFSET))
#define CAN1_IF2_MCTL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2_MCTL_OFFSET)))

/******************************************************************************************
************************************22-23 IFn_DA1 *********************************************
******************************************************************************************/
#define CAN1_IF1_DA1    ((CAN_IFn_DA1_t*) (CAN1_BASE + CAN_IF1_DA1_OFFSET))
#define CAN1_IF1_DA1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1_DA1_OFFSET)))

#define CAN1_IF2_DA1    ((CAN_IFn_DA1_t*) (CAN1_BASE + CAN_IF2_DA1_OFFSET))
#define CAN1_IF2_DA1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2_DA1_OFFSET)))

/******************************************************************************************
************************************24-25 IFn_DA2 *********************************************
******************************************************************************************/
#define CAN1_IF1_DA2    ((CAN_IFn_DA2_t*) (CAN1_BASE + CAN_IF1_DA2_OFFSET))
#define CAN1_IF1_DA2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1_DA2_OFFSET)))

#define CAN1_IF2_DA2    ((CAN_IFn_DA2_t*) (CAN1_BASE + CAN_IF2_DA2_OFFSET))
#define CAN1_IF2_DA2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2_DA2_OFFSET)))

/******************************************************************************************
************************************26-27 IFn_DB1 *********************************************
******************************************************************************************/
#define CAN1_IF1_DB1    ((CAN_IFn_DB1_t*) (CAN1_BASE + CAN_IF1_DB1_OFFSET))
#define CAN1_IF1_DB1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1_DB1_OFFSET)))

#define CAN1_IF2_DB1    ((CAN_IFn_DB1_t*) (CAN1_BASE + CAN_IF2_DB1_OFFSET))
#define CAN1_IF2_DB1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2_DB1_OFFSET)))

/******************************************************************************************
************************************28-29 IFn_DB2 *********************************************
******************************************************************************************/
#define CAN1_IF1_DB2    ((CAN_IFn_DB2_t*) (CAN1_BASE + CAN_IF1_DB2_OFFSET))
#define CAN1_IF1_DB2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF1_DB2_OFFSET)))

#define CAN1_IF2_DB2    ((CAN_IFn_DB2_t*) (CAN1_BASE + CAN_IF2_DB2_OFFSET))
#define CAN1_IF2_DB2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_IF2_DB2_OFFSET)))

/******************************************************************************************
************************************30-31 TXRQn *********************************************
******************************************************************************************/
#define CAN1_TXRQ    ((CAN_TXRQ_t*) (CAN1_BASE + CAN_TXRQ_OFFSET))
#define CAN1_TXRQ_R    (*((volatile uint64_t*) (CAN1_BASE + CAN_TXRQ_OFFSET)))

#define CAN1_TXRQ1    ((CAN_TXRQn_t*) (CAN1_BASE + CAN_TXRQ1_OFFSET))
#define CAN1_TXRQ1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_TXRQ1_OFFSET)))

#define CAN1_TXRQ2    ((CAN_TXRQn_t*) (CAN1_BASE + CAN_TXRQ2_OFFSET))
#define CAN1_TXRQ2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_TXRQ2_OFFSET)))

/******************************************************************************************
************************************32-33 NWDAn *********************************************
******************************************************************************************/
#define CAN1_NWDA    ((CAN_NWDA_t*) (CAN1_BASE + CAN_NWDA_OFFSET))
#define CAN1_NWDA_R    (*((volatile uint64_t*) (CAN1_BASE + CAN_NWDA_OFFSET)))

#define CAN1_NWDA1    ((CAN_NWDAn_t*) (CAN1_BASE + CAN_NWDA1_OFFSET))
#define CAN1_NWDA1_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_NWDA1_OFFSET)))

#define CAN1_NWDA2    ((CAN_NWDAn_t*) (CAN1_BASE + CAN_NWDA2_OFFSET))
#define CAN1_NWDA2_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_NWDA2_OFFSET)))

/******************************************************************************************
************************************34-35 MSGnINT *********************************************
******************************************************************************************/
#define CAN1_MSG_INT    ((CAN_MSG_INT_t*) (CAN1_BASE + CAN_MSG_INT_OFFSET))
#define CAN1_MSG_INT_R    (*((volatile uint64_t*) (CAN1_BASE + CAN_MSG_INT_OFFSET)))

#define CAN1_MSG1_INT    ((CAN_MSGn_INT_t*) (CAN1_BASE + CAN_MSG1_INT_OFFSET))
#define CAN1_MSG1_INT_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_MSG1_INT_OFFSET)))

#define CAN1_MSG2_INT    ((CAN_MSGn_INT_t*) (CAN1_BASE + CAN_MSG2_INT_OFFSET))
#define CAN1_MSG2_INT_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_MSG2_INT_OFFSET)))

/******************************************************************************************
************************************36-37 MSGnVAL *********************************************
******************************************************************************************/
#define CAN1_MSG_VAL    ((CANMSG_VAL_t*) (CAN1_BASE + CAN_MSG_VAL_OFFSET))
#define CAN1_MSG_VAL_R    (*((volatile uint64_t*) (CAN1_BASE + CAN_MSG_VAL_OFFSET)))

#define CAN1_MSG1_VAL    ((CAN_MSGn_VAL_t*) (CAN1_BASE + CAN_MSG1_VAL_OFFSET))
#define CAN1_MSG1_VAL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_MSG1_VAL_OFFSET)))

#define CAN1_MSG2_VAL    ((CAN_MSGn_VAL_t*) (CAN1_BASE + CAN_MSG2_VAL_OFFSET))
#define CAN1_MSG2_VAL_R    (*((volatile uint32_t*) (CAN1_BASE + CAN_MSG2_VAL_OFFSET)))

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_CAN_REGISTERPERIPHERAL_MODULE1_H_ */
