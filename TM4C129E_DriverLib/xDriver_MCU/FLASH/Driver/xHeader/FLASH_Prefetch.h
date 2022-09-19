/**
 *
 * @file FLASH_Prefetch.h
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

#ifndef XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_PREFETCH_H_
#define XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_PREFETCH_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(FLASH__vSetPrefetchMode, ".ramcode")
#pragma  CODE_SECTION(FLASH__enGetPrefetchMode, ".ramcode")
#pragma  CODE_SECTION(FLASH__vSetPrefetchEnable, ".ramcode")
#pragma  CODE_SECTION(FLASH__vClearPrefetchBuffer, ".ramcode")
#pragma  CODE_SECTION(FLASH__vSetMirrorMode, ".ramcode")
#pragma  CODE_SECTION(FLASH__enGetMirrorMode, ".ramcode")

void FLASH__vSetPrefetchMode (FLASH_nPREFETCH_MODE enPrefetchMode);
FLASH_nPREFETCH_MODE FLASH__enGetPrefetchMode (void);
void FLASH__vSetPrefetchEnable (FLASH_nSTATE enPrefetchEnable);
void FLASH__vClearPrefetchBuffer (void);
void FLASH__vSetMirrorMode (FLASH_nSTATE enMirrorEnable);
FLASH_nSTATE FLASH__enGetMirrorMode (void);

#elif defined (__GNUC__ )


void FLASH__vSetPrefetchMode (FLASH_nPREFETCH_MODE enPrefetchMode) __attribute__((section(".ramcode")));
FLASH_nPREFETCH_MODE FLASH__enGetPrefetchMode (void) __attribute__((section(".ramcode")));
void FLASH__vSetPrefetchEnable (FLASH_nSTATE enPrefetchEnable) __attribute__((section(".ramcode")));
void FLASH__vClearPrefetchBuffer (void) __attribute__((section(".ramcode")));
void FLASH__vSetMirrorMode (FLASH_nSTATE enMirrorEnable) __attribute__((section(".ramcode")));
FLASH_nSTATE FLASH__enGetMirrorMode (void) __attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_PREFETCH_H_ */
