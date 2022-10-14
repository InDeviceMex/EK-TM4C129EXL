/**
 *
 * @file NVIC_Pending.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_PENDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_PENDING_H_

#include <xDriver_MCU/Core/NVIC/Peripheral/xHeader/NVIC_Enum.h>

NVIC_nERROR NVIC__enIsVectorPending(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg, NVIC_nBOOLEAN* penStateArg);
NVIC_nERROR NVIC__enSetPendingVectorState(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg, NVIC_nBOOLEAN enStateArg);
NVIC_nERROR NVIC__enSetPendingVector(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg);
NVIC_nERROR NVIC__enClearPendingVector(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_PENDING_H_ */
