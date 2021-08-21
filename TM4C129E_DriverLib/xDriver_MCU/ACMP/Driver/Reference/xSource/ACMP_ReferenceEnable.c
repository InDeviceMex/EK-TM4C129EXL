/**
 *
 * @file ACMP_ReferenceEnable.c
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
#include <xDriver_MCU/ACMP/Driver/Reference/xHeader/ACMP_ReferenceEnable.h>

#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/ACMP_Primitives.h>

void ACMP__vSetReferenceEnable(ACMP_nMODULE enModule, ACMP_nREFERENCE enReferenceEnableArg)
{
    ACMP__vWriteRegister(enModule , ACMP_REFCTL_OFFSET, (uint32_t) enReferenceEnableArg,
                         ACMP_REFCTL_EN_MASK, ACMP_REFCTL_R_EN_BIT);
}

ACMP_nREFERENCE ACMP__enGetReferenceEnable(ACMP_nMODULE enModule)
{
    ACMP_nREFERENCE enReference = ACMP_enREFERENCE_DIS;

    enReference = (ACMP_nREFERENCE) ACMP__u32ReadRegister(enModule, ACMP_REFCTL_OFFSET,
                         ACMP_REFCTL_EN_MASK, ACMP_REFCTL_R_EN_BIT);
    return (enReference);
}

