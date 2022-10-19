/**
 *
 * @file SSI_EndMessage.h
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
#ifndef XDRIVER_MCU_SSI_DRIVER_CONTROL_XHEADER_SSI_ENDMESSAGE_H_
#define XDRIVER_MCU_SSI_DRIVER_CONTROL_XHEADER_SSI_ENDMESSAGE_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

SSI_nERROR SSI__enSetEndOfMessageBit(SSI_nMODULE enModuleArg, SSI_nSTATE enStateArg);
SSI_nERROR SSI__enGetEndOfMessageBit(SSI_nMODULE enModuleArg, SSI_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_SSI_DRIVER_CONTROL_XHEADER_SSI_ENDMESSAGE_H_ */
