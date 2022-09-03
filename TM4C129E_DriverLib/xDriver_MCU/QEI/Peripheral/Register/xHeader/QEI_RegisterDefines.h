/**
 *
 * @file QEI_RegisterDefines.h
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

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_XHEADER_QEI_REGISTERDEFINES_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_XHEADER_QEI_REGISTERDEFINES_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 1 CTL *********************************************
******************************************************************************************/
/*--------*/
#define QEI_CTL_R_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define QEI_CTL_R_ENABLE_BIT    ((uint32_t) 0UL)
#define QEI_CTL_R_ENABLE_NA    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_ENABLE_DIS    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_ENABLE_ENA    ((uint32_t) 0x00000001UL)

#define QEI_CTL_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define QEI_CTL_ENABLE_NA    ((uint32_t) 0x00000000UL)
#define QEI_CTL_ENABLE_DIS    ((uint32_t) 0x00000000UL)
#define QEI_CTL_ENABLE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define QEI_CTL_R_SWAP_MASK    ((uint32_t) 0x00000002UL)
#define QEI_CTL_R_SWAP_BIT    ((uint32_t) 1UL)
#define QEI_CTL_R_SWAP_NA    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_SWAP_NORMAL    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_SWAP_SWAP    ((uint32_t) 0x00000002UL)

#define QEI_CTL_SWAP_MASK    ((uint32_t) 0x00000001UL)
#define QEI_CTL_SWAP_NA    ((uint32_t) 0x00000000UL)
#define QEI_CTL_SWAP_NORMAL    ((uint32_t) 0x00000000UL)
#define QEI_CTL_SWAP_SWAP    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define QEI_CTL_R_SIGMODE_MASK    ((uint32_t) 0x00000004UL)
#define QEI_CTL_R_SIGMODE_BIT    ((uint32_t) 2UL)
#define QEI_CTL_R_SIGMODE_ENCODER    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_SIGMODE_BYPASS    ((uint32_t) 0x00000004UL)

#define QEI_CTL_SIGMODE_MASK    ((uint32_t) 0x00000001UL)
#define QEI_CTL_SIGMODE_ENCODER    ((uint32_t) 0x00000000UL)
#define QEI_CTL_SIGMODE_BYPASS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define QEI_CTL_R_CAPMODE_MASK    ((uint32_t) 0x00000008UL)
#define QEI_CTL_R_CAPMODE_BIT    ((uint32_t) 3UL)
#define QEI_CTL_R_CAPMODE_PHA    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_CAPMODE_BOTH    ((uint32_t) 0x00000008UL)

#define QEI_CTL_CAPMODE_MASK    ((uint32_t) 0x00000001UL)
#define QEI_CTL_CAPMODE_PHA    ((uint32_t) 0x00000000UL)
#define QEI_CTL_CAPMODE_BOTH    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define QEI_CTL_R_RESMODE_MASK    ((uint32_t) 0x00000010UL)
#define QEI_CTL_R_RESMODE_BIT    ((uint32_t) 4UL)
#define QEI_CTL_R_RESMODE_MAXPOS    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_RESMODE_INDEX    ((uint32_t) 0x00000010UL)

#define QEI_CTL_RESMODE_MASK    ((uint32_t) 0x00000001UL)
#define QEI_CTL_RESMODE_MAXPOS    ((uint32_t) 0x00000000UL)
#define QEI_CTL_RESMODE_INDEX    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define QEI_CTL_R_VELEN_MASK    ((uint32_t) 0x00000020UL)
#define QEI_CTL_R_VELEN_BIT    ((uint32_t) 5UL)
#define QEI_CTL_R_VELEN_NA    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_VELEN_DIS    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_VELEN_ENA    ((uint32_t) 0x00000020UL)

