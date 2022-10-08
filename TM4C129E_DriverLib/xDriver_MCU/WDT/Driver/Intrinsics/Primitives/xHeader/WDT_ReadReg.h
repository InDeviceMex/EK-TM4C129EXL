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

UBase_t WDT__uxReadRegister(WDT_nMODULE enModule, UBase_t uxOffsetRegister,
                              UBase_t uxMaskFeature, UBase_t uxBitFeature);

#endif /* XDRIVER_MCU_WDT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_WDT_READREG_H_ */
