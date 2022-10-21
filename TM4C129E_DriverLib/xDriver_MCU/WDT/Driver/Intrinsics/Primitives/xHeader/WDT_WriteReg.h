/**
 *
 * @file WDT_WriteReg.h
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

#ifndef XDRIVER_MCU_WDT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_WDT_WRITEREG_H_
#define XDRIVER_MCU_WDT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_WDT_WRITEREG_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

WDT_nERROR WDT__enWriteRegisterTimeout(WDT_nMODULE enModuleArg, WDT_Register_t* pstRegisterDataArg, UBase_t uxTimeoutArg);
WDT_nERROR WDT__enWriteRegister(WDT_nMODULE enModuleArg, WDT_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_WDT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_WDT_WRITEREG_H_ */
