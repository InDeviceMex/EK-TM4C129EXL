/**
 *
 * @file ACMP_ReferenceEncoder.h
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
 * @verbatim Apr 2, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 2, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ACMP_DRIVER_REFERENCE_XHEADER_ACMP_REFERENCEENCODER_H_
#define XDRIVER_MCU_ACMP_DRIVER_REFERENCE_XHEADER_ACMP_REFERENCEENCODER_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

void ACMP__vSetReferenceEncoder(ACMP_nMODULE enModule, uint32_t u32EncoderValue);
uint32_t ACMP__u32GetReferenceEncoder(ACMP_nMODULE enModule);

#endif /* XDRIVER_MCU_ACMP_DRIVER_REFERENCE_XHEADER_ACMP_REFERENCEENCODER_H_ */
