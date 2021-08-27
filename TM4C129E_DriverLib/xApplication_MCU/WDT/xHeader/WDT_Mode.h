/**
 *
 * @file WDT_Mode.h
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
 * @verbatim 27 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_WDT_XHEADER_WDT_MODE_H_
#define XAPPLICATION_MCU_WDT_XHEADER_WDT_MODE_H_

#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Defines.h>

WDT_nSTATUS WDT__enSetMode(WDT_nMODULE enModule, WDT_nMODE enMode);
WDT_nSTATUS WDT__enSetModeStruct(WDT_nMODULE enModule, const WDT_MODE_Typedef* pstMode);

WDT_nMODE WDT__enGetMode(WDT_nMODULE enModule);
void WDT__vGetMode(WDT_nMODULE enModule, WDT_MODE_Typedef* pstMode);
WDT_MODE_Typedef* WDT__pstGetMode(WDT_nMODULE enModule);

#endif /* XAPPLICATION_MCU_WDT_XHEADER_WDT_MODE_H_ */
