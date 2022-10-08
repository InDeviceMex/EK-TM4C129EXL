/**
 *
 * @file QEI_ResetMode.c
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
#include <xDriver_MCU/QEI/Driver/Control/xHeader/QEI_ResetMode.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vSetResetMode(QEI_nMODULE enModule, QEI_nRESET enResetModeArg)
{
    QEI__vWriteRegister(enModule, QEI_CTL_OFFSET, (UBase_t) enResetModeArg,
                        QEI_CTL_RESMODE_MASK, QEI_CTL_R_RESMODE_BIT);
}

QEI_nRESET QEI__enGetResetMode(QEI_nMODULE enModule)
{
    QEI_nRESET enResetModeReg = QEI_enRESET_MAXPOS;
    enResetModeReg = (QEI_nRESET) QEI__uxReadRegister(enModule, QEI_CTL_OFFSET,
                                          QEI_CTL_RESMODE_MASK, QEI_CTL_R_RESMODE_BIT);
    return (enResetModeReg);
}
