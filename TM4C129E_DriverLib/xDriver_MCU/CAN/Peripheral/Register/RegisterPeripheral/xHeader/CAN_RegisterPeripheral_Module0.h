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

#define CAN0    ((CAN_t*) (CAN0_BASE))

/******************************************************************************************
************************************ 1 CTL *********************************************
******************************************************************************************/
#define CAN0_CTL    ((CAN_CTL_t*) (CAN0_BASE + CAN_CTL_OFFSET))
#define CAN0_CTL_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_CTL_OFFSET)))

/******************************************************************************************
************************************ 2 STS *********************************************
******************************************************************************************/
#define CAN0_STS    ((CAN_STS_t*) (CAN0_BASE + CAN_STS_OFFSET))
#define CAN0_STS_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_STS_OFFSET)))

/******************************************************************************************
************************************ 3 ERR *********************************************
******************************************************************************************/
#define CAN0_ERR    ((CAN_ERR_t*) (CAN0_BASE + CAN_ERR_OFFSET))
#define CAN0_ERR_R    (*((volatile const uint32_t*) (CAN0_BASE + CAN_ERR_OFFSET)))

/******************************************************************************************
************************************ 4 BIT *********************************************
******************************************************************************************/
#define CAN0_BIT    ((CAN_BIT_t*) (CAN0_BASE + CAN_BIT_OFFSET))
#define CAN0_BIT_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_BIT_OFFSET)))

/******************************************************************************************
************************************ 5 INT *********************************************
******************************************************************************************/
#define CAN0_INT    ((CAN_INT_t*) (CAN0_BASE + CAN_INT_OFFSET))
#define CAN0_INT_R    (*((volatile const uint32_t*) (CAN0_BASE + CAN_INT_OFFSET)))

/******************************************************************************************
************************************6 TST *********************************************
******************************************************************************************/
#define CAN0_TST    ((CAN_TST_t*) (CAN0_BASE + CAN_TST_OFFSET))
#define CAN0_TST_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_TST_OFFSET)))

/******************************************************************************************
************************************7 BRPE *********************************************
******************************************************************************************/
#define CAN0_BRPE    ((CAN_BRPE_t*) (CAN0_BASE + CAN_BRPE_OFFSET))
#define CAN0_BRPE_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_BRPE_OFFSET)))

/******************************************************************************************
************************************8-9 IFn_CRQ *********************************************
******************************************************************************************/
#define CAN0_IF1_CRQ    ((CAN_IFn_CRQ_t*) (CAN0_BASE + CAN_IF1_CRQ_OFFSET))
#define CAN0_IF1_CRQ_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1_CRQ_OFFSET)))

#define CAN0_IF2_CRQ    ((CAN_IFn_CRQ_t*) (CAN0_BASE + CAN_IF2_CRQ_OFFSET))
#define CAN0_IF2_CRQ_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2_CRQ_OFFSET)))

/******************************************************************************************
************************************10-11 IFn_CMSK *********************************************
******************************************************************************************/
#define CAN0_IF1_CMSK    ((CAN_IFn_CMSK_t*) (CAN0_BASE + CAN_IF1_CMSK_OFFSET))
#define CAN0_IF1_CMSK_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1_CMSK_OFFSET)))

#define CAN0_IF2_CMSK    ((CAN_IFn_CMSK_t*) (CAN0_BASE + CAN_IF2_CMSK_OFFSET))
#define CAN0_IF2_CMSK_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2_CMSK_OFFSET)))

/******************************************************************************************
************************************12-13 IFn_MSK1 *********************************************
******************************************************************************************/
#define CAN0_IF1_MSK1    ((CAN_IFn_MSK1_t*) (CAN0_BASE + CAN_IF1_MSK1_OFFSET))
#define CAN0_IF1_MSK1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1_MSK1_OFFSET)))

#define CAN0_IF2_MSK1    ((CAN_IFn_MSK1_t*) (CAN0_BASE + CAN_IF2_MSK1_OFFSET))
#define CAN0_IF2_MSK1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2_MSK1_OFFSET)))

