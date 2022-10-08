/**
 *
 * @file QEI_InvertSignal.c
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
#include <xDriver_MCU/QEI/Driver/Control/xHeader/QEI_InvertSignal.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vSetInvertSignals(QEI_nMODULE enModule,
                            QEI_nSIGNAL enSignalsArg,
                            QEI_nINVERT enInvertSignalsArg)
{
    if(QEI_enINVERT_DIS == enInvertSignalsArg)
    {
        QEI__vWriteRegister(enModule, QEI_CTL_OFFSET, 0UL,
                            (UBase_t) enSignalsArg, QEI_CTL_R_INVA_BIT);
    }
    else
    {
        QEI__vWriteRegister(enModule, QEI_CTL_OFFSET, (UBase_t) enSignalsArg,
                            (UBase_t) enSignalsArg, QEI_CTL_R_INVA_BIT);
    }
}

QEI_nINVERT QEI__enGetInvertSignals(QEI_nMODULE enModule, QEI_nSIGNAL enSignalsArg)
{
    UBase_t uxInvertSignalsReg = 0UL;
    QEI_nINVERT enInvertSignalsReg = QEI_enINVERT_DIS;
    uxInvertSignalsReg = QEI__uxReadRegister(enModule, QEI_CTL_OFFSET,
                              (UBase_t)enSignalsArg, QEI_CTL_R_INVA_BIT);
    if(0UL != uxInvertSignalsReg)
    {
        enInvertSignalsReg = QEI_enINVERT_ENA;
    }
    else
    {
        enInvertSignalsReg = QEI_enINVERT_DIS;
    }
    return (enInvertSignalsReg);
}
