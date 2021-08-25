/**
 *
 * @file QEI_ReadRegister.h
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_QEI_READREGISTER_H_
#define XDRIVER_MCU_QEI_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_QEI_READREGISTER_H_

#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>

uint32_t QEI__u32ReadRegister(QEI_nMODULE enModule, uint32_t u32OffsetRegister,
                              uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_QEI_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_QEI_READREGISTER_H_ */
