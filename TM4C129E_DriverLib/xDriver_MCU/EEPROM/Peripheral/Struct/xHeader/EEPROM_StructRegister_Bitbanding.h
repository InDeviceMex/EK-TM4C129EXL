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

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

typedef volatile struct
{
    volatile const UBase_t WORDCNT [16UL];
    volatile const UBase_t BLKCNT [11UL];
    const UBase_t reserved [5UL];
}EEPROM_BITBANDING_SIZE_t;

typedef volatile struct
{
    volatile UBase_t BLOCK [16UL];
    const UBase_t reserved [16UL];
}EEPROM_BITBANDING_BLOCK_t;

typedef volatile struct
{
    volatile UBase_t OFFSET [4UL];
    const UBase_t reserved [28UL];
}EEPROM_BITBANDING_OFFSET_t;

typedef volatile struct
{
    volatile UBase_t VALUE [32UL];
}EEPROM_BITBANDING_RDWR_t;

typedef volatile struct
{
    volatile UBase_t VALUE [32UL];
}EEPROM_BITBANDING_RDWRINC_t;

typedef volatile struct
{
    volatile const UBase_t WORKING;
    const UBase_t reserved;
    volatile const UBase_t WKERASE;
    volatile const UBase_t WKCOPY;
    volatile const UBase_t NOPERM;
    volatile const UBase_t WRBUSY;
    const UBase_t reserved1 [26UL];
}EEPROM_BITBANDING_DONE_t;

typedef volatile struct
{
    volatile UBase_t START;
    volatile const UBase_t EREQ;
    volatile const UBase_t ERETRY;
    volatile const UBase_t PRETRY;
    const UBase_t reserved [28UL];
}EEPROM_BITBANDING_SUPP_t;

typedef volatile struct
{
    volatile UBase_t UNLOCK [32UL];
}EEPROM_BITBANDING_UNLOCK_t;

typedef volatile struct
{
    volatile UBase_t PROT [3UL];
    volatile UBase_t ACC;
    const UBase_t reserved [28UL];
}EEPROM_BITBANDING_PROT_t;

typedef volatile struct
{
    volatile UBase_t PASS [32UL];
}EEPROM_BITBANDING_PASS_t;

typedef volatile struct
{
    volatile UBase_t INT;
    const UBase_t reserved [31UL];
}EEPROM_BITBANDING_INT_t;

typedef volatile struct
{
    const UBase_t reserved;
    volatile UBase_t H1;
    volatile UBase_t H2;
    volatile UBase_t H3;
    volatile UBase_t H4;
    volatile UBase_t H5;
    volatile UBase_t H6;
    volatile UBase_t H7;
    volatile UBase_t H8;
    volatile UBase_t H9;
    volatile UBase_t H10;
    volatile UBase_t H11;
    volatile UBase_t H12;
    volatile UBase_t H13;
    volatile UBase_t H14;
    volatile UBase_t H15;
    volatile UBase_t H16;
    volatile UBase_t H17;
    volatile UBase_t H18;
    volatile UBase_t H19;
    volatile UBase_t H20;
    volatile UBase_t H21;
    volatile UBase_t H22;
    volatile UBase_t H23;
    volatile UBase_t H24;
    volatile UBase_t H25;
    volatile UBase_t H26;
    volatile UBase_t H27;
    volatile UBase_t H28;
    volatile UBase_t H29;
    volatile UBase_t H30;
    volatile UBase_t H31;
    volatile UBase_t H32;
}EEPROM_BITBANDING_HIDE_t;

typedef volatile struct
{
    volatile UBase_t ME;
    const UBase_t reserved [15UL];
    volatile UBase_t KEY [16UL];
}EEPROM_BITBANDING_DBGME_t;

typedef volatile struct
{
    volatile const UBase_t SIZE [5UL];
    const UBase_t reserved [27UL];
}EEPROM_BITBANDING_PP_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTREGISTER_BITBANDING_H_ */
