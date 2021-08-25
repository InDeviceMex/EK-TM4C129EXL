/**
 *
 * @file QEI_Position.c
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
#include <xDriver_MCU/QEI/Driver/xHeader/QEI_Position.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vSetPosition(QEI_nMODULE enModule, uint32_t u32PositionArg)
{
    QEI__vWriteRegister(enModule, QEI_POS_OFFSET, u32PositionArg,
                    QEI_POS_POSITION_MASK, QEI_POS_R_POSITION_BIT);
}

uint32_t QEI__u32GetPosition(QEI_nMODULE enModule)
{
    uint32_t u32PositionReg = 0UL;
    u32PositionReg = QEI__u32ReadRegister(enModule, QEI_POS_OFFSET,
                               QEI_POS_POSITION_MASK, QEI_POS_R_POSITION_BIT);
    return (u32PositionReg);
}
