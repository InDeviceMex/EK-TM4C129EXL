/**
 *
 * @file QEI_Stall.c
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
#include <xDriver_MCU/QEI/Driver/Control/xHeader/QEI_Stall.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vSetStall(QEI_nMODULE enModule, QEI_nSTALL enStallArg)
{
    QEI__vWriteRegister(enModule, QEI_CTL_OFFSET, (uint32_t) enStallArg,
                        QEI_CTL_STALLEN_MASK, QEI_CTL_R_STALLEN_BIT);
}

QEI_nSTALL QEI__enGetStall(QEI_nMODULE enModule)
{
    QEI_nSTALL enStallReg = QEI_enSTALL_CONTINUE;
    enStallReg = (QEI_nSTALL) QEI__u32ReadRegister(enModule, QEI_CTL_OFFSET,
                                   QEI_CTL_STALLEN_MASK, QEI_CTL_R_STALLEN_BIT);
    return (enStallReg);
}
