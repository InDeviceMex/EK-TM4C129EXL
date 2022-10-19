/**
 *
 * @file SSI_Length.h
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
#ifndef XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_XHEADER_SSI_LENGTH_H_
#define XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_XHEADER_SSI_LENGTH_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

SSI_nERROR SSI__enSetDataLength(SSI_nMODULE enModuleArg, SSI_nLENGTH enLengthArg);
SSI_nERROR SSI__enGetDataLength(SSI_nMODULE enModuleArg, SSI_nLENGTH* penLengthArg);

#endif /* XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_XHEADER_SSI_LENGTH_H_ */
