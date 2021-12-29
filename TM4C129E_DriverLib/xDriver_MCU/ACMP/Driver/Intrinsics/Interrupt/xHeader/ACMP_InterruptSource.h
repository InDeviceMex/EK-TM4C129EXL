/**
 *
 * @file ACMP_InterruptSource.h
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
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ACMP_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ACMP_INTERRUPTSOURCE_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

void ACMP__vEnInterruptSource(ACMP_nMODULE enModule, ACMP_nCOMPMASK enCompMask);
void ACMP__vDisInterruptSource(ACMP_nMODULE enModule, ACMP_nCOMPMASK enCompMask);
void ACMP__vClearInterruptSource(ACMP_nMODULE enModule, ACMP_nCOMPMASK enCompMask);
ACMP_nCOMPMASK ACMP__enStatusInterruptSource(ACMP_nMODULE enModule, ACMP_nCOMPMASK enCompMask);

#endif /* XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ACMP_INTERRUPTSOURCE_H_ */
