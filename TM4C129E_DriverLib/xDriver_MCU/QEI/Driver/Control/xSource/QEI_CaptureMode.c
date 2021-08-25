/**
 *
 * @file QEI_CaptureMode.c
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
#include <xDriver_MCU/QEI/Driver/Control/xHeader/QEI_CaptureMode.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vSetCaptureMode(QEI_nMODULE enModule, QEI_nCAPTURE enCaptureModeArg)
{
    QEI__vWriteRegister(enModule, QEI_CTL_OFFSET, (uint32_t) enCaptureModeArg,
                        QEI_CTL_CAPMODE_MASK, QEI_CTL_R_CAPMODE_BIT);
}

QEI_nCAPTURE QEI__enGetCaptureMode(QEI_nMODULE enModule)
{
    QEI_nCAPTURE enCaptureModeReg = QEI_enCAPTURE_PhA;
    enCaptureModeReg = (QEI_nCAPTURE) QEI__u32ReadRegister(enModule, QEI_CTL_OFFSET,
                                       QEI_CTL_CAPMODE_MASK, QEI_CTL_R_CAPMODE_BIT);
    return (enCaptureModeReg);
}

