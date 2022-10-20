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

#include <xDriver_MCU/SYSEXC/Peripheral/Register/xHeader/SYSEXC_RegisterAddress.h>
#include <xDriver_MCU/SYSEXC/Peripheral/Register/xHeader/SYSEXC_RegisterDefines.h>
#include <xDriver_MCU/SYSEXC/Peripheral/Struct/xHeader/SYSEXC_StructPeripheral.h>

/******************************************************************************************
************************************ 1 SYSEXC *********************************************
******************************************************************************************/

#define SYSEXC    ((SYSEXC_t*) (SYSEXC_BASE))

/******************************************************************************************
************************************ 1 RIS *********************************************
******************************************************************************************/
#define SYSEXC_RIS    ((SYSEXC_RIS_t*) (SYSEXC_BASE + SYSEXC_RIS_OFFSET))
#define SYSEXC_RIS_R    (*((volatile const UBase_t*) (SYSEXC_BASE + SYSEXC_RIS_OFFSET)))

/******************************************************************************************
************************************ 2 IM *********************************************
******************************************************************************************/
#define SYSEXC_IM    ((SYSEXC_IM_t*) (SYSEXC_BASE + SYSEXC_IM_OFFSET))
#define SYSEXC_IM_R    (*((volatile UBase_t*) (SYSEXC_BASE + SYSEXC_IM_OFFSET)))

/******************************************************************************************
************************************ 3 MIS *********************************************
******************************************************************************************/
#define SYSEXC_MIS    ((SYSEXC_MIS_t*) (SYSEXC_BASE + SYSEXC_MIS_OFFSET))
#define SYSEXC_MIS_R    (*((volatile const UBase_t*) (SYSEXC_BASE + SYSEXC_MIS_OFFSET)))

/******************************************************************************************
************************************ 4 IC *********************************************
******************************************************************************************/
#define SYSEXC_IC    ((SYSEXC_IC_t*) (SYSEXC_BASE + SYSEXC_IC_OFFSET))
#define SYSEXC_IC_R    (*((volatile UBase_t*) (SYSEXC_BASE + SYSEXC_IC_OFFSET)))


/******************************************************************************************
************************************ 1 SYSEXC0 *********************************************
******************************************************************************************/

#define SYSEXC0    ((SYSEXC_t*) (SYSEXC0_BASE))

/******************************************************************************************
************************************ 1 RIS *********************************************
******************************************************************************************/
#define SYSEXC0_RIS    ((SYSEXC_RIS_t*) (SYSEXC0_BASE + SYSEXC_RIS_OFFSET))
#define SYSEXC0_RIS_R    (*((volatile const UBase_t*) (SYSEXC0_BASE + SYSEXC_RIS_OFFSET)))

/******************************************************************************************
************************************ 2 IM *********************************************
******************************************************************************************/
#define SYSEXC0_IM    ((SYSEXC_IM_t*) (SYSEXC0_BASE + SYSEXC_IM_OFFSET))
#define SYSEXC0_IM_R    (*((volatile UBase_t*) (SYSEXC0_BASE + SYSEXC_IM_OFFSET)))

/******************************************************************************************
************************************ 3 MIS *********************************************
******************************************************************************************/
#define SYSEXC0_MIS    ((SYSEXC_MIS_t*) (SYSEXC0_BASE + SYSEXC_MIS_OFFSET))
#define SYSEXC0_MIS_R    (*((volatile const UBase_t*) (SYSEXC0_BASE + SYSEXC_MIS_OFFSET)))

/******************************************************************************************
************************************ 4 IC *********************************************
******************************************************************************************/
#define SYSEXC0_IC    ((SYSEXC_IC_t*) (SYSEXC0_BASE + SYSEXC_IC_OFFSET))
#define SYSEXC0_IC_R    (*((volatile UBase_t*) (SYSEXC0_BASE + SYSEXC_IC_OFFSET)))


uintptr_t SYSEXC__uptrBlockBaseAddress(SYSEXC_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERPERIPHERAL_H_ */
