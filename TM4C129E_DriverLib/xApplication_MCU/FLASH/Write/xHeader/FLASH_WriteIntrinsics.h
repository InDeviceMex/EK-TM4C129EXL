/**
 *
 * @file FLASH_WriteIntrinsics.h
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
 * @verbatim 14 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_FLASH_WRITE_XHEADER_FLASH_WRITEINTRINSICS_H_
#define XAPPLICATION_MCU_FLASH_WRITE_XHEADER_FLASH_WRITEINTRINSICS_H_

#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Defines.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(FLASH__enWriteWord, ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteBuffer, ".ramcode")

FLASH_nERROR FLASH__enWriteWord(FLASH_nMODULE enModuleArg, uint32_t u32DataArg, uint32_t u32AddressArg);
FLASH_nERROR FLASH__enWriteBuffer(FLASH_nMODULE enModuleArg, const uint32_t* pu32Data, uint32_t u32AddressArg, uint32_t* pu32Count);

#elif defined (__GNUC__ )

FLASH_nERROR FLASH__enWriteWord(FLASH_nMODULE enModuleArg, uint32_t u32DataArg, uint32_t u32AddressArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enWriteBuffer(FLASH_nMODULE enModuleArg, const uint32_t* pu32Data, uint32_t u32AddressArg, uint32_t* pu32Count) __attribute__((section(".ramcode")));

#endif

#endif /* XAPPLICATION_MCU_FLASH_WRITE_XHEADER_FLASH_WRITEINTRINSICS_H_ */
