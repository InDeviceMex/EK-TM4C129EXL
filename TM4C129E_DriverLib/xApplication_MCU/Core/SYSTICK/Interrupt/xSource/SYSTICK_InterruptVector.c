/**
 *
 * @file SYSTICK_InterruptVector.c
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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SYSTICK/Interrupt/xHeader/SYSTICK_InterruptVector.h>

#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Dependencies.h>

void SYSTICK__vEnInterruptVector(SYSTICK_nPRIORITY enPriority)
{
    SCB_SYSTICK__enSetPriority(SCB_enMODULE_0, (SCB_nPRIORITY) enPriority);
    MCU__vWriteRegister(SYSTICK_BASE, SYSTICK_CSR_OFFSET, SYSTICK_CSR_TICKINT_ENA,
                        SYSTICK_CSR_TICKINT_MASK, SYSTICK_CSR_R_TICKINT_BIT);
}

void SYSTICK__vDisInterruptVector(void)
{
    MCU__vWriteRegister(SYSTICK_BASE, SYSTICK_CSR_OFFSET, SYSTICK_CSR_TICKINT_DIS,
                        SYSTICK_CSR_TICKINT_MASK, SYSTICK_CSR_R_TICKINT_BIT);
}

void SYSTICK__vClearInterruptVector(void)
{
    SYSTICK__enClearCurrentValue(SYSTICK_enMODULE_0);
}

SYSTICK_nSTATUS SYSTICK__enStatusInterruptVector(void)
{
    SYSTICK_nSTATUS enReturn = SYSTICK_enSTATUS_INACTIVE;
    enReturn = (SYSTICK_nSTATUS) MCU__u32ReadRegister(SYSTICK_BASE,
              SYSTICK_CSR_OFFSET, SYSTICK_CSR_COUNTFLAG_MASK, SYSTICK_CSR_R_COUNTFLAG_BIT);
    return (enReturn);
}
