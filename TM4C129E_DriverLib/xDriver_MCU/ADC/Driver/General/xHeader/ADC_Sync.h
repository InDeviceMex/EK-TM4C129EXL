/**
 *
 * @file ADC_Sync.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_SYNC_H_
#define XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_SYNC_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC__enSetSync(ADC_nMODULE enModuleArg, ADC_nSTATE enSyncArg);
ADC_nERROR ADC__enEnableSync(ADC_nMODULE enModuleArg);
ADC_nERROR ADC__enDisableSync(ADC_nMODULE enModuleArg);
ADC_nERROR ADC__enGetSync(ADC_nMODULE enModuleArg, ADC_nSTATE* penSyncArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_SYNC_H_ */
