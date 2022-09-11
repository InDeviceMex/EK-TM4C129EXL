/**
 *
 * @file DMA_CH_Control.h
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

#ifndef XDRIVER_MCU_DMA_APP_CH_CONTROL_DMA_CH_CONTROL_H_
#define XDRIVER_MCU_DMA_APP_CH_CONTROL_DMA_CH_CONTROL_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA_CH_Primary__enSetControlParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                 DMA_CONTROL_t* pstControlArg);
DMA_nERROR DMA_CH_Alternate__enSetControlParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                   DMA_CONTROL_t* pstControlArg);
DMA_nERROR DMA_CH__enSetControlParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                         DMA_nCH_CONTROL enControlArg, DMA_CONTROL_t* pstControlArg);


DMA_nERROR DMA_CH_Primary__enGetControlParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                 DMA_CONTROL_t* pstControlArg);
DMA_nERROR DMA_CH_Alternate__enGetControlParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                   DMA_CONTROL_t* pstControlArg);
DMA_nERROR DMA_CH__enGetControlParameters(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                         DMA_nCH_CONTROL enControlArg, DMA_CONTROL_t* pstControlArg);

DMA_nERROR DMA_CH_Primary__enGetControlParameters_Create(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_CONTROL_t** pstControlArg);
DMA_nERROR DMA_CH_Alternate__enGetControlParameters_Create(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                      DMA_CONTROL_t** pstControlArg);
DMA_nERROR DMA_CH__enGetControlParameters_Create(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                            DMA_nCH_CONTROL enControlArg, DMA_CONTROL_t** pstControlArg);
void DMA_CH__vDeleteControlParameters(DMA_CONTROL_t* pstControl);

#endif /* XDRIVER_MCU_DMA_APP_CH_CONTROL_DMA_CH_CONTROL_H_ */
