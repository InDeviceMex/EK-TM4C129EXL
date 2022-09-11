/**
 *
 * @file DMA_State.h
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
 * @verbatim 20 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DMA_DRIVER_XHEADER_DMA_STATE_H_
#define XDRIVER_MCU_DMA_DRIVER_XHEADER_DMA_STATE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA__enGetStateMachine(DMA_nMODULE enModuleArg, DMA_nSTATE_MACHINE* penStateArg);
DMA_nERROR DMA__enGetChannelsAvailable(DMA_nMODULE enModuleArg, uint32_t* pu32ChannelNumberArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_XHEADER_DMA_STATE_H_ */
