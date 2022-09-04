/**
 *
 * @file NVIC_ReadRegister.h
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

#ifndef XDRIVER_MCU_CORE_NVIC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_NVIC_READREGISTER_H_
#define XDRIVER_MCU_CORE_NVIC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_NVIC_READREGISTER_H_

#include <xDriver_MCU/Core/NVIC/Peripheral/xHeader/NVIC_Enum.h>

NVIC_nERROR NVIC__enReadRegister(NVIC_nMODULE enModuleArg, NVIC_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_CORE_NVIC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_NVIC_READREGISTER_H_ */
