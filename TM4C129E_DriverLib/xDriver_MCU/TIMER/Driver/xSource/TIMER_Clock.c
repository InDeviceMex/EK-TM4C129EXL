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
    UBase_t uxModuleNumber;
    uxModuleNumber = (UBase_t) enModule;
    uxModuleNumber &= 0xFFUL;

    TIMER__vWriteRegister((TIMER_nMODULE_NUM) uxModuleNumber, GPTM_CC_OFFSET,
                          (UBase_t) enClockSourceArg, GPTM_CC_ALTCLK_MASK,
                          GPTM_CC_R_ALTCLK_BIT);
}

TIMER_nCLOCK TIMER__enGetClockSource(TIMER_nMODULE enModule)
{
    UBase_t uxModuleNumber;
    uxModuleNumber = (UBase_t) enModule;
    uxModuleNumber &= 0xFFUL;

    TIMER_nCLOCK enClockSourReg;
    enClockSourReg = (TIMER_nCLOCK) TIMER__uxReadRegister((TIMER_nMODULE_NUM)uxModuleNumber,
                                   GPTM_CC_OFFSET, GPTM_CC_ALTCLK_MASK, GPTM_CC_R_ALTCLK_BIT);
    return (enClockSourReg);
}
