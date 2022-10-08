/**
 *
 * @file FLASH_Size.h
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
 * @verbatim 22 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_SIZE_H_
#define XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_SIZE_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(FLASH__enGetSize, ".ramcode")
#pragma  CODE_SECTION(FLASH__enGetSizeInKBytes, ".ramcode")
#pragma  CODE_SECTION(FLASH__enGetSizeInBytes, ".ramcode")

#pragma  CODE_SECTION(FLASH__enGetSectorSize, ".ramcode")
#pragma  CODE_SECTION(FLASH__enGetSectorSizeInKBytes, ".ramcode")
#pragma  CODE_SECTION(FLASH__enGetSectorSizeInBytes, ".ramcode")

#pragma  CODE_SECTION(FLASH__enGetEEPROMSectorSize, ".ramcode")
#pragma  CODE_SECTION(FLASH__enGetEEPROMSectorSizeInKBytes, ".ramcode")
#pragma  CODE_SECTION(FLASH__enGetEEPROMSectorSizeInBytes, ".ramcode")

#pragma  CODE_SECTION(FLASH__enGetSRAMSize, ".ramcode")
#pragma  CODE_SECTION(FLASH__enGetSRAMSizeInBytes, ".ramcode")

FLASH_nERROR FLASH__enGetSize(FLASH_nMODULE enModuleArg, UBase_t* puxSizeArg);
FLASH_nERROR FLASH__enGetSizeInKBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInKBytesArg);
FLASH_nERROR FLASH__enGetSizeInBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInBytesArg);

FLASH_nERROR FLASH__enGetSectorSize(FLASH_nMODULE enModuleArg, UBase_t* puxSectorSizeArg);
FLASH_nERROR FLASH__enGetSectorSizeInKBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInKBytesArg);
FLASH_nERROR FLASH__enGetSectorSizeInBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInBytesArg);

FLASH_nERROR FLASH__enGetEEPROMSectorSize(FLASH_nMODULE enModuleArg, UBase_t* puxSectorSizeArg);
FLASH_nERROR FLASH__enGetEEPROMSectorSizeInKBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInKBytesArg);
FLASH_nERROR FLASH__enGetEEPROMSectorSizeInBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInBytesArg);

FLASH_nERROR FLASH__enGetSRAMSize(FLASH_nMODULE enModuleArg, UBase_t* puxSizeArg);
FLASH_nERROR FLASH__enGetSRAMSizeInBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInBytesArg);
#elif defined (__GNUC__ )

FLASH_nERROR FLASH__enGetSize(FLASH_nMODULE enModuleArg, UBase_t* puxSizeArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enGetSizeInKBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInKBytesArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enGetSizeInBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInBytesArg) __attribute__((section(".ramcode")));

FLASH_nERROR FLASH__enGetSectorSize(FLASH_nMODULE enModuleArg, UBase_t* puxSectorSizeArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enGetSectorSizeInKBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInKBytesArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enGetSectorSizeInBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInBytesArg) __attribute__((section(".ramcode")));

FLASH_nERROR FLASH__enGetEEPROMSectorSize(FLASH_nMODULE enModuleArg, UBase_t* puxSectorSizeArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enGetEEPROMSectorSizeInKBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInKBytesArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enGetEEPROMSectorSizeInBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInBytesArg) __attribute__((section(".ramcode")));

FLASH_nERROR FLASH__enGetSRAMSize(FLASH_nMODULE enModuleArg, UBase_t* puxSizeArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enGetSRAMSizeInBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInBytesArg) __attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_SIZE_H_ */
