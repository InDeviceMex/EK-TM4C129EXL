/**
 *
 * @file FLASH_Process.h
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
 * @verbatim 19 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_PROCESS_H_
#define XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_PROCESS_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(FLASH__enInitProcess, ".ramcode")
#pragma  CODE_SECTION(FLASH__enIsProcessOngoing, ".ramcode")

FLASH_nERROR FLASH__enInitProcess(FLASH_nMODULE enModuleArg, uint32_t u32KeyArg, FLASH_nPROCESS enProcessArg);
FLASH_nERROR FLASH__enIsProcessOngoing(FLASH_nMODULE enModuleArg, FLASH_nPROCESS enProcessArg, FLASH_nSTATUS* penStatusArg);

#elif defined (__GNUC__ )

FLASH_nERROR FLASH__enInitProcess(FLASH_nMODULE enModuleArg, uint32_t u32KeyArg, FLASH_nPROCESS enProcessArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enIsProcessOngoing(FLASH_nMODULE enModuleArg, FLASH_nPROCESS enProcessArg, FLASH_nSTATUS* penStatusArg) __attribute__((section(".ramcode")));

#endif





#endif /* XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_PROCESS_H_ */
