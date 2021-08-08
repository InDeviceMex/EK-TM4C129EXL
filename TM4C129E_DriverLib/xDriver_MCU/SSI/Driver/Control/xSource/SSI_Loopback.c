/**
 *
 * @file SSI_Loopback.c
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
#include <xDriver_MCU/SSI/Driver/Control/xHeader/SSI_Loopback.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vSetLoopback(SSI_nMODULE enModule, SSI_nLOOPBACK enLoopbackArg)
{
    SSI__vWriteRegister(enModule, SSI_CR1_OFFSET, (uint32_t) enLoopbackArg, SSI_CR1_LBM_MASK, SSI_CR1_R_LBM_BIT);
}

SSI_nLOOPBACK SSI__enGetLoopback(SSI_nMODULE enModule)
{
    SSI_nLOOPBACK enLoopbackReg = SSI_enLOOPBACK_UNDEF;
    SSI__enReadRegister(enModule, SSI_CR1_OFFSET, (uint32_t*) &enLoopbackReg, SSI_CR1_LBM_MASK, SSI_CR1_R_LBM_BIT);
    return enLoopbackReg;
}


