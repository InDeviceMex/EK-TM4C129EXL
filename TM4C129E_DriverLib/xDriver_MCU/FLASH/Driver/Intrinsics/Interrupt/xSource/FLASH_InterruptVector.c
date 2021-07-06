/**
 *
 * @file FLASH_InterruptVector.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/xHeader/FLASH_InterruptVector.h>
#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Dependencies.h>

void FLASH__vEnInterruptVector(FLASH_nPRIORITY enFlashPriority)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_FLASH;
    NVIC__vSetEnableIRQ( (NVIC_nSTIR) enVector, (NVIC_nPRIORITY) enFlashPriority);
}

void FLASH__vDisInterruptVector(void)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_FLASH;
    NVIC__vClearEnableIRQ( (NVIC_nSTIR) enVector);
}
