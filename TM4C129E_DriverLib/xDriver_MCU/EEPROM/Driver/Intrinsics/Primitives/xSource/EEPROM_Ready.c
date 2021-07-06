/**
 *
 * @file EEPROM_Ready.c
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
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Primitives/xHeader/EEPROM_Ready.h>

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Dependencies.h>

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
EEPROM_nREADY EEPROM__enIsReady(void)
{
#if !defined(Opt_Check)
    EEPROM_nREADY enReady = EEPROM_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enEEPROM;
    enReady = (EEPROM_nREADY) SYSCTL__enIsReady(enPeripheral);
#else
    EEPROM_nREADY enReady = EEPROM_enREADY;
#endif
    return enReady;
}
