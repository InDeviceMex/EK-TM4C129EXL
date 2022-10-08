/**
 *
 * @file WDT_Stall.c
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
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Stall.h>

#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>


void WDT__vEnStall(WDT_nMODULE enModule)
{
    WDT__vWriteRegister(enModule, WDT_TEST_OFFSET, WDT_TEST_STALL_FREEZE,
                        WDT_TEST_STALL_MASK, WDT_TEST_R_STALL_BIT);
}

void WDT__vDisStall(WDT_nMODULE enModule)
{
    WDT__vWriteRegister(enModule, WDT_TEST_OFFSET, WDT_TEST_STALL_CONTINUE,
                        WDT_TEST_STALL_MASK, WDT_TEST_R_STALL_BIT);
}

void WDT__vSetStall(WDT_nMODULE enModule, WDT_nSTALL enStallValue)
{
    WDT__vWriteRegister(enModule, WDT_TEST_OFFSET, (UBase_t) enStallValue,
                        WDT_TEST_STALL_MASK, WDT_TEST_R_STALL_BIT);
}

WDT_nSTALL WDT__enGetStall(WDT_nMODULE enModule)
{
    WDT_nSTALL enStallReg = WDT_enSTALL_CONTINUE;

    enStallReg = (WDT_nSTALL) WDT__uxReadRegister(enModule, WDT_TEST_OFFSET,
                                  WDT_TEST_STALL_MASK, WDT_TEST_R_STALL_BIT);

    return (enStallReg);
}
