/**
 *
 * @file WDT_DisInterrupt.h
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

#ifndef XAPPLICATION_MCU_WDT_XHEADER_WDT_DISINTERRUPT_H_
#define XAPPLICATION_MCU_WDT_XHEADER_WDT_DISINTERRUPT_H_

#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Defines.h>

WDT_nERROR WDT__enDisableInterruptSourceByMask(WDT_nMODULE enModuleArg, WDT_nINTMASK enInterruptMaskArg);
WDT_nERROR WDT__enDisableInterruptSourceByNumber(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg);

#endif /* XAPPLICATION_MCU_WDT_XHEADER_WDT_DISINTERRUPT_H_ */
