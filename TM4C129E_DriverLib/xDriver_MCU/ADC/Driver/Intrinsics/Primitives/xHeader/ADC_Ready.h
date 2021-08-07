/**
 *
 * @file ADC_Ready.h
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
 * @verbatim 22 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ADC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ADC_READY_H_
#define XDRIVER_MCU_ADC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ADC_READY_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vSetReady(ADC_nMODULE enModule);
void ADC__vClearReady(ADC_nMODULE enModule);
ADC_nREADY ADC__enIsReady(ADC_nMODULE enModule);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ADC_READY_H_ */
