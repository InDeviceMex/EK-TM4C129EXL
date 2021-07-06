/**
 *
 * @file EEPROM_RegisterAddress.h
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
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define EEPROM_BASE    ((uint32_t) 0x400AF000UL)
#define EEPROM_BITBANDING_BASE    ((uint32_t) 0x42000000UL)
#define EEPROM_OFFSET    ((uint32_t) 0x000AF000UL)

#define EEPROM_EESIZE_OFFSET    ((uint32_t) 0x0000UL)
#define EEPROM_EEBLOCK_OFFSET    ((uint32_t) 0x0004UL)
#define EEPROM_EEOFFSET_OFFSET    ((uint32_t) 0x0008UL)
#define EEPROM_EERDWR_OFFSET    ((uint32_t) 0x0010UL)
#define EEPROM_EERDWRINC_OFFSET    ((uint32_t) 0x0014UL)
#define EEPROM_EEDONE_OFFSET    ((uint32_t) 0x0018UL)
#define EEPROM_EESUPP_OFFSET    ((uint32_t) 0x001CUL)
#define EEPROM_EEUNLOCK_OFFSET    ((uint32_t) 0x0020UL)
#define EEPROM_EEPROT_OFFSET    ((uint32_t) 0x0030UL)
#define EEPROM_EEPASS0_OFFSET    ((uint32_t) 0x0034UL)
#define EEPROM_EEPASS1_OFFSET    ((uint32_t) 0x0038UL)
#define EEPROM_EEPASS2_OFFSET    ((uint32_t) 0x003CUL)
#define EEPROM_EEINT_OFFSET    ((uint32_t) 0x0040UL)
#define EEPROM_EEHIDE_OFFSET    ((uint32_t) 0x0050UL)
#define EEPROM_EEDBGME_OFFSET    ((uint32_t) 0x0080UL)
#define EEPROM_EEPROMPP_OFFSET    ((uint32_t) 0x0FC0UL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERADDRESS_H_ */