/******************************************************************************************
************************************14-15 IFn_MSK2 *********************************************
******************************************************************************************/
#define CAN0_IF1_MSK2    ((CAN_IFn_MSK2_t*) (CAN0_BASE + CAN_IF1_MSK2_OFFSET))
#define CAN0_IF1_MSK2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1_MSK2_OFFSET)))

#define CAN0_IF2_MSK2    ((CAN_IFn_MSK2_t*) (CAN0_BASE + CAN_IF2_MSK2_OFFSET))
#define CAN0_IF2_MSK2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2_MSK2_OFFSET)))

/******************************************************************************************
************************************16-17 IFn_ARB1 *********************************************
******************************************************************************************/
#define CAN0_IF1_ARB1    ((CAN_IFn_ARB1_t*) (CAN0_BASE + CAN_IF1_ARB1_OFFSET))
#define CAN0_IF1_ARB1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1_ARB1_OFFSET)))

#define CAN0_IF2_ARB1    ((CAN_IFn_ARB1_t*) (CAN0_BASE + CAN_IF2_ARB1_OFFSET))
#define CAN0_IF2_ARB1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2_ARB1_OFFSET)))

/******************************************************************************************
************************************18-19 IFn_ARB2 *********************************************
******************************************************************************************/
#define CAN0_IF1_ARB2    ((CAN_IFn_ARB2_t*) (CAN0_BASE + CAN_IF1_ARB2_OFFSET))
#define CAN0_IF1_ARB2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1_ARB2_OFFSET)))

#define CAN0_IF2_ARB2    ((CAN_IFn_ARB2_t*) (CAN0_BASE + CAN_IF2_ARB2_OFFSET))
#define CAN0_IF2_ARB2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2_ARB2_OFFSET)))

/******************************************************************************************
************************************20-21 IFn_MCTL *********************************************
******************************************************************************************/
#define CAN0_IF1_MCTL    ((CAN_IFn_MCTL_t*) (CAN0_BASE + CAN_IF1_MCTL_OFFSET))
#define CAN0_IF1_MCTL_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1_MCTL_OFFSET)))

#define CAN0_IF2_MCTL    ((CAN_IFn_MCTL_t*) (CAN0_BASE + CAN_IF2_MCTL_OFFSET))
#define CAN0_IF2_MCTL_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2_MCTL_OFFSET)))

/******************************************************************************************
************************************22-23 IFn_DA1 *********************************************
******************************************************************************************/
#define CAN0_IF1_DA1    ((CAN_IFn_DA1_t*) (CAN0_BASE + CAN_IF1_DA1_OFFSET))
#define CAN0_IF1_DA1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1_DA1_OFFSET)))

#define CAN0_IF2_DA1    ((CAN_IFn_DA1_t*) (CAN0_BASE + CAN_IF2_DA1_OFFSET))
#define CAN0_IF2_DA1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2_DA1_OFFSET)))

/******************************************************************************************
************************************24-25 IFn_DA2 *********************************************
******************************************************************************************/
#define CAN0_IF1_DA2    ((CAN_IFn_DA2_t*) (CAN0_BASE + CAN_IF1_DA2_OFFSET))
#define CAN0_IF1_DA2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1_DA2_OFFSET)))

#define CAN0_IF2_DA2    ((CAN_IFn_DA2_t*) (CAN0_BASE + CAN_IF2_DA2_OFFSET))
#define CAN0_IF2_DA2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2_DA2_OFFSET)))

/******************************************************************************************
************************************26-27 IFn_DB1 *********************************************
******************************************************************************************/
#define CAN0_IF1_DB1    ((CAN_IFn_DB1_t*) (CAN0_BASE + CAN_IF1_DB1_OFFSET))
#define CAN0_IF1_DB1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1_DB1_OFFSET)))

#define CAN0_IF2_DB1    ((CAN_IFn_DB1_t*) (CAN0_BASE + CAN_IF2_DB1_OFFSET))
#define CAN0_IF2_DB1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2_DB1_OFFSET)))

