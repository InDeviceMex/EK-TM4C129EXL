/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_Standard_32_Module4.h
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
 * @verbatim 9 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description * 9 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_32_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_32_MODULE4_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_32_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_32_MODULE4_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_Standard.h>

#define GPTM4_BITBANDING    ((GPTM_t_BITBANDING*) (GPTM_BASE_BITBANDING + (GPTM4_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 1 CFG *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_CFG    ((BITBANDING_GPTMCFG_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_CFG_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 2 TAMR *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TAMR    ((BITBANDING_GPTMTAMR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL)))

#define GPTM4_BITBANDING_TAMR_TACMR    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL) + (GPTM_TAMR_R_TACMR_BIT * 4UL))))
#define GPTM4_BITBANDING_TAMR_TAAMS    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL) + (GPTM_TAMR_R_TAAMS_BIT * 4UL))))
#define GPTM4_BITBANDING_TAMR_TACDIR    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL) + (GPTM_TAMR_R_TACDIR_BIT * 4UL))))
#define GPTM4_BITBANDING_TAMR_TAMIE    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL) + (GPTM_TAMR_R_TAMIE_BIT * 4UL))))
#define GPTM4_BITBANDING_TAMR_TAWOT    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL) + (GPTM_TAMR_R_TAWOT_BIT * 4UL))))
#define GPTM4_BITBANDING_TAMR_TASNAPS    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL) + (GPTM_TAMR_R_TASNAPS_BIT * 4UL))))
#define GPTM4_BITBANDING_TAMR_TAILD    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL) + (GPTM_TAMR_R_TAILD_BIT * 4UL))))
#define GPTM4_BITBANDING_TAMR_TAPWMIE    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL) + (GPTM_TAMR_R_TAPWMIE_BIT * 4UL))))
#define GPTM4_BITBANDING_TAMR_TAMRSU    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL) + (GPTM_TAMR_R_TAMRSU_BIT * 4UL))))
#define GPTM4_BITBANDING_TAMR_TAPLO    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL) + (GPTM_TAMR_R_TAPLO_BIT * 4UL))))
#define GPTM4_BITBANDING_TAMR_TACINTD    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL) + (GPTM_TAMR_R_TACINTD_BIT * 4UL))))
#define GPTM4_BITBANDING_TAMR_TCACT_0    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL) + ((GPTM_TAMR_R_TCACT_BIT + 0UL) * 4UL))))
#define GPTM4_BITBANDING_TAMR_TCACT_1    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL) + ((GPTM_TAMR_R_TCACT_BIT + 1UL) * 4UL))))
#define GPTM4_BITBANDING_TAMR_TCACT_2    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMR_OFFSET) * 32UL) + ((GPTM_TAMR_R_TCACT_BIT + 2UL) * 4UL))))

