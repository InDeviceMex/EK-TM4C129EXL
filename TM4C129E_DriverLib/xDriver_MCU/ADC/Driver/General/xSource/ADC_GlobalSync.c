/**
 *
 * @file ADC_GlobalSync.c
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
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_GlobalSync.h>

#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_GeneralGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC__vSetGlobalSync(ADC_nMODULE enModule, ADC_nGLOBAL_SYNC enGlobalSync)
{
    ADC__vSetGeneralGeneric((uint32_t) enModule, ADC_PSSI_OFFSET, (uint32_t) enGlobalSync, ADC_PSSI_GSYNC_MASK, ADC_PSSI_R_GSYNC_BIT);
}

void ADC__vInitGlobalSync(ADC_nMODULE enModule)
{
    ADC__vSetGlobalSync(enModule,ADC_enGLOBAL_SYNC_INIT);
}

ADC_nGLOBAL_SYNC ADC__enGetGlobalSync(ADC_nMODULE enModule)
{
    return ((ADC_nGLOBAL_SYNC) ADC__u32GetGeneralGeneric((uint32_t) enModule, ADC_PSSI_OFFSET, ADC_PSSI_GSYNC_MASK, ADC_PSSI_R_GSYNC_BIT));
}
