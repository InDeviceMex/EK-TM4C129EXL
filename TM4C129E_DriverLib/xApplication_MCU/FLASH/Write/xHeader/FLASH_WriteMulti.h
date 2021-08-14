/**
 *
 * @file FLASH_WriteMulti.h
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

#ifndef XAPPLICATION_MCU_FLASH_WRITE_XHEADER_FLASH_WRITEMULTI_H_
#define XAPPLICATION_MCU_FLASH_WRITE_XHEADER_FLASH_WRITEMULTI_H_

#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Defines.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH__enWriteMultiWorld, ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteMultiHalfWorld, ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteMultiByte, ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteMultiWorldConstant, ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteMultiHalfWorldConstant, ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteMultiByteConstant, ".ramcode")

FLASH_nSTATUS FLASH__enWriteMultiWorld(uint32_t* pu32Data,
                                       uint32_t u32Address,
                                       uint32_t u32Count);
FLASH_nSTATUS FLASH__enWriteMultiHalfWorld(uint16_t* pu16Data,
                                           uint32_t u32Address,
                                           uint32_t u32Count);
FLASH_nSTATUS FLASH__enWriteMultiByte(uint8_t* pu8Data,
                                      uint32_t u32Address,
                                      uint32_t u32Count);

FLASH_nSTATUS FLASH__enWriteMultiWorldConstant(uint32_t u32Data,
                                               uint32_t u32Address,
                                               uint32_t u32Count);
FLASH_nSTATUS FLASH__enWriteMultiHalfWorldConstant(uint16_t u16Data,
                                                   uint32_t u32Address,
                                                   uint32_t u32Count);
FLASH_nSTATUS FLASH__enWriteMultiByteConstant(uint8_t u8Data,
                                              uint32_t u32Address,
                                              uint32_t u32Count);

#elif defined (__GNUC__ )

__attribute__((section(".ramcode")))
FLASH_nSTATUS FLASH__enWriteMultiWorld(uint32_t* pu32Data,
                                       uint32_t u32Address,
                                       uint32_t u32Count) ;
__attribute__((section(".ramcode")))
FLASH_nSTATUS FLASH__enWriteMultiHalfWorld(uint16_t* pu16Data,
                                           uint32_t u32Address,
                                           uint32_t u32Count);
__attribute__((section(".ramcode")))
FLASH_nSTATUS FLASH__enWriteMultiByte(uint8_t* pu8Data,
                                      uint32_t u32Address,
                                      uint32_t u32Count);

__attribute__((section(".ramcode")))
FLASH_nSTATUS FLASH__enWriteMultiWorldConstant(uint32_t u32Data,
                                               uint32_t u32Address,
                                               uint32_t u32Count);
__attribute__((section(".ramcode")))
FLASH_nSTATUS FLASH__enWriteMultiHalfWorldConstant(uint16_t u16Data,
                                                   uint32_t u32Address,
                                                   uint32_t u32Count);
__attribute__((section(".ramcode")))
FLASH_nSTATUS FLASH__enWriteMultiByteConstant(uint8_t u8Data,
                                              uint32_t u32Address,
                                              uint32_t u32Count);

#endif

#endif /* XAPPLICATION_MCU_FLASH_WRITE_XHEADER_FLASH_WRITEMULTI_H_ */
