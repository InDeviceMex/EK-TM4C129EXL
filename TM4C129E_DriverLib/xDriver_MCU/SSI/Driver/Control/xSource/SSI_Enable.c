/**
 *
 * @file SSI_Enable.c
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
#include <xDriver_MCU/SSI/Driver/Control/xHeader/SSI_Enable.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vSetEnable(SSI_nMODULE enModule, SSI_nENABLE enEnableArg)
{
    SSI__vWriteRegister(enModule, SSI_CR1_OFFSET, (uint32_t) enEnableArg, SSI_CR1_SSE_MASK, SSI_CR1_R_SSE_BIT);
}

SSI_nENABLE SSI__enGetEnable(SSI_nMODULE enModule)
{
    SSI_nENABLE enEnableReg = SSI_enENABLE_UNDEF;
    SSI__enReadRegister(enModule, SSI_CR1_OFFSET, (uint32_t*) &enEnableReg, SSI_CR1_SSE_MASK, SSI_CR1_R_SSE_BIT);
    return enEnableReg;
}
