/**
 *
 * @file QEI_SignalMode.c
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
#include <xDriver_MCU/QEI/Driver/Control/xHeader/QEI_SignalMode.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vSetSignalMode(QEI_nMODULE enModule, QEI_nMODE enSignalModeArg)
{
    QEI__vWriteRegister(enModule, QEI_CTL_OFFSET, (uint32_t) enSignalModeArg,
                        QEI_CTL_SIGMODE_MASK, QEI_CTL_R_SIGMODE_BIT);
}

QEI_nMODE QEI__enGetSignalMode(QEI_nMODULE enModule)
{
    QEI_nMODE enSignalModeReg = QEI_enMODE_QUADRATURE;
    enSignalModeReg = (QEI_nMODE) QEI__u32ReadRegister(enModule, QEI_CTL_OFFSET,
                                          QEI_CTL_SIGMODE_MASK, QEI_CTL_R_SIGMODE_BIT);
    return (enSignalModeReg);
}
