/**
 *
 * @file FLASH_InterruptVector.h
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_FLASH_INTERRUPT_XHEADER_FLASH_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_FLASH_INTERRUPT_XHEADER_FLASH_INTERRUPTVECTOR_H_

#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Defines.h>

void FLASH__vEnInterruptVector(FLASH_nPRIORITY enFlashPriority);
void FLASH__vDisInterruptVector(void);

#endif /* XAPPLICATION_MCU_FLASH_INTERRUPT_XHEADER_FLASH_INTERRUPTVECTOR_H_ */
