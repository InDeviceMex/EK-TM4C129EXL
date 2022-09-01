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

#define MCU_MASK_16 (0xFFFFU)
#define MCU_MASK_32 (0xFFFFFFFFUL)

typedef void (*MCU__pvfIRQVectorHandler_t)(void);
typedef void (*MCU__pvfIRQSourceHandler_t)(uintptr_t uptrModule, uint32_t u32IntSource);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_VARIABLES_H_ */
