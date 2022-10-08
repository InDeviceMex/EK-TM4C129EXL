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

DMA_nERROR DMA_CH__enConvertControlStructure(UBase_t uxControlWorldArg,
                                             DMA_CONTROL_t* pstControlArg);
DMA_nERROR DMA_CH__enConvertControlStructure_Create(UBase_t uxControlWorldArg,
                                         DMA_CONTROL_t** pstControlArg);

#endif /* XDRIVER_MCU_DMA_APP_CH_CONTROL_XHEADER_DMA_CH_CONTROLSTRUCT_H_ */
