/**
 *
 * @file ADC_RegisterPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_ADC_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_ADC_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/ADC/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/ADC_RegisterPeripheral_Bitbanding_Module0.h>
#include <xDriver_MCU/ADC/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/ADC_RegisterPeripheral_Bitbanding_Module1.h>

#define ADC_BITBANDING    ((ADCS_BITBANDING_TypeDef*) (ADC_BITBANDING_BASE + (ADC_OFFSET * 32UL)))

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_ADC_REGISTERPERIPHERAL_BITBANDING_H_ */
