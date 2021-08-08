/**
 *
 * @file SSI_Clock_Register.h
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
#ifndef XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_CLOCK_XHEADER_SSI_CLOCK_REGISTER_H_
#define XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_CLOCK_XHEADER_SSI_CLOCK_REGISTER_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>
#include <xUtils/Standard/Standard.h>

void SSI__vSetClockEvenPrescalerPart(SSI_nMODULE enModule, uint32_t u32EvenPrescaler);
uint32_t SSI__u32GetClockEvenPrescalerPart(SSI_nMODULE enModule);

void SSI__vSetClockDivisorPart(SSI_nMODULE enModule, uint32_t u32Divisor);
uint32_t SSI__u32GetClockDivisorPart(SSI_nMODULE enModule);

#endif /* XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_CLOCK_XHEADER_SSI_CLOCK_REGISTER_H_ */
