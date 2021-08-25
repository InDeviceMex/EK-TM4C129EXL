/**
 *
 * @file QEI_Velocity.c
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
#include <xDriver_MCU/QEI/Driver/Control/xHeader/QEI_Velocity.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vSetVelocityEnable(QEI_nMODULE enModule, QEI_nVELOCITY enVelocityArg)
{
    QEI__vWriteRegister(enModule, QEI_CTL_OFFSET, (uint32_t) enVelocityArg,
                        QEI_CTL_VELEN_MASK, QEI_CTL_R_VELEN_BIT);
}

QEI_nVELOCITY QEI__enGetVelocityEnable(QEI_nMODULE enModule)
{
    QEI_nVELOCITY enVelocityReg = QEI_enVELOCITY_DIS;
    enVelocityReg = (QEI_nVELOCITY) QEI__u32ReadRegister(enModule, QEI_CTL_OFFSET,
                                          QEI_CTL_VELEN_MASK, QEI_CTL_R_VELEN_BIT);
    return (enVelocityReg);
}

void QEI__vSetVelocityPredivide(QEI_nMODULE enModule,
                                QEI_nVELOCITY_PREDIV enVelocityPredivideArg)
{
    QEI__vWriteRegister(enModule, QEI_CTL_OFFSET, (uint32_t) enVelocityPredivideArg,
                        QEI_CTL_VELDIV_MASK, QEI_CTL_R_VELDIV_BIT);
}

QEI_nVELOCITY_PREDIV QEI__enGetVelocityPredivide(QEI_nMODULE enModule)
{
    QEI_nVELOCITY_PREDIV enVelocityPredivideReg = QEI_enVELOCITY_PREDIV_1;
    enVelocityPredivideReg = (QEI_nVELOCITY_PREDIV) QEI__u32ReadRegister(enModule,
                            QEI_CTL_OFFSET,QEI_CTL_VELDIV_MASK, QEI_CTL_R_VELDIV_BIT);
    return (enVelocityPredivideReg);
}
