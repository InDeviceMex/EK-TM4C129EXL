/**
 *
 * @file ACMP_ADCTriggerConfig.h
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
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_XHEADER_ACMP_ADCTRIGGERCONFIG_H_
#define XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_XHEADER_ACMP_ADCTRIGGERCONFIG_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

ACMP_nERROR ACMP__enSetADCTriggerConfig(ACMP_nMODULE enModuleArg,
                                ACMP_nCOMP enComparatorArg,
                                ACMP_nADC_CONFIG enIntConfigArg);

ACMP_nERROR ACMP__enGetADCTriggerConfig(ACMP_nMODULE enModuleArg,
                               ACMP_nCOMP enComparatorArg,
                               ACMP_nADC_CONFIG* penIntConfigArg);

#endif /* XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_XHEADER_ACMP_ADCTRIGGERCONFIG_H_ */
