/**
 *
 * @file TIMER_RegisterPeripheral.h
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
 * @verbatim 7 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/TIMER_StructPeripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_Control_32/TIMER_RegisterPeripheral_Control_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_ModuleA_16/TIMER_RegisterPeripheral_ModuleA_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_ModuleB_16/TIMER_RegisterPeripheral_ModuleB_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_ModuleW_32/TIMER_RegisterPeripheral_ModuleW_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_Standard_32/TIMER_RegisterPeripheral_Standard_32.h>

#define GPTM    (((GPTMS_t*) (GPTM_BASE)))
#define GPTM_UNION    (((GPTM_UNION_t*) (GPTM_BASE)))

uint32_t TIMER__u32BlockBaseAddress(TIMER_nMODULE_NUM enModuleNumArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_H_ */
