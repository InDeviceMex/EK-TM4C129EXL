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
    SCB_Systick__vSetPriority((SCB_nSHPR) enPriority);
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
    SYSTICK__vClearCurrent();
}

SYSTICK_nINT_STATUS SYSTICK__enStatusInterruptVector(void)
{
    SYSTICK_nINT_STATUS enReturn = SYSTICK_enINT_NOOCCUR;
    enReturn = (SYSTICK_nINT_STATUS) MCU__u32ReadRegister(SYSTICK_BASE,
              SYSTICK_CSR_OFFSET, SYSTICK_CSR_COUNTFLAG_MASK, SYSTICK_CSR_R_COUNTFLAG_BIT);
    return (enReturn);
}
