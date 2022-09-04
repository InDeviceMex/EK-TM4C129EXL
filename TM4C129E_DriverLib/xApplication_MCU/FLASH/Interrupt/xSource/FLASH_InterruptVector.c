/**
 *
 * @file FLASH_InterruptVector.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/FLASH/Interrupt/xHeader/FLASH_InterruptVector.h>

#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Dependencies.h>

void FLASH__vEnInterruptVector(FLASH_nPRIORITY enFlashPriority)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_FLASH;
    NVIC__vSetEnableIRQ( (NVIC_nVECTOR) enVector, (NVIC_nPRIORITY) enFlashPriority);
}

void FLASH__vDisInterruptVector(void)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_FLASH;
    NVIC__vClearEnableIRQ( (NVIC_nVECTOR) enVector);
}
