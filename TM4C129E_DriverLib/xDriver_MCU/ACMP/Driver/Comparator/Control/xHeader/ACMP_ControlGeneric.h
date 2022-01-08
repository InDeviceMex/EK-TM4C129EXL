/**
 *
 * @file ACMP_ControlGeneric.h
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

#ifndef XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_CONTROLGENERIC_H_
#define XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_CONTROLGENERIC_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

void ACMP__vSetCompGenericControl(uint32_t u32Module, uint32_t  u32Comparator,
                                  uint32_t u32Feature, uint32_t u32FeatureMask,
                                  uint32_t u32FeatureBit);
uint32_t ACMP__u32GetCompGenericControl(uint32_t u32Module, uint32_t  u32Comparator,
                                        uint32_t u32FeatureMask, uint32_t u32FeatureBit);

#endif /* XDRIVER_MCU_ACMP_DRIVER_COMPARATOR_CONTROL_XHEADER_ACMP_CONTROLGENERIC_H_ */
