/**
 *
 * @file QEI_RegisterPeripheral.h
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_QEI_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_QEI_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/QEI/Peripheral/Register/RegisterPeripheral/xHeader/QEI_RegisterPeripheral_Module0.h>

#define QEI    ((QEIS_TypeDef*) (QEI_BASE))

uint32_t QEI__u32BlockBaseAddress(QEI_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_QEI_REGISTERPERIPHERAL_H_ */
