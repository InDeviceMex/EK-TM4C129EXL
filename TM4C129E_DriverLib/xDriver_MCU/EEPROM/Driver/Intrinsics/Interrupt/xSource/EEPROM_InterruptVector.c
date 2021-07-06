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
 * @verbatim 25 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Interrupt/xHeader/EEPROM_InterruptVector.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Primitives/EEPROM_Primitives.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>
#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Dependencies.h>

void EEPROM__vEnInterruptVector(void)
{
    EEPROM__vSetReady();
    FLASH__vEnInterruptSource(FLASH_enINT_EEPROM);
    MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEINT_OFFSET, EEPROM_EEINT_INT_OCCUR, EEPROM_EEINT_INT_MASK, EEPROM_EEINT_R_INT_BIT);
}

void EEPROM__vDisInterruptVector(void)
{
    EEPROM__vSetReady();
    FLASH__vDisInterruptSource(FLASH_enINT_EEPROM);

    MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEINT_OFFSET, 0UL, EEPROM_EEINT_INT_MASK, EEPROM_EEINT_R_INT_BIT);
}


void EEPROM__vClearInterruptVector(void)
{
    EEPROM__vSetReady();
    FLASH__vClearInterruptSource(FLASH_enINT_EEPROM);
}

EEPROM_nINT_STATUS EEPROM__enStatusInterruptVector(void)
{
    EEPROM_nINT_STATUS enEEPROMStatus = EEPROM_enINT_STATUS_UNDEF;
    FLASH_nINT_STATUS enFlashStatus = FLASH_enINT_STATUS_UNDEF;
    EEPROM_nREADY enReady = EEPROM_enNOREADY;
    enReady = EEPROM__enIsReady();
    if(EEPROM_enREADY == enReady)
    {
        enFlashStatus = FLASH__enStatusInterruptSource(FLASH_enINT_EEPROM);
        if(FLASH_enINT_OCCUR == enFlashStatus)
        {
            enEEPROMStatus = EEPROM_enINT_OCCUR;
        }
        else
        {
            enEEPROMStatus = EEPROM_enINT_NOOCCUR;
        }
    }
    return enEEPROMStatus;
}



