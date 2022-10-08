/**
 *
 * @file WDT_InterruptSource.c
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
 * @verbatim 23 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/xHeader/WDT_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>

WDT_nINTERRUPT_ENABLE WDT__enGetInterruptSourceEnable(WDT_nMODULE enModule)
{
    WDT_nINTERRUPT_ENABLE enIntEnableReg = WDT_enINTERRUPT_ENABLE_DISABLE;
    enIntEnableReg = (WDT_nINTERRUPT_ENABLE) WDT__uxReadRegister(enModule, WDT_CTL_OFFSET,
                                             WDT_CTL_INTEN_MASK, WDT_CTL_R_INTEN_BIT);
    return (enIntEnableReg);
}

void WDT__vEnInterruptSource(WDT_nMODULE enModule)
{
    WDT__vWriteRegister(enModule, WDT_CTL_OFFSET, (UBase_t) WDT_enINTERRUPT_ENABLE_ENABLE,
                        WDT_CTL_INTEN_MASK, WDT_CTL_R_INTEN_BIT);
}

void WDT__vClearInterruptSource(WDT_nMODULE enModule)
{
    WDT__vWriteRegister(enModule, WDT_ICR_OFFSET, (UBase_t) 0UL,
                        WDT_ICR_INTCLR_MASK, WDT_ICR_R_INTCLR_BIT);
}

WDT_nINT_STATUS WDT__enStatusInterruptSource(WDT_nMODULE enModule)
{
    WDT_nINT_STATUS enIntStatusReg = WDT_enINT_STATUS_INACTIVE;

    enIntStatusReg = (WDT_nINT_STATUS) WDT__uxReadRegister(enModule, WDT_RIS_OFFSET,
                                               WDT_RIS_RIS_MASK, WDT_RIS_R_RIS_BIT);
    return (enIntStatusReg);
}
