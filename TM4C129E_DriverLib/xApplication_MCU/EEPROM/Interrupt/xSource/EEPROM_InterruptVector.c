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
    MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEINT_OFFSET, EEPROM_EEINT_INT_OCCUR, EEPROM_EEINT_INT_MASK, EEPROM_EEINT_R_INT_BIT);
}

void EEPROM__vDisInterruptVector(void)
{
    FLASH__vDisInterruptSource(FLASH_enINT_EEPROM);
    MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEINT_OFFSET, 0UL, EEPROM_EEINT_INT_MASK, EEPROM_EEINT_R_INT_BIT);
}


void EEPROM__vClearInterruptVector(void)
{
    FLASH__vClearInterruptSource(FLASH_enINT_EEPROM);
}

EEPROM_nINT_STATUS EEPROM__enStatusInterruptVector(void)
{
    EEPROM_nINT_STATUS enEEPROMStatus = EEPROM_enINT_NOOCCUR;
    FLASH_nINT_STATUS enFlashStatus = FLASH_enINT_NOOCCUR;
    enFlashStatus = FLASH__enStatusInterruptSource(FLASH_enINT_EEPROM);
    if(FLASH_enINT_OCCUR == enFlashStatus)
    {
        enEEPROMStatus = EEPROM_enINT_OCCUR;
    }
    else
    {
        enEEPROMStatus = EEPROM_enINT_NOOCCUR;
    }

    return (enEEPROMStatus);
}
