/**
 *
 * @file ACMP_ControlGeneric.h
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

#ifndef XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_CONTROLGENERIC_H_
#define XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_CONTROLGENERIC_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

ACMP_nERROR ACMP__enSetCompGenericControl(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, ACMP_Register_t* pstRegisterDataArg);
ACMP_nERROR ACMP__enGetCompGenericControl(ACMP_nMODULE enModuleArg, ACMP_nCOMP enComparatorArg, ACMP_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_CONTROLGENERIC_H_ */
