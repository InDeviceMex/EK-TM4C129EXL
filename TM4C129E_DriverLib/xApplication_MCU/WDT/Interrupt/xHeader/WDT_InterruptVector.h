/**
 *
 * @file WDT_InterruptVector.h
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

#ifndef XAPPLICATION_MCU_WDT_INTERRUPT_XHEADER_WDT_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_WDT_INTERRUPT_XHEADER_WDT_INTERRUPTVECTOR_H_

#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Defines.h>

void WDT__vEnInterruptVector(WDT_nPRIORITY enPriority);
void WDT__vDisInterruptVector(void);

#endif /* XAPPLICATION_MCU_WDT_INTERRUPT_XHEADER_WDT_INTERRUPTVECTOR_H_ */
