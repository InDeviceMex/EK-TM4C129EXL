/**
 *
 * @file SYSTICK_InterruptVector.h
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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_CORE_SYSTICK_INTERRUPT_XHEADER_SYSTICK_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_CORE_SYSTICK_INTERRUPT_XHEADER_SYSTICK_INTERRUPTVECTOR_H_

#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Defines.h>

void SYSTICK__vEnInterruptVector(SYSTICK_nPRIORITY enPriority);
void SYSTICK__vDisInterruptVector(void);
void SYSTICK__vClearInterruptVector(void);
SYSTICK_nINT_STATUS SYSTICK__enStatusInterruptVector(void);

#endif /* XAPPLICATION_MCU_CORE_SYSTICK_INTERRUPT_XHEADER_SYSTICK_INTERRUPTVECTOR_H_ */
