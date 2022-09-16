/**
 *
 * @file EEPROM_StructRegister.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTREGISTER_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

typedef volatile struct
{
    volatile const uint32_t WORDCNT :16;
    volatile const uint32_t BLKCNT :11;
    const uint32_t reserved :5;
}EEPROM_SIZE_t;

typedef volatile struct
{
    volatile uint32_t BLOCK :16;
    const uint32_t reserved :16;
}EEPROM_BLOCK_t;

typedef volatile struct
{
    volatile uint32_t OFFSET :4;
    const uint32_t reserved :28;
}EEPROM_OFFSET_t;

typedef volatile struct
{
    volatile uint32_t VALUE :32;
}EEPROM_RDWR_t;

typedef volatile struct
{
    volatile uint32_t VALUE :32;
}EEPROM_RDWRINC_t;

typedef volatile struct
{
    volatile const uint32_t WORKING :1;
    const uint32_t reserved :1;
    volatile const uint32_t WKERASE :1;
    volatile const uint32_t WKCOPY :1;
    volatile const uint32_t NOPERM :1;
    volatile const uint32_t WRBUSY :1;
    const uint32_t reserved1 :26;
}EEPROM_DONE_t;

typedef volatile struct
{
    volatile uint32_t START :1;
    volatile const uint32_t EREQ :1;
    volatile const uint32_t ERETRY :1;
    volatile const uint32_t PRETRY :1;
    const uint32_t reserved :28;
}EEPROM_SUPP_t;

typedef volatile struct
{
    volatile uint32_t UNLOCK :32;
}EEPROM_UNLOCK_t;

typedef volatile struct
{
    volatile uint32_t PROT :3;
    volatile uint32_t ACC :1;
    const uint32_t reserved :28;
}EEPROM_PROT_t;

typedef volatile struct
{
    volatile uint32_t PASS :32;
}EEPROM_PASS_t;

typedef volatile struct
{
    volatile uint32_t INT :1;
    const uint32_t reserved :31;
}EEPROM_INT_t;

typedef volatile struct
{
    const uint32_t reserved :1;
    volatile uint32_t H1 :1;
    volatile uint32_t H2 :1;
    volatile uint32_t H3 :1;
    volatile uint32_t H4 :1;
    volatile uint32_t H5 :1;
    volatile uint32_t H6 :1;
    volatile uint32_t H7 :1;
    volatile uint32_t H8 :1;
    volatile uint32_t H9 :1;
    volatile uint32_t H10 :1;
    volatile uint32_t H11 :1;
    volatile uint32_t H12 :1;
    volatile uint32_t H13 :1;
    volatile uint32_t H14 :1;
    volatile uint32_t H15 :1;
    volatile uint32_t H16 :1;
    volatile uint32_t H17 :1;
    volatile uint32_t H18 :1;
    volatile uint32_t H19 :1;
    volatile uint32_t H20 :1;
    volatile uint32_t H21 :1;
    volatile uint32_t H22 :1;
    volatile uint32_t H23 :1;
    volatile uint32_t H24 :1;
    volatile uint32_t H25 :1;
    volatile uint32_t H26 :1;
    volatile uint32_t H27 :1;
    volatile uint32_t H28 :1;
    volatile uint32_t H29 :1;
    volatile uint32_t H30 :1;
    volatile uint32_t H31 :1;
    volatile uint32_t H32 :1;
}EEPROM_HIDE_t;

typedef volatile struct
{
    volatile uint32_t ME :1;
    const uint32_t reserved :15;
    volatile uint32_t KEY :16;
}EEPROM_DBGME_t;

typedef volatile struct
{
    volatile const uint32_t SIZE :5;
    const uint32_t reserved :27;
}EEPROM_PP_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTREGISTER_H_ */
