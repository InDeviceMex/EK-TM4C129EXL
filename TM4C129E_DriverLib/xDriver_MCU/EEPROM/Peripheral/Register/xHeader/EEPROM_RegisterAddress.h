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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

#define EEPROM_BASE    ((uint32_t) 0x400AF000UL)
#define EEPROM_BITBANDING_BASE    ((uint32_t) 0x42000000UL)
#define EEPROM_OFFSET    ((uint32_t) 0x000AF000UL)

#define EEPROM_SIZE_OFFSET    ((uint32_t) 0x0000UL)
#define EEPROM_BLOCK_OFFSET    ((uint32_t) 0x0004UL)
#define EEPROM_OFFSET_OFFSET    ((uint32_t) 0x0008UL)
#define EEPROM_RDWR_OFFSET    ((uint32_t) 0x0010UL)
#define EEPROM_RDWRINC_OFFSET    ((uint32_t) 0x0014UL)
#define EEPROM_DONE_OFFSET    ((uint32_t) 0x0018UL)
#define EEPROM_SUPP_OFFSET    ((uint32_t) 0x001CUL)
#define EEPROM_UNLOCK_OFFSET    ((uint32_t) 0x0020UL)
#define EEPROM_PROT_OFFSET    ((uint32_t) 0x0030UL)
#define EEPROM_PASS0_OFFSET    ((uint32_t) 0x0034UL)
#define EEPROM_PASS1_OFFSET    ((uint32_t) 0x0038UL)
#define EEPROM_PASS2_OFFSET    ((uint32_t) 0x003CUL)
#define EEPROM_INT_OFFSET    ((uint32_t) 0x0040UL)
#define EEPROM_HIDE_OFFSET    ((uint32_t) 0x0050UL)
#define EEPROM_DBGME_OFFSET    ((uint32_t) 0x0080UL)
#define EEPROM_PP_OFFSET    ((uint32_t) 0x0FC0UL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERADDRESS_H_ */
