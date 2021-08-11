/**
 *
 * @file SSI_Clock.h
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_XHEADER_SSI_CLOCK_H_
#define XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_XHEADER_SSI_CLOCK_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

void SSI__vSetClockEvenPrescalerPart(SSI_nMODULE enModule, uint32_t u32EvenPrescaler);
uint32_t SSI__u32GetClockEvenPrescalerPart(SSI_nMODULE enModule);

void SSI__vSetClockDivisorPart(SSI_nMODULE enModule, uint32_t u32Divisor);
uint32_t SSI__u32GetClockDivisorPart(SSI_nMODULE enModule);

#endif /* XDRIVER_MCU_SSI_DRIVER_FRAMECONTROL_XHEADER_SSI_CLOCK_H_ */
