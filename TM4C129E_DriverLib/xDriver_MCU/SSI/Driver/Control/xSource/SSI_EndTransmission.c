/**
 *
 * @file SSI_EndTransmission.c
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
#include <xDriver_MCU/SSI/Driver/Control/xHeader/SSI_EndTransmission.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vSetEndTransmission(SSI_nMODULE enModule, SSI_nEOT enEndTransmissionArg)
{
    SSI__vWriteRegister(enModule, SSI_CR1_OFFSET, (uint32_t) enEndTransmissionArg, SSI_CR1_EOT_MASK, SSI_CR1_R_EOT_BIT);
}

SSI_nEOT SSI__enGetEndTransmission(SSI_nMODULE enModule)
{
    SSI_nEOT enEndTransmissionReg = SSI_enEOT_UNDEF;
    SSI__enReadRegister(enModule, SSI_CR1_OFFSET, (uint32_t*) &enEndTransmissionReg, SSI_CR1_EOT_MASK, SSI_CR1_R_EOT_BIT);
    return enEndTransmissionReg;
}

