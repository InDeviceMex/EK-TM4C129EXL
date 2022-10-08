/**
 *
 * @file SSI_Mode.c
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
#include <xDriver_MCU/SSI/Driver/Control/xHeader/SSI_Mode.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vSetMode(SSI_nMODULE enModule, SSI_nMODE enModeArg)
{
    SSI__vWriteRegister(enModule, SSI_CR1_OFFSET,
            (UBase_t) enModeArg, SSI_CR1_MODE_MASK, SSI_CR1_R_MODE_BIT);
}

SSI_nMODE SSI__enGetMode(SSI_nMODULE enModule)
{
    SSI_nMODE enModeReg = SSI_enMODE_LEGACY;
    enModeReg = (SSI_nMODE) SSI__uxReadRegister(enModule,
                     SSI_CR1_OFFSET, SSI_CR1_MODE_MASK, SSI_CR1_R_MODE_BIT);
    return (enModeReg);
}
