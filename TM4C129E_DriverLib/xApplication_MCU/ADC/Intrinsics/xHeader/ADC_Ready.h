/**
 *
 * @file ADC_Ready.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 10 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_ADC_INTRINSICS_XHEADER_ADC_READY_H_
#define XAPPLICATION_MCU_ADC_INTRINSICS_XHEADER_ADC_READY_H_

#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Defines.h>

void ADC__vSetReady(ADC_nMODULE enModule);
void ADC__vClearReady(ADC_nMODULE enModule);
ADC_nSTATUS ADC__enIsReady(ADC_nMODULE enModule);

#endif /* XAPPLICATION_MCU_ADC_INTRINSICS_XHEADER_ADC_READY_H_ */
