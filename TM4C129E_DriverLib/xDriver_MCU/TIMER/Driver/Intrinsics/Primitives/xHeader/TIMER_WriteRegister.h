/**
 *
 * @file TIMER_WriteRegister.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 31 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 31 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_TIMER_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_TIMER_WRITEREGISTER_H_
#define XDRIVER_MCU_TIMER_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_TIMER_WRITEREGISTER_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

void TIMER__vWriteRegister(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);


#endif /* XDRIVER_MCU_TIMER_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_TIMER_WRITEREGISTER_H_ */
