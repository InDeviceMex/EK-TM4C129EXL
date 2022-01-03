/**
 *
 * @file PWM_GeneralGeneric.h
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
 * @verbatim 3 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_DRIVER_GENERAL_XHEADER_PWM_GENERALGENERIC_H_
#define XDRIVER_MCU_PWM_DRIVER_GENERAL_XHEADER_PWM_GENERALGENERIC_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM__vSetGeneralGeneric(uint32_t u32Module, uint32_t u32OffsetRegister,
                             uint32_t u32FeatureValue, uint32_t u32MaskFeature,
                             uint32_t u32BitFeature);
uint32_t PWM__u32GetGeneralGeneric(uint32_t u32Module, uint32_t u32OffsetRegister,
                                   uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_PWM_DRIVER_GENERAL_XHEADER_PWM_GENERALGENERIC_H_ */
