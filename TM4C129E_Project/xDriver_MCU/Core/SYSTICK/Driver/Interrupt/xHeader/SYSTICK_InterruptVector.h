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
 * @verbatim 18 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CORE_SYSTICK_DRIVER_INTERRUPT_XHEADER_SYSTICK_INTERRUPTVECTOR_H_
#define XDRIVER_MCU_CORE_SYSTICK_DRIVER_INTERRUPT_XHEADER_SYSTICK_INTERRUPTVECTOR_H_

#include <xDriver_MCU/Core/SYSTICK/Peripheral/xHeader/SYSTICK_Enum.h>

void SYSTICK__vEnInterruptVector(SYSTICK_nPRIORITY enPriority);
void SYSTICK__vDisInterruptVector(void);
void SYSTICK__vClearInterruptVector(void);
SYSTICK_nINT_STATUS SYSTICK__enStatusInterruptVector(void);

#endif /* XDRIVER_MCU_CORE_SYSTICK_DRIVER_INTERRUPT_XHEADER_SYSTICK_INTERRUPTVECTOR_H_ */
