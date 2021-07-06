/**
 *
 * @file DMA_CH_WaitOnRequest.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_CH_CONFIG_XHEADER_DMA_CH_WAITONREQUEST_H_
#define XDRIVER_MCU_DMA_DRIVER_CH_CONFIG_XHEADER_DMA_CH_WAITONREQUEST_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nCH_WAITING DMA_CH__enGetWaitStatus(DMA_nCH_MODULE enChannel);

#endif /* XDRIVER_MCU_DMA_DRIVER_CH_CONFIG_XHEADER_DMA_CH_WAITONREQUEST_H_ */
