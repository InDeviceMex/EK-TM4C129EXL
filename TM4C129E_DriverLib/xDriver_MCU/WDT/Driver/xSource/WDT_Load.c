/**
 *
 * @file WDT_Load.c
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
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Load.h>

#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

void WDT__vSetLoad(WDT_nMODULE enModule, UBase_t uxLoadValue)
{
    WDT__vWriteRegister(enModule, WDT_LOAD_OFFSET, uxLoadValue,
                        WDT_LOAD_LOAD_MASK, WDT_LOAD_R_LOAD_BIT);
}

UBase_t WDT__uxGetLoad(WDT_nMODULE enModule)
{
    UBase_t uxLoadValueReg = 0UL;

    uxLoadValueReg = WDT__uxReadRegister(enModule, WDT_LOAD_OFFSET,
                           WDT_LOAD_LOAD_MASK, WDT_LOAD_R_LOAD_BIT);

    return (uxLoadValueReg);
}
