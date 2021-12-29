/**
 *
 * @file CAN_RegisterPeripheral_Bitbanding_Module0.h
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
 * @verbatim May 28, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * May 28, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_CAN_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_CAN_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_

#include <xDriver_MCU/CAN/Peripheral/Register/xHeader/CAN_RegisterAddress.h>
#include <xDriver_MCU/CAN/Peripheral/Register/RegisterDefines/CAN_RegisterDefines.h>
#include <xDriver_MCU/CAN/Peripheral/Struct/xHeader/CAN_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ CAN0 *********************************************
******************************************************************************************/
#define CAN0_BITBANDING    ((CAN_BITBANDING_TypeDef*) (CAN_BITBANDING_BASE + (CAN0_OFFSET * 32U)))

/******************************************************************************************
*********************************** * 1 CTL *********************************************
******************************************************************************************/
#define CAN0_BITBANDING_CTL    ((BITBANDING_CANCTL_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_CTL_OFFSET) * 32U)))

#define CAN0_BITBANDING_CTL_INIT    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_CTL_OFFSET) * 32U) + (CAN_CTL_R_INIT_BIT * 4U))))
#define CAN0_BITBANDING_CTL_IE    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_CTL_OFFSET) * 32U) + (CAN_CTL_R_IE_BIT * 4U))))
#define CAN0_BITBANDING_CTL_SIE    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_CTL_OFFSET) * 32U) + (CAN_CTL_R_SIE_BIT * 4U))))
#define CAN0_BITBANDING_CTL_EIE    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_CTL_OFFSET) * 32U) + (CAN_CTL_R_EIE_BIT * 4U))))
#define CAN0_BITBANDING_CTL_DAR    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_CTL_OFFSET) * 32U) + (CAN_CTL_R_DAR_BIT * 4U))))
#define CAN0_BITBANDING_CTL_CCE    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_CTL_OFFSET) * 32U) + (CAN_CTL_R_CCE_BIT * 4U))))
#define CAN0_BITBANDING_CTL_TEST    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_CTL_OFFSET) * 32U) + (CAN_CTL_R_TEST_BIT * 4U))))

/******************************************************************************************
*********************************** * 2 STS *********************************************
******************************************************************************************/
#define CAN0_BITBANDING_STS    ((BITBANDING_CANSTS_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_STS_OFFSET) * 32U)))

#define CAN0_BITBANDING_STS_LEC_0    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_STS_OFFSET) * 32U) + ((CAN_STS_R_LEC_BIT + 0UL) * 4U))))
#define CAN0_BITBANDING_STS_LEC_1    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_STS_OFFSET) * 32U) + ((CAN_STS_R_LEC_BIT + 1UL) * 4U))))
#define CAN0_BITBANDING_STS_LEC_2    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_STS_OFFSET) * 32U) + ((CAN_STS_R_LEC_BIT + 2UL) * 4U))))
#define CAN0_BITBANDING_STS_TXOK    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_STS_OFFSET) * 32U) + (CAN_STS_R_TXOK_BIT * 4U))))
#define CAN0_BITBANDING_STS_RXOK    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_STS_OFFSET) * 32U) + (CAN_STS_R_RXOK_BIT * 4U))))
#define CAN0_BITBANDING_STS_EPASS    (*((volatile const uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_STS_OFFSET) * 32U) + (CAN_STS_R_EPASS_BIT * 4U))))
#define CAN0_BITBANDING_STS_EWARN    (*((volatile const uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_STS_OFFSET) * 32U) + (CAN_STS_R_EWARN_BIT * 4U))))
#define CAN0_BITBANDING_STS_BOFF    (*((volatile const uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_STS_OFFSET) * 32U) + (CAN_STS_R_BOFF_BIT * 4U))))

/******************************************************************************************
*********************************** * 3 ERR *********************************************
******************************************************************************************/
#define CAN0_BITBANDING_ERR    ((BITBANDING_CANERR_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_ERR_OFFSET) * 32U)))

#define CAN0_BITBANDING_ERR_RP    (*((volatile const uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_ERR_OFFSET) * 32U) + (CAN_ERR_R_RP_BIT * 4U))))

/******************************************************************************************
*********************************** * 4 BIT *********************************************
******************************************************************************************/
#define CAN0_BITBANDING_BIT    ((BITBANDING_CANBIT_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U)))

