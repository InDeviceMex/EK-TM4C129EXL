/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding.h
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
 * Date           Author     Version     Description * 7 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/TIMER_StructPeripheral_Bitbanding.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_Control_32/TIMER_RegisterPeripheral_Bitbanding_Control_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_ModuleA_16/TIMER_RegisterPeripheral_Bitbanding_ModuleA_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_ModuleB_16/TIMER_RegisterPeripheral_Bitbanding_ModuleB_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_ModuleW_32/TIMER_RegisterPeripheral_Bitbanding_ModuleW_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_Standard_32/TIMER_RegisterPeripheral_Bitbanding_Standard_32.h>

#define GPTM_BITBANDING    ((GPTMS_BITBANDING_TypeDef*) (GPTM_BASE_BITBANDING + (GPTM_OFFSET * 32U)))
#define GPTM_UNION_BITBANDING    ((GPTM_UNION_BITBANDING_TypeDef*) (GPTM_BASE_BITBANDING + (GPTM_OFFSET * 32U)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_H_ */
