/**
 *
 * @file ADC_RegisterPeripheral.h
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
 * @verbatim 15 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_ADC_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_ADC_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/ADC/Peripheral/Register/RegisterPeripheral/xHeader/ADC_RegisterPeripheral_Module0.h>
#include <xDriver_MCU/ADC/Peripheral/Register/RegisterPeripheral/xHeader/ADC_RegisterPeripheral_Module1.h>

#define ADC    ((ADCS_TypeDef*) (ADC_BASE))

uint32_t ADC__u32BlockBaseAddress(ADC_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_ADC_REGISTERPERIPHERAL_H_ */
