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

void QEI__vSetLoadTimer(QEI_nMODULE enModule, uint32_t u32LoadTimerArg)
{
    QEI__vWriteRegister(enModule, QEI_LOAD_OFFSET, u32LoadTimerArg,
                        QEI_LOAD_LOAD_MASK, QEI_LOAD_R_LOAD_BIT);
}

uint32_t QEI__u32GetLoadTimer(QEI_nMODULE enModule)
{
    uint32_t u32LoadTimerReg = 0UL;
    u32LoadTimerReg = QEI__u32ReadRegister(enModule, QEI_LOAD_OFFSET,
                                           QEI_LOAD_LOAD_MASK, QEI_LOAD_R_LOAD_BIT);
    return (u32LoadTimerReg);
}
