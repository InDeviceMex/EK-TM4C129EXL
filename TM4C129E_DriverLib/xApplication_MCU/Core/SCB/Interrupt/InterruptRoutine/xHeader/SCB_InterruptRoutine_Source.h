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

SCB_pvfIRQSourceHandler_t SCB_BusFault__pvfGetIRQSourceHandler(SCB_nMODULE enModuleArg, SCB_nBUS_BIT enFaultBit);
SCB_pvfIRQSourceHandler_t* SCB_BusFault__pvfGetIRQSourceHandlerPointer(SCB_nMODULE enModuleArg, SCB_nBUS_BIT enFaultBit);

SCB_pvfIRQSourceHandler_t SCB_UsageFault__pvfGetIRQSourceHandler(SCB_nMODULE enModuleArg, SCB_nUSAGE_BIT enFaultBit);
SCB_pvfIRQSourceHandler_t* SCB_UsageFault__pvfGetIRQSourceHandlerPointer(SCB_nMODULE enModuleArg, SCB_nUSAGE_BIT enFaultBit);

SCB_pvfIRQSourceHandler_t SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_nMODULE enModuleArg, SCB_nMEMORY_BIT enFaultBit);
SCB_pvfIRQSourceHandler_t* SCB_MemoryFault__pvfGetIRQSourceHandlerPointer(SCB_nMODULE enModuleArg, SCB_nMEMORY_BIT enFaultBit);

SCB_pvfIRQSourceHandler_t SCB_HardFault__pvfGetIRQSourceHandler(SCB_nMODULE enModuleArg, SCB_nHARD_BIT enFaultBit);
SCB_pvfIRQSourceHandler_t* SCB_HardFault__pvfGetIRQSourceHandlerPointer(SCB_nMODULE enModuleArg, SCB_nHARD_BIT enFaultBit);

SCB_pvfIRQSourceHandler_t SCB_NMI__pvfGetIRQSourceHandler(SCB_nMODULE enModuleArg, SCB_nNMI_BIT enFaultBit);
SCB_pvfIRQSourceHandler_t* SCB_NMI__pvfGetIRQSourceHandlerPointer(SCB_nMODULE enModuleArg, SCB_nNMI_BIT enFaultBit);

SCB_nERROR SCB_SVCall__enInit(SCB_nMODULE enModuleArg);
SCB_pvfIRQSourceHandler_t SCB_SVCall__pvfGetIRQSourceHandler(SCB_nMODULE enModuleArg, UBase_t uxFaultBit);
SCB_pvfIRQSourceHandler_t* SCB_SVCall__pvfGetIRQSourceHandlerPointer(SCB_nMODULE enModuleArg, UBase_t uxFaultBit);

#endif /* XAPPLICATION_MCU_CORE_SCB_INTERRUPT_INTERRUPTROUTINE_XHEADER_SCB_INTERRUPTROUTINE_SOURCE_H_ */