#define CAN0_BITBANDING_BIT_BRP_0    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_BRP_BIT + 0UL) * 4U))))
#define CAN0_BITBANDING_BIT_BRP_1    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_BRP_BIT + 1UL) * 4U))))
#define CAN0_BITBANDING_BIT_BRP_2    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_BRP_BIT + 2UL) * 4U))))
#define CAN0_BITBANDING_BIT_BRP_3    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_BRP_BIT + 3UL) * 4U))))
#define CAN0_BITBANDING_BIT_BRP_4    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_BRP_BIT + 4UL) * 4U))))
#define CAN0_BITBANDING_BIT_BRP_5    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_BRP_BIT + 5UL) * 4U))))
#define CAN0_BITBANDING_BIT_SJW_0    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_SJW_BIT + 0UL) * 4U))))
#define CAN0_BITBANDING_BIT_SJW_1    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_SJW_BIT + 0UL) * 4U))))
#define CAN0_BITBANDING_BIT_TSEG1_0    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_TSEG1_BIT + 0UL) * 4U))))
#define CAN0_BITBANDING_BIT_TSEG1_1    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_TSEG1_BIT + 1UL) * 4U))))
#define CAN0_BITBANDING_BIT_TSEG1_2    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_TSEG1_BIT + 2UL) * 4U))))
#define CAN0_BITBANDING_BIT_TSEG1_3    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_TSEG1_BIT + 3UL) * 4U))))
#define CAN0_BITBANDING_BIT_TSEG2_0    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_TSEG2_BIT + 0UL) * 4U))))
#define CAN0_BITBANDING_BIT_TSEG2_1    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_TSEG2_BIT + 1UL) * 4U))))
#define CAN0_BITBANDING_BIT_TSEG2_2    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BIT_OFFSET) * 32U) + ((CAN_BIT_R_TSEG2_BIT + 2UL) * 4U))))

/******************************************************************************************
*********************************** * 5 INT *********************************************
******************************************************************************************/
#define CAN0_BITBANDING_INT    ((BITBANDING_CANINT_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_INT_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 6 TST *********************************************
******************************************************************************************/
#define CAN0_BITBANDING_TST    ((BITBANDING_CANTST_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_TST_OFFSET) * 32U)))

#define CAN0_BITBANDING_TST_BASIC    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_TST_OFFSET) * 32U) + (CAN_TST_R_BASIC_BIT * 4U))))
#define CAN0_BITBANDING_TST_SILENT    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_TST_OFFSET) * 32U) + (CAN_TST_R_SILENT_BIT * 4U))))
#define CAN0_BITBANDING_TST_LBACK    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_TST_OFFSET) * 32U) + (CAN_TST_R_LBACK_BIT * 4U))))
#define CAN0_BITBANDING_TST_TX    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_TST_OFFSET) * 32U) + (CAN_TST_R_TX_BIT * 4U))))
#define CAN0_BITBANDING_TST_RX    (*((volatile const uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_TST_OFFSET) * 32U) + (CAN_TST_R_RX_BIT * 4U))))

/******************************************************************************************
*********************************** * 7 BRPE *********************************************
******************************************************************************************/
#define CAN0_BITBANDING_BRPE    ((BITBANDING_CANBRPE_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BRPE_OFFSET) * 32U)))

#define CAN0_BITBANDING_BRPE_BRPE_0    (*((volatile const uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BRPE_OFFSET) * 32U) + ((CAN_BRPE_R_BRPE_BIT + 0UL) * 4U))))
#define CAN0_BITBANDING_BRPE_BRPE_1    (*((volatile const uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BRPE_OFFSET) * 32U) + ((CAN_BRPE_R_BRPE_BIT + 1UL) * 4U))))
#define CAN0_BITBANDING_BRPE_BRPE_2    (*((volatile const uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BRPE_OFFSET) * 32U) + ((CAN_BRPE_R_BRPE_BIT + 2UL) * 4U))))
#define CAN0_BITBANDING_BRPE_BRPE_3    (*((volatile const uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_BRPE_OFFSET) * 32U) + ((CAN_BRPE_R_BRPE_BIT + 3UL) * 4U))))

/******************************************************************************************
*********************************** * 8-9 IFnCRQ *********************************************
******************************************************************************************/
#define CAN0_BITBANDING_IF1CRQ    ((BITBANDING_CANIFnCRQ_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CRQ_OFFSET) * 32U)))
#define CAN0_BITBANDING_IF2CRQ    ((BITBANDING_CANIFnCRQ_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CRQ_OFFSET) * 32U)))

