/**
 *
 * @file ADC_ReadRegister.h
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
 * @verbatim 5 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ADC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ADC_READREGISTER_H_
#define XDRIVER_MCU_ADC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ADC_READREGISTER_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nSTATUS ADC__enReadRegister(ADC_nMODULE enModule, uint32_t u32OffsetRegister, uint32_t* pu32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ADC_READREGISTER_H_ */
