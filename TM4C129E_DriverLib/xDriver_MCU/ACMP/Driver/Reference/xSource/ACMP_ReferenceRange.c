/**
 *
 * @file ACMP_ReferenceRange.c
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
#include <xDriver_MCU/ACMP/Driver/Reference/xHeader/ACMP_ReferenceRange.h>

#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/ACMP_Primitives.h>

void ACMP__vSetReferenceRange(ACMP_nMODULE enModule, ACMP_nREFERENCE_RANGE enReferenceRangeArg)
{
    ACMP__vWriteRegister(enModule , ACMP_REFCTL_OFFSET, (uint32_t) enReferenceRangeArg,
                         ACMP_REFCTL_RNG_MASK, ACMP_REFCTL_R_RNG_BIT);
}

ACMP_nREFERENCE_RANGE ACMP__enGetReferenceRange(ACMP_nMODULE enModule)
{
    ACMP_nREFERENCE_RANGE enReferenceRange = ACMP_enREFERENCE_RANGE_HIGH;

    enReferenceRange = (ACMP_nREFERENCE_RANGE) ACMP__u32ReadRegister(enModule, ACMP_REFCTL_OFFSET,
                                                ACMP_REFCTL_RNG_MASK, ACMP_REFCTL_R_RNG_BIT);
    return (enReferenceRange);
}




