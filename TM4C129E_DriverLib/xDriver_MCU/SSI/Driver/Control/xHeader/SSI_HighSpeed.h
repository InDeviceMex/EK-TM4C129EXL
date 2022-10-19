/**
 *
 * @file SSI_HighSpeed.h
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
 * @verbatim 7 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_DRIVER_CONTROL_XHEADER_SSI_HIGHSPEED_H_
#define XDRIVER_MCU_SSI_DRIVER_CONTROL_XHEADER_SSI_HIGHSPEED_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

SSI_nERROR SSI__enSetHighSpeedState(SSI_nMODULE enModuleArg, SSI_nSTATE enStateArg);
SSI_nERROR SSI__enGetHighSpeedState(SSI_nMODULE enModuleArg, SSI_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_SSI_DRIVER_CONTROL_XHEADER_SSI_HIGHSPEED_H_ */
