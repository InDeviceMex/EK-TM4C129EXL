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

WDT_nERROR WDT__enSetInterruptSourceType(WDT_nMODULE enModuleArg, WDT_nINT_TYPE enTypeArg);
WDT_nERROR WDT__enGetInterruptSourceType(WDT_nMODULE enModuleArg, WDT_nINT_TYPE* penTypeArg);

#endif /* XDRIVER_MCU_WDT_DRIVER_XHEADER_WDT_INTERRUPTTYPE_H_ */
