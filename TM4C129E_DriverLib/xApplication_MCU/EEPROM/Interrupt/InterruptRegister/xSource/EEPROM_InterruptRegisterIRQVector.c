/**
 *
 * @file EEPROM_InterruptRegisterIRQVector.c
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
#include <xApplication_MCU/EEPROM/Interrupt/InterruptRegister/xHeader/EEPROM_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/EEPROM/Intrinsics/xHeader/EEPROM_Dependencies.h>

void EEPROM__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void))
{
    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        FLASH__vRegisterIRQSourceHandler(pfIrqVectorHandler, FLASH_enINTERRUPT_EEPROM);
    }
}
