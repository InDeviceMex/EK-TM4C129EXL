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
        EESIZE_TypeDef EESIZE_Bit;
    };
    union
    {
        volatile uint32_t EEBLOCK;
        EEBLOCK_TypeDef EEBLOCK_Bit;
    };
    union
    {
        volatile uint32_t EEOFFSET;
        EEOFFSET_TypeDef EEOFFSET_Bit;
    };
    const uint32_t reserved [1UL];
    union
    {
        volatile uint32_t EERDWR;
        EERDWR_TypeDef EERDWR_Bit;
    };
    union
    {
        volatile uint32_t EERDWRINC;
        EERDWRINC_TypeDef EERDWRINC_Bit;
    };
    union
    {
        volatile const uint32_t EEDONE;
        EEDONE_TypeDef EEDONE_Bit;
    };
    union
    {
        volatile uint32_t EESUPP;
        EESUPP_TypeDef EESUPP_Bit;
    };
    union
    {
        volatile uint32_t EEUNLOCK;
        EEUNLOCK_TypeDef EEUNLOCK_Bit;
    };
    const uint32_t reserved1 [3UL];
    union
    {
        volatile uint32_t EEPROT;
        EEPROT_TypeDef EEPROT_Bit;
    };
    union
    {
        volatile uint32_t EEPASS0;
        EEPASS_TypeDef EEPASS0_Bit;
    };
    union
    {
        volatile uint32_t EEPASS1;
        EEPASS_TypeDef EEPASS1_Bit;
    };
    union
    {
        volatile uint32_t EEPASS2;
        EEPASS_TypeDef EEPASS2_Bit;
    };
    union
    {
        volatile uint32_t EEINT;
        EEINT_TypeDef EEINT_Bit;
    };
    const uint32_t reserved2 [3UL];
    union
    {
        volatile uint32_t EEHIDE;
        EEHIDE_TypeDef EEHIDE_Bit;
    };
    const uint32_t reserved3 [11UL];
    union
    {
        volatile uint32_t EEDBGME;
        EEDBGME_TypeDef EEDBGME_Bit;
    };
    const uint32_t reserved4 [975UL];
    union
    {
        volatile const uint32_t EEPROMPP;
        EEPROMPP_TypeDef EEPROMPP_Bit;
    };
}EEPROM_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTPERIPHERAL_H_ */
