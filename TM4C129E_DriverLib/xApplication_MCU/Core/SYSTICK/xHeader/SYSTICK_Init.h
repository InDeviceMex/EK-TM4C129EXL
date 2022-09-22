/**
 *
 * @file SYSTICK_Init.h
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

#ifndef XAPPLICATION_MCU_CORE_SYSTICK_XHEADER_SYSTICK_INIT_H_
#define XAPPLICATION_MCU_CORE_SYSTICK_XHEADER_SYSTICK_INIT_H_

#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Defines.h>

SYSTICK_nERROR SYSTICK__enInitTickVector(SYSTICK_nMODULE enModuleArg, uint32_t u32TickArg, SYSTICK_nPRIORITY enPriorityArg,
                                          SYSTICK_nCLKSOURCE enClockSourceArg, SYSTICK_pvfIRQVectorHandler_t pvfVectorArg);
SYSTICK_nERROR SYSTICK__enInitTick(SYSTICK_nMODULE enModuleArg, uint32_t u32TickArg, SYSTICK_nPRIORITY enPriorityArg, SYSTICK_nCLKSOURCE enClockSourceArg);

SYSTICK_nERROR SYSTICK__enInitUsVector(SYSTICK_nMODULE enModuleArg, uint32_t u32TimeUsArg, SYSTICK_nPRIORITY enPriorityArg, SYSTICK_pvfIRQVectorHandler_t pvfVectorArg);
SYSTICK_nERROR SYSTICK__enInitUs(SYSTICK_nMODULE enModuleArg, uint32_t u32TimeUsArg, SYSTICK_nPRIORITY enPriorityArg);

#endif /* XAPPLICATION_MCU_CORE_SYSTICK_XHEADER_SYSTICK_INIT_H_ */
