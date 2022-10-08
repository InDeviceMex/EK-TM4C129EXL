/**
 *
 * @file QEI_Time.c
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
#include <xDriver_MCU/QEI/Driver/xHeader/QEI_Time.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

UBase_t QEI__uxGetTimer(QEI_nMODULE enModule)
{
    UBase_t uxTimerReg = 0UL;
    uxTimerReg = QEI__uxReadRegister(enModule, QEI_TIME_OFFSET,
                               QEI_TIME_TIME_MASK, QEI_TIME_R_TIME_BIT);
    return (uxTimerReg);
}
