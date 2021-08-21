/**
 *
 * @file ACMP_ReferenceEncoder.c
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
#include <xDriver_MCU/ACMP/Driver/Reference/xHeader/ACMP_ReferenceEncoder.h>

#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/ACMP_Primitives.h>

void ACMP__vSetReferenceEncoder(ACMP_nMODULE enModule, uint32_t u32EncoderValue)
{
    ACMP__vWriteRegister(enModule , ACMP_REFCTL_OFFSET, u32EncoderValue,
                         ACMP_REFCTL_VREF_MASK, ACMP_REFCTL_R_VREF_BIT);
}

uint32_t ACMP__u32GetReferenceEncoder(ACMP_nMODULE enModule)
{
    uint32_t u32EncoderValueReg = 0UL;

    u32EncoderValueReg = ACMP__u32ReadRegister(enModule, ACMP_REFCTL_OFFSET,
                                   ACMP_REFCTL_VREF_MASK, ACMP_REFCTL_R_VREF_BIT);
    return (u32EncoderValueReg);
}
