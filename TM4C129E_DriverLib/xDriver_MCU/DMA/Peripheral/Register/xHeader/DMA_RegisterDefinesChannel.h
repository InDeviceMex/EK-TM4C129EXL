/**
 *
 * @file DMA_RegisterDefinesChannel.h
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
 * @verbatim 28 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINESCHANNEL_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINESCHANNEL_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

/********************************************************************************************
************************************** 1 SRCENDP **********************************************
********************************************************************************************/

/*--------*/
#define DMA_CH_SRCENDP_R_ADDR_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define DMA_CH_SRCENDP_R_ADDR_BIT    ((UBase_t) 0UL)

#define DMA_CH_SRCENDP_ADDR_MASK    ((UBase_t) 0xFFFFFFFFUL)
/*--------*/

/********************************************************************************************
************************************** 2 DSTENDP **********************************************
********************************************************************************************/

/*--------*/
#define DMA_CH_DSTENDP_R_ADDR_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define DMA_CH_DSTENDP_R_ADDR_BIT    ((UBase_t) 0UL)

#define DMA_CH_DSTENDP_ADDR_MASK    ((UBase_t) 0xFFFFFFFFUL)
/*--------*/

/********************************************************************************************
************************************** 3 CTL **********************************************
********************************************************************************************/

/*--------*/
#define DMA_CH_CTL_R_XFERMODE_MASK    ((UBase_t) 0x00000007UL)
#define DMA_CH_CTL_R_XFERMODE_BIT    ((UBase_t) 0UL)
#define DMA_CH_CTL_R_XFERMODE_STOP    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_R_XFERMODE_BASIC    ((UBase_t) 0x00000001UL)
#define DMA_CH_CTL_R_XFERMODE_AUTO    ((UBase_t) 0x00000002UL)
#define DMA_CH_CTL_R_XFERMODE_PINGPONG    ((UBase_t) 0x00000003UL)
#define DMA_CH_CTL_R_XFERMODE_MSG    ((UBase_t) 0x00000004UL)
#define DMA_CH_CTL_R_XFERMODE_AMSG    ((UBase_t) 0x00000005UL)
#define DMA_CH_CTL_R_XFERMODE_PSG    ((UBase_t) 0x00000006UL)
#define DMA_CH_CTL_R_XFERMODE_APSG    ((UBase_t) 0x00000007UL)

#define DMA_CH_CTL_XFERMODE_MASK    ((UBase_t) 0x00000007UL)
#define DMA_CH_CTL_XFERMODE_STOP    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_XFERMODE_BASIC    ((UBase_t) 0x00000001UL)
#define DMA_CH_CTL_XFERMODE_AUTO    ((UBase_t) 0x00000002UL)
#define DMA_CH_CTL_XFERMODE_PINGPONG    ((UBase_t) 0x00000003UL)
#define DMA_CH_CTL_XFERMODE_MSG    ((UBase_t) 0x00000004UL)
#define DMA_CH_CTL_XFERMODE_AMSG    ((UBase_t) 0x00000005UL)
#define DMA_CH_CTL_XFERMODE_PSG    ((UBase_t) 0x00000006UL)
#define DMA_CH_CTL_XFERMODE_APSG    ((UBase_t) 0x00000007UL)
/*--------*/

/*--------*/
#define DMA_CH_CTL_R_NXTUSEBURST_MASK    ((UBase_t) 0x00000008UL)
#define DMA_CH_CTL_R_NXTUSEBURST_BIT    ((UBase_t) 3UL)
#define DMA_CH_CTL_R_NXTUSEBURST_SINGLE    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_R_NXTUSEBURST_BURST    ((UBase_t) 0x00000008UL)

#define DMA_CH_CTL_NXTUSEBURST_MASK    ((UBase_t) 0x00000001UL)
#define DMA_CH_CTL_NXTUSEBURST_SINGLE    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_NXTUSEBURST_BURST    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define DMA_CH_CTL_R_XFERSIZE_MASK    ((UBase_t) 0x00003FF0UL)
#define DMA_CH_CTL_R_XFERSIZE_BIT    ((UBase_t) 4UL)

