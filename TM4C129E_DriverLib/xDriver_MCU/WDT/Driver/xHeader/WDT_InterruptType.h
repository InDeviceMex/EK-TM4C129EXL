/**
 *
 * @file WDT_InterruptType.h
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

#ifndef XDRIVER_MCU_WDT_DRIVER_XHEADER_WDT_INTERRUPTTYPE_H_
#define XDRIVER_MCU_WDT_DRIVER_XHEADER_WDT_INTERRUPTTYPE_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

void WDT__vSetInterruptSourceType(WDT_nMODULE enModule, WDT_nINT_TYPE enType);
WDT_nINT_TYPE WDT__enGetInterruptSourceType(WDT_nMODULE enModule);

#endif /* XDRIVER_MCU_WDT_DRIVER_XHEADER_WDT_INTERRUPTTYPE_H_ */