/******************************************************************************************
*********************************** * 3 TBMR *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TBMR    ((BITBANDING_GPTMTBMR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL)))

#define GPTM4_BITBANDING_TBMR_TBCMR    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL) + (GPTM_TBMR_R_TBCMR_BIT * 4UL))))
#define GPTM4_BITBANDING_TBMR_TBAMS    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL) + (GPTM_TBMR_R_TBAMS_BIT * 4UL))))
#define GPTM4_BITBANDING_TBMR_TBCDIR    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL) + (GPTM_TBMR_R_TBCDIR_BIT * 4UL))))
#define GPTM4_BITBANDING_TBMR_TBMIE    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL) + (GPTM_TBMR_R_TBMIE_BIT * 4UL))))
#define GPTM4_BITBANDING_TBMR_TBWOT    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL) + (GPTM_TBMR_R_TBWOT_BIT * 4UL))))
#define GPTM4_BITBANDING_TBMR_TBSNAPS    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL) + (GPTM_TBMR_R_TBSNAPS_BIT * 4UL))))
#define GPTM4_BITBANDING_TBMR_TBILD    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL) + (GPTM_TBMR_R_TBILD_BIT * 4UL))))
#define GPTM4_BITBANDING_TBMR_TBPWMIE    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL) + (GPTM_TBMR_R_TBPWMIE_BIT * 4UL))))
#define GPTM4_BITBANDING_TBMR_TBMRSU    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL) + (GPTM_TBMR_R_TBMRSU_BIT * 4UL))))
#define GPTM4_BITBANDING_TBMR_TBPLO    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL) + (GPTM_TBMR_R_TBPLO_BIT * 4UL))))
#define GPTM4_BITBANDING_TBMR_TBCINTD    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL) + (GPTM_TBMR_R_TBCINTD_BIT * 4UL))))
#define GPTM4_BITBANDING_TBMR_TCACT_0    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL) + ((GPTM_TBMR_R_TCACT_BIT + 0UL) * 4UL))))
#define GPTM4_BITBANDING_TBMR_TCACT_1    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL) + ((GPTM_TBMR_R_TCACT_BIT + 1UL) * 4UL))))
#define GPTM4_BITBANDING_TBMR_TCACT_2    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMR_OFFSET) * 32UL) + ((GPTM_TBMR_R_TCACT_BIT + 2UL) * 4UL))))

/******************************************************************************************
*********************************** * 4 CTL *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_CTL    ((BITBANDING_GPTMCTL_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_CTL_OFFSET) * 32UL)))

#define GPTM4_BITBANDING_CTL_TAEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_CTL_OFFSET) * 32UL) + (GPTM_CTL_R_TAEN_BIT * 4UL))))
#define GPTM4_BITBANDING_CTL_TASTALL    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_CTL_OFFSET) * 32UL) + (GPTM_CTL_R_TASTALL_BIT * 4UL))))
#define GPTM4_BITBANDING_CTL_RTCEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_CTL_OFFSET) * 32UL) + (GPTM_CTL_R_RTCEN_BIT * 4UL))))
#define GPTM4_BITBANDING_CTL_TAOTE    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_CTL_OFFSET) * 32UL) + (GPTM_CTL_R_TAOTE_BIT * 4UL))))
#define GPTM4_BITBANDING_CTL_TAPWML    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_CTL_OFFSET) * 32UL) + (GPTM_CTL_R_TAPWML_BIT * 4UL))))
#define GPTM4_BITBANDING_CTL_TBEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_CTL_OFFSET) * 32UL) + (GPTM_CTL_R_TBEN_BIT * 4UL))))
#define GPTM4_BITBANDING_CTL_TBSTALL    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_CTL_OFFSET) * 32UL) + (GPTM_CTL_R_TBSTALL_BIT * 4UL))))
#define GPTM4_BITBANDING_CTL_TBOTE    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_CTL_OFFSET) * 32UL) + (GPTM_CTL_R_TBOTE_BIT * 4UL))))
#define GPTM4_BITBANDING_CTL_TBPWML    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_CTL_OFFSET) * 32UL) + (GPTM_CTL_R_TBPWML_BIT * 4UL))))

/******************************************************************************************
*********************************** * 5 SYNC *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_SYNC    ((BITBANDING_GPTMSYNC_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_SYNC_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 6 IMR *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_IMR    ((BITBANDING_GPTMIMR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_IMR_OFFSET) * 32UL)))


#define GPTM4_BITBANDING_IMR_TATOIM    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_IMR_OFFSET) * 32UL) + (GPTM_IMR_R_TATOIM_BIT * 4UL))))
#define GPTM4_BITBANDING_IMR_CAMIM    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_IMR_OFFSET) * 32UL) + (GPTM_IMR_R_CAMIM_BIT * 4UL))))
#define GPTM4_BITBANDING_IMR_CAEIM    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_IMR_OFFSET) * 32UL) + (GPTM_IMR_R_CAEIM_BIT * 4UL))))
#define GPTM4_BITBANDING_IMR_RTCIM    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_IMR_OFFSET) * 32UL) + (GPTM_IMR_R_RTCIM_BIT * 4UL))))
#define GPTM4_BITBANDING_IMR_TAMIM    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_IMR_OFFSET) * 32UL) + (GPTM_IMR_R_TAMIM_BIT * 4UL))))
#define GPTM4_BITBANDING_IMR_DMAAIM    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_IMR_OFFSET) * 32UL) + (GPTM_IMR_R_DMAAIM_BIT * 4UL))))
#define GPTM4_BITBANDING_IMR_TBTOIM    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_IMR_OFFSET) * 32UL) + (GPTM_IMR_R_TBTOIM_BIT * 4UL))))
#define GPTM4_BITBANDING_IMR_CBMIM    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_IMR_OFFSET) * 32UL) + (GPTM_IMR_R_CBMIM_BIT * 4UL))))
#define GPTM4_BITBANDING_IMR_CBEIM    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_IMR_OFFSET) * 32UL) + (GPTM_IMR_R_CBEIM_BIT * 4UL))))
#define GPTM4_BITBANDING_IMR_TBMIM    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_IMR_OFFSET) * 32UL) + (GPTM_IMR_R_TBMIM_BIT * 4UL))))
#define GPTM4_BITBANDING_IMR_DMABIM    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_IMR_OFFSET) * 32UL) + (GPTM_IMR_R_DMABIM_BIT * 4UL))))

/******************************************************************************************
*********************************** * 7 RIS *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_RIS    ((BITBANDING_GPTMRIS_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_RIS_OFFSET) * 32UL)))

#define GPTM4_BITBANDING_RIS_TATORIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_RIS_OFFSET) * 32UL) + (GPTM_RIS_R_TATORIS_BIT * 4UL))))
#define GPTM4_BITBANDING_RIS_CAMRIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_RIS_OFFSET) * 32UL) + (GPTM_RIS_R_CAMRIS_BIT * 4UL))))
#define GPTM4_BITBANDING_RIS_CAERIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_RIS_OFFSET) * 32UL) + (GPTM_RIS_R_CAERIS_BIT * 4UL))))
#define GPTM4_BITBANDING_RIS_RTCRIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_RIS_OFFSET) * 32UL) + (GPTM_RIS_R_RTCRIS_BIT * 4UL))))
#define GPTM4_BITBANDING_RIS_TAMRIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_RIS_OFFSET) * 32UL) + (GPTM_RIS_R_TAMRIS_BIT * 4UL))))
#define GPTM4_BITBANDING_RIS_DMAARIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_RIS_OFFSET) * 32UL) + (GPTM_RIS_R_DMAARIS_BIT * 4UL))))
#define GPTM4_BITBANDING_RIS_TBTORIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_RIS_OFFSET) * 32UL) + (GPTM_RIS_R_TBTORIS_BIT * 4UL))))
#define GPTM4_BITBANDING_RIS_CBMRIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_RIS_OFFSET) * 32UL) + (GPTM_RIS_R_CBMRIS_BIT * 4UL))))
#define GPTM4_BITBANDING_RIS_CBERIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_RIS_OFFSET) * 32UL) + (GPTM_RIS_R_CBERIS_BIT * 4UL))))
#define GPTM4_BITBANDING_RIS_TBMRIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_RIS_OFFSET) * 32UL) + (GPTM_RIS_R_TBMRIS_BIT * 4UL))))
#define GPTM4_BITBANDING_RIS_DMABRIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_RIS_OFFSET) * 32UL) + (GPTM_RIS_R_DMABRIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 MIS *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_MIS    ((BITBANDING_GPTMMIS_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_MIS_OFFSET) * 32UL)))

#define GPTM4_BITBANDING_MIS_TATOMIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_MIS_OFFSET) * 32UL) + (GPTM_MIS_R_TATOMIS_BIT * 4UL))))
#define GPTM4_BITBANDING_MIS_CAMMIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_MIS_OFFSET) * 32UL) + (GPTM_MIS_R_CAMMIS_BIT * 4UL))))
#define GPTM4_BITBANDING_MIS_CAEMIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_MIS_OFFSET) * 32UL) + (GPTM_MIS_R_CAEMIS_BIT * 4UL))))
#define GPTM4_BITBANDING_MIS_RTCMIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_MIS_OFFSET) * 32UL) + (GPTM_MIS_R_RTCMIS_BIT * 4UL))))
#define GPTM4_BITBANDING_MIS_TAMMIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_MIS_OFFSET) * 32UL) + (GPTM_MIS_R_TAMMIS_BIT * 4UL))))
#define GPTM4_BITBANDING_MIS_DMAAMIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_MIS_OFFSET) * 32UL) + (GPTM_MIS_R_DMAAMIS_BIT * 4UL))))
#define GPTM4_BITBANDING_MIS_TBTOMIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_MIS_OFFSET) * 32UL) + (GPTM_MIS_R_TBTOMIS_BIT * 4UL))))
#define GPTM4_BITBANDING_MIS_CBMMIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_MIS_OFFSET) * 32UL) + (GPTM_MIS_R_CBMMIS_BIT * 4UL))))
#define GPTM4_BITBANDING_MIS_CBEMIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_MIS_OFFSET) * 32UL) + (GPTM_MIS_R_CBEMIS_BIT * 4UL))))
#define GPTM4_BITBANDING_MIS_TBMMIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_MIS_OFFSET) * 32UL) + (GPTM_MIS_R_TBMMIS_BIT * 4UL))))
#define GPTM4_BITBANDING_MIS_DMABMIS    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_MIS_OFFSET) * 32UL) + (GPTM_MIS_R_DMABMIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 9 ICR *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_ICR    ((BITBANDING_GPTMICR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ICR_OFFSET) * 32UL)))

#define GPTM4_BITBANDING_ICR_TATOCINT    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ICR_OFFSET) * 32UL) + (GPTM_ICR_R_TATOCINT_BIT * 4UL))))
#define GPTM4_BITBANDING_ICR_CAMCINT    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ICR_OFFSET) * 32UL) + (GPTM_ICR_R_CAMCINT_BIT * 4UL))))
#define GPTM4_BITBANDING_ICR_CAECINT    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ICR_OFFSET) * 32UL) + (GPTM_ICR_R_CAECINT_BIT * 4UL))))
#define GPTM4_BITBANDING_ICR_RTCCINT    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ICR_OFFSET) * 32UL) + (GPTM_ICR_R_RTCCINT_BIT * 4UL))))
#define GPTM4_BITBANDING_ICR_TAMCINT    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ICR_OFFSET) * 32UL) + (GPTM_ICR_R_TAMCINT_BIT * 4UL))))
#define GPTM4_BITBANDING_ICR_DMAAINT    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ICR_OFFSET) * 32UL) + (GPTM_ICR_R_DMAAINT_BIT * 4UL))))
#define GPTM4_BITBANDING_ICR_TBTOCINT    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ICR_OFFSET) * 32UL) + (GPTM_ICR_R_TBTOCINT_BIT * 4UL))))
#define GPTM4_BITBANDING_ICR_CBMCINT    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ICR_OFFSET) * 32UL) + (GPTM_ICR_R_CBMCINT_BIT * 4UL))))
#define GPTM4_BITBANDING_ICR_CBECINT    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ICR_OFFSET) * 32UL) + (GPTM_ICR_R_CBECINT_BIT * 4UL))))
#define GPTM4_BITBANDING_ICR_TBMCINT    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ICR_OFFSET) * 32UL) + (GPTM_ICR_R_TBMCINT_BIT * 4UL))))
#define GPTM4_BITBANDING_ICR_DMABINT    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ICR_OFFSET) * 32UL) + (GPTM_ICR_R_DMABINT_BIT * 4UL))))

/******************************************************************************************
*********************************** * 10 TAILR *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TAILR    ((BITBANDING_GPTMTAILR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAILR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 11 TBILR *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TBILR    ((BITBANDING_GPTMTBILR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBILR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TAMATCHR    ((BITBANDING_GPTMTAMATCHR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAMATCHR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 13 TBMATCHR *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TBMATCHR    ((BITBANDING_GPTMTBMATCHR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBMATCHR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 14 TAPR *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TAPR    ((BITBANDING_GPTMTAPR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAPR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 15 TBPR *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TBPR    ((BITBANDING_GPTMTBPR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBPR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 16 TAPMR *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TAPMR    ((BITBANDING_GPTMTAPMR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAPMR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 17 TBPMR *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TBPMR    ((BITBANDING_GPTMTBPMR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBPMR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 18 TAR *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TAR    ((BITBANDING_GPTMTAR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 19 TBR *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TBR    ((BITBANDING_GPTMTBR_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 20 TAV *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TAV    ((BITBANDING_GPTMTAV_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAV_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 21 TBV *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TBV    ((BITBANDING_GPTMTBV_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBV_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 22 RTCPD *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_RTCPD    ((BITBANDING_GPTMRTCPD_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_RTCPD_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 23 TAPS *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TAPS    ((BITBANDING_GPTMTAPS_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TAPS_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 24 TBPS *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_TBPS    ((BITBANDING_GPTMTBPS_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_TBPS_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 25 DMAEV *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_DMAEV    ((BITBANDING_GPTMDMAEV_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_DMAEV_OFFSET) * 32UL)))


#define GPTM4_BITBANDING_DMAEV_TATODMAEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_DMAEV_OFFSET) * 32UL) + (GPTM_DMAEV_R_TATODMAEN_BIT * 4UL))))
#define GPTM4_BITBANDING_DMAEV_CAMDMAEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_DMAEV_OFFSET) * 32UL) + (GPTM_DMAEV_R_CAMDMAEN_BIT * 4UL))))
#define GPTM4_BITBANDING_DMAEV_CAEDMAEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_DMAEV_OFFSET) * 32UL) + (GPTM_DMAEV_R_CAEDMAEN_BIT * 4UL))))
#define GPTM4_BITBANDING_DMAEV_RTCDMAEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_DMAEV_OFFSET) * 32UL) + (GPTM_DMAEV_R_RTCDMAEN_BIT * 4UL))))
#define GPTM4_BITBANDING_DMAEV_TAMDMAEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_DMAEV_OFFSET) * 32UL) + (GPTM_DMAEV_R_TAMDMAEN_BIT * 4UL))))
#define GPTM4_BITBANDING_DMAEV_TBTODMAEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_DMAEV_OFFSET) * 32UL) + (GPTM_DMAEV_R_TBTODMAEN_BIT * 4UL))))
#define GPTM4_BITBANDING_DMAEV_CBMDMAEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_DMAEV_OFFSET) * 32UL) + (GPTM_DMAEV_R_CBMDMAEN_BIT * 4UL))))
#define GPTM4_BITBANDING_DMAEV_CBEDMAEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_DMAEV_OFFSET) * 32UL) + (GPTM_DMAEV_R_CBEDMAEN_BIT * 4UL))))
#define GPTM4_BITBANDING_DMAEV_TBMDMAEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_DMAEV_OFFSET) * 32UL) + (GPTM_DMAEV_R_TBMDMAEN_BIT * 4UL))))

/******************************************************************************************
*********************************** * 26 ADCEV *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_ADCEV    ((BITBANDING_GPTMADCEV_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ADCEV_OFFSET) * 32UL)))


#define GPTM4_BITBANDING_ADCEV_TATOADCEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ADCEV_OFFSET) * 32UL) + (GPTM_ADCEV_R_TATOADCEN_BIT * 4UL))))
#define GPTM4_BITBANDING_ADCEV_CAMADCEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ADCEV_OFFSET) * 32UL) + (GPTM_ADCEV_R_CAMADCEN_BIT * 4UL))))
#define GPTM4_BITBANDING_ADCEV_CAEADCEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ADCEV_OFFSET) * 32UL) + (GPTM_ADCEV_R_CAEADCEN_BIT * 4UL))))
#define GPTM4_BITBANDING_ADCEV_RTCADCEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ADCEV_OFFSET) * 32UL) + (GPTM_ADCEV_R_RTCADCEN_BIT * 4UL))))
#define GPTM4_BITBANDING_ADCEV_TAMADCEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ADCEV_OFFSET) * 32UL) + (GPTM_ADCEV_R_TAMADCEN_BIT * 4UL))))
#define GPTM4_BITBANDING_ADCEV_TBTOADCEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ADCEV_OFFSET) * 32UL) + (GPTM_ADCEV_R_TBTOADCEN_BIT * 4UL))))
#define GPTM4_BITBANDING_ADCEV_CBMADCEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ADCEV_OFFSET) * 32UL) + (GPTM_ADCEV_R_CBMADCEN_BIT * 4UL))))
#define GPTM4_BITBANDING_ADCEV_CBEADCEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ADCEV_OFFSET) * 32UL) + (GPTM_ADCEV_R_CBEADCEN_BIT * 4UL))))
#define GPTM4_BITBANDING_ADCEV_TBMADCEN    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_ADCEV_OFFSET) * 32UL) + (GPTM_ADCEV_R_TBMADCEN_BIT * 4UL))))

/******************************************************************************************
*********************************** * 27 PP *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_PP    ((BITBANDING_GPTMPP_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_PP_OFFSET) * 32UL)))

#define GPTM4_BITBANDING_PP_CHAIN    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_PP_OFFSET) * 32UL) + (GPTM_PP_R_CHAIN_BIT * 4UL))))
#define GPTM4_BITBANDING_PP_SYNCCNT    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_PP_OFFSET) * 32UL) + (GPTM_PP_R_SYNCCNT_BIT * 4UL))))
#define GPTM4_BITBANDING_PP_ALTCLK    (*((volatile const UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_PP_OFFSET) * 32UL) + (GPTM_PP_R_ALTCLK_BIT * 4UL))))

/******************************************************************************************
*********************************** * 27 CC *********************************************
******************************************************************************************/
#define GPTM4_BITBANDING_CC    ((BITBANDING_GPTMCC_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_CC_OFFSET) * 32UL)))

#define GPTM4_BITBANDING_CC_ALTCLK    (*((volatile UBase_t*) (GPTM_BASE_BITBANDING + ((GPTM4_OFFSET + GPTM_CC_OFFSET) * 32UL) + (GPTM_CC_R_ALTCLK_BIT * 4UL))))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_32_TIMER_REGISTERPERIPHERAL_BITBANDING_STANDARD_32_MODULE4_H_ */