#define QEI_CTL_VELEN_MASK    ((uint32_t) 0x00000001UL)
#define QEI_CTL_VELEN_NA    ((uint32_t) 0x00000000UL)
#define QEI_CTL_VELEN_DIS    ((uint32_t) 0x00000000UL)
#define QEI_CTL_VELEN_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define QEI_CTL_R_VELDIV_MASK    ((uint32_t) 0x000001C0UL)
#define QEI_CTL_R_VELDIV_BIT    ((uint32_t) 6UL)
#define QEI_CTL_R_VELDIV_1    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_VELDIV_2    ((uint32_t) 0x00000040UL)
#define QEI_CTL_R_VELDIV_4    ((uint32_t) 0x00000080UL)
#define QEI_CTL_R_VELDIV_8    ((uint32_t) 0x000000C0UL)
#define QEI_CTL_R_VELDIV_16    ((uint32_t) 0x00000100UL)
#define QEI_CTL_R_VELDIV_32    ((uint32_t) 0x00000140UL)
#define QEI_CTL_R_VELDIV_64    ((uint32_t) 0x00000180UL)
#define QEI_CTL_R_VELDIV_128    ((uint32_t) 0x000001C0UL)

#define QEI_CTL_VELDIV_MASK    ((uint32_t) 0x00000007UL)
#define QEI_CTL_VELDIV_1    ((uint32_t) 0x00000000UL)
#define QEI_CTL_VELDIV_2    ((uint32_t) 0x00000001UL)
#define QEI_CTL_VELDIV_4    ((uint32_t) 0x00000002UL)
#define QEI_CTL_VELDIV_8    ((uint32_t) 0x00000003UL)
#define QEI_CTL_VELDIV_16    ((uint32_t) 0x00000004UL)
#define QEI_CTL_VELDIV_32    ((uint32_t) 0x00000005UL)
#define QEI_CTL_VELDIV_64    ((uint32_t) 0x00000006UL)
#define QEI_CTL_VELDIV_128    ((uint32_t) 0x00000007UL)
/*--------*/

/*--------*/
#define QEI_CTL_R_INVA_MASK    ((uint32_t) 0x00000200UL)
#define QEI_CTL_R_INVA_BIT    ((uint32_t) 9UL)
#define QEI_CTL_R_INVA_NA    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_INVA_NORMAL    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_INVA_INVERT    ((uint32_t) 0x00000200UL)

#define QEI_CTL_INVA_MASK    ((uint32_t) 0x00000001UL)
#define QEI_CTL_INVA_NA    ((uint32_t) 0x00000000UL)
#define QEI_CTL_INVA_NORMAL    ((uint32_t) 0x00000000UL)
#define QEI_CTL_INVA_INVERT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define QEI_CTL_R_INVB_MASK    ((uint32_t) 0x00000400UL)
#define QEI_CTL_R_INVB_BIT    ((uint32_t) 10UL)
#define QEI_CTL_R_INVB_NA    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_INVB_NORMAL    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_INVB_INVERT    ((uint32_t) 0x00000400UL)

#define QEI_CTL_INVB_MASK    ((uint32_t) 0x00000001UL)
#define QEI_CTL_INVB_NA    ((uint32_t) 0x00000000UL)
#define QEI_CTL_INVB_NORMAL    ((uint32_t) 0x00000000UL)
#define QEI_CTL_INVB_INVERT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define QEI_CTL_R_INVI_MASK    ((uint32_t) 0x00000800UL)
#define QEI_CTL_R_INVI_BIT    ((uint32_t) 11UL)
#define QEI_CTL_R_INVI_NA    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_INVI_NORMAL    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_INVI_INVERT    ((uint32_t) 0x00000800UL)

#define QEI_CTL_INVI_MASK    ((uint32_t) 0x00000001UL)
#define QEI_CTL_INVI_NA    ((uint32_t) 0x00000000UL)
#define QEI_CTL_INVI_NORMAL    ((uint32_t) 0x00000000UL)
#define QEI_CTL_INVI_INVERT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define QEI_CTL_R_STALLEN_MASK    ((uint32_t) 0x00001000UL)
#define QEI_CTL_R_STALLEN_BIT    ((uint32_t) 12UL)
#define QEI_CTL_R_STALLEN_CONTINUE    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_STALLEN_FREEZE    ((uint32_t) 0x00001000UL)

#define QEI_CTL_STALLEN_MASK    ((uint32_t) 0x00000001UL)
#define QEI_CTL_STALLEN_CONTINUE    ((uint32_t) 0x00000000UL)
#define QEI_CTL_STALLEN_FREEZE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define QEI_CTL_R_FILTEN_MASK    ((uint32_t) 0x00002000UL)
#define QEI_CTL_R_FILTEN_BIT    ((uint32_t) 13UL)
#define QEI_CTL_R_FILTEN_DIS    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_FILTEN_ENA    ((uint32_t) 0x00002000UL)

