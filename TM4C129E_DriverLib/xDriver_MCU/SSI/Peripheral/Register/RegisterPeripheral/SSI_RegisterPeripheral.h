/**
 *
 * @file SSI_RegisterPeripheral.h
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
 * @verbatim 16 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_SSI_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_SSI_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/SSI/Peripheral/Register/RegisterPeripheral/xHeader/SSI_RegisterPeripheral_Module0.h>
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterPeripheral/xHeader/SSI_RegisterPeripheral_Module1.h>
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterPeripheral/xHeader/SSI_RegisterPeripheral_Module2.h>
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterPeripheral/xHeader/SSI_RegisterPeripheral_Module3.h>

#define SSI    ((SSIS_t*) (SSI_BASE))

uintptr_t SSI__uptrBlockBaseAddress(SSI_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_SSI_REGISTERPERIPHERAL_H_ */
