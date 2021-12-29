/**
 *
 * @file PWM_WriteRegister.h
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
 * @verbatim 26 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PWM_WRITEREGISTER_H_
#define XDRIVER_MCU_PWM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PWM_WRITEREGISTER_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM__vWriteRegister(PWM_nMODULE enModule, uint32_t u32OffsetRegister,
                         uint32_t u32FeatureValue, uint32_t u32MaskFeature,
                         uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_PWM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PWM_WRITEREGISTER_H_ */
