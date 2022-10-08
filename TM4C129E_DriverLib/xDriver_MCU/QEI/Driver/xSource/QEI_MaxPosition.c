/**
 *
 * @file QEI_MaxPosition.c
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
#include <xDriver_MCU/QEI/Driver/xHeader/QEI_MaxPosition.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vSetMaxPosition(QEI_nMODULE enModule, UBase_t uxMaxPositionArg)
{
    QEI__vWriteRegister(enModule, QEI_MAXPOS_OFFSET, uxMaxPositionArg,
                        QEI_MAXPOS_MAXPOS_MASK, QEI_MAXPOS_R_MAXPOS_BIT);
}

UBase_t QEI__uxGetMaxPosition(QEI_nMODULE enModule)
{
    UBase_t uxMaxPositionReg = 0UL;
    uxMaxPositionReg = QEI__uxReadRegister(enModule, QEI_MAXPOS_OFFSET,
                             QEI_MAXPOS_MAXPOS_MASK, QEI_MAXPOS_R_MAXPOS_BIT);
    return (uxMaxPositionReg);
}