#define QEI_CTL_FILTEN_MASK    ((uint32_t) 0x00000001UL)
#define QEI_CTL_FILTEN_DIS    ((uint32_t) 0x00000000UL)
#define QEI_CTL_FILTEN_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define QEI_CTL_R_FILTCNT_MASK    ((uint32_t) 0x000F0000UL)
#define QEI_CTL_R_FILTCNT_BIT    ((uint32_t) 16UL)
#define QEI_CTL_R_FILTCNT_2    ((uint32_t) 0x00000000UL)
#define QEI_CTL_R_FILTCNT_3    ((uint32_t) 0x00010000UL)
#define QEI_CTL_R_FILTCNT_4    ((uint32_t) 0x00020000UL)
#define QEI_CTL_R_FILTCNT_5    ((uint32_t) 0x00030000UL)
#define QEI_CTL_R_FILTCNT_6    ((uint32_t) 0x00040000UL)
#define QEI_CTL_R_FILTCNT_7    ((uint32_t) 0x00050000UL)
#define QEI_CTL_R_FILTCNT_8    ((uint32_t) 0x00060000UL)
#define QEI_CTL_R_FILTCNT_9    ((uint32_t) 0x00070000UL)
#define QEI_CTL_R_FILTCNT_10    ((uint32_t) 0x00080000UL)
#define QEI_CTL_R_FILTCNT_11    ((uint32_t) 0x00090000UL)
#define QEI_CTL_R_FILTCNT_12    ((uint32_t) 0x000A0000UL)
#define QEI_CTL_R_FILTCNT_13    ((uint32_t) 0x000B0000UL)
#define QEI_CTL_R_FILTCNT_14    ((uint32_t) 0x000C0000UL)
#define QEI_CTL_R_FILTCNT_15    ((uint32_t) 0x000D0000UL)
#define QEI_CTL_R_FILTCNT_16    ((uint32_t) 0x000E0000UL)
#define QEI_CTL_R_FILTCNT_17    ((uint32_t) 0x000F0000UL)

#define QEI_CTL_FILTCNT_MASK    ((uint32_t) 0x0000000FUL)
#define QEI_CTL_FILTCNT_2    ((uint32_t) 0x00000000UL)
#define QEI_CTL_FILTCNT_3    ((uint32_t) 0x00000001UL)
#define QEI_CTL_FILTCNT_4    ((uint32_t) 0x00000002UL)
#define QEI_CTL_FILTCNT_5    ((uint32_t) 0x00000003UL)
#define QEI_CTL_FILTCNT_6    ((uint32_t) 0x00000004UL)
#define QEI_CTL_FILTCNT_7    ((uint32_t) 0x00000005UL)
#define QEI_CTL_FILTCNT_8    ((uint32_t) 0x00000006UL)
#define QEI_CTL_FILTCNT_9    ((uint32_t) 0x00000007UL)
#define QEI_CTL_FILTCNT_10    ((uint32_t) 0x00000008UL)
#define QEI_CTL_FILTCNT_11    ((uint32_t) 0x00000009UL)
#define QEI_CTL_FILTCNT_12    ((uint32_t) 0x0000000AUL)
#define QEI_CTL_FILTCNT_13    ((uint32_t) 0x0000000BUL)
#define QEI_CTL_FILTCNT_14    ((uint32_t) 0x0000000CUL)
#define QEI_CTL_FILTCNT_15    ((uint32_t) 0x0000000DUL)
#define QEI_CTL_FILTCNT_16    ((uint32_t) 0x0000000EUL)
#define QEI_CTL_FILTCNT_17    ((uint32_t) 0x0000000FUL)
/*--------*/

/******************************************************************************************
************************************ 2 STAT *********************************************
******************************************************************************************/
/*--------*/
#define QEI_STAT_R_ERROR_MASK    ((uint32_t) 0x00000001UL)
#define QEI_STAT_R_ERROR_BIT    ((uint32_t) 0UL)
#define QEI_STAT_R_ERROR_NA    ((uint32_t) 0x00000000UL)
#define QEI_STAT_R_ERROR_INACTIVE    ((uint32_t) 0x00000000UL)
#define QEI_STAT_R_ERROR_ACTIVE    ((uint32_t) 0x00000001UL)

