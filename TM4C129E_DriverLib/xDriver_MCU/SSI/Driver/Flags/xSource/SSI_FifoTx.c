/**
 *
 * @file SSI_FifoTx.c
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
#include <xDriver_MCU/SSI/Driver/Flags/xHeader/SSI_FifoTx.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

SSI_nFIFO_EMPTY SSI__enIsFifoTransmitEmpty(SSI_nMODULE enModule)
{
    SSI_nFIFO_EMPTY enFifoReg = SSI_enFIFO_NO_EMPTY;
    enFifoReg = (SSI_nFIFO_EMPTY) SSI__uxReadRegister(enModule,
                        SSI_SR_OFFSET, SSI_SR_TFE_MASK, SSI_SR_R_TFE_BIT);
    return (enFifoReg);
}

SSI_nFIFO_FULL SSI__enIsFifoTransmitFull(SSI_nMODULE enModule)
{
    UBase_t uxReg = 0UL;
    uxReg = SSI__uxReadRegister(enModule,
              SSI_SR_OFFSET, SSI_SR_TNF_MASK, SSI_SR_R_TNF_BIT);
    uxReg ^= 0x1UL;
    return ((SSI_nFIFO_FULL) uxReg);
}
