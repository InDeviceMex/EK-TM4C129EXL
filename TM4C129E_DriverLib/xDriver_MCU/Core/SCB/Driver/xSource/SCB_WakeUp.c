/**
 *
 * @file SCB_WakeUp.c
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
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_WakeUp.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB__vSetWakeUpSource(SCB_nWAKEUPSOURCE enSource)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SCR_OFFSET, (uint32_t) enSource,
                        SCB_SCR_SEVONPEND_MASK, SCB_SCR_R_SEVONPEND_BIT);
}
SCB_nWAKEUPSOURCE SCB__enGetWakeUpSource(void)
{
    SCB_nWAKEUPSOURCE enReturn = SCB_enWAKEUP_ERROR;
    enReturn = (SCB_nWAKEUPSOURCE) MCU__u32ReadRegister(SCB_BASE, SCB_SCR_OFFSET,
                                  SCB_SCR_SEVONPEND_MASK, SCB_SCR_R_SEVONPEND_BIT);
    return (enReturn);
}
