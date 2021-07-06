/**
 *
 * @file DMA_CH_ConfigGeneric.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_INTRINSICS_XHEADER_DMA_CH_CONFIGGENERIC_H_
#define XDRIVER_MCU_DMA_DRIVER_INTRINSICS_XHEADER_DMA_CH_CONFIGGENERIC_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA_CH__vSetConfigGeneric(DMA_nCH_MODULE enChannel, uint32_t u32Register);
void DMA_CH__vSetConfigGeneric_Direct(DMA_nCH_MODULE enChannel, uint32_t u32Register);
uint32_t DMA_CH__u32GetConfigGeneric(DMA_nCH_MODULE enChannel, uint32_t u32Register);

#endif /* XDRIVER_MCU_DMA_DRIVER_INTRINSICS_XHEADER_DMA_CH_CONFIGGENERIC_H_ */
