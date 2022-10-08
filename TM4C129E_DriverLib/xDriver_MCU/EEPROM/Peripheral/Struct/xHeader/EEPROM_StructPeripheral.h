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
        volatile const UBase_t SIZE;
        EEPROM_SIZE_t SIZE_Bit;
    };
    union
    {
        volatile UBase_t BLOCK;
        EEPROM_BLOCK_t BLOCK_Bit;
    };
    union
    {
        volatile UBase_t OFFSET;
        EEPROM_OFFSET_t OFFSET_Bit;
    };
    const UBase_t reserved [1UL];
    union
    {
        volatile UBase_t RDWR;
        EEPROM_RDWR_t RDWR_Bit;
    };
    union
    {
        volatile UBase_t RDWRINC;
        EEPROM_RDWRINC_t RDWRINC_Bit;
    };
    union
    {
        volatile const UBase_t DONE;
        EEPROM_DONE_t DONE_Bit;
    };
    union
    {
        volatile UBase_t SUPP;
        EEPROM_SUPP_t SUPP_Bit;
    };
    union
    {
        volatile UBase_t UNLOCK;
        EEPROM_UNLOCK_t UNLOCK_Bit;
    };
    const UBase_t reserved1 [3UL];
    union
    {
        volatile UBase_t PROT;
        EEPROM_PROT_t PROT_Bit;
    };
    union
    {
        volatile UBase_t PASS0;
        EEPROM_PASS_t PASS0_Bit;
    };
    union
    {
        volatile UBase_t PASS1;
        EEPROM_PASS_t PASS1_Bit;
    };
    union
    {
        volatile UBase_t PASS2;
        EEPROM_PASS_t PASS2_Bit;
    };
    union
    {
        volatile UBase_t INT;
        EEPROM_INT_t INT_Bit;
    };
    const UBase_t reserved2 [3UL];
    union
    {
        volatile UBase_t HIDE;
        EEPROM_HIDE_t HIDE_Bit;
    };
    const UBase_t reserved3 [11UL];
    union
    {
        volatile UBase_t DBGME;
        EEPROM_DBGME_t DBGME_Bit;
    };
    const UBase_t reserved4 [975UL];
    union
    {
        volatile const UBase_t PP;
        EEPROM_PP_t PP_Bit;
    };
}EEPROM_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTPERIPHERAL_H_ */
