/**
 *
 * @file WDT_Ready.h
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
 * @verbatim 26 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_WDT_INTRINSICS_XHEADER_WDT_READY_H_
#define XAPPLICATION_MCU_WDT_INTRINSICS_XHEADER_WDT_READY_H_

#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Defines.h>

void WDT__vReset(WDT_nMODULE enModule);
void WDT__vSetReady(WDT_nMODULE enModule);
void WDT__vClearReady(WDT_nMODULE enModule);
WDT_nSTATUS WDT__enIsReady(WDT_nMODULE enModule);

#endif /* XAPPLICATION_MCU_WDT_INTRINSICS_XHEADER_WDT_READY_H_ */
