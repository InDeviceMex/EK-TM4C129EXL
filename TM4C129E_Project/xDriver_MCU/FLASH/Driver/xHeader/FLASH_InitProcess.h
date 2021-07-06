/**
 *
 * @file FLASH_InitProcess.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 28 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_INITPROCESS_H_
#define XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_INITPROCESS_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH__enInitProcess, ".ramcode")

FLASH_nSTATUS FLASH__enInitProcess (uint32_t u32FMC, uint32_t u32Feature);

#elif defined (__GNUC__ )

FLASH_nSTATUS FLASH__enInitProcess (uint32_t u32FMC, uint32_t u32Feature) __attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_INITPROCESS_H_ */
