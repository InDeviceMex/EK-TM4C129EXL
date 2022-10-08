/**
 *
 * @file SSI_Direction.c
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
#include <xDriver_MCU/SSI/Driver/Control/xHeader/SSI_Direction.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vSetDirection(SSI_nMODULE enModule, SSI_nDIRECTION enDirectionArg)
{
    SSI__vWriteRegister(enModule, SSI_CR1_OFFSET,
            (UBase_t) enDirectionArg, SSI_CR1_DIR_MASK, SSI_CR1_R_DIR_BIT);
}

SSI_nDIRECTION SSI__enGetDirection(SSI_nMODULE enModule)
{
    SSI_nDIRECTION enDirectionReg = SSI_enDIRECTION_TX;
    enDirectionReg = (SSI_nDIRECTION) SSI__uxReadRegister(enModule,
                           SSI_CR1_OFFSET, SSI_CR1_DIR_MASK, SSI_CR1_R_DIR_BIT);
    return (enDirectionReg);
}
