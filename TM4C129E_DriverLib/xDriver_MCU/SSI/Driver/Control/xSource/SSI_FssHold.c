/**
 *
 * @file SSI_FssHold.c
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
 * @verbatim 7 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/Control/xHeader/SSI_FssHold.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vSetFssHold(SSI_nMODULE enModule, SSI_nFSSHOLD enFssHoldArg)
{
    SSI__vWriteRegister(enModule, SSI_CR1_OFFSET,
            (UBase_t) enFssHoldArg, SSI_CR1_SSE_MASK, SSI_CR1_R_SSE_BIT);
}

SSI_nFSSHOLD SSI__enGetFssHold(SSI_nMODULE enModule)
{
    SSI_nFSSHOLD enFssHoldReg = SSI_enFSSHOLD_DIS;
    enFssHoldReg = (SSI_nFSSHOLD) SSI__uxReadRegister(enModule,
                           SSI_CR1_OFFSET, SSI_CR1_SSE_MASK, SSI_CR1_R_SSE_BIT);
    return (enFssHoldReg);
}
