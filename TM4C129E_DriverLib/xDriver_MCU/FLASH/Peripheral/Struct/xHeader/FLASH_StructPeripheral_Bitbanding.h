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
        volatile uint32_t FMA [32UL];
        BITBANDING_FMA_t FMA_Bit;
    };
    union
    {
        volatile uint32_t FMD [32UL];
        BITBANDING_FMD_t FMD_Bit;
    };
    union
    {
        volatile uint32_t FMC [32UL];
        BITBANDING_FMC_t FMC_Bit;
    };
    union
    {
        volatile const uint32_t FCRIS [32UL];
        BITBANDING_FCRIS_t FCRIS_Bit;
    };
    union
    {
        volatile uint32_t FCIM [32UL];
        BITBANDING_FCIM_t FCIM_Bit;
    };
    union
    {
        volatile uint32_t FCMISC [32UL];
        BITBANDING_FCMISC_t FCMISC_Bit;
    };
    const uint32_t reserved [2UL * 32UL];
    union
    {
        volatile uint32_t FMC2 [32UL];
        BITBANDING_FMC2_t FMC2_Bit;
    };
    const uint32_t reserved1 [3UL * 32UL];
    union
    {
        volatile uint32_t FWBVAL [32UL];
        BITBANDING_FWBVAL_t FWBVAL_Bit;
    };
    const uint32_t reserved2 [2UL * 32UL];
    union
    {
        volatile uint32_t FLPEKEY [32UL];
        BITBANDING_FLPEKEY_t FLPEKEY_Bit;
    };
    const uint32_t reserved3 [48UL * 32UL];
    union
    {
        volatile uint32_t FWBn [32UL][32UL];
        BITBANDING_FWB_t FWBn_Bit [32UL];
    };


    const uint32_t reserved4 [912UL * 32UL];
    union
    {
        volatile const uint32_t FLASHPP [32UL];
        BITBANDING_FLASHPP_t FLASHPP_Bit;
    };
    union
    {
        volatile const uint32_t SSIZE [32UL];
        BITBANDING_SSIZE_t SSIZE_Bit;
    };
    union
    {
        volatile const uint32_t FLASHCONF [32UL];
        BITBANDING_FLASHCONF_t FLASHCONF_Bit;
    };
    union
    {
        volatile const uint32_t ROMSWMAP [32UL];
        BITBANDING_ROMSWMAP_t ROMSWMAP_Bit;
    };
    union
    {
        volatile const uint32_t FLASHDMASZ [32UL];
        BITBANDING_FLASHDMASZ_t FLASHDMASZ_Bit;
    };
    union
    {
        volatile const uint32_t FLASHDMAST [32UL];
        BITBANDING_FLASHDMAST_t FLASHDMAST_Bit;
    };
}FLASH_BITBANDING_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTPERIPHERAL_BITBANDING_H_ */
