/**
 *
 * @file EEPROM_StructRegister_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTREGISTER_BITBANDING_H_

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile const uint32_t WORDCNT [16UL];
    volatile const uint32_t BLKCNT [11UL];
    const uint32_t reserved [5UL];
}BITBANDING_EESIZE_TypeDef;

typedef volatile struct
{
    volatile uint32_t BLOCK [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_EEBLOCK_TypeDef;

typedef volatile struct
{
    volatile uint32_t OFFSET [4UL];
    const uint32_t reserved [28UL];
}BITBANDING_EEOFFSET_TypeDef;

typedef volatile struct
{
    volatile uint32_t VALUE [32UL];
}BITBANDING_EERDWR_TypeDef;

typedef volatile struct
{
    volatile uint32_t VALUE [32UL];
}BITBANDING_EERDWRINC_TypeDef;

typedef volatile struct
{
    volatile const uint32_t WORKING;
    const uint32_t reserved;
    volatile const uint32_t WKERASE;
    volatile const uint32_t WKCOPY;
    volatile const uint32_t NOPERM;
    volatile const uint32_t WRBUSY;
    const uint32_t reserved1 [26UL];
}BITBANDING_EEDONE_TypeDef;

typedef volatile struct
{
    volatile uint32_t START;
    volatile const uint32_t EREQ;
    volatile const uint32_t ERETRY;
    volatile const uint32_t PRETRY;
    const uint32_t reserved [28UL];
}BITBANDING_EESUPP_TypeDef;

typedef volatile struct
{
    volatile uint32_t UNLOCK [32UL];
}BITBANDING_EEUNLOCK_TypeDef;

typedef volatile struct
{
    volatile uint32_t PROT [3UL];
    volatile uint32_t ACC;
    const uint32_t reserved [28UL];
}BITBANDING_EEPROT_TypeDef;

typedef volatile struct
{
    volatile uint32_t PASS [32UL];
}BITBANDING_EEPASS_TypeDef;

typedef volatile struct
{
    volatile uint32_t INT;
    const uint32_t reserved [31UL];
}BITBANDING_EEINT_TypeDef;

typedef volatile struct
{
    const uint32_t reserved;
    volatile uint32_t H1;
    volatile uint32_t H2;
    volatile uint32_t H3;
    volatile uint32_t H4;
    volatile uint32_t H5;
    volatile uint32_t H6;
    volatile uint32_t H7;
    volatile uint32_t H8;
    volatile uint32_t H9;
    volatile uint32_t H10;
    volatile uint32_t H11;
    volatile uint32_t H12;
    volatile uint32_t H13;
    volatile uint32_t H14;
    volatile uint32_t H15;
    volatile uint32_t H16;
    volatile uint32_t H17;
    volatile uint32_t H18;
    volatile uint32_t H19;
    volatile uint32_t H20;
    volatile uint32_t H21;
    volatile uint32_t H22;
    volatile uint32_t H23;
    volatile uint32_t H24;
    volatile uint32_t H25;
    volatile uint32_t H26;
    volatile uint32_t H27;
    volatile uint32_t H28;
    volatile uint32_t H29;
    volatile uint32_t H30;
    volatile uint32_t H31;
    volatile uint32_t H32;
}BITBANDING_EEHIDE_TypeDef;

typedef volatile struct
{
    volatile uint32_t ME;
    const uint32_t reserved [15UL];
    volatile uint32_t KEY [16UL];
}BITBANDING_EEDBGME_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SIZE [5UL];
    const uint32_t reserved [27UL];
}BITBANDING_EEPROMPP_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTREGISTER_BITBANDING_H_ */
