/**
 *
 * @file TIMER_Clock.c
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
 * @verbatim 11 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Clock.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>

void TIMER__vSetClockSource(TIMER_nMODULE enModule, TIMER_nCLOCK enClockSourceArg)
{
    uint32_t u32ModuleNumber = (uint32_t) enModule;
    u32ModuleNumber &= 0xFFUL;

    TIMER__vWriteRegister((TIMER_nMODULE_NUM) u32ModuleNumber, GPTM_CC_OFFSET, (uint32_t) enClockSourceArg, GPTM_CC_ALTCLK_MASK, GPTM_CC_R_ALTCLK_BIT);
}

TIMER_nCLOCK TIMER__enGetClockSource(TIMER_nMODULE enModule)
{
    TIMER_nCLOCK enClockSourReg = TIMER_enCLOCK_UNDEF;
    uint32_t u32ModuleNumber = (uint32_t) enModule;
    u32ModuleNumber &= 0xFFUL;

    TIMER__enReadRegister((TIMER_nMODULE_NUM)u32ModuleNumber, GPTM_CC_OFFSET, (uint32_t*) enClockSourReg,  GPTM_CC_ALTCLK_MASK, GPTM_CC_R_ALTCLK_BIT);
    return (enClockSourReg);
}



