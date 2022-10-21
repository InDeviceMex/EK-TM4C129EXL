/**
 *
 * @file WDT_Lock.h
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
 * @verbatim 22 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_LOCK_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_LOCK_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

WDT_nERROR WDT__enIsLocked(WDT_nMODULE enModuleArg, WDT_nBOOLEAN* penLockedArg);
WDT_nERROR WDT__enSetLockState(WDT_nMODULE enModuleArg, WDT_nSTATE enStateArg);
WDT_nERROR WDT__enLock(WDT_nMODULE enModuleArg);
WDT_nERROR WDT__enUnlock(WDT_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_LOCK_H_ */
