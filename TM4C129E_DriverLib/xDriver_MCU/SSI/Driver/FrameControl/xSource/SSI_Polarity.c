/**
 *
 * @file SSI_Polarity.c
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
#include <xDriver_MCU/SSI/Driver/FrameControl/xHeader/SSI_Polarity.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

SSI_nCLOCK_POLARITY SSI__enGetClockPolarity(SSI_nMODULE enModule)
{
    SSI_nCLOCK_POLARITY enPolarityReg = SSI_enCLOCK_POLARITY_LOW;
    enPolarityReg = (SSI_nCLOCK_POLARITY) SSI__u32ReadRegister(enModule, SSI_CR0_OFFSET,
                                        SSI_CR0_SPO_MASK, SSI_CR0_R_SPO_BIT);
    return (enPolarityReg);
}

void SSI__vSetClockPolarity(SSI_nMODULE enModule, SSI_nCLOCK_POLARITY enClockPolarityArg)
{
    SSI__vWriteRegister(enModule, SSI_CR0_OFFSET,
            (uint32_t) enClockPolarityArg, SSI_CR0_SPO_MASK, SSI_CR0_R_SPO_BIT);
}
