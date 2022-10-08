/**
 *
 * @file WDT_Wait.c
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
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Wait.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

#define WDT_TIMEOUT (1000000UL )

void WDT__vWaitWrite(WDT_nMODULE enModule)
{
    UBase_t uxTimeout = WDT_TIMEOUT;
    UBase_t uxRegWrite1 = 0UL;
    if(WDT_enMODULE_1 == enModule)
    {
        do
        {
            uxRegWrite1 = MCU__uxReadRegister(WDT1_BASE, WDT_CTL_OFFSET, WDT_CTL_WRC_MASK,
                                                WDT_CTL_R_WRC_BIT);
            uxTimeout--;
        }while((WDT_CTL_WRC_PROGRESS == uxRegWrite1) &&
               (0U != uxTimeout));
    }
}
