/**
 *
 * @file ACMP_Generic.h
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
 * @verbatim Apr 2, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 2, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_XHEADER_ACMP_GENERIC_H_
#define XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_XHEADER_ACMP_GENERIC_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

void ACMP__vSetCompGeneric(uint32_t u32Module, uint32_t  u32ComparatorArg,
                           uint32_t u32OffsetRegister, uint32_t u32FeatureValue,
                           uint32_t u32MaskFeature, uint32_t u32BitFeature);
uint32_t ACMP__u32GetCompGeneric(uint32_t u32Module, uint32_t  u32ComparatorArg,
                                 uint32_t u32OffsetRegister, uint32_t u32MaskFeature,
                                 uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_XHEADER_ACMP_GENERIC_H_ */
