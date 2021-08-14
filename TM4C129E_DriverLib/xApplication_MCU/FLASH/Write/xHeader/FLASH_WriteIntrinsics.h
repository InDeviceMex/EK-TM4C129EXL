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

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH__enWrite, ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteBuf, ".ramcode")

FLASH_nSTATUS FLASH__enWrite(uint32_t u32Data, uint32_t u32Address);
FLASH_nSTATUS FLASH__enWriteBuf(const uint32_t* pu32Data,
                                uint32_t u32Address, uint32_t u32Count);

#elif defined (__GNUC__ )

__attribute__((section(".ramcode")))
FLASH_nSTATUS FLASH__enWrite(uint32_t u32Data, uint32_t u32Address);
__attribute__((section(".ramcode")))
FLASH_nSTATUS FLASH__enWriteBuf(const uint32_t* pu32Data, uint32_t u32Address, uint32_t u32Count);

#endif

#endif /* XAPPLICATION_MCU_FLASH_WRITE_XHEADER_FLASH_WRITEINTRINSICS_H_ */
