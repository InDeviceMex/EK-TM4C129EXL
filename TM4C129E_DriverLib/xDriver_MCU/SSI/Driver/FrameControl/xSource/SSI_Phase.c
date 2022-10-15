/**
 *
 * @file SSI_Phase.c
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
#include <xDriver_MCU/SSI/Driver/FrameControl/xHeader/SSI_Phase.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

SSI_nPHASE SSI__enGetClockPhase(SSI_nMODULE enModule)
{
    SSI_nPHASE enPhaseReg = SSI_enPHASE_FIRST;
    enPhaseReg = (SSI_nPHASE) SSI__uxReadRegister(enModule, SSI_CR0_OFFSET,
                                         SSI_CR0_SPH_MASK, SSI_CR0_R_SPH_BIT);
    return (enPhaseReg);
}

void SSI__vSetClockPhase(SSI_nMODULE enModule, SSI_nPHASE enClockPhaseArg)
{
    SSI__vWriteRegister(enModule, SSI_CR0_OFFSET,
            (UBase_t) enClockPhaseArg, SSI_CR0_SPH_MASK, SSI_CR0_R_SPH_BIT);
}
