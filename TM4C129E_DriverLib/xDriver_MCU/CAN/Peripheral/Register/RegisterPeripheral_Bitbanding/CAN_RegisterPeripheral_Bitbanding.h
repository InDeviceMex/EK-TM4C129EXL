/**
 *
 * @file CAN_RegisterPeripheral_Bitbanding.h
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
 * @verbatim May 28, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * May 28, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_CAN_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_CAN_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/CAN/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/CAN_RegisterPeripheral_Bitbanding_Module0.h>
/*#include <xDriver_MCU/CAN/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/CAN_RegisterPeripheral_Bitbanding_Module1.h>*/

#define CAN_BITBANDING    ((CANS_BITBANDING_TypeDef*) (CAN_BITBANDING_BASE + (CAN_OFFSET * 32UL)))

extern CAN_BITBANDING_TypeDef* CAN_BITBANDING_BLOCK[(uint32_t) CAN_enMODULE_MAX];



#endif /* XDRIVER_MCU_CAN_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_CAN_REGISTERPERIPHERAL_BITBANDING_H_ */
