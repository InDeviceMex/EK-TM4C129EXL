/**
 *
 * @file FLASH_Address.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 19 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_ADDRESS_H_
#define XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_ADDRESS_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(FLASH__enSetAddress, ".ramcode")
#pragma  CODE_SECTION(FLASH__enGetAddress, ".ramcode")
#pragma  CODE_SECTION(FLASH__enStartAddressToErase, ".ramcode")


FLASH_nERROR FLASH__enSetAddress(FLASH_nMODULE enModuleArg, UBase_t uxAddressArg);
FLASH_nERROR FLASH__enGetAddress(FLASH_nMODULE enModuleArg, UBase_t* puxAddressArg);

FLASH_nERROR FLASH__enStartAddressToErase(FLASH_nMODULE enModuleArg, UBase_t uxAddressArg);
#elif defined (__GNUC__ )

FLASH_nERROR FLASH__enSetAddress(FLASH_nMODULE enModuleArg, UBase_t uxAddressArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enGetAddress(FLASH_nMODULE enModuleArg, UBase_t* puxAddressArg) __attribute__((section(".ramcode")));

FLASH_nERROR FLASH__enStartAddressToErase(FLASH_nMODULE enModuleArg, UBase_t uxAddressArg) __attribute__((section(".ramcode")));

#endif




#endif /* XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_ADDRESS_H_ */