/******************************************************************************************
************************************28-29 IFn_DB2 *********************************************
******************************************************************************************/
#define CAN0_IF1_DB2    ((CAN_IFn_DB2_t*) (CAN0_BASE + CAN_IF1_DB2_OFFSET))
#define CAN0_IF1_DB2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF1_DB2_OFFSET)))

#define CAN0_IF2_DB2    ((CAN_IFn_DB2_t*) (CAN0_BASE + CAN_IF2_DB2_OFFSET))
#define CAN0_IF2_DB2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_IF2_DB2_OFFSET)))

/******************************************************************************************
************************************30-31 TXRQn *********************************************
******************************************************************************************/
#define CAN0_TXRQ    ((CAN_TXRQ_t*) (CAN0_BASE + CAN_TXRQ_OFFSET))
#define CAN0_TXRQ_R    (*((volatile uint64_t*) (CAN0_BASE + CAN_TXRQ_OFFSET)))

#define CAN0_TXRQ1    ((CAN_TXRQn_t*) (CAN0_BASE + CAN_TXRQ1_OFFSET))
#define CAN0_TXRQ1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_TXRQ1_OFFSET)))

#define CAN0_TXRQ2    ((CAN_TXRQn_t*) (CAN0_BASE + CAN_TXRQ2_OFFSET))
#define CAN0_TXRQ2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_TXRQ2_OFFSET)))

/******************************************************************************************
************************************32-33 NWDAn *********************************************
******************************************************************************************/
#define CAN0_NWDA    ((CAN_NWDA_t*) (CAN0_BASE + CAN_NWDA_OFFSET))
#define CAN0_NWDA_R    (*((volatile uint64_t*) (CAN0_BASE + CAN_NWDA_OFFSET)))

#define CAN0_NWDA1    ((CAN_NWDAn_t*) (CAN0_BASE + CAN_NWDA1_OFFSET))
#define CAN0_NWDA1_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_NWDA1_OFFSET)))

#define CAN0_NWDA2    ((CAN_NWDAn_t*) (CAN0_BASE + CAN_NWDA2_OFFSET))
#define CAN0_NWDA2_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_NWDA2_OFFSET)))

/******************************************************************************************
************************************34-35 MSGnINT *********************************************
******************************************************************************************/
#define CAN0_MSG_INT    ((CAN_MSG_INT_t*) (CAN0_BASE + CAN_MSG_INT_OFFSET))
#define CAN0_MSG_INT_R    (*((volatile uint64_t*) (CAN0_BASE + CAN_MSG_INT_OFFSET)))

#define CAN0_MSG1_INT    ((CAN_MSGn_INT_t*) (CAN0_BASE + CAN_MSG1_INT_OFFSET))
#define CAN0_MSG1_INT_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_MSG1_INT_OFFSET)))

#define CAN0_MSG2_INT    ((CAN_MSGn_INT_t*) (CAN0_BASE + CAN_MSG2_INT_OFFSET))
#define CAN0_MSG2_INT_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_MSG2_INT_OFFSET)))

/******************************************************************************************
************************************36-37 MSGnVAL *********************************************
******************************************************************************************/
#define CAN0_MSG_VAL    ((CANMSG_VAL_t*) (CAN0_BASE + CAN_MSG_VAL_OFFSET))
#define CAN0_MSG_VAL_R    (*((volatile uint64_t*) (CAN0_BASE + CAN_MSG_VAL_OFFSET)))

#define CAN0_MSG1_VAL    ((CAN_MSGn_VAL_t*) (CAN0_BASE + CAN_MSG1_VAL_OFFSET))
#define CAN0_MSG1_VAL_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_MSG1_VAL_OFFSET)))

#define CAN0_MSG2_VAL    ((CAN_MSGn_VAL_t*) (CAN0_BASE + CAN_MSG2_VAL_OFFSET))
#define CAN0_MSG2_VAL_R    (*((volatile uint32_t*) (CAN0_BASE + CAN_MSG2_VAL_OFFSET)))



#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_CAN_REGISTERPERIPHERAL_MODULE0_H_ */
