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
        volatile const uint32_t SIZE [32UL];
        EEPROM_BITBANDING_SIZE_t SIZE_Bit;
    };
    union
    {
        volatile uint32_t BLOCK [32UL];
        EEPROM_BITBANDING_BLOCK_t BLOCK_Bit;
    };
    union
    {
        volatile uint32_t OFFSET [32UL];
        EEPROM_BITBANDING_OFFSET_t OFFSET_Bit;
    };
    const uint32_t reserved [1UL * 32UL];
    union
    {
        volatile uint32_t RDWR [32UL];
        EEPROM_BITBANDING_RDWR_t RDWR_Bit;
    };
    union
    {
        volatile uint32_t RDWRINC [32UL];
        EEPROM_BITBANDING_RDWRINC_t RDWRINC_Bit;
    };
    union
    {
        volatile const uint32_t DONE [32UL];
        EEPROM_BITBANDING_DONE_t DONE_Bit;
    };
    union
    {
        volatile uint32_t SUPP [32UL];
        EEPROM_BITBANDING_SUPP_t SUPP_Bit;
    };
    union
    {
        volatile uint32_t UNLOCK [32UL];
        EEPROM_BITBANDING_UNLOCK_t UNLOCK_Bit;
    };
    const uint32_t reserved1 [3UL * 32UL];
    union
    {
        volatile uint32_t PROT [32UL];
        EEPROM_BITBANDING_PROT_t PROT_Bit;
    };
    union
    {
        volatile uint32_t PASS0 [32UL];
        EEPROM_BITBANDING_PASS_t PASS0_Bit;
    };
    union
    {
        volatile uint32_t PASS1 [32UL];
        EEPROM_BITBANDING_PASS_t PASS1_Bit;
    };
    union
    {
        volatile uint32_t PASS2 [32UL];
        EEPROM_BITBANDING_PASS_t PASS2_Bit;
    };
    union
    {
        volatile uint32_t INT [32UL];
        EEPROM_BITBANDING_INT_t INT_Bit;
    };
    const uint32_t reserved2 [3UL * 32UL];
    union
    {
        volatile uint32_t HIDE [32UL];
        EEPROM_BITBANDING_HIDE_t HIDE_Bit;
    };
    const uint32_t reserved3 [11UL * 32UL];
    union
    {
        volatile uint32_t DBGME [32UL];
        EEPROM_BITBANDING_DBGME_t DBGME_Bit;
    };
    const uint32_t reserved4 [975UL * 32UL];
    union
    {
        volatile const uint32_t PP [32UL];
        EEPROM_BITBANDING_PP_t PP_Bit;
    };
}EEPROM_BITBANDING_t;




#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_STRUCT_EEPROM_STRUCTPERIPHERAL_BITBANDING_H_ */
