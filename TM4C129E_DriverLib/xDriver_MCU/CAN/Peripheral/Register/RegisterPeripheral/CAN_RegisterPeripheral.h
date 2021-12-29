/**
 *
 * @file CAN_RegisterPeripheral.h
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
 * @verbatim Apr 15, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 15, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_CAN_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_CAN_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/CAN/Peripheral/Register/RegisterPeripheral/xHeader/CAN_RegisterPeripheral_Module0.h>
#include <xDriver_MCU/CAN/Peripheral/Register/RegisterPeripheral/xHeader/CAN_RegisterPeripheral_Module1.h>

#define CAN    ((CANS_TypeDef*) (CAN_BASE))

extern CAN_TypeDef* CAN_BLOCK[(uint32_t) CAN_enMODULE_MAX];
extern uint32_t CAN_BLOCK_ADDRESS[(uint32_t) CAN_enMODULE_MAX];

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_CAN_REGISTERPERIPHERAL_H_ */
