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

#define SYSEXC_BITBANDING    ((SYSEXC_BITBANDING_TypeDef*) (SYSEXC_BITBANDING_BASE + (SYSEXC_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 1 RIS *********************************************
******************************************************************************************/
#define SYSEXC_BITBANDING_RIS    ((BITBANDING_SYSEXCRIS_TypeDef*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_RIS_OFFSET) * 32UL)))

#define SYSEXC_BITBANDING_RIS_FPIDCRIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_RIS_OFFSET) * 32UL) + (SYSEXC_RIS_R_FPIDCRIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_RIS_FPDZCRIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_RIS_OFFSET) * 32UL) + (SYSEXC_RIS_R_FPDZCRIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_RIS_FPIOCRIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_RIS_OFFSET) * 32UL) + (SYSEXC_RIS_R_FPIOCRIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_RIS_FPUFCRIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_RIS_OFFSET) * 32UL) + (SYSEXC_RIS_R_FPUFCRIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_RIS_FPOFCRIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_RIS_OFFSET) * 32UL) + (SYSEXC_RIS_R_FPOFCRIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_RIS_FPIXCRIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_RIS_OFFSET) * 32UL) + (SYSEXC_RIS_R_FPIXCRIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 2 IM *********************************************
******************************************************************************************/
#define SYSEXC_BITBANDING_IM    ((BITBANDING_SYSEXCIM_TypeDef*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IM_OFFSET) * 32UL)))

#define SYSEXC_BITBANDING_IM_FPIDCIM    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IM_OFFSET) * 32UL) + (SYSEXC_IM_R_FPIDCIM_BIT * 4UL))))
#define SYSEXC_BITBANDING_IM_FPDZCIM    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IM_OFFSET) * 32UL) + (SYSEXC_IM_R_FPDZCIM_BIT * 4UL))))
#define SYSEXC_BITBANDING_IM_FPIOCIM    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IM_OFFSET) * 32UL) + (SYSEXC_IM_R_FPIOCIM_BIT * 4UL))))
#define SYSEXC_BITBANDING_IM_FPUFCIM    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IM_OFFSET) * 32UL) + (SYSEXC_IM_R_FPUFCIM_BIT * 4UL))))
#define SYSEXC_BITBANDING_IM_FPOFCIM    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IM_OFFSET) * 32UL) + (SYSEXC_IM_R_FPOFCIM_BIT * 4UL))))
#define SYSEXC_BITBANDING_IM_FPIXCIM    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IM_OFFSET) * 32UL) + (SYSEXC_IM_R_FPIXCIM_BIT * 4UL))))

/******************************************************************************************
*********************************** * 3 MIS *********************************************
******************************************************************************************/
#define SYSEXC_BITBANDING_MIS    ((BITBANDING_SYSEXCMIS_TypeDef*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_MIS_OFFSET) * 32UL)))

#define SYSEXC_BITBANDING_MIS_FPIDCMIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_MIS_OFFSET) * 32UL) + (SYSEXC_MIS_R_FPIDCMIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_MIS_FPDZCMIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_MIS_OFFSET) * 32UL) + (SYSEXC_MIS_R_FPDZCMIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_MIS_FPIOCMIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_MIS_OFFSET) * 32UL) + (SYSEXC_MIS_R_FPIOCMIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_MIS_FPUFCMIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_MIS_OFFSET) * 32UL) + (SYSEXC_MIS_R_FPUFCMIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_MIS_FPOFCMIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_MIS_OFFSET) * 32UL) + (SYSEXC_MIS_R_FPOFCMIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_MIS_FPIXCMIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_MIS_OFFSET) * 32UL) + (SYSEXC_MIS_R_FPIXCMIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 4 IC *********************************************
******************************************************************************************/
#define SYSEXC_BITBANDING_IC    ((BITBANDING_SYSEXCIC_TypeDef*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IC_OFFSET) * 32UL)))

#define SYSEXC_BITBANDING_IC_FPIDCIC    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IC_OFFSET) * 32UL) + (SYSEXC_IC_R_FPIDCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IC_FPDZCIC    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IC_OFFSET) * 32UL) + (SYSEXC_IC_R_FPDZCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IC_FPIOCIC    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IC_OFFSET) * 32UL) + (SYSEXC_IC_R_FPIOCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IC_FPUFCIC    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IC_OFFSET) * 32UL) + (SYSEXC_IC_R_FPUFCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IC_FPOFCIC    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IC_OFFSET) * 32UL) + (SYSEXC_IC_R_FPOFCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_IC_FPIXCIC    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_IC_OFFSET) * 32UL) + (SYSEXC_IC_R_FPIXCIC_BIT * 4UL))))

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERPERIPHERAL_BITBANDING_H_ */
