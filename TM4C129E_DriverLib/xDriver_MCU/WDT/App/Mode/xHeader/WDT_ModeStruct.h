/**
 *
 * @file WDT_ModeStruct.h
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
 * @verbatim 24 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_APP_WDT_MODE_WDT_MODESTRUCT_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_APP_WDT_MODE_WDT_MODESTRUCT_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

void WDT__vCreateModeStructPointer(WDT_nMODE enMode, WDT_MODE_Typedef* pstMode);
WDT_MODE_Typedef* WDT__pstCreateModeStruct(WDT_nMODE enMode);

void WDT__vDeleteModeStruct(WDT_MODE_Typedef* pstMode);

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_APP_WDT_MODE_WDT_MODESTRUCT_H_ */
