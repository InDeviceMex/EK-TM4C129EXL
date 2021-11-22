/**
 *
 * @file EEPROM_StructPeripheral.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 21 jun. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/EEPROM/Peripheral/Struct/xHeader/EEPROM_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile const uint32_t EESIZE;
        EESIZE_t EESIZE_Bit;
    };
    union
    {
        volatile uint32_t EEBLOCK;
        EEBLOCK_t EEBLOCK_Bit;
    };
    union
    {
        volatile uint32_t EEOFFSET;
        EEOFFSET_t EEOFFSET_Bit;
    };
    const uint32_t reserved [1UL];
    union
    {
        volatile uint32_t EERDWR;
        EERDWR_t EERDWR_Bit;
    };
    union
    {
        volatile uint32_t EERDWRINC;
        EERDWRINC_t EERDWRINC_Bit;
    };
    union
    {
        volatile const uint32_t EEDONE;
        EEDONE_t EEDONE_Bit;
    };
    union
    {
        volatile uint32_t EESUPP;
        EESUPP_t EESUPP_Bit;
    };
    union
    {
        volatile uint32_t EEUNLOCK;
        EEUNLOCK_t EEUNLOCK_Bit;
    };
    const uint32_t reserved1 [3UL];
    union
    {
        volatile uint32_t EEPROT;
        EEPROT_t EEPROT_Bit;
    };
    union
    {
        volatile uint32_t EEPASS0;
        EEPASS_t EEPASS0_Bit;
    };
    union
    {
        volatile uint32_t EEPASS1;
        EEPASS_t EEPASS1_Bit;
    };
    union
    {
        volatile uint32_t EEPASS2;
        EEPASS_t EEPASS2_Bit;
    };
    union
    {
        volatile uint32_t EEINT;
        EEINT_t EEINT_Bit;
    };
    const uint32_t reserved2 [3UL];
    union
    {
        volatile uint32_t EEHIDE;
        EEHIDE_t EEHIDE_Bit;
    };
    const uint32_t reserved3 [11UL];
    union
    {
        volatile uint32_t EEDBGME;
        EEDBGME_t EEDBGME_Bit;
    };
    const uint32_t reserved4 [975UL];
    union
    {
        volatile const uint32_t EEPROMPP;
        EEPROMPP_t EEPROMPP_Bit;
    };
}EEPROM_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTPERIPHERAL_H_ */
