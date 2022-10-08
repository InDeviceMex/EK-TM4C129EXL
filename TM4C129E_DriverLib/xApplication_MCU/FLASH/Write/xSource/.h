/**
 *
 * @file FLASH_Write.h
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

#ifndef XAPPLICATION_MCU_FLASH_WRITE_XSOURCE__H_
#define XAPPLICATION_MCU_FLASH_WRITE_XSOURCE__H_


#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(FLASH__enWriteWorld, ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteHalfWorld, ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteByte, ".ramcode")

FLASH_nERROR FLASH__enWriteWorld(UBase_t uxData, UBase_t uxAddress);
FLASH_nERROR FLASH__enWriteHalfWorld(uint16_t u16Data, UBase_t uxAddress);
FLASH_nERROR FLASH__enWriteByte(uint8_t u8Data, UBase_t uxAddress);

#elif defined (__GNUC__ )

FLASH_nERROR FLASH__enWriteWorld(UBase_t uxData, UBase_t uxAddress) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enWriteHalfWorld(uint16_t u16Data, UBase_t uxAddress) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enWriteByte(uint8_t u8Data, UBase_t uxAddress) __attribute__((section(".ramcode")));

#endif


#endif /* XAPPLICATION_MCU_FLASH_WRITE_XSOURCE__H_ */
