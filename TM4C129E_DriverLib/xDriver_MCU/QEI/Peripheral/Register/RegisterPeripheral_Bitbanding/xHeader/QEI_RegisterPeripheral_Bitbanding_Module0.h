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
#define QEI0_BITBANDING    ((QEI_BITBANDING_t*) (QEI_BITBANDING_BASE + (QEI0_OFFSET * 32UL)))


/******************************************************************************************
************************************ 1 CTL *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_CTL    ((QEI_BITBANDING_CTL_t*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL)))

#define QEI0_BITBANDING_CTL_ENABLE    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_ENABLE_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_SWAP    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_SWAP_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_SIGMODE    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_SIGMODE_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_CAPMODE    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_CAPMODE_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_RESMODE    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_RESMODE_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_VELEN    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_VELEN_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_VELDIV_0    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + ((QEI_CTL_R_VELDIV_BIT + 0UL) * 4UL))))
#define QEI0_BITBANDING_CTL_VELDIV_1    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + ((QEI_CTL_R_VELDIV_BIT + 1UL) * 4UL))))
#define QEI0_BITBANDING_CTL_VELDIV_2    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + ((QEI_CTL_R_VELDIV_BIT + 2UL) * 4UL))))
#define QEI0_BITBANDING_CTL_INVA    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_INVA_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_INVB    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_INVB_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_INVI    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_INVI_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_STALLEN    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_STALLEN_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_FILTEN    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + (QEI_CTL_R_FILTEN_BIT * 4UL))))
#define QEI0_BITBANDING_CTL_FILTCNT_0    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + ((QEI_CTL_R_FILTCNT_BIT + 0UL) * 4UL))))
#define QEI0_BITBANDING_CTL_FILTCNT_1    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + ((QEI_CTL_R_FILTCNT_BIT + 1UL) * 4UL))))
#define QEI0_BITBANDING_CTL_FILTCNT_2    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + ((QEI_CTL_R_FILTCNT_BIT + 2UL) * 4UL))))
#define QEI0_BITBANDING_CTL_FILTCNT_3    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_CTL_OFFSET) * 32UL) + ((QEI_CTL_R_FILTCNT_BIT + 3UL) * 4UL))))

/******************************************************************************************
************************************ 2 STAT *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_STAT    ((QEI_BITBANDING_STAT_t*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_STAT_OFFSET) * 32UL)))

#define QEI0_BITBANDING_STAT_ERROR    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_STAT_OFFSET) * 32UL) + (QEI_STAT_R_ERROR_BIT * 4UL))))
#define QEI0_BITBANDING_STAT_DIRECTION    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_STAT_OFFSET) * 32UL) + (QEI_STAT_R_DIRECTION_BIT * 4UL))))

/******************************************************************************************
************************************ 3 POS *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_POS    ((QEI_BITBANDING_POS_t*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_POS_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 4 MAXPOS *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_MAXPOS    ((QEI_BITBANDING_MAXPOS_t*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_MAXPOS_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 5 LOAD *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_LOAD    ((QEI_BITBANDING_LOAD_t*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_LOAD_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 6 TIME *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_TIME    ((QEI_BITBANDING_TIME_t*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_TIME_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 7 COUNT *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_COUNT    ((QEI_BITBANDING_COUNT_t*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_COUNT_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 8 SPEED *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_SPEED    ((QEI_BITBANDING_SPEED_t*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_SPEED_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 9 INTEN *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_INTEN    ((QEI_BITBANDING_INTEN_t*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_INTEN_OFFSET) * 32UL)))

#define QEI0_BITBANDING_INTEN_INTINDEX    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_INTEN_OFFSET) * 32UL) + (QEI_INTEN_R_INTINDEX_BIT * 4UL))))
#define QEI0_BITBANDING_INTEN_INTTIMER    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_INTEN_OFFSET) * 32UL) + (QEI_INTEN_R_INTTIMER_BIT * 4UL))))
#define QEI0_BITBANDING_INTEN_INTDIR    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_INTEN_OFFSET) * 32UL) + (QEI_INTEN_R_INTDIR_BIT * 4UL))))
#define QEI0_BITBANDING_INTEN_INTERROR    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_INTEN_OFFSET) * 32UL) + (QEI_INTEN_R_INTERROR_BIT * 4UL))))

/******************************************************************************************
************************************ 10 RIS *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_RIS    ((QEI_BITBANDING_RIS_t*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_RIS_OFFSET) * 32UL)))

#define QEI0_BITBANDING_RIS_INTINDEX    (*((volatile const UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_RIS_OFFSET) * 32UL) + (QEI_RIS_R_INTINDEX_BIT * 4UL))))
#define QEI0_BITBANDING_RIS_INTTIMER    (*((volatile const UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_RIS_OFFSET) * 32UL) + (QEI_RIS_R_INTTIMER_BIT * 4UL))))
#define QEI0_BITBANDING_RIS_INTDIR    (*((volatile const UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_RIS_OFFSET) * 32UL) + (QEI_RIS_R_INTDIR_BIT * 4UL))))
#define QEI0_BITBANDING_RIS_INTERROR    (*((volatile const UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_RIS_OFFSET) * 32UL) + (QEI_RIS_R_INTERROR_BIT * 4UL))))

/******************************************************************************************
************************************ 11 ISC *********************************************
******************************************************************************************/
#define QEI0_BITBANDING_ISC    ((QEI_BITBANDING_ISC_t*) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_ISC_OFFSET) * 32UL)))

#define QEI0_BITBANDING_ISC_INTINDEX    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_ISC_OFFSET) * 32UL) + (QEI_ISC_R_INTINDEX_BIT * 4UL))))
#define QEI0_BITBANDING_ISC_INTTIMER    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_ISC_OFFSET) * 32UL) + (QEI_ISC_R_INTTIMER_BIT * 4UL))))
#define QEI0_BITBANDING_ISC_INTDIR    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_ISC_OFFSET) * 32UL) + (QEI_ISC_R_INTDIR_BIT * 4UL))))
#define QEI0_BITBANDING_ISC_INTERROR    (*((volatile UBase_t *) (QEI_BITBANDING_BASE + ((QEI0_OFFSET + QEI_ISC_OFFSET) * 32UL) + (QEI_ISC_R_INTERROR_BIT * 4UL))))


#endif /* XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_QEI_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_ */
