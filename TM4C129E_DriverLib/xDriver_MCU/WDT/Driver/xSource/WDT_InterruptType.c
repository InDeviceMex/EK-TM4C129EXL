/**
 *
 * @file WDT_InterruptType.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 26 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_InterruptType.h>

#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

void WDT__vSetInterruptSourceType(WDT_nMODULE enModule, WDT_nINT_TYPE enType)
{
    WDT__vWriteRegister(enModule, WDT_CTL_OFFSET, (uint32_t) enType,
                        WDT_CTL_INTTYPE_MASK, WDT_CTL_R_INTTYPE_BIT);
}

WDT_nINT_TYPE WDT__enGetInterruptSourceType(WDT_nMODULE enModule)
{
    WDT_nINT_TYPE enIntTypeReg = WDT_enINT_TYPE_STANDARD;

    enIntTypeReg = (WDT_nINT_TYPE) WDT__u32ReadRegister(enModule, WDT_CTL_OFFSET,
                                    WDT_CTL_INTTYPE_MASK, WDT_CTL_R_INTTYPE_BIT);

    return (enIntTypeReg);
}
