/**
 *
 * @file WDT_Stall.h
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
 * @verbatim 23 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_STALL_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_STALL_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

WDT_nERROR WDT__enSetStallMode(WDT_nMODULE enModuleArg, WDT_nSTALL enModeArg);
WDT_nERROR WDT__enGetStallMode(WDT_nMODULE enModuleArg, WDT_nSTALL* penModeArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_STALL_H_ */
