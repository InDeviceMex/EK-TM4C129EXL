/**
 *
 * @file SYSTICK_Current.c
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
#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_Current.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>

void SYSTICK__vClearCurrent(void)
{
    MCU__vWriteRegister(SYSTICK_BASE, SYSTICK_CVR_OFFSET, 0UL,
                        SYSTICK_CVR_CURRENT_MASK, SYSTICK_CVR_R_CURRENT_BIT);
}

uint32_t SYSTICK__u32GetCurrent(void)
{
    uint32_t u32Reg = 0UL;
    u32Reg = MCU__u32ReadRegister(SYSTICK_BASE, SYSTICK_CVR_OFFSET,
                                           SYSTICK_CVR_CURRENT_MASK, SYSTICK_CVR_R_CURRENT_BIT);
    u32Reg++;
    return (u32Reg);
}



