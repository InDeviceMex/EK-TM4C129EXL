/**
 *
 * @file QEI_RegisterPeripheral_Bitbanding_Module0.h
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_QEI_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_QEI_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_

#include <xDriver_MCU/QEI/Peripheral/Register/xHeader/QEI_RegisterAddress.h>
#include <xDriver_MCU/QEI/Peripheral/Register/xHeader/QEI_RegisterDefines.h>
#include <xDriver_MCU/QEI/Peripheral/Struct/xHeader/QEI_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ QEI *********************************************
******************************************************************************************/
#define QEI0_BITBANDING    ((QEI_BITBANDING_TypeDef*) (QEI_BITBANDING_BASE + (QEI0_OFFSET * 32UL)))


/******************************************************************************************
************************************ 1 CTL *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_CTL    ((BITBANDING_QEICTL_TypeDef*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL)))

#define QEI0_BITBANDING_CTL_ENABLE    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_ENABLE_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_SWAP    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_SWAP_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_SIGMODE    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_SIGMODE_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_CAPMODE    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_CAPMODE_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_RESMODE    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_RESMODE_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_VELEN    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_VELEN_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_VELDIV_0    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + ((QEI_CTL_R_VELDIV_BIT + 0UL) * 4UL))))
#define QEI0_BITBANDING_CTL_VELDIV_1    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + ((QEI_CTL_R_VELDIV_BIT + 1UL) * 4UL))))
#define QEI0_BITBANDING_CTL_VELDIV_2    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + ((QEI_CTL_R_VELDIV_BIT + 2UL) * 4UL))))
#define QEI0_BITBANDING_CTL_INVA    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_INVA_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_INVB    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_INVB_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_INVI    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_INVI_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_STALLEN    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_STALLEN_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_FILTEN    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_FILTEN_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_FILTCNT_0    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + ((QEI_CTL_R_FILTCNT_BIT + 0UL) * 4UL))))
#define QEI0_BITBANDING_CTL_FILTCNT_1    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + ((QEI_CTL_R_FILTCNT_BIT + 1UL) * 4UL))))
#define QEI0_BITBANDING_CTL_FILTCNT_2    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + ((QEI_CTL_R_FILTCNT_BIT + 2UL) * 4UL))))
#define QEI0_BITBANDING_CTL_FILTCNT_3    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + ((QEI_CTL_R_FILTCNT_BIT + 3UL) * 4UL))))

/******************************************************************************************
************************************ 2 STAT *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_STAT    ((BITBANDING_QEISTAT_TypeDef*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_STAT_OFFSET) * 32UL)))

#define QEI0_BITBANDING_STAT_ERROR    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_STAT_OFFSET) * 32UL) + (QEI_STAT_R_ERROR_BIT * 4UL))))
#define QEI0_BITBANDING_STAT_DIRECTION    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_STAT_OFFSET) * 32UL) + (QEI_STAT_R_DIRECTION_BIT * 4UL))))

/******************************************************************************************
************************************ 3 POS *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_POS    ((BITBANDING_QEIPOS_TypeDef*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_POS_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 4 MAXPOS *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_MAXPOS    ((BITBANDING_QEIMAXPOS_TypeDef*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_MAXPOS_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 5 LOAD *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_LOAD    ((BITBANDING_QEILOAD_TypeDef*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_LOAD_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 6 TIME *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_TIME    ((BITBANDING_QEITIME_TypeDef*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_TIME_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 7 COUNT *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_COUNT    ((BITBANDING_QEICOUNT_TypeDef*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_COUNT_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 8 SPEED *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_SPEED    ((BITBANDING_QEISPEED_TypeDef*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_SPEED_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 9 INTEN *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_INTEN    ((BITBANDING_QEIINTEN_TypeDef*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_INTEN_OFFSET) * 32UL)))

#define QEI0_BITBANDING_INTEN_INTINDEX    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_INTEN_OFFSET) * 32UL) + (QEI_INTEN_R_INTINDEX_BIT * 4UL))))
#define QEI0_BITBANDING_INTEN_INTTIMER    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_INTEN_OFFSET) * 32UL) + (QEI_INTEN_R_INTTIMER_BIT * 4UL))))
#define QEI0_BITBANDING_INTEN_INTDIR    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_INTEN_OFFSET) * 32UL) + (QEI_INTEN_R_INTDIR_BIT * 4UL))))
#define QEI0_BITBANDING_INTEN_INTERROR    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_INTEN_OFFSET) * 32UL) + (QEI_INTEN_R_INTERROR_BIT * 4UL))))

/******************************************************************************************
************************************ 10 RIS *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_RIS    ((BITBANDING_QEIRIS_TypeDef*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_RIS_OFFSET) * 32UL)))

#define QEI0_BITBANDING_RIS_INTINDEX    (*((volatile const uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_RIS_OFFSET) * 32UL) + (QEI_RIS_R_INTINDEX_BIT * 4UL))))
#define QEI0_BITBANDING_RIS_INTTIMER    (*((volatile const uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_RIS_OFFSET) * 32UL) + (QEI_RIS_R_INTTIMER_BIT * 4UL))))
#define QEI0_BITBANDING_RIS_INTDIR    (*((volatile const uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_RIS_OFFSET) * 32UL) + (QEI_RIS_R_INTDIR_BIT * 4UL))))
#define QEI0_BITBANDING_RIS_INTERROR    (*((volatile const uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_RIS_OFFSET) * 32UL) + (QEI_RIS_R_INTERROR_BIT * 4UL))))

/******************************************************************************************
************************************ 11 ISC *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_ISC    ((BITBANDING_QEIISC_TypeDef*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_ISC_OFFSET) * 32UL)))

#define QEI0_BITBANDING_ISC_INTINDEX    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_ISC_OFFSET) * 32UL) + (QEI_ISC_R_INTINDEX_BIT * 4UL))))
#define QEI0_BITBANDING_ISC_INTTIMER    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_ISC_OFFSET) * 32UL) + (QEI_ISC_R_INTTIMER_BIT * 4UL))))
#define QEI0_BITBANDING_ISC_INTDIR    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_ISC_OFFSET) * 32UL) + (QEI_ISC_R_INTDIR_BIT * 4UL))))
#define QEI0_BITBANDING_ISC_INTERROR    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_ISC_OFFSET) * 32UL) + (QEI_ISC_R_INTERROR_BIT * 4UL))))


#endif /* XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_QEI_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_ */
