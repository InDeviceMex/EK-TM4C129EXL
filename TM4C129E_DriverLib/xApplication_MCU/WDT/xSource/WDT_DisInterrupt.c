/**
 *
 * @file WDT_DisInterrupt.c
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
 * @verbatim 27 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/WDT/xHeader/WDT_DisInterrupt.h>

#include <xApplication_MCU/WDT/Intrinsics/WDT_Intrinsics.h>

void WDT__vDisInterruptSource(WDT_nMODULE enModule)
{
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) WDT_enMODULE_MAX);
    WDT__vReset((WDT_nMODULE) u32Module);
}
