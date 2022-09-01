/**
 *
 * @file ACMP_VmaxSource.h
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
 * @verbatim Apr 2, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 2, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_VMAXSOURCE_H_
#define XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_VMAXSOURCE_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

ACMP_nERROR ACMP__enSetComparatorVmaxSource(ACMP_nMODULE enModuleArg,
                                    ACMP_nCOMP enComparatorArg,
                                    ACMP_nVMAX_SOURCE enVmaxPinSourceArg);
ACMP_nERROR ACMP__enGetComparatorVmaxSource(ACMP_nMODULE enModuleArg,
                                                  ACMP_nCOMP enComparatorArg,
                                                  ACMP_nVMAX_SOURCE* penVmaxPinSourceArg);

#endif /* XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_VMAXSOURCE_H_ */
