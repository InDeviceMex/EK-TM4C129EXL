/**
 *
 * @file SYSTICK_ClockSource.c
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
#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_ClockSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>

void SYSTICK__vSetClockSource(SYSTICK_nCLKSOURCE enClockSource)
{
    MCU__vWriteRegister(SYSTICK_BASE, SYSTICK_CSR_OFFSET, (uint32_t) enClockSource,
                        SYSTICK_CSR_CLKSOURCE_MASK, SYSTICK_CSR_R_CLKSOURCE_BIT);
}

SYSTICK_nCLKSOURCE SYSTICK__enGetClockSource(void)
{
    SYSTICK_nCLKSOURCE enReturn = SYSTICK_enPIOSC4;
    enReturn = (SYSTICK_nCLKSOURCE) MCU__u32ReadRegister(SYSTICK_BASE, SYSTICK_CSR_OFFSET,
                           SYSTICK_CSR_CLKSOURCE_MASK, SYSTICK_CSR_R_CLKSOURCE_BIT);
    return (enReturn);
}


