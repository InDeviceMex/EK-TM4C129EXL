/**
 *
 * @file SCB_InterruptRoutine_Source.h
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
 * @verbatim 15 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_CORE_SCB_INTERRUPT_INTERRUPTROUTINE_XHEADER_SCB_INTERRUPTROUTINE_SOURCE_H_
#define XAPPLICATION_MCU_CORE_SCB_INTERRUPT_INTERRUPTROUTINE_XHEADER_SCB_INTERRUPTROUTINE_SOURCE_H_

#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Defines.h>

void (**SCB_BusFault__pvfGetIRQSourceHandlerPointer(SCB_nBUS_BIT enBusFaultBit))(void);
void (*SCB_BusFault__pvfGetIRQSourceHandler(SCB_nBUS_BIT enBusFaultBit))(void);

void (**SCB_UsageFault__pvfGetIRQSourceHandlerPointer(SCB_nUSAGE_BIT enUsageFaultBit))(void);
void (*SCB_UsageFault__pvfGetIRQSourceHandler(SCB_nUSAGE_BIT enUsageFaultBit))(void);

void (**SCB_MemoryFault__pvfGetIRQSourceHandlerPointer(SCB_nMEMORY_BIT enMemoryFaultBit))(void);
void (*SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_nMEMORY_BIT enMemoryFaultBit))(void);

void (*SCB_HardFault__pvfGetIRQSourceHandler(SCB_nHARD_BIT enHardFaultBit))(void);
void (**SCB_HardFault__pvfGetIRQSourceHandlerPointer(SCB_nHARD_BIT enHardFaultBit))(void);

void (*SCB_NMI__pvfGetIRQSourceHandler(SCB_nNMI_BIT enNMIBit))(void);
void (**SCB_NMI__pvfGetIRQSourceHandlerPointer(SCB_nNMI_BIT enNMIBit))(void);

void SCB_SVCall__vInit(void);
void (*SCB_SVCall__pvfGetIRQSourceHandler(uint32_t u32SVCallBit))(void);
void (**SCB_SVCall__pvfGetIRQSourceHandlerPointer(uint32_t u32SVCallBit))(void);

#endif /* XAPPLICATION_MCU_CORE_SCB_INTERRUPT_INTERRUPTROUTINE_XHEADER_SCB_INTERRUPTROUTINE_SOURCE_H_ */
