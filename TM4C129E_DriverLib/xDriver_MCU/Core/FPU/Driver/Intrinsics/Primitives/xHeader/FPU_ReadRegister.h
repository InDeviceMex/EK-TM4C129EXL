/**
 *
 * @file FPU_ReadRegister.h
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
 * @verbatim 1 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CORE_FPU_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_FPU_READREGISTER_H_
#define XDRIVER_MCU_CORE_FPU_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_FPU_READREGISTER_H_

#include <xDriver_MCU/Core/FPU/Peripheral/xHeader/FPU_Enum.h>

FPU_nERROR FPU__enReadRegister(FPU_nMODULE enModuleArg, FPU_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_CORE_FPU_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_FPU_READREGISTER_H_ */
