/**
 *
 * @file MCU_Variables.h
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
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_VARIABLES_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_VARIABLES_H_

#include <xUtils/Standard/Standard.h>

#define MCU_MASK_8 (0xFFU)
#define MCU_MASK_16 (0xFFFFU)
#define MCU_MASK_32 (0xFFFFFFFFUL)
#define MCU_MASK_BASE (MCU_MASK_32)


typedef void (*MCU_pvfIRQVectorHandler_t)(void);
typedef void (*MCU_pvfIRQSourceHandler_t)(uintptr_t uptrModuleArg, void* pvArgument);

void MCU_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument);
void MCU_vIRQSourceHandler_DummyNonBlocking(uintptr_t uptrModuleArg, void* pvArgument);


#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_VARIABLES_H_ */
