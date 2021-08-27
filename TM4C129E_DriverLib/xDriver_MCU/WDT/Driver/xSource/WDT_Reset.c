/**
 *
 * @file WDT_Reset.c
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
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Reset.h>

#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

void WDT__vEnResetOutput(WDT_nMODULE enModule)
{
    WDT__vWriteRegister(enModule, WDT_CTL_OFFSET, WDT_CTL_RESEN_ENA,
                        WDT_CTL_RESEN_MASK, WDT_CTL_R_RESEN_BIT);
}

void WDT__vDisResetOutput(WDT_nMODULE enModule)
{
    WDT__vWriteRegister(enModule, WDT_CTL_OFFSET, WDT_CTL_RESEN_DIS,
                        WDT_CTL_RESEN_MASK, WDT_CTL_R_RESEN_BIT);
}

void WDT__vSetResetOutput(WDT_nMODULE enModule, WDT_nRESET enResetOutputValue)
{
    WDT__vWriteRegister(enModule, WDT_CTL_OFFSET, (uint32_t) enResetOutputValue,
                        WDT_CTL_RESEN_MASK, WDT_CTL_R_RESEN_BIT);
}

WDT_nRESET WDT__enGetResetOutput(WDT_nMODULE enModule)
{
    WDT_nRESET enResetArg = WDT_enRESET_DISABLE;

    enResetArg = (WDT_nRESET) WDT__u32ReadRegister(enModule, WDT_CTL_OFFSET,
                                   WDT_CTL_RESEN_MASK, WDT_CTL_R_RESEN_BIT);

    return (enResetArg);
}
