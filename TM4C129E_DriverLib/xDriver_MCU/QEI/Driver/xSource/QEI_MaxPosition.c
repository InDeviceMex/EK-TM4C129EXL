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

void QEI__vSetMaxPosition(QEI_nMODULE enModule, uint32_t u32MaxPositionArg)
{
    QEI__vWriteRegister(enModule, QEI_MAXPOS_OFFSET, u32MaxPositionArg,
                        QEI_MAXPOS_MAXPOS_MASK, QEI_MAXPOS_R_MAXPOS_BIT);
}

uint32_t QEI__u32GetMaxPosition(QEI_nMODULE enModule)
{
    uint32_t u32MaxPositionReg = 0UL;
    u32MaxPositionReg = QEI__u32ReadRegister(enModule, QEI_MAXPOS_OFFSET,
                             QEI_MAXPOS_MAXPOS_MASK, QEI_MAXPOS_R_MAXPOS_BIT);
    return (u32MaxPositionReg);
}
