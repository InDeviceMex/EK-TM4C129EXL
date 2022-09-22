/**
 *
 * @file FLASH_InterruptRoutine.h
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

#ifndef XAPPLICATION_MCU_FLASH_INTERRUPT_INTERRUPTROUTINE_FLASH_INTERRUPTROUTINE_H_
#define XAPPLICATION_MCU_FLASH_INTERRUPT_INTERRUPTROUTINE_FLASH_INTERRUPTROUTINE_H_

#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Defines.h>
#include <xApplication_MCU/FLASH/Interrupt/InterruptRoutine/xHeader/FLASH_InterruptRoutine_Vector.h>

FLASH_pvfIRQVectorHandler_t FLASH__pvfGetIRQVectorHandler(FLASH_nMODULE enModuleArg);
FLASH_pvfIRQVectorHandler_t* FLASH__pvfGetIRQVectorHandlerPointer(FLASH_nMODULE enModuleArg);

#endif /* XAPPLICATION_MCU_FLASH_INTERRUPT_INTERRUPTROUTINE_FLASH_INTERRUPTROUTINE_H_ */
