/**
 *
 * @file QEI_MaxPosition.h
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_DRIVER_XHEADER_QEI_MAXPOSITION_H_
#define XDRIVER_MCU_QEI_DRIVER_XHEADER_QEI_MAXPOSITION_H_

#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>

QEI_nERROR QEI__enSetMaximumPositionIntegrator(QEI_nMODULE enModuleArg, UBase_t uxMaxPositionArg);
QEI_nERROR QEI__enGetMaximumPositionIntegrator(QEI_nMODULE enModuleArg, UBase_t* puxMaxPositionArg);

#endif /* XDRIVER_MCU_QEI_DRIVER_XHEADER_QEI_MAXPOSITION_H_ */
