/**
 *
 * @file EEPROM_Ready.c
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
#include <xApplication_MCU/EEPROM/Intrinsics/xHeader/EEPROM_Ready.h>

#include <xApplication_MCU/EEPROM/Intrinsics/xHeader/EEPROM_Dependencies.h>

void EEPROM__vSetReady(void)
{
#if !defined(Opt_Check)
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enEEPROM;
    SYSCTL__vSetReady(enPeripheral);
#endif
}

void EEPROM__vClearReady(void)
{
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enEEPROM;
    SYSCTL__vClearReady(enPeripheral);
}
EEPROM_nSTATUS EEPROM__enIsReady(void)
{
#if !defined(Opt_Check)
    EEPROM_nSTATUS enReady = EEPROM_enSTATUS_INACTIVE;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enEEPROM;
    enReady = (EEPROM_nSTATUS) SYSCTL__enIsReady(enPeripheral);
#else
    EEPROM_nSTATUS enReady = EEPROM_enSTATUS_ACTIVE;
#endif
    return (enReady);
}
