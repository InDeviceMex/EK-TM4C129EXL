/**
 *
 * @file SSI_MasterSlave.h
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
#ifndef XDRIVER_MCU_SSI_DRIVER_CONTROL_XHEADER_SSI_MASTERSLAVE_H_
#define XDRIVER_MCU_SSI_DRIVER_CONTROL_XHEADER_SSI_MASTERSLAVE_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

void SSI__vSetMasterSlave(SSI_nMODULE enModule, SSI_nMS enMasterSlaveArg);
SSI_nMS SSI__enGetMasterSlave(SSI_nMODULE enModule);

#endif /* XDRIVER_MCU_SSI_DRIVER_CONTROL_XHEADER_SSI_MASTERSLAVE_H_ */
