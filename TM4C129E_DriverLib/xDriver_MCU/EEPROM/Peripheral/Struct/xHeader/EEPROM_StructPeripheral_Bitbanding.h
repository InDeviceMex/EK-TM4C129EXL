/**
 *
 * @file EEPROM_StructPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/EEPROM/Peripheral/Struct/xHeader/EEPROM_StructRegister_Bitbanding.h>

typedef volatile struct
{
    union
    {
        volatile const uint32_t EESIZE [32UL];
        BITBANDING_EESIZE_TypeDef EESIZE_Bit;
    };
    union
    {
        volatile uint32_t EEBLOCK [32UL];
        BITBANDING_EEBLOCK_TypeDef EEBLOCK_Bit;
    };
    union
    {
        volatile uint32_t EEOFFSET [32UL];
        BITBANDING_EEOFFSET_TypeDef EEOFFSET_Bit;
    };
    const uint32_t reserved [1UL * 32UL];
    union
    {
        volatile uint32_t EERDWR [32UL];
        BITBANDING_EERDWR_TypeDef EERDWR_Bit;
    };
    union
    {
        volatile uint32_t EERDWRINC [32UL];
        BITBANDING_EERDWRINC_TypeDef EERDWRINC_Bit;
    };
    union
    {
        volatile const uint32_t EEDONE [32UL];
        BITBANDING_EEDONE_TypeDef EEDONE_Bit;
    };
    union
    {
        volatile uint32_t EESUPP [32UL];
        BITBANDING_EESUPP_TypeDef EESUPP_Bit;
    };
    union
    {
        volatile uint32_t EEUNLOCK [32UL];
        BITBANDING_EEUNLOCK_TypeDef EEUNLOCK_Bit;
    };
    const uint32_t reserved1 [3UL * 32UL];
    union
    {
        volatile uint32_t EEPROT [32UL];
        BITBANDING_EEPROT_TypeDef EEPROT_Bit;
    };
    union
    {
        volatile uint32_t EEPASS0 [32UL];
        BITBANDING_EEPASS_TypeDef EEPASS0_Bit;
    };
    union
    {
        volatile uint32_t EEPASS1 [32UL];
        BITBANDING_EEPASS_TypeDef EEPASS1_Bit;
    };
    union
    {
        volatile uint32_t EEPASS2 [32UL];
        BITBANDING_EEPASS_TypeDef EEPASS2_Bit;
    };
    union
    {
        volatile uint32_t EEINT [32UL];
        BITBANDING_EEINT_TypeDef EEINT_Bit;
    };
    const uint32_t reserved2 [3UL * 32UL];
    union
    {
        volatile uint32_t EEHIDE [32UL];
        BITBANDING_EEHIDE_TypeDef EEHIDE_Bit;
    };
    const uint32_t reserved3 [11UL * 32UL];
    union
    {
        volatile uint32_t EEDBGME [32UL];
        BITBANDING_EEDBGME_TypeDef EEDBGME_Bit;
    };
    const uint32_t reserved4 [975UL * 32UL];
    union
    {
        volatile const uint32_t EEPROMPP [32UL];
        BITBANDING_EEPROMPP_TypeDef EEPROMPP_Bit;
    };
}EEPROM_BITBANDING_TypeDef;




#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTPERIPHERAL_BITBANDING_H_ */
