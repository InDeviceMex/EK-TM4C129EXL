/**
 *
 * @file SSI_Config.h
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SSI_APP_XHEADER_SSI_CONFIG_H_
#define XDRIVER_MCU_SSI_APP_XHEADER_SSI_CONFIG_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>
#include <xUtils/Standard/Standard.h>

SSI_nSTATUS SSI__enSetConfig(SSI_nMODULE enModule, SSI_nMS enMasterSlaveArg  , SSI_CONTROL_TypeDef* pstControlConfig, SSI_FRAME_CONTROL_TypeDef* pstFrameControlConfig, uint32_t u32ClockArg, const SSI_LINE_TypeDef* pstLineConfig);

#endif /* XDRIVER_MCU_SSI_APP_XHEADER_SSI_CONFIG_H_ */
