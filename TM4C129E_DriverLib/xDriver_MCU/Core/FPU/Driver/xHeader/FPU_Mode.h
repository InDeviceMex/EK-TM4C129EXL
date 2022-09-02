/**
 *
 * @file FPU_Mode.h
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
 * @verbatim 2 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CORE_FPU_DRIVER_XHEADER_FPU_MODE_H_
#define XDRIVER_MCU_CORE_FPU_DRIVER_XHEADER_FPU_MODE_H_

#include <xDriver_MCU/Core/FPU/Peripheral/xHeader/FPU_Enum.h>

void FPU__vSetMode(FPU_nMODULE enModuleArg, FPU_nMODE enModeArg);
FPU_nMODE FPU__enGetMode(FPU_nMODULE enModuleArg);
FPU_nERROR FPU__enGetModeDefault(FPU_nMODULE enModuleArg, FPU_nMODE* penModeArg);

#endif /* XDRIVER_MCU_CORE_FPU_DRIVER_XHEADER_FPU_MODE_H_ */
