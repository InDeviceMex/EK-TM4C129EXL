/**
 *
 * @file QEI_Enable.c
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
#include <xDriver_MCU/QEI/Driver/Control/xHeader/QEI_Enable.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vSetEnable(QEI_nMODULE enModule, QEI_nENABLE enEnableArg)
{
    QEI__vWriteRegister(enModule, QEI_CTL_OFFSET, (uint32_t) enEnableArg,
                    QEI_CTL_ENABLE_MASK, QEI_CTL_R_ENABLE_BIT);
}

QEI_nENABLE QEI__enGetEnable(QEI_nMODULE enModule)
{
    QEI_nENABLE enEnableReg = QEI_enENABLE_STOP;
    enEnableReg = (QEI_nENABLE) QEI__u32ReadRegister(enModule, QEI_CTL_OFFSET,
                                     QEI_CTL_ENABLE_MASK, QEI_CTL_R_ENABLE_BIT);
    return (enEnableReg);
}



