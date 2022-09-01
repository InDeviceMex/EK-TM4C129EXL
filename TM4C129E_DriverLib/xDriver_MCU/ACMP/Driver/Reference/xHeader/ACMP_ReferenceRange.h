/**
 *
 * @file ACMP_ReferenceRange.h
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

#ifndef XDRIVER_MCU_ACMP_DRIVER_REFERENCE_XHEADER_ACMP_REFERENCERANGE_H_
#define XDRIVER_MCU_ACMP_DRIVER_REFERENCE_XHEADER_ACMP_REFERENCERANGE_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

ACMP_nERROR ACMP__enSetReferenceRange(ACMP_nMODULE enModuleArg, ACMP_nREFERENCE_RANGE enReferenceRangeArg);
ACMP_nERROR ACMP__enGetReferenceRange(ACMP_nMODULE enModuleArg, ACMP_nREFERENCE_RANGE* penReferenceRangeArg);

#endif /* XDRIVER_MCU_ACMP_DRIVER_REFERENCE_XHEADER_ACMP_REFERENCERANGE_H_ */
