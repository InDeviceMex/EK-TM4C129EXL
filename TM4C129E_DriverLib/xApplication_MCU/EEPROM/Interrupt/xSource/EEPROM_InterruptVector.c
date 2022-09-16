/**
 *
 * @file EEPROM_InterruptVector.c
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
#include <xApplication_MCU/EEPROM/Interrupt/xHeader/EEPROM_InterruptVector.h>

#include <xApplication_MCU/EEPROM/Intrinsics/xHeader/EEPROM_Dependencies.h>

void EEPROM__vEnInterruptVector(void)
{
    FLASH__vEnInterruptSource(FLASH_enINT_EEPROM);
    MCU__vWriteRegister(EEPROM_BASE, EEPROM_INT_OFFSET, EEPROM_INT_INT_ACTIVE, EEPROM_INT_INT_MASK, EEPROM_INT_R_INT_BIT);
}

void EEPROM__vDisInterruptVector(void)
{
    FLASH__vDisInterruptSource(FLASH_enINT_EEPROM);
    MCU__vWriteRegister(EEPROM_BASE, EEPROM_INT_OFFSET, 0UL, EEPROM_INT_INT_MASK, EEPROM_INT_R_INT_BIT);
}


void EEPROM__vClearInterruptVector(void)
{
    FLASH__vClearInterruptSource(FLASH_enINT_EEPROM);
}

EEPROM_nSTATUS EEPROM__enStatusInterruptVector(void)
{
    EEPROM_nSTATUS enEEPROMStatus = EEPROM_enSTATUS_INACTIVE;
    uint32_t u32FlashStatus = 0UL;
    u32FlashStatus = (uint32_t) FLASH__enStatusInterruptSource(FLASH_enINT_EEPROM);
    if((uint32_t) FLASH_enINT_EEPROM == (u32FlashStatus & (uint32_t) FLASH_enINT_EEPROM))
    {
        enEEPROMStatus = EEPROM_enSTATUS_ACTIVE;
    }
    else
    {
        enEEPROMStatus = EEPROM_enSTATUS_INACTIVE;
    }

    return (enEEPROMStatus);
}
