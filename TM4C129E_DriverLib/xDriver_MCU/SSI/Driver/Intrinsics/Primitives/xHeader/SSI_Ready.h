/**
 *
 * @file SSI_Ready.h
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
#ifndef XDRIVER_MCU_SSI_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SSI_READY_H_
#define XDRIVER_MCU_SSI_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SSI_READY_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

void SSI__vSetReady(SSI_nMODULE enModule);
void SSI__vClearReady(SSI_nMODULE enModule);
SSI_nREADY SSI__enIsReady(SSI_nMODULE enModule);

#endif /* XDRIVER_MCU_SSI_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SSI_READY_H_ */
