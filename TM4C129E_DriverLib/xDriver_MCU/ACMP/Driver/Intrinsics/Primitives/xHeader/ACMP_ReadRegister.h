/**
 *
 * @file ACMP_ReadRegister.h
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
 * @verbatim Mar 31, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 31, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ACMP_READREGISTER_H_
#define XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ACMP_READREGISTER_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

uint32_t ACMP__u32ReadRegister(ACMP_nMODULE enModule, uint32_t u32OffsetRegister,
                                  uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ACMP_READREGISTER_H_ */