#define QEI_STAT_ERROR_MASK    ((uint32_t) 0x00000001UL)
#define QEI_STAT_ERROR_NA    ((uint32_t) 0x00000000UL)
#define QEI_STAT_ERROR_INACTIVE    ((uint32_t) 0x00000000UL)
#define QEI_STAT_ERROR_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define QEI_STAT_R_DIRECTION_MASK    ((uint32_t) 0x00000002UL)
#define QEI_STAT_R_DIRECTION_BIT    ((uint32_t) 1UL)
#define QEI_STAT_R_DIRECTION_FORWARD    ((uint32_t) 0x00000000UL)
#define QEI_STAT_R_DIRECTION_REVERSE    ((uint32_t) 0x00000002UL)

#define QEI_STAT_DIRECTION_MASK    ((uint32_t) 0x00000001UL)
#define QEI_STAT_DIRECTION_FORWARD    ((uint32_t) 0x00000000UL)
#define QEI_STAT_DIRECTION_REVERSE    ((uint32_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 3 POS *********************************************
******************************************************************************************/
/*--------*/
#define QEI_POS_R_POSITION_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define QEI_POS_R_POSITION_BIT    ((uint32_t) 0UL)

#define QEI_POS_POSITION_MASK    ((uint32_t) 0xFFFFFFFFUL)
/*--------*/

/******************************************************************************************
************************************ 4 MAXPOS *********************************************
******************************************************************************************/
/*--------*/
#define QEI_MAXPOS_R_MAXPOS_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define QEI_MAXPOS_R_MAXPOS_BIT    ((uint32_t) 0UL)

#define QEI_MAXPOS_MAXPOS_MASK    ((uint32_t) 0xFFFFFFFFUL)
/*--------*/

/******************************************************************************************
************************************ 5 LOAD *********************************************
******************************************************************************************/
/*--------*/
#define QEI_LOAD_R_LOAD_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define QEI_LOAD_R_LOAD_BIT    ((uint32_t) 0UL)

#define QEI_LOAD_LOAD_MASK    ((uint32_t) 0xFFFFFFFFUL)
/*--------*/

/******************************************************************************************
************************************ 6 TIME *********************************************
******************************************************************************************/
/*--------*/
#define QEI_TIME_R_TIME_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define QEI_TIME_R_TIME_BIT    ((uint32_t) 0UL)

#define QEI_TIME_TIME_MASK    ((uint32_t) 0xFFFFFFFFUL)
/*--------*/

/******************************************************************************************
************************************ 7 COUNT *********************************************
******************************************************************************************/
/*--------*/
#define QEI_COUNT_R_COUNT_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define QEI_COUNT_R_COUNT_BIT    ((uint32_t) 0UL)

#define QEI_COUNT_COUNT_MASK    ((uint32_t) 0xFFFFFFFFUL)
/*--------*/

/******************************************************************************************
************************************ 8 SPEED *********************************************
******************************************************************************************/
/*--------*/
#define QEI_SPEED_R_SPEED_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define QEI_SPEED_R_SPEED_BIT    ((uint32_t) 0UL)

#define QEI_SPEED_SPEED_MASK    ((uint32_t) 0xFFFFFFFFUL)
/*--------*/

/******************************************************************************************
 ************************************ 9 INTEN *********************************************
 ******************************************************************************************/

/*----------*/
#define QEI_INTEN_R_INTINDEX_MASK    ((uint32_t) 0x00000001U)
#define QEI_INTEN_R_INTINDEX_BIT    ((uint32_t) 0U)
#define QEI_INTEN_R_INTINDEX_DIS    ((uint32_t) 0x00000000U)
#define QEI_INTEN_R_INTINDEX_ENA    ((uint32_t) 0x00000001U)

#define QEI_INTEN_INTINDEX_MASK    ((uint32_t) 0x00000001U)
#define QEI_INTEN_INTINDEX_DIS    ((uint32_t) 0x00000000U)
#define QEI_INTEN_INTINDEX_ENA    ((uint32_t) 0x00000001U)
/*----------*/

