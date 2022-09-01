/**
 *
 * @file ACMP_InterruptLevel.h
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

#ifndef XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_INTERRUPTLEVEL_H_
#define XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_INTERRUPTLEVEL_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

ACMP_nERROR ACMP__enSetComparatorInterruptTriggerLevel(ACMP_nMODULE enModuleArg,
                                                       ACMP_nCOMP enComparatorArg,
                                                       ACMP_nLEVEL enInterruptLevelArg);
ACMP_nERROR ACMP__enGetComparatorInterruptTriggerLevel(ACMP_nMODULE enModuleArg,
                                                       ACMP_nCOMP enComparatorArg,
                                                       ACMP_nLEVEL* penInterruptLevelArg);

#endif /* XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_INTERRUPTLEVEL_H_ */
