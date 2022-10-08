/**
 *
 * @file TIMER_RegisterDefines_ModuleB_16_MR.h
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
 * @verbatim 6 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_MR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_MR_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

/******************************************************************************************
************************************ 3 TBMR *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TB_TnMR_R_TnMR_MASK    ((UBase_t) 0x00000003UL)
#define GPTM_TB_TnMR_R_TnMR_BIT    (0UL)
#define GPTM_TB_TnMR_R_TnMR_ONESHOT    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnMR_R_TnMR_PERIOD    ((UBase_t) 0x00000002UL)
#define GPTM_TB_TnMR_R_TnMR_CAPTURE    ((UBase_t) 0x00000003UL)

#define GPTM_TB_TnMR_TnMR_MASK    ((UBase_t) 0x00000003UL)
#define GPTM_TB_TnMR_TnMR_ONESHOT    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnMR_TnMR_PERIOD    ((UBase_t) 0x00000002UL)
#define GPTM_TB_TnMR_TnMR_CAPTURE    ((UBase_t) 0x00000003UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnMR_R_TnCMR_MASK    ((UBase_t) 0x00000004UL)
#define GPTM_TB_TnMR_R_TnCMR_BIT    (2UL)
#define GPTM_TB_TnMR_R_TnCMR_EDGECOUNT    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_R_TnCMR_EDGETIME    ((UBase_t) 0x00000004UL)

#define GPTM_TB_TnMR_TnCMR_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnMR_TnCMR_EDGECOUNT    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_TnCMR_EDGETIME    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnMR_R_TnAMS_MASK    ((UBase_t) 0x00000008UL)
#define GPTM_TB_TnMR_R_TnAMS_BIT    (3UL)
#define GPTM_TB_TnMR_R_TnAMS_CAPCOMP    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_R_TnAMS_PWM    ((UBase_t) 0x00000008UL)

#define GPTM_TB_TnMR_TnAMS_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnMR_TnAMS_CAPCOMP    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_TnAMS_PWM    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnMR_R_TnCDIR_MASK    ((UBase_t) 0x00000010UL)
#define GPTM_TB_TnMR_R_TnCDIR_BIT    (4UL)
#define GPTM_TB_TnMR_R_TnCDIR_DOWN    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_R_TnCDIR_UP    ((UBase_t) 0x00000010UL)

#define GPTM_TB_TnMR_TnCDIR_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnMR_TnCDIR_DOWN    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_TnCDIR_UP    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnMR_R_TnMIE_MASK    ((UBase_t) 0x00000020UL)
#define GPTM_TB_TnMR_R_TnMIE_BIT    (5UL)
#define GPTM_TB_TnMR_R_TnMIE_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_R_TnMIE_ENA    ((UBase_t) 0x00000020UL)

#define GPTM_TB_TnMR_TnMIE_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnMR_TnMIE_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_TnMIE_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnMR_R_TnWOT_MASK    ((UBase_t) 0x00000040UL)
#define GPTM_TB_TnMR_R_TnWOT_BIT    (6UL)
#define GPTM_TB_TnMR_R_TnWOT_INSTBNT    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_R_TnWOT_TRIGGER    ((UBase_t) 0x00000040UL)

#define GPTM_TB_TnMR_TnWOT_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnMR_TnWOT_INSTBNT    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_TnWOT_TRIGGER    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnMR_R_TnSNAPS_MASK    ((UBase_t) 0x00000080UL)
#define GPTM_TB_TnMR_R_TnSNAPS_BIT    (7UL)
#define GPTM_TB_TnMR_R_TnSNAPS_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_R_TnSNAPS_ENA    ((UBase_t) 0x00000080UL)

#define GPTM_TB_TnMR_TnSNAPS_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnMR_TnSNAPS_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_TnSNAPS_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnMR_R_TnILD_MASK    ((UBase_t) 0x00000100UL)
#define GPTM_TB_TnMR_R_TnILD_BIT    (8UL)
#define GPTM_TB_TnMR_R_TnILD_NEXT    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_R_TnILD_TIMEOUT    ((UBase_t) 0x00000100UL)

#define GPTM_TB_TnMR_TnILD_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnMR_TnILD_NEXT    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_TnILD_TIMEOUT    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnMR_R_TnPWMIE_MASK    ((UBase_t) 0x00000200UL)
#define GPTM_TB_TnMR_R_TnPWMIE_BIT    (9UL)
#define GPTM_TB_TnMR_R_TnPWMIE_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_R_TnPWMIE_ENA    ((UBase_t) 0x00000200UL)

#define GPTM_TB_TnMR_TnPWMIE_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnMR_TnPWMIE_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_TnPWMIE_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnMR_R_TnMRSU_MASK    ((UBase_t) 0x00000400UL)
#define GPTM_TB_TnMR_R_TnMRSU_BIT    (10UL)
#define GPTM_TB_TnMR_R_TnMRSU_NEXT    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_R_TnMRSU_TIMEOUT    ((UBase_t) 0x00000400UL)

#define GPTM_TB_TnMR_TnMRSU_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnMR_TnMRSU_NEXT    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_TnMRSU_TIMEOUT    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnMR_R_TnPLO_MASK    ((UBase_t) 0x00000800UL)
#define GPTM_TB_TnMR_R_TnPLO_BIT    (11UL)
#define GPTM_TB_TnMR_R_TnPLO_LOW    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_R_TnPLO_HIGH    ((UBase_t) 0x00000800UL)

#define GPTM_TB_TnMR_TnPLO_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnMR_TnPLO_LOW    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_TnPLO_HIGH    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnMR_R_TnCINTD_MASK    ((UBase_t) 0x00001000UL)
#define GPTM_TB_TnMR_R_TnCINTD_BIT    (12UL)
#define GPTM_TB_TnMR_R_TnCINTD_NORMAL    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_R_TnCINTD_DIS    ((UBase_t) 0x00001000UL)

#define GPTM_TB_TnMR_TnCINTD_MASK    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnMR_TnCINTD_NORMAL    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_TnCINTD_DIS    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnMR_R_TCACT_MASK    ((UBase_t) 0x0000E000UL)
#define GPTM_TB_TnMR_R_TCACT_BIT    (13UL)
#define GPTM_TB_TnMR_R_TCACT_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_R_TCACT_TOOGLE_TO    ((UBase_t) 0x00002000UL)
#define GPTM_TB_TnMR_R_TCACT_CLEAR_TO    ((UBase_t) 0x00004000UL)
#define GPTM_TB_TnMR_R_TCACT_SET_TO    ((UBase_t) 0x00006000UL)
#define GPTM_TB_TnMR_R_TCACT_SET_INM_TOOGLE_TO    ((UBase_t) 0x00008000UL)
#define GPTM_TB_TnMR_R_TCACT_CLEAR_INM_TOOGLE_TO    ((UBase_t) 0x0000A000UL)
#define GPTM_TB_TnMR_R_TCACT_SET_INM_CLEAR_TO    ((UBase_t) 0x0000C000UL)
#define GPTM_TB_TnMR_R_TCACT_CLEAR_INM_SET_TO    ((UBase_t) 0x0000E000UL)

#define GPTM_TB_TnMR_TCACT_MASK    ((UBase_t) 0x00000007UL)
#define GPTM_TB_TnMR_TCACT_DIS    ((UBase_t) 0x00000000UL)
#define GPTM_TB_TnMR_TCACT_TOOGLE_TO    ((UBase_t) 0x00000001UL)
#define GPTM_TB_TnMR_TCACT_CLEAR_TO    ((UBase_t) 0x00000002UL)
#define GPTM_TB_TnMR_TCACT_SET_TO    ((UBase_t) 0x00000003UL)
#define GPTM_TB_TnMR_TCACT_SET_INM_TOOGLE_TO    ((UBase_t) 0x00000004UL)
#define GPTM_TB_TnMR_TCACT_CLEAR_INM_TOOGLE_TO    ((UBase_t) 0x00000005UL)
#define GPTM_TB_TnMR_TCACT_SET_INM_CLEAR_TO    ((UBase_t) 0x00000006UL)
#define GPTM_TB_TnMR_TCACT_CLEAR_INM_SET_TO    ((UBase_t) 0x00000007UL)
/*----------*/


#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_MR_H_ */
