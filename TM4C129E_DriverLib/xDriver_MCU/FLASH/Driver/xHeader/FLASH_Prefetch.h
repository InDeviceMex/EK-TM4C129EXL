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

#pragma  CODE_SECTION(FLASH__enClearPrefetchBuffer, ".ramcode")

#pragma  CODE_SECTION(FLASH__enIsPrefetchDualModeAvailable, ".ramcode")
#pragma  CODE_SECTION(FLASH__enSetPrefetchMode, ".ramcode")
#pragma  CODE_SECTION(FLASH__enGetPrefetchMode, ".ramcode")

#pragma  CODE_SECTION(FLASH__enEnablePrefetch, ".ramcode")
#pragma  CODE_SECTION(FLASH__enDisablePrefetch, ".ramcode")

#pragma  CODE_SECTION(FLASH__enSetPrefetchState, ".ramcode")

#pragma  CODE_SECTION(FLASH__enIsMirrorModeAvailable, ".ramcode")
#pragma  CODE_SECTION(FLASH__enSetMirrorMode, ".ramcode")
#pragma  CODE_SECTION(FLASH__enGetMirrorMode, ".ramcode")

FLASH_nERROR FLASH__enClearPrefetchBuffer(FLASH_nMODULE enModuleArg);

FLASH_nERROR FLASH__enIsPrefetchDualModeAvailable(FLASH_nMODULE enModuleArg, FLASH_nBOOLEAN* penStatusArg);
FLASH_nERROR FLASH__enSetPrefetchMode(FLASH_nMODULE enModuleArg, FLASH_nPREFETCH_MODE enModeArg);
FLASH_nERROR FLASH__enGetPrefetchMode(FLASH_nMODULE enModuleArg, FLASH_nPREFETCH_MODE* penModeArg);

FLASH_nERROR FLASH__enEnablePrefetch(FLASH_nMODULE enModuleArg);
FLASH_nERROR FLASH__enDisablePrefetch(FLASH_nMODULE enModuleArg);

FLASH_nERROR FLASH__enSetPrefetchState(FLASH_nMODULE enModuleArg, FLASH_nPREFETCH_STATE enStateArg);

FLASH_nERROR FLASH__enIsMirrorModeAvailable(FLASH_nMODULE enModuleArg, FLASH_nBOOLEAN* penStatusArg);
FLASH_nERROR FLASH__enSetMirrorMode(FLASH_nMODULE enModuleArg, FLASH_nSTATE enStateArg);
FLASH_nERROR FLASH__enGetMirrorMode(FLASH_nMODULE enModuleArg, FLASH_nSTATE* penStateArg);

#elif defined (__GNUC__ )


FLASH_nERROR FLASH__enClearPrefetchBuffer(FLASH_nMODULE enModuleArg);

FLASH_nERROR FLASH__enIsPrefetchDualModeAvailable(FLASH_nMODULE enModuleArg, FLASH_nBOOLEAN* penStatusArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enSetPrefetchMode(FLASH_nMODULE enModuleArg, FLASH_nPREFETCH_MODE enModeArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enGetPrefetchMode(FLASH_nMODULE enModuleArg, FLASH_nPREFETCH_MODE* penModeArg) __attribute__((section(".ramcode")));

FLASH_nERROR FLASH__enEnablePrefetch(FLASH_nMODULE enModuleArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enDisablePrefetch(FLASH_nMODULE enModuleArg) __attribute__((section(".ramcode")));

FLASH_nERROR FLASH__enSetPrefetchState(FLASH_nMODULE enModuleArg, FLASH_nPREFETCH_STATE enStateArg) __attribute__((section(".ramcode")));

FLASH_nERROR FLASH__enIsMirrorModeAvailable(FLASH_nMODULE enModuleArg, FLASH_nBOOLEAN* penStatusArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enSetMirrorMode(FLASH_nMODULE enModuleArg, FLASH_nSTATE enStateArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enGetMirrorMode(FLASH_nMODULE enModuleArg, FLASH_nSTATE* penStateArg) __attribute__((section(".ramcode"))) __attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_PREFETCH_H_ */
