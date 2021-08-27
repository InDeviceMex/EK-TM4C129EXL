/**
 *
 * @file WDT_ReadReg.h
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_WDT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_WDT_READREG_H_
#define XDRIVER_MCU_WDT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_WDT_READREG_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

uint32_t WDT__u32ReadRegister(WDT_nMODULE enModule, uint32_t u32OffsetRegister,
                              uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_WDT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_WDT_READREG_H_ */
