/**
 *
 * @file QEI_InterruptSource.c
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
#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/xHeader/QEI_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vEnInterruptSource(QEI_nMODULE enModule, QEI_nINT_SOURCE enSourceInt)
{
    UBase_t uxSourceInt = 0UL;
    uxSourceInt = (UBase_t) enSourceInt;
    uxSourceInt &= (UBase_t) QEI_enINT_SOURCE_ALL;
    QEI__vWriteRegister(enModule , QEI_INTEN_OFFSET, uxSourceInt, uxSourceInt, 0UL);
}

void QEI__vDisInterruptSource(QEI_nMODULE enModule, QEI_nINT_SOURCE enSourceInt)
{
    UBase_t uxSourceInt = 0UL;
    uxSourceInt = (UBase_t) enSourceInt;
    uxSourceInt &= (UBase_t) QEI_enINT_SOURCE_ALL;
    QEI__vWriteRegister(enModule , QEI_INTEN_OFFSET, 0UL, uxSourceInt, 0UL);
}

void QEI__vClearInterruptSource(QEI_nMODULE enModule, QEI_nINT_SOURCE enSourceInt)
{
    UBase_t uxSourceInt = 0UL;
    uxSourceInt = (UBase_t) enSourceInt;
    uxSourceInt &= (UBase_t) QEI_enINT_SOURCE_ALL;
    QEI__vWriteRegister(enModule , QEI_ISC_OFFSET, uxSourceInt, 0xFFFFFFFFUL, 0UL);
}

QEI_nINT_SOURCE QEI__enStatusInterruptSource(QEI_nMODULE enModule, QEI_nINT_SOURCE enSourceInt)
{
    QEI_nINT_SOURCE enInterruptReg = QEI_enINT_SOURCE_NONE;
    UBase_t uxSourceInt = 0UL;
    UBase_t uxRegister= 0xFFFFFFFFUL;
    uxSourceInt &= (UBase_t) QEI_enINT_SOURCE_ALL;
    uxRegister = QEI__uxReadRegister(enModule , QEI_RIS_OFFSET,
                                      (UBase_t) uxSourceInt, 0UL);
    enInterruptReg = (QEI_nINT_SOURCE) uxRegister;

    return (enInterruptReg);
}
