/**
 *
 * @file SSI_EndMessage.c
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
#include <xDriver_MCU/SSI/Driver/Control/xHeader/SSI_EndMessage.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vSetEndMessage(SSI_nMODULE enModule, SSI_nEOM enEndMessageArg)
{
    SSI__vWriteRegister(enModule, SSI_CR1_OFFSET,
        (UBase_t) enEndMessageArg, SSI_CR1_EOM_MASK, SSI_CR1_R_EOM_BIT);
}

SSI_nEOM SSI__enGetEndMessage(SSI_nMODULE enModule)
{
    SSI_nEOM enEndMessageReg = SSI_enEOM_ONGOING;
    enEndMessageReg = (SSI_nEOM) SSI__uxReadRegister(enModule,
                          SSI_CR1_OFFSET, SSI_CR1_EOM_MASK, SSI_CR1_R_EOM_BIT);
    return (enEndMessageReg);
}
