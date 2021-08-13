/**
 *
 * @file ADC_Comparator_ResetTrigger.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Reset/xHeader/ADC_Comparator_ResetTrigger.h>

#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vResetCompTriggerConditions(ADC_nMODULE enModule, ADC_nCOMPMASK  enActCompMask)
{
    ADC__vWriteRegister(enModule, ADC_DCRIC_OFFSET, (uint32_t) enActCompMask,
                        (uint32_t) ADC_enCOMPMASK_MAX, ADC_DCRIC_R_DCTRIG0_BIT);
}
