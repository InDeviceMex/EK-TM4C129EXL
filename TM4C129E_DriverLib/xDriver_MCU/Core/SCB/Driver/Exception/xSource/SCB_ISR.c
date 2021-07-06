/**
 *
 * @file SCB_ISR.c
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
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_ISR.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

SCB_nPENDSTATE SCB_ISR__enGetPendingState(void)
{
    SCB_nPENDSTATE enReturn = SCB_enNOPENDING;
    enReturn = (SCB_nPENDSTATE) MCU__u32ReadRegister(SCB_BASE, SCB_ICSR_OFFSET,
                                                     SCB_ICSR_ISRPENDING_MASK, SCB_ICSR_R_ISRPENDING_BIT);
    return (enReturn);
}
SCB_nVECISR SCB_ISR__enGetVectorPending(void)
{
    SCB_nVECISR enReturn = SCB_enVECISR_THREAD;
    enReturn = (SCB_nVECISR) MCU__u32ReadRegister(SCB_BASE, SCB_ICSR_OFFSET,
                                                  SCB_ICSR_VECTPENDING_MASK, SCB_ICSR_R_VECTPENDING_BIT);

    return (enReturn);
}
SCB_nVECISR SCB_ISR__enGetVectorActive(void)
{
    SCB_nVECISR enReturn = SCB_enVECISR_THREAD;

    enReturn = (SCB_nVECISR) MCU__u32ReadRegister(SCB_BASE, SCB_ICSR_OFFSET,
                                                  SCB_ICSR_VECTACTIVE_MASK, SCB_ICSR_R_VECTACTIVE_BIT);

    return (enReturn);
}