/*----------*/
#define QEI_INTEN_R_INTTIMER_MASK    ((uint32_t) 0x00000002U)
#define QEI_INTEN_R_INTTIMER_BIT    ((uint32_t) 1U)
#define QEI_INTEN_R_INTTIMER_DIS    ((uint32_t) 0x00000000U)
#define QEI_INTEN_R_INTTIMER_ENA    ((uint32_t) 0x00000002U)

#define QEI_INTEN_INTTIMER_MASK    ((uint32_t) 0x00000001U)
#define QEI_INTEN_INTTIMER_DIS    ((uint32_t) 0x00000000U)
#define QEI_INTEN_INTTIMER_ENA    ((uint32_t) 0x00000001U)
/*----------*/

/*----------*/
#define QEI_INTEN_R_INTDIR_MASK    ((uint32_t) 0x00000004U)
#define QEI_INTEN_R_INTDIR_BIT    ((uint32_t) 2U)
#define QEI_INTEN_R_INTDIR_DIS    ((uint32_t) 0x00000000U)
#define QEI_INTEN_R_INTDIR_ENA    ((uint32_t) 0x0000004U)

#define QEI_INTEN_INTDIR_MASK    ((uint32_t) 0x00000001U)
#define QEI_INTEN_INTDIR_DIS    ((uint32_t) 0x00000000U)
#define QEI_INTEN_INTDIR_ENA    ((uint32_t) 0x00000001U)
/*----------*/

/*----------*/
#define QEI_INTEN_R_INTERROR_MASK    ((uint32_t) 0x00000008U)
#define QEI_INTEN_R_INTERROR_BIT    ((uint32_t) 3U)
#define QEI_INTEN_R_INTERROR_DIS    ((uint32_t) 0x00000000U)
#define QEI_INTEN_R_INTERROR_ENA    ((uint32_t) 0x0000008U)

#define QEI_INTEN_INTERROR_MASK    ((uint32_t) 0x00000001U)
#define QEI_INTEN_INTERROR_DIS    ((uint32_t) 0x00000000U)
#define QEI_INTEN_INTERROR_ENA    ((uint32_t) 0x00000001U)
/*----------*/

/******************************************************************************************
 ************************************ 10 RIS *********************************************
 ******************************************************************************************/

/*----------*/
#define QEI_RIS_R_INTINDEX_MASK    ((uint32_t) 0x00000001U)
#define QEI_RIS_R_INTINDEX_BIT    ((uint32_t) 0U)
#define QEI_RIS_R_INTINDEX_NOACTIVE    ((uint32_t) 0x00000000U)
#define QEI_RIS_R_INTINDEX_ACTIVE    ((uint32_t) 0x00000001U)

#define QEI_RIS_INTINDEX_MASK    ((uint32_t) 0x00000001U)
#define QEI_RIS_INTINDEX_NOACTIVE    ((uint32_t) 0x00000000U)
#define QEI_RIS_INTINDEX_ACTIVE    ((uint32_t) 0x00000001U)
/*----------*/

/*----------*/
#define QEI_RIS_R_INTTIMER_MASK    ((uint32_t) 0x00000002U)
#define QEI_RIS_R_INTTIMER_BIT    ((uint32_t) 1U)
#define QEI_RIS_R_INTTIMER_NOACTIVE    ((uint32_t) 0x00000000U)
#define QEI_RIS_R_INTTIMER_ACTIVE    ((uint32_t) 0x00000002U)

#define QEI_RIS_INTTIMER_MASK    ((uint32_t) 0x00000001U)
#define QEI_RIS_INTTIMER_NOACTIVE    ((uint32_t) 0x00000000U)
#define QEI_RIS_INTTIMER_ACTIVE    ((uint32_t) 0x00000001U)
/*----------*/

/*----------*/
#define QEI_RIS_R_INTDIR_MASK    ((uint32_t) 0x00000004U)
#define QEI_RIS_R_INTDIR_BIT    ((uint32_t) 2U)
#define QEI_RIS_R_INTDIR_NOACTIVE    ((uint32_t) 0x00000000U)
#define QEI_RIS_R_INTDIR_ACTIVE    ((uint32_t) 0x0000004U)

#define QEI_RIS_INTDIR_MASK    ((uint32_t) 0x00000001U)
#define QEI_RIS_INTDIR_NOACTIVE    ((uint32_t) 0x00000000U)
#define QEI_RIS_INTDIR_ACTIVE    ((uint32_t) 0x00000001U)
/*----------*/

