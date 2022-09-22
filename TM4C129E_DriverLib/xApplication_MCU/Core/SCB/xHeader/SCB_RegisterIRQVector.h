/**
 *
 * @file SCB_RegisterIRQVector.h
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
 * @verbatim 2 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_CORE_SCB_XHEADER_SCB_REGISTERIRQVECTOR_H_
#define XAPPLICATION_MCU_CORE_SCB_XHEADER_SCB_REGISTERIRQVECTOR_H_

#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Defines.h>

SCB_nERROR SCB__enRegisterIRQVectorHandler(SCB_nMODULE enModuleArg,
                                           SCB_nVECISR enVectorArg,
                                           SCB_pvfIRQVectorHandler_t pfIrqVectorHandlerArg,
                                           SCB_pvfIRQVectorHandler_t* pfIrqVectorHandlerExternArg);

#endif /* XAPPLICATION_MCU_CORE_SCB_XHEADER_SCB_REGISTERIRQVECTOR_H_ */