#define DMA_CH_CTL_XFERSIZE_MASK    ((UBase_t) 0x000003FFUL)
/*--------*/

/*--------*/
#define DMA_CH_CTL_R_ARBSIZE_MASK    ((UBase_t) 0x0003C000UL)
#define DMA_CH_CTL_R_ARBSIZE_BIT    ((UBase_t) 14UL)
#define DMA_CH_CTL_R_ARBSIZE_1    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_R_ARBSIZE_2    ((UBase_t) 0x00004000UL)
#define DMA_CH_CTL_R_ARBSIZE_4    ((UBase_t) 0x00008000UL)
#define DMA_CH_CTL_R_ARBSIZE_8    ((UBase_t) 0x0000C000UL)
#define DMA_CH_CTL_R_ARBSIZE_16    ((UBase_t) 0x00010000UL)
#define DMA_CH_CTL_R_ARBSIZE_32    ((UBase_t) 0x00014000UL)
#define DMA_CH_CTL_R_ARBSIZE_64    ((UBase_t) 0x00018000UL)
#define DMA_CH_CTL_R_ARBSIZE_128    ((UBase_t) 0x0001C000UL)
#define DMA_CH_CTL_R_ARBSIZE_256    ((UBase_t) 0x00020000UL)
#define DMA_CH_CTL_R_ARBSIZE_512    ((UBase_t) 0x00024000UL)
#define DMA_CH_CTL_R_ARBSIZE_1024    ((UBase_t) 0x00028000UL)

#define DMA_CH_CTL_ARBSIZE_MASK    ((UBase_t) 0x0000000FUL)
#define DMA_CH_CTL_ARBSIZE_1    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_ARBSIZE_2    ((UBase_t) 0x00000001UL)
#define DMA_CH_CTL_ARBSIZE_4    ((UBase_t) 0x00000002UL)
#define DMA_CH_CTL_ARBSIZE_8    ((UBase_t) 0x00000003UL)
#define DMA_CH_CTL_ARBSIZE_16    ((UBase_t) 0x00000004UL)
#define DMA_CH_CTL_ARBSIZE_32    ((UBase_t) 0x00000005UL)
#define DMA_CH_CTL_ARBSIZE_64    ((UBase_t) 0x00000006UL)
#define DMA_CH_CTL_ARBSIZE_128    ((UBase_t) 0x00000007UL)
#define DMA_CH_CTL_ARBSIZE_256    ((UBase_t) 0x00000008UL)
#define DMA_CH_CTL_ARBSIZE_512    ((UBase_t) 0x00000009UL)
#define DMA_CH_CTL_ARBSIZE_1024    ((UBase_t) 0x0000000AUL)
/*--------*/

/*--------*/
#define DMA_CH_CTL_R_SRCPROT0_MASK    ((UBase_t) 0x00040000UL)
#define DMA_CH_CTL_R_SRCPROT0_BIT    ((UBase_t) 18UL)
#define DMA_CH_CTL_R_SRCPROT0_NONPRIV    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_R_SRCPROT0_RPIV    ((UBase_t) 0x00040000UL)

#define DMA_CH_CTL_SRCPROT0_MASK    ((UBase_t) 0x00000001UL)
#define DMA_CH_CTL_SRCPROT0_NONPRIV    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_SRCPROT0_PRIV    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define DMA_CH_CTL_R_DSTPROT0_MASK    ((UBase_t) 0x00200000UL)
#define DMA_CH_CTL_R_DSTPROT0_BIT    ((UBase_t) 21UL)
#define DMA_CH_CTL_R_DSTPROT0_NONPRIV    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_R_DSTPROT0_RPIV    ((UBase_t) 0x00200000UL)

