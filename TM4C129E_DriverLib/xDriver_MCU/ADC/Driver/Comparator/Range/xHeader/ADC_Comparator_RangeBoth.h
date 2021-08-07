/**
 *
 * @file ADC_Comparator_RangeBoth.h
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
 * @verbatim 5 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RANGE_XHEADER_ADC_COMPARATOR_RANGEBOTH_H_
#define XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RANGE_XHEADER_ADC_COMPARATOR_RANGEBOTH_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nSTATUS ADC__enGetCompRange(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp, uint32_t* pu32CompRangeLow, uint32_t* pu32CompRangeHigh);
void ADC__vSetCompRange(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp, uint32_t u32CompRangeLow, uint32_t u32CompRangeHigh);


#endif /* XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RANGE_XHEADER_ADC_COMPARATOR_RANGEBOTH_H_ */
