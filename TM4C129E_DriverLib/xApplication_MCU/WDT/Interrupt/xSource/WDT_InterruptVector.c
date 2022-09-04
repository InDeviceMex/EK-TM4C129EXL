/**
 *
 * @file WDT_InterruptVector.c
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
 * @verbatim 26 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/WDT/Interrupt/xHeader/WDT_InterruptVector.h>

#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Dependencies.h>

void WDT__vEnInterruptVector(WDT_nPRIORITY enPriority)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_WDT01;
    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enPriority);
}

void WDT__vDisInterruptVector(void)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_WDT01;
    NVIC__vClearEnableIRQ(enVector);
}