#define CAN0_BITBANDING_IF1CRQ_MNUM_0    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CRQ_OFFSET) * 32U) + ((CAN_IFnCRQ_R_MNUM_BIT + 0UL)* 4U))))
#define CAN0_BITBANDING_IF1CRQ_MNUM_1    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CRQ_OFFSET) * 32U) + ((CAN_IFnCRQ_R_MNUM_BIT + 1UL)* 4U))))
#define CAN0_BITBANDING_IF1CRQ_MNUM_2    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CRQ_OFFSET) * 32U) + ((CAN_IFnCRQ_R_MNUM_BIT + 2UL)* 4U))))
#define CAN0_BITBANDING_IF1CRQ_MNUM_3    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CRQ_OFFSET) * 32U) + ((CAN_IFnCRQ_R_MNUM_BIT + 3UL)* 4U))))
#define CAN0_BITBANDING_IF1CRQ_MNUM_4    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CRQ_OFFSET) * 32U) + ((CAN_IFnCRQ_R_MNUM_BIT + 4UL)* 4U))))
#define CAN0_BITBANDING_IF1CRQ_MNUM_5    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CRQ_OFFSET) * 32U) + ((CAN_IFnCRQ_R_MNUM_BIT + 5UL)* 4U))))

#define CAN0_BITBANDING_IF2CRQ_MNUM_0    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CRQ_OFFSET) * 32U) + ((CAN_IFnCRQ_R_MNUM_BIT + 0UL)* 4U))))
#define CAN0_BITBANDING_IF2CRQ_MNUM_1    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CRQ_OFFSET) * 32U) + ((CAN_IFnCRQ_R_MNUM_BIT + 1UL)* 4U))))
#define CAN0_BITBANDING_IF2CRQ_MNUM_2    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CRQ_OFFSET) * 32U) + ((CAN_IFnCRQ_R_MNUM_BIT + 2UL)* 4U))))
#define CAN0_BITBANDING_IF2CRQ_MNUM_3    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CRQ_OFFSET) * 32U) + ((CAN_IFnCRQ_R_MNUM_BIT + 3UL)* 4U))))
#define CAN0_BITBANDING_IF2CRQ_MNUM_4    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CRQ_OFFSET) * 32U) + ((CAN_IFnCRQ_R_MNUM_BIT + 4UL)* 4U))))
#define CAN0_BITBANDING_IF2CRQ_MNUM_5    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CRQ_OFFSET) * 32U) + ((CAN_IFnCRQ_R_MNUM_BIT + 5UL)* 4U))))

/******************************************************************************************
*********************************** * 10-11 IFnCMSK *********************************************
******************************************************************************************/
#define CAN0_BITBANDING_IF1CMSK    ((BITBANDING_CANIFnCMSK_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CMSK_OFFSET) * 32U)))
#define CAN0_BITBANDING_IF2CMSK    ((BITBANDING_CANIFnCMSK_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CMSK_OFFSET) * 32U)))

#define CAN0_BITBANDING_IF1CMSK_DATAB    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_DATAB_BIT * 4U))))
#define CAN0_BITBANDING_IF1CMSK_DATAA    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_DATAA_BIT * 4U))))
#define CAN0_BITBANDING_IF1CMSK_NEWDAT    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_NEWDAT_TXRQST_BIT * 4U))))
#define CAN0_BITBANDING_IF1CMSK_TXRQST    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_NEWDAT_TXRQST_BIT * 4U))))
#define CAN0_BITBANDING_IF1CMSK_CLRINTPND    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_CLRINTPND_BIT * 4U))))
#define CAN0_BITBANDING_IF1CMSK_CONTROL    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_CONTROL_BIT * 4U))))
#define CAN0_BITBANDING_IF1CMSK_ARB    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_ARB_BIT * 4U))))
#define CAN0_BITBANDING_IF1CMSK_MASK    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_MASK_BIT * 4U))))
#define CAN0_BITBANDING_IF1CMSK_WRNRD    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_WRNRD_BIT * 4U))))

