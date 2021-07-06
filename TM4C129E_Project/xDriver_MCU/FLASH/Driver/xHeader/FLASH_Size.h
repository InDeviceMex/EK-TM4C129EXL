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

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH__u32GetSize, ".ramcode")
#pragma  CODE_SECTION(FLASH__u32GetSectorSize, ".ramcode")

uint32_t FLASH__u32GetSize (void);
uint32_t FLASH__u32GetSectorSize (void);

#elif defined (__GNUC__ )

uint32_t FLASH__u32GetSize (void) __attribute__((section(".ramcode")));
uint32_t FLASH__u32GetSectorSize (void) __attribute__((section(".ramcode")));

#endif




#endif /* XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_SIZE_H_ */
