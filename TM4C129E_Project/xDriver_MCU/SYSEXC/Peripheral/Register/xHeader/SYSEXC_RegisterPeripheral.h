/**
 *
 * @file SYSEXC_RegisterPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERPERIPHERAL_H_

#include <xUtils/Standard/Standard.h>

#define SYSEXC    ((SYSEXC_TypeDef*) (SYSEXC_BASE))

/******************************************************************************************
************************************ 1 RIS *********************************************
******************************************************************************************/
#define SYSEXC_RIS    ((SYSEXCRIS_TypeDef*) (SYSEXC_BASE + SYSEXC_RIS_OFFSET))
#define SYSEXC_RIS_R    (*((volatile const uint32_t*) (SYSEXC_BASE + SYSEXC_RIS_OFFSET)))

/******************************************************************************************
************************************ 2 IM *********************************************
******************************************************************************************/
#define SYSEXC_IM    ((SYSEXCIM_TypeDef*) (SYSEXC_BASE + SYSEXC_IM_OFFSET))
#define SYSEXC_IM_R    (*((volatile uint32_t*) (SYSEXC_BASE + SYSEXC_IM_OFFSET)))

/******************************************************************************************
************************************ 3 MIS *********************************************
******************************************************************************************/
#define SYSEXC_MIS    ((SYSEXCMIS_TypeDef*) (SYSEXC_BASE + SYSEXC_MIS_OFFSET))
#define SYSEXC_MIS_R    (*((volatile const uint32_t*) (SYSEXC_BASE + SYSEXC_MIS_OFFSET)))

/******************************************************************************************
************************************ 4 IC *********************************************
******************************************************************************************/
#define SYSEXC_IC    ((SYSEXCIC_TypeDef*) (SYSEXC_BASE + SYSEXC_IC_OFFSET))
#define SYSEXC_IC_R    (*((volatile uint32_t*) (SYSEXC_BASE + SYSEXC_IC_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERPERIPHERAL_H_ */
