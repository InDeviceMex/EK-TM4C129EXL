/**
 *
 * @file SYSTICK_Reload.c
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
 * @verbatim 18 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_Reload.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>

void SYSTICK__vSetReload(uint32_t u32ReloadValue)
{
    if(0UL != u32ReloadValue)
    {
        u32ReloadValue--;
        MCU__vWriteRegister(SYSTICK_BASE, SYSTICK_RVR_OFFSET, u32ReloadValue,
                            SYSTICK_RVR_RELOAD_MASK, SYSTICK_RVR_R_RELOAD_BIT);
    }
}

uint32_t SYSTICK__enGetReload(void)
{
    uint32_t u32Reg = 0UL;
    u32Reg = MCU__u32ReadRegister(SYSTICK_BASE, SYSTICK_RVR_OFFSET,
                                           SYSTICK_RVR_RELOAD_MASK, SYSTICK_RVR_R_RELOAD_BIT);
    u32Reg++;
    return (u32Reg);
}