/*----------*/
#define QEI_RIS_R_INTERROR_MASK    ((uint32_t) 0x00000008U)
#define QEI_RIS_R_INTERROR_BIT    ((uint32_t) 3U)
#define QEI_RIS_R_INTERROR_NOACTIVE    ((uint32_t) 0x00000000U)
#define QEI_RIS_R_INTERROR_ACTIVE    ((uint32_t) 0x0000008U)

#define QEI_RIS_INTERROR_MASK    ((uint32_t) 0x00000001U)
#define QEI_RIS_INTERROR_NOACTIVE    ((uint32_t) 0x00000000U)
#define QEI_RIS_INTERROR_ACTIVE    ((uint32_t) 0x00000001U)
/*----------*/

/******************************************************************************************
 ************************************ 11 ISC *********************************************
 ******************************************************************************************/

/*----------*/
#define QEI_ISC_R_INTINDEX_MASK    ((uint32_t) 0x00000001U)
#define QEI_ISC_R_INTINDEX_BIT    ((uint32_t) 0U)
#define QEI_ISC_R_INTINDEX_INACTIVE    ((uint32_t) 0x00000000U)
#define QEI_ISC_R_INTINDEX_ACTIVE    ((uint32_t) 0x00000001U)
#define QEI_ISC_R_INTINDEX_CLEAR    ((uint32_t) 0x00000001U)

#define QEI_ISC_INTINDEX_MASK    ((uint32_t) 0x00000001U)
#define QEI_ISC_INTINDEX_INACTIVE    ((uint32_t) 0x00000000U)
#define QEI_ISC_INTINDEX_ACTIVE    ((uint32_t) 0x00000001U)
/*----------*/

/*----------*/
#define QEI_ISC_R_INTTIMER_MASK    ((uint32_t) 0x00000002U)
#define QEI_ISC_R_INTTIMER_BIT    ((uint32_t) 1U)
#define QEI_ISC_R_INTTIMER_INACTIVE    ((uint32_t) 0x00000000U)
#define QEI_ISC_R_INTTIMER_ACTIVE    ((uint32_t) 0x00000002U)
#define QEI_ISC_R_INTTIMER_CLEAR    ((uint32_t) 0x00000002U)

#define QEI_ISC_INTTIMER_MASK    ((uint32_t) 0x00000001U)
#define QEI_ISC_INTTIMER_INACTIVE    ((uint32_t) 0x00000000U)
#define QEI_ISC_INTTIMER_ACTIVE    ((uint32_t) 0x00000001U)
/*----------*/

/*----------*/
#define QEI_ISC_R_INTDIR_MASK    ((uint32_t) 0x00000004U)
#define QEI_ISC_R_INTDIR_BIT    ((uint32_t) 2U)
#define QEI_ISC_R_INTDIR_INACTIVE    ((uint32_t) 0x00000000U)
#define QEI_ISC_R_INTDIR_ACTIVE    ((uint32_t) 0x0000004U)
#define QEI_ISC_R_INTDIR_CLEAR    ((uint32_t) 0x0000004U)

#define QEI_ISC_INTDIR_MASK    ((uint32_t) 0x00000001U)
#define QEI_ISC_INTDIR_INACTIVE    ((uint32_t) 0x00000000U)
#define QEI_ISC_INTDIR_ACTIVE    ((uint32_t) 0x00000001U)
/*----------*/

/*----------*/
#define QEI_ISC_R_INTERROR_MASK    ((uint32_t) 0x00000008U)
#define QEI_ISC_R_INTERROR_BIT    ((uint32_t) 3U)
#define QEI_ISC_R_INTERROR_INACTIVE    ((uint32_t) 0x00000000U)
#define QEI_ISC_R_INTERROR_ACTIVE    ((uint32_t) 0x0000008U)
#define QEI_ISC_R_INTERROR_CLEAR    ((uint32_t) 0x0000008U)

#define QEI_ISC_INTERROR_MASK    ((uint32_t) 0x00000001U)
#define QEI_ISC_INTERROR_INACTIVE    ((uint32_t) 0x00000000U)
#define QEI_ISC_INTERROR_ACTIVE    ((uint32_t) 0x00000001U)
/*----------*/


#endif /* XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_XHEADER_QEI_REGISTERDEFINES_H_ */
