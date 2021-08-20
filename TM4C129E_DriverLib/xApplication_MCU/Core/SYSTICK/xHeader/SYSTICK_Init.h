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

SYSTICK_nSTATUS SYSTICK__enInitTickVector(uint32_t u32Tick,
                                          SYSTICK_nPRIORITY enPriority,
                                          SYSTICK_nCLKSOURCE enClockSource,
                                          void(*pfvVector) (void));
SYSTICK_nSTATUS SYSTICK__enInitTick(uint32_t u32Tick,
                                    SYSTICK_nPRIORITY enPriority,
                                    SYSTICK_nCLKSOURCE enClockSource);

SYSTICK_nSTATUS SYSTICK__enInitUsVector(uint32_t u32TimeUs,
                                        SYSTICK_nPRIORITY enPriority,
                                        void(*pfvVector) (void));
SYSTICK_nSTATUS SYSTICK__enInitUs(uint32_t u32TimeUs,
                                  SYSTICK_nPRIORITY enPriority);

#endif /* XAPPLICATION_MCU_CORE_SYSTICK_XHEADER_SYSTICK_INIT_H_ */
