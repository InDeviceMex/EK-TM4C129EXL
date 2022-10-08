/**
 *
 * @file QEI_Velocity.c
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
#include <xDriver_MCU/QEI/Driver/xHeader/QEI_Velocity.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

UBase_t QEI__uxGetVelocity(QEI_nMODULE enModule)
{
    UBase_t uxVelocityReg = 0UL;
    uxVelocityReg = QEI__uxReadRegister(enModule, QEI_SPEED_OFFSET,
                           QEI_SPEED_SPEED_MASK, QEI_SPEED_R_SPEED_BIT);
    return (uxVelocityReg);
}
