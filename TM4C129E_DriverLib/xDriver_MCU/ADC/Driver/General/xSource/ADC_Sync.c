/**
 *
 * @file ADC_Sync.c
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
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_Sync.h>

#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_GeneralGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC__vSetSync(ADC_nMODULE enModule, ADC_nSYNC enSync)
{
    ADC__vSetGeneralGeneric((uint32_t) enModule, ADC_PSSI_OFFSET, (uint32_t) enSync, ADC_PSSI_SYNCWAIT_MASK, ADC_PSSI_R_SYNCWAIT_BIT);
}

ADC_nSYNC ADC__enGetSync(ADC_nMODULE enModule)
{
    return (ADC_nSYNC) ADC__u32GetGeneralGeneric((uint32_t) enModule, ADC_PSSI_OFFSET, ADC_PSSI_SYNCWAIT_MASK, ADC_PSSI_R_SYNCWAIT_BIT);
}
