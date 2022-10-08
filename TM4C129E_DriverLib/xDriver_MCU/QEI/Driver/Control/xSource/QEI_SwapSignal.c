/**
 *
 * @file QEI_SwapSignal.c
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
#include <xDriver_MCU/QEI/Driver/Control/xHeader/QEI_SwapSignal.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vSetSwapSignals(QEI_nMODULE enModule, QEI_nSWAP enSwapSignalsArg)
{
    QEI__vWriteRegister(enModule, QEI_CTL_OFFSET, (UBase_t) enSwapSignalsArg,
                        QEI_CTL_SWAP_MASK, QEI_CTL_R_SWAP_BIT);
}

QEI_nSWAP QEI__enGetSwapSignals(QEI_nMODULE enModule)
{
    QEI_nSWAP enSwapSignalsReg = QEI_enSWAP_DIS;
    enSwapSignalsReg = (QEI_nSWAP) QEI__uxReadRegister(enModule, QEI_CTL_OFFSET,
                        QEI_CTL_SWAP_MASK, QEI_CTL_R_SWAP_BIT);
    return (enSwapSignalsReg);
}
