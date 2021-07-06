/**
 *
 * @file DMA_CH_ControlStruct.h
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
 * @verbatim 23 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DMA_APP_CH_CONTROL_XHEADER_DMA_CH_CONTROLSTRUCT_H_
#define XDRIVER_MCU_DMA_APP_CH_CONTROL_XHEADER_DMA_CH_CONTROLSTRUCT_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nSTATUS DMA_CH__enCreateControlStructPointer(uint32_t u32ControlWorld, DMA_CONTROL_Typedef* pstControl);
DMA_CONTROL_Typedef* DMA_CH__pstCreateControlStruct(uint32_t u32ControlWorld);

#endif /* XDRIVER_MCU_DMA_APP_CH_CONTROL_XHEADER_DMA_CH_CONTROLSTRUCT_H_ */
