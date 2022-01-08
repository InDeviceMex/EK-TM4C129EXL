/**
 *
 * @file PWM_Output_Generic.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_GENERIC_H_
#define XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_GENERIC_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Output__vSetGeneric(uint32_t u32Module, uint32_t u32OffsetRegister,
                               uint32_t u32OutputNumber, uint32_t u32Feature,
                               uint32_t u32FeatureBit);
void PWM_Output__vSetGenericBit(uint32_t u32Module, uint32_t u32OffsetRegister,
                                  uint32_t u32Generator, uint32_t u32Feature,
                                  uint32_t u32FeatureMask, uint32_t u32FeatureBitMult,
                                  uint32_t u32FeatureBitAdd);
uint32_t PWM_Output__u32GetGenericBit(uint32_t u32Module, uint32_t u32OffsetRegister,
                                        uint32_t u32Generator, uint32_t u32FeatureMask,
                                        uint32_t u32FeatureBitMult, uint32_t u32FeatureBitAdd);
uint32_t PWM_Output__u32GetGeneric(uint32_t u32Module, uint32_t u32OffsetRegister,
                               uint32_t u32OutputNumber, uint32_t u32FeatureBit);

#endif /* XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_GENERIC_H_ */
