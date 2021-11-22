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
        volatile uint32_t FMA;
        FMA_t FMA_Bit;
    };
    union
    {
        volatile uint32_t FMD;
        FMD_t FMD_Bit;
    };
    union
    {
        volatile uint32_t FMC;
        FMC_t FMC_Bit;
    };
    union
    {
        volatile const uint32_t FCRIS;
        FCRIS_t FCRIS_Bit;
    };
    union
    {
        volatile uint32_t FCIM;
        FCIM_t FCIM_Bit;
    };
    union
    {
        volatile uint32_t FCMISC;
        FCMISC_t FCMISC_Bit;
    };
    const uint32_t reserved [2UL];
    union
    {
        volatile uint32_t FMC2;
        FMC2_t FMC2_Bit;
    };
    const uint32_t reserved1 [3UL];
    union
    {
        volatile uint32_t FWBVAL;
        FWBVAL_t FWBVAL_Bit;
    };
    const uint32_t reserved2 [2UL];
    union
    {
        volatile uint32_t FLPEKEY;
        FLPEKEY_t FLPEKEY_Bit;
    };
    const uint32_t reserved3 [48UL];
    union
    {
        volatile uint32_t FWBn [32UL];
        FWB_t FWBn_Bit [32UL];
    };


    const uint32_t reserved4 [912UL];
    union
    {
        volatile const uint32_t FLASHPP;
        FLASHPP_t FLASHPP_Bit;
    };
    union
    {
        volatile const uint32_t SSIZE;
        SSIZE_t SSIZE_Bit;
    };
    union
    {
        volatile const uint32_t FLASHCONF;
        FLASHCONF_t FLASHCONF_Bit;
    };
    union
    {
        volatile const uint32_t ROMSWMAP;
        ROMSWMAP_t ROMSWMAP_Bit;
    };
    union
    {
        volatile const uint32_t FLASHDMASZ;
        FLASHDMASZ_t FLASHDMASZ_Bit;
    };
    union
    {
        volatile const uint32_t FLASHDMAST;
        FLASHDMAST_t FLASHDMAST_Bit;
    };
}FLASH_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTPERIPHERAL_H_ */
