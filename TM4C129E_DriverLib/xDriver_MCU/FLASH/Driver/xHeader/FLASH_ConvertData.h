/**
 *
 * @file FLASH_ConvertData.h
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
 * @verbatim 20 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_CONVERTDATA_H_
#define XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_CONVERTDATA_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(FLASH__enExtractData, ".ramcode")
#pragma  CODE_SECTION(FLASH__enReplaceData, ".ramcode")
#pragma  CODE_SECTION(FLASH_enIsDataErased, ".ramcode")

FLASH_nERROR FLASH__enExtractData(void* pvDataExtractedArg, uint32_t* pu32InitialDataArg,uint32_t u32AddressArg, FLASH_nVARIABLE enVariableTypeArg);
FLASH_nERROR FLASH__enReplaceData(void* pvDataOutArg, uint32_t u32DataToReplaceArg,uint32_t u32AddressArg, FLASH_nVARIABLE enVariableTypeArg);
FLASH_nERROR FLASH_enIsDataErased(uint32_t u32AddressArg, FLASH_nVARIABLE enVariableTypeArg, FLASH_nERASED* penErrasedArg);

#elif defined (__GNUC__ )

FLASH_nERROR FLASH__enExtractData(void* pvDataExtractedArg, uint32_t* pu32InitialDataArg,uint32_t u32AddressArg, FLASH_nVARIABLE enVariableTypeArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enReplaceData(void* pvDataOutArg, uint32_t u32DataToReplaceArg,uint32_t u32AddressArg, FLASH_nVARIABLE enVariableTypeArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH_enIsDataErased(uint32_t u32AddressArg, FLASH_nVARIABLE enVariableTypeArg, FLASH_nERASED* penErrasedArg) __attribute__((section(".ramcode")));

#endif





#endif /* XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_CONVERTDATA_H_ */
