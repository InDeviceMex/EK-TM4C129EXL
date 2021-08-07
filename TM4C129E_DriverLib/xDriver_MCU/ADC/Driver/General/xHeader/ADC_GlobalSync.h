/**
 *
 * @file ADC_GlobalSync.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_GLOBALSYNC_H_
#define XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_GLOBALSYNC_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vSetGlobalSync(ADC_nMODULE enModule, ADC_nGLOBAL_SYNC enGlobalSync);
void ADC__vInitGlobalSync(ADC_nMODULE enModule);
ADC_nGLOBAL_SYNC ADC__enGetGlobalSync(ADC_nMODULE enModule);

#endif /* XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_GLOBALSYNC_H_ */
