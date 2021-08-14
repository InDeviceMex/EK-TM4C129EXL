/**
 *
 * @file FLASH_InitProcess.h
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

#ifndef XAPPLICATION_MCU_FLASH_XHEADER_FLASH_INITPROCESS_H_
#define XAPPLICATION_MCU_FLASH_XHEADER_FLASH_INITPROCESS_H_

#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Defines.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH__enInitProcess, ".ramcode")

FLASH_nSTATUS FLASH__enInitProcess (uint32_t u32FMC, uint32_t u32Feature);

#elif defined (__GNUC__ )

FLASH_nSTATUS FLASH__enInitProcess (uint32_t u32FMC, uint32_t u32Feature) __attribute__((section(".ramcode")));

#endif

#endif /* XAPPLICATION_MCU_FLASH_XHEADER_FLASH_INITPROCESS_H_ */
