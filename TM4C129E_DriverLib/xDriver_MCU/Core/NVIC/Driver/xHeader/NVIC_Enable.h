/**
 *
 * @file NVIC_Enable.h
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
 * @verbatim 20 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_ENABLE_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_ENABLE_H_

#include <xDriver_MCU/Core/NVIC/Peripheral/xHeader/NVIC_Enum.h>

NVIC_nERROR NVIC__enGetVectorState(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg, NVIC_nSTATE* penStateArg);
NVIC_nERROR NVIC__enSetVectorState(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg, NVIC_nSTATE enStateArg);

NVIC_nERROR NVIC__enEnableVector(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg, NVIC_nPRIORITY enPriority);
NVIC_nERROR NVIC__enDisableVector(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_ENABLE_H_ */
