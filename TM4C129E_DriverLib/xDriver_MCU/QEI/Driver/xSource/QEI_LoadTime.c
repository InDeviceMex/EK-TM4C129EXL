/**
 *
 * @file QEI_LoadTime.c
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
#include <xDriver_MCU/QEI/Driver/xHeader/QEI_LoadTime.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vSetLoadTimer(QEI_nMODULE enModule, UBase_t uxLoadTimerArg)
{
    QEI__vWriteRegister(enModule, QEI_LOAD_OFFSET, uxLoadTimerArg,
                        QEI_LOAD_LOAD_MASK, QEI_LOAD_R_LOAD_BIT);
}

UBase_t QEI__uxGetLoadTimer(QEI_nMODULE enModule)
{
    UBase_t uxLoadTimerReg = 0UL;
    uxLoadTimerReg = QEI__uxReadRegister(enModule, QEI_LOAD_OFFSET,
                                           QEI_LOAD_LOAD_MASK, QEI_LOAD_R_LOAD_BIT);
    return (uxLoadTimerReg);
}
