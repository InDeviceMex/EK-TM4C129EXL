/**
 *
 * @file SCB_SleepMode.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_SleepMode.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>


void SCB__vSetSleepMode(SCB_nSleepDeep enSleepMode)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SCR_OFFSET, (uint32_t) enSleepMode,
                        SCB_SCR_SLEEPDEEP_MASK, SCB_SCR_R_SLEEPDEEP_BIT);
}

void SCB__vDeepSleepMode(void)
{
    SCB__vSetSleepMode(SCB_enSleepDeep_DeepSleep);
    MCU__vWaitForInterrupt();
    SCB__vSetSleepMode(SCB_enSleepDeep_Sleep);
}

SCB_nSleepDeep SCB__enGetSleepMode(void)
{
    SCB_nSleepDeep enReturn = SCB_enSleepDeep_ERROR;
    enReturn = (SCB_nSleepDeep) MCU__u32ReadRegister(SCB_BASE, SCB_SCR_OFFSET,
                                         SCB_SCR_SLEEPDEEP_MASK, SCB_SCR_R_SLEEPDEEP_BIT);

    return (enReturn);
}

void SCB__vSetSLEEPONEXIT(SCB_nSLEEPONEXIT enSleepMode)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SCR_OFFSET, (uint32_t) enSleepMode,
                        SCB_SCR_SLEEPONEXIT_MASK, SCB_SCR_R_SLEEPONEXIT_BIT);
}

SCB_nSLEEPONEXIT SCB__enGetSLEEPONEXIT(void)
{
    SCB_nSLEEPONEXIT enReturn = SCB_enSLEEPONEXIT_ERROR;
    enReturn = (SCB_nSLEEPONEXIT) MCU__u32ReadRegister(SCB_BASE, SCB_SCR_OFFSET,
                                   SCB_SCR_SLEEPONEXIT_MASK, SCB_SCR_R_SLEEPONEXIT_BIT);
    return (enReturn);
}
