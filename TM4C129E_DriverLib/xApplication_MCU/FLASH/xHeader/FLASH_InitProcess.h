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

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(FLASH__enInitProcessAndWait, ".ramcode")

FLASH_nERROR FLASH__enInitProcessAndWait(FLASH_nMODULE enModuleArg, FLASH_nPROCESS enProcessArg);

#elif defined (__GNUC__ )

FLASH_nERROR FLASH__enInitProcessAndWait(FLASH_nMODULE enModuleArg, FLASH_nPROCESS enProcessArg) __attribute__((section(".ramcode")));

#endif

#endif /* XAPPLICATION_MCU_FLASH_XHEADER_FLASH_INITPROCESS_H_ */
