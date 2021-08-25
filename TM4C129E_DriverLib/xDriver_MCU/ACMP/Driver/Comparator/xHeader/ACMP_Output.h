/**
 *
 * @file ACMP_Output.h
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

#ifndef XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_XHEADER_ACMP_OUTPUT_H_
#define XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_XHEADER_ACMP_OUTPUT_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

ACMP_nOUTPUT_VALUE ACMP__enGetComparatorOutput(ACMP_nMODULE enModule,
                                                ACMP_nCOMP  enComparatorArg);

#endif /* XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_XHEADER_ACMP_OUTPUT_H_ */
