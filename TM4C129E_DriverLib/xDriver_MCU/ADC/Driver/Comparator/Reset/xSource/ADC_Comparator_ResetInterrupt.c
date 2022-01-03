/**
 *
 * @file ADC_Comparator_ResetInterrupt.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Reset/xHeader/ADC_Comparator_ResetInterrupt.h>

#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC_Comparator__vResetInterruptConditions(ADC_nMODULE enModule, ADC_nCOMPMASK  enActCompMask)
{
    ADC__vWriteRegister(enModule, ADC_DC_RIC_OFFSET, (uint32_t) enActCompMask,
                        (uint32_t) ADC_enCOMPMASK_MAX, ADC_DC_RIC_R_DCINT0_BIT);
}
