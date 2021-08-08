/**
 *
 * @file SSI_InterruptSource.h
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
#ifndef XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SSI_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SSI_INTERRUPTSOURCE_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

void SSI__vEnInterruptSource(SSI_nMODULE enModule, SSI_nINT_SOURCE enSourceInt);
void SSI__vDisInterruptSource(SSI_nMODULE enModule, SSI_nINT_SOURCE enSourceInt);
void SSI__vClearInterruptSource(SSI_nMODULE enModule, SSI_nINT_SOURCE enSourceInt);
SSI_nINT_STATUS SSI__enStatusInterruptSource(SSI_nMODULE enModule, SSI_nINT_SOURCE enSourceInt);

#endif /* XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SSI_INTERRUPTSOURCE_H_ */
