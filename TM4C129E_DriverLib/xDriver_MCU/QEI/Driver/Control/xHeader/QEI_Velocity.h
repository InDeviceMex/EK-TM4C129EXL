/**
 *
 * @file QEI_Velocity.h
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

#ifndef XDRIVER_MCU_QEI_DRIVER_CONTROL_XHEADER_QEI_VELOCITY_H_
#define XDRIVER_MCU_QEI_DRIVER_CONTROL_XHEADER_QEI_VELOCITY_H_

#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>

void QEI__vSetVelocityEnable(QEI_nMODULE enModule, QEI_nVELOCITY enVelocityArg);
QEI_nVELOCITY QEI__enGetVelocityEnable(QEI_nMODULE enModule);
void QEI__vSetVelocityPredivide(QEI_nMODULE enModule, QEI_nVELOCITY_PREDIV enVelocityPredivideArg);
QEI_nVELOCITY_PREDIV QEI__enGetVelocityPredivide(QEI_nMODULE enModule);

#endif /* XDRIVER_MCU_QEI_DRIVER_CONTROL_XHEADER_QEI_VELOCITY_H_ */