#define DMA_CH_CTL_DSTPROT0_MASK    ((UBase_t) 0x00000001UL)
#define DMA_CH_CTL_DSTPROT0_NONPRIV    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_DSTPROT0_PRIV    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define DMA_CH_CTL_R_SRCSIZE_MASK    ((UBase_t) 0x03000000UL)
#define DMA_CH_CTL_R_SRCSIZE_BIT    ((UBase_t) 24UL)
#define DMA_CH_CTL_R_SRCSIZE_BYTE    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_R_SRCSIZE_HWORD    ((UBase_t) 0x01000000UL)
#define DMA_CH_CTL_R_SRCSIZE_WORD    ((UBase_t) 0x02000000UL)

#define DMA_CH_CTL_SRCSIZE_MASK    ((UBase_t) 0x00000003UL)
#define DMA_CH_CTL_SRCSIZE_BYTE    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_SRCSIZE_HWORD    ((UBase_t) 0x00000001UL)
#define DMA_CH_CTL_SRCSIZE_WORD    ((UBase_t) 0x00000002UL)
/*--------*/

/*--------*/
#define DMA_CH_CTL_R_SRCINC_MASK    ((UBase_t) 0x0C000000UL)
#define DMA_CH_CTL_R_SRCINC_BIT    ((UBase_t) 26UL)
#define DMA_CH_CTL_R_SRCINC_BYTE    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_R_SRCINC_HWORD    ((UBase_t) 0x04000000UL)
#define DMA_CH_CTL_R_SRCINC_WORD    ((UBase_t) 0x08000000UL)
#define DMA_CH_CTL_R_SRCINC_NOINC    ((UBase_t) 0x0C000000UL)

#define DMA_CH_CTL_SRCINC_MASK    ((UBase_t) 0x00000003UL)
#define DMA_CH_CTL_SRCINC_BYTE    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_SRCINC_HWORD    ((UBase_t) 0x00000001UL)
#define DMA_CH_CTL_SRCINC_WORD    ((UBase_t) 0x00000002UL)
#define DMA_CH_CTL_SRCINC_NOINC    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CH_CTL_R_DSTSIZE_MASK    ((UBase_t) 0x30000000UL)
#define DMA_CH_CTL_R_DSTSIZE_BIT    ((UBase_t) 28UL)
#define DMA_CH_CTL_R_DSTSIZE_BYTE    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_R_DSTSIZE_HWORD    ((UBase_t) 0x10000000UL)
#define DMA_CH_CTL_R_DSTSIZE_WORD    ((UBase_t) 0x20000000UL)

#define DMA_CH_CTL_DSTSIZE_MASK    ((UBase_t) 0x00000003UL)
#define DMA_CH_CTL_DSTSIZE_BYTE    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_DSTSIZE_HWORD    ((UBase_t) 0x00000001UL)
#define DMA_CH_CTL_DSTSIZE_WORD    ((UBase_t) 0x00000002UL)
/*--------*/

/*--------*/
#define DMA_CH_CTL_R_DSTINC_MASK    ((UBase_t) 0xC0000000UL)
#define DMA_CH_CTL_R_DSTINC_BIT    ((UBase_t) 30UL)
#define DMA_CH_CTL_R_DSTINC_BYTE    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_R_DSTINC_HWORD    ((UBase_t) 0x40000000UL)
#define DMA_CH_CTL_R_DSTINC_WORD    ((UBase_t) 0x80000000UL)
#define DMA_CH_CTL_R_DSTINC_NOINC    ((UBase_t) 0xC0000000UL)

#define DMA_CH_CTL_DSTINC_MASK    ((UBase_t) 0x00000003UL)
#define DMA_CH_CTL_DSTINC_BYTE    ((UBase_t) 0x00000000UL)
#define DMA_CH_CTL_DSTINC_HWORD    ((UBase_t) 0x00000001UL)
#define DMA_CH_CTL_DSTINC_WORD    ((UBase_t) 0x00000002UL)
#define DMA_CH_CTL_DSTINC_NOINC    ((UBase_t) 0x00000003UL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINESCHANNEL_H_ */
