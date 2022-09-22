/**
 *
 * @file FLASH_StructPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/FLASH/Peripheral/Struct/xHeader/FLASH_StructRegister_Bitbanding.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t ADDRESS [32UL];
        FLASH_BITBANDING_ADDRESS_t ADDRESS_Bit;
    };
    union
    {
        volatile uint32_t DATA [32UL];
        FLASH_BITBANDING_DATA_t DATA_Bit;
    };
    union
    {
        volatile uint32_t CTL [32UL];
        FLASH_BITBANDING_CTL_t CTL_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        FLASH_BITBANDING_RIS_t RIS_Bit;
    };
    union
    {
        volatile uint32_t IM [32UL];
        FLASH_BITBANDING_IM_t IM_Bit;
    };
    union
    {
        volatile uint32_t MISC [32UL];
        FLASH_BITBANDING_MISC_t MISC_Bit;
    };
    const uint32_t reserved [2UL * 32UL];
    union
    {
        volatile uint32_t CTL2 [32UL];
        FLASH_BITBANDING_CTL2_t CTL2_Bit;
    };
    const uint32_t reserved1 [3UL * 32UL];
    union
    {
        volatile uint32_t WBVAL [32UL];
        FLASH_BITBANDING_WBVAL_t WBVAL_Bit;
    };
    const uint32_t reserved2 [2UL * 32UL];
    union
    {
        volatile uint32_t PEKEY [32UL];
        FLASH_BITBANDING_PEKEY_t PEKEY_Bit;
    };
    const uint32_t reserved3 [48UL * 32UL];
    union
    {
        volatile uint32_t WBn [32UL][32UL];
        FLASH_BITBANDING_WB_t WBn_Bit [32UL];
    };


    const uint32_t reserved4 [912UL * 32UL];
    union
    {
        volatile const uint32_t PP [32UL];
        FLASH_BITBANDING_PP_t PP_Bit;
    };
    union
    {
        volatile const uint32_t SRAMSIZE [32UL];
        SRAM_BITBANDING_SIZE_t SRAMSIZE_Bit;
    };
    union
    {
        volatile const uint32_t CONF [32UL];
        FLASH_BITBANDING_CONF_t CONF_Bit;
    };
    union
    {
        volatile const uint32_t ROMSWMAP [32UL];
        ROM_BITBANDING_SWMAP_t ROMSWMAP_Bit;
    };
    union
    {
        volatile const uint32_t DMASZ [32UL];
        FLASH_BITBANDING_DMASZ_t DMASZ_Bit;
    };
    union
    {
        volatile const uint32_t DMAST [32UL];
        FLASH_BITBANDING_DMAST_t DMAST_Bit;
    };
}FLASH_BITBANDING_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTPERIPHERAL_BITBANDING_H_ */
