/**
 *
 * @file SSI_ClockConfig.c
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
#include <xDriver_MCU/SSI/Driver/xHeader/SSI_ClockConfig.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vSetClockConfig(SSI_nMODULE enModule, SSI_nCLOCK enClock)
{
    SSI__vWriteRegister(enModule, SSI_CC_OFFSET, (uint32_t) enClock, SSI_CC_CS_MASK, SSI_CC_R_CS_BIT);
}

SSI_nCLOCK SSI__enGetClockConfig(SSI_nMODULE enModule)
{
    SSI_nCLOCK enClockReg = SSI_enCLOCK_UNDEF;
    SSI__enReadRegister(enModule, SSI_CC_OFFSET, (uint32_t*) &enClockReg, SSI_CC_CS_MASK, SSI_CC_R_CS_BIT);
    return enClockReg;
}
