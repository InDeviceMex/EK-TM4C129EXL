/**
 *
 * @file FLASH_StructPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/FLASH/Peripheral/Struct/xHeader/FLASH_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t ADDRESS;
        FLASH_ADDRESS_t ADDRESS_Bit;
    };
    union
    {
        volatile uint32_t DATA;
        FLASH_DATA_t DATA_Bit;
    };
    union
    {
        volatile uint32_t CTL;
        FLASH_CTL_t CTL_Bit;
    };
    union
    {
        volatile const uint32_t RIS;
        FLASH_RIS_t RIS_Bit;
    };
    union
    {
        volatile uint32_t IM;
        FLASH_IM_t IM_Bit;
    };
    union
    {
        volatile uint32_t MISC;
        FLASH_MISC_t MISC_Bit;
    };
    const uint32_t reserved [2UL];
    union
    {
        volatile uint32_t CTL2;
        FLASH_CTL2_t CTL2_Bit;
    };
    const uint32_t reserved1 [3UL];
    union
    {
        volatile uint32_t WBVAL;
        FLASH_WBVAL_t WBVAL_Bit;
    };
    const uint32_t reserved2 [2UL];
    union
    {
        volatile uint32_t PEKEY;
        FLASH_PEKEY_t PEKEY_Bit;
    };
    const uint32_t reserved3 [48UL];
    union
    {
        volatile uint32_t WBn [32UL];
        FLASH_WB_t WBn_Bit [32UL];
    };


    const uint32_t reserved4 [912UL];
    union
    {
        volatile const uint32_t PP;
        FLASH_PP_t PP_Bit;
    };
    union
    {
        volatile const uint32_t SRAMSIZE;
        SRAM_SIZE_t SRAMSIZE_Bit;
    };
    union
    {
        volatile const uint32_t CONF;
        FLASH_CONF_t CONF_Bit;
    };
    union
    {
        volatile const uint32_t ROMSWMAP;
        ROM_SWMAP_t ROMSWMAP_Bit;
    };
    union
    {
        volatile const uint32_t DMASZ;
        FLASH_DMASZ_t DMASZ_Bit;
    };
    union
    {
        volatile const uint32_t DMAST;
        FLASH_DMAST_t DMAST_Bit;
    };
}FLASH_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTPERIPHERAL_H_ */
