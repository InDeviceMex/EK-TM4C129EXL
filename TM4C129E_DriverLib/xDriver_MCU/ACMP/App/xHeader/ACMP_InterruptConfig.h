/**
 *
 * @file ACMP_InterruptConfig.h
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
 * @verbatim Apr 6, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 6, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ACMP_APP_XHEADER_ACMP_INTERRUPTCONFIG_H_
#define XDRIVER_MCU_ACMP_APP_XHEADER_ACMP_INTERRUPTCONFIG_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

void ACMP__vSetInterruptConfig(ACMP_nMODULE enModule,
                               ACMP_nCOMP enComparatorArg,
                               ACMP_nINT_CONFIG enIntConfigArg);

#endif /* XDRIVER_MCU_ACMP_APP_XHEADER_ACMP_INTERRUPTCONFIG_H_ */
