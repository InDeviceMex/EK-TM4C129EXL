/**
 *
 * @file SYSEXC_RegisterPeripheral_Bitbanding.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/SYSEXC/Peripheral/Register/xHeader/SYSEXC_RegisterAddress.h>
#include <xDriver_MCU/SYSEXC/Peripheral/Register/xHeader/SYSEXC_RegisterDefines.h>
#include <xDriver_MCU/SYSEXC/Peripheral/Struct/xHeader/SYSEXC_StructPeripheral.h>

#define SYSEXC_BITBANDING    ((SYSEXC_BITBANDING_t*) (SYSEXC_BITBANDING_BASE + (SYSEXC_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 1 RIS *********************************************
******************************************************************************************/
#define SYSEXC_BITBANDING_RIS    ((SYSEXC_BITBANDING_RIS_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_RIS_OFFSET) * 32UL)))

#define SYSEXC_BITBANDING_RIS_FPIDC    (*((volatile const UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_RIS_OFFSET) * 32UL) + (SYSEXC_RIS_R_FPIDC_BIT * 4UL))))
#define SYSEXC_BITBANDING_RIS_FPDZC    (*((volatile const UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_RIS_OFFSET) * 32UL) + (SYSEXC_RIS_R_FPDZC_BIT * 4UL))))
#define SYSEXC_BITBANDING_RIS_FPIOC    (*((volatile const UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_RIS_OFFSET) * 32UL) + (SYSEXC_RIS_R_FPIOC_BIT * 4UL))))
#define SYSEXC_BITBANDING_RIS_FPUFC    (*((volatile const UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_RIS_OFFSET) * 32UL) + (SYSEXC_RIS_R_FPUFC_BIT * 4UL))))
#define SYSEXC_BITBANDING_RIS_FPOFC    (*((volatile const UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_RIS_OFFSET) * 32UL) + (SYSEXC_RIS_R_FPOFC_BIT * 4UL))))
#define SYSEXC_BITBANDING_RIS_FPIXC    (*((volatile const UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_RIS_OFFSET) * 32UL) + (SYSEXC_RIS_R_FPIXC_BIT * 4UL))))

/******************************************************************************************
*********************************** * 2 IM *********************************************
******************************************************************************************/
#define SYSEXC_BITBANDING_IM    ((SYSEXC_BITBANDING_IM_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IM_OFFSET) * 32UL)))

#define SYSEXC_BITBANDING_IM_FPIDC    (*((volatile UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IM_OFFSET) * 32UL) + (SYSEXC_IM_R_FPIDC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IM_FPDZC    (*((volatile UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IM_OFFSET) * 32UL) + (SYSEXC_IM_R_FPDZC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IM_FPIOC    (*((volatile UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IM_OFFSET) * 32UL) + (SYSEXC_IM_R_FPIOC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IM_FPUFC    (*((volatile UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IM_OFFSET) * 32UL) + (SYSEXC_IM_R_FPUFC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IM_FPOFC    (*((volatile UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IM_OFFSET) * 32UL) + (SYSEXC_IM_R_FPOFC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IM_FPIXC    (*((volatile UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IM_OFFSET) * 32UL) + (SYSEXC_IM_R_FPIXC_BIT * 4UL))))

/******************************************************************************************
*********************************** * 3 MIS *********************************************
******************************************************************************************/
#define SYSEXC_BITBANDING_MIS    ((SYSEXC_BITBANDING_MIS_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_MIS_OFFSET) * 32UL)))

#define SYSEXC_BITBANDING_MIS_FPIDC    (*((volatile const UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_MIS_OFFSET) * 32UL) + (SYSEXC_MIS_R_FPIDC_BIT * 4UL))))
#define SYSEXC_BITBANDING_MIS_FPDZC    (*((volatile const UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_MIS_OFFSET) * 32UL) + (SYSEXC_MIS_R_FPDZC_BIT * 4UL))))
#define SYSEXC_BITBANDING_MIS_FPIOC    (*((volatile const UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_MIS_OFFSET) * 32UL) + (SYSEXC_MIS_R_FPIOC_BIT * 4UL))))
#define SYSEXC_BITBANDING_MIS_FPUFC    (*((volatile const UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_MIS_OFFSET) * 32UL) + (SYSEXC_MIS_R_FPUFC_BIT * 4UL))))
#define SYSEXC_BITBANDING_MIS_FPOFC    (*((volatile const UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_MIS_OFFSET) * 32UL) + (SYSEXC_MIS_R_FPOFC_BIT * 4UL))))
#define SYSEXC_BITBANDING_MIS_FPIXC    (*((volatile const UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_MIS_OFFSET) * 32UL) + (SYSEXC_MIS_R_FPIXC_BIT * 4UL))))

/******************************************************************************************
*********************************** * 4 IC *********************************************
******************************************************************************************/
#define SYSEXC_BITBANDING_IC    ((SYSEXC_BITBANDING_IC_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IC_OFFSET) * 32UL)))

#define SYSEXC_BITBANDING_IC_FPIDCIC    (*((volatile UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IC_OFFSET) * 32UL) + (SYSEXC_IC_R_FPIDCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IC_FPDZCIC    (*((volatile UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IC_OFFSET) * 32UL) + (SYSEXC_IC_R_FPDZCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IC_FPIOCIC    (*((volatile UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IC_OFFSET) * 32UL) + (SYSEXC_IC_R_FPIOCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IC_FPUFCIC    (*((volatile UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IC_OFFSET) * 32UL) + (SYSEXC_IC_R_FPUFCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IC_FPOFCIC    (*((volatile UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IC_OFFSET) * 32UL) + (SYSEXC_IC_R_FPOFCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IC_FPIXCIC    (*((volatile UBase_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IC_OFFSET) * 32UL) + (SYSEXC_IC_R_FPIXCIC_BIT * 4UL))))

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERPERIPHERAL_BITBANDING_H_ */
