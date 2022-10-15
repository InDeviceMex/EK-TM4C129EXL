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

void SSI__vSetEnable(SSI_nMODULE enModule, SSI_nSTATE enEnableArg)
{
    SSI__vWriteRegister(enModule, SSI_CR1_OFFSET,
        (UBase_t) enEnableArg, SSI_CR1_SSE_MASK, SSI_CR1_R_SSE_BIT);
}

SSI_nSTATE SSI__enGetEnable(SSI_nMODULE enModule)
{
    SSI_nSTATE enEnableReg = SSI_enSTATE_DIS;
    enEnableReg = (SSI_nSTATE) SSI__uxReadRegister(enModule,
                         SSI_CR1_OFFSET, SSI_CR1_SSE_MASK, SSI_CR1_R_SSE_BIT);
    return (enEnableReg);
}
