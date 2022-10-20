/**
 *
 * @file SYSEXC_WriteRegister.h
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
 * @verbatim 19 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SYSEXC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SYSEXC_WRITEREGISTER_H_
#define XDRIVER_MCU_SYSEXC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SYSEXC_WRITEREGISTER_H_

#include <xDriver_MCU/SYSEXC/Peripheral/xHeader/SYSEXC_Enum.h>

SYSEXC_nERROR SYSEXC__enWriteRegister(SYSEXC_nMODULE enModuleArg, SYSEXC_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_SYSEXC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SYSEXC_WRITEREGISTER_H_ */
