/*
 * FLASH_Wait.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WAIT_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WAIT_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(FLASH__enWait, ".ramcode")

FLASH_nERROR FLASH__enWait(FLASH_nMODULE enModuleArg, FLASH_nPROCESS enProcessArg, UBase_t uxTimeoutArg);

#elif defined (__GNUC__ )

FLASH_nERROR FLASH__enWait(FLASH_nMODULE enModuleArg, FLASH_nPROCESS enProcessArg, UBase_t uxTimeoutArg) __attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WAIT_H_ */