#define CAN0_BITBANDING_IF2CMSK_DATAB    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_DATAB_BIT * 4U))))
#define CAN0_BITBANDING_IF2CMSK_DATAA    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_DATAA_BIT * 4U))))
#define CAN0_BITBANDING_IF2CMSK_NEWDAT    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_NEWDAT_TXRQST_BIT * 4U))))
#define CAN0_BITBANDING_IF2CMSK_TXRQST    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_NEWDAT_TXRQST_BIT * 4U))))
#define CAN0_BITBANDING_IF2CMSK_CLRINTPND    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_CLRINTPND_BIT * 4U))))
#define CAN0_BITBANDING_IF2CMSK_CONTROL    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_CONTROL_BIT * 4U))))
#define CAN0_BITBANDING_IF2CMSK_ARB    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_ARB_BIT * 4U))))
#define CAN0_BITBANDING_IF2CMSK_MASK    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_MASK_BIT * 4U))))
#define CAN0_BITBANDING_IF2CMSK_WRNRD    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1CMSK_OFFSET) * 32U) + (CAN_IFnCMSK_R_WRNRD_BIT * 4U))))

/******************************************************************************************
*********************************** * 12-13 IFnMSK1 *********************************************
******************************************************************************************/
#define CAN0_BITBANDING_IF1MSK1    ((BITBANDING_CANIFnMSK1_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1MSK1_OFFSET) * 32U)))
#define CAN0_BITBANDING_IF2MSK1    ((BITBANDING_CANIFnMSK1_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2MSK1_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 14-15 IFnMSK2 *********************************************
******************************************************************************************/
#define CAN0_BITBANDING_IF1MSK2    ((BITBANDING_CANIFnMSK2_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1MSK2_OFFSET) * 32U)))
#define CAN0_BITBANDING_IF2MSK2    ((BITBANDING_CANIFnMSK2_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2MSK2_OFFSET) * 32U)))

#define CAN0_BITBANDING_IF1MSK2_MDIR    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1MSK2_OFFSET) * 32U) + (CAN_IFnMSK2_R_MDIR_BIT * 4U))))
#define CAN0_BITBANDING_IF1MSK2_MXTD    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1MSK2_OFFSET) * 32U) + (CAN_IFnMSK2_R_MXTD_BIT * 4U))))

#define CAN0_BITBANDING_IF2MSK2_MDIR    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2MSK2_OFFSET) * 32U) + (CAN_IFnMSK2_R_MDIR_BIT * 4U))))
#define CAN0_BITBANDING_IF2MSK2_MXTD    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2MSK2_OFFSET) * 32U) + (CAN_IFnMSK2_R_MXTD_BIT * 4U))))

/******************************************************************************************
*********************************** * 16-17 IFnARB1 *********************************************
******************************************************************************************/
#define CAN0_BITBANDING_IF1ARB1    ((BITBANDING_CANIFnARB1_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1ARB1_OFFSET) * 32U)))
#define CAN0_BITBANDING_IF2ARB1    ((BITBANDING_CANIFnARB1_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2ARB1_OFFSET) * 32U)))

/******************************************************************************************
*********************************** * 18-19 IFnARB2 *********************************************
******************************************************************************************/
#define CAN0_BITBANDING_IF1ARB2    ((BITBANDING_CANIFnARB2_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1ARB2_OFFSET) * 32U)))
#define CAN0_BITBANDING_IF2ARB2    ((BITBANDING_CANIFnARB2_TypeDef*) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2ARB2_OFFSET) * 32U)))

#define CAN0_BITBANDING_IF1ARB2_DIR    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1ARB2_OFFSET) * 32U) + (CAN_IFnARB2_R_DIR_BIT * 4U))))
#define CAN0_BITBANDING_IF1ARB2_XTD    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1ARB2_OFFSET) * 32U) + (CAN_IFnARB2_R_XTD_BIT * 4U))))
#define CAN0_BITBANDING_IF1ARB2_MSGVAL    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1ARB2_OFFSET) * 32U) + (CAN_IFnARB2_R_MSGVAL_BIT * 4U))))

#define CAN0_BITBANDING_IF2ARB2_DIR    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2ARB2_OFFSET) * 32U) + (CAN_IFnARB2_R_DIR_BIT * 4U))))
#define CAN0_BITBANDING_IF2ARB2_XTD    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF2ARB2_OFFSET) * 32U) + (CAN_IFnARB2_R_XTD_BIT * 4U))))
#define CAN0_BITBANDING_IF1ARB2_MSGVAL    (*((volatile uint32_t *) (CAN_BITBANDING_BASE + ((CAN0_OFFSET + CAN_IF1ARB2_OFFSET) * 32U) + (CAN_IFnARB2_R_MSGVAL_BIT * 4U))))


#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_CAN_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_ */
