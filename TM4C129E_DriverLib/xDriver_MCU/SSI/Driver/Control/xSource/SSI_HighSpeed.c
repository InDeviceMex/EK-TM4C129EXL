/**
 *
 * @file SSI_HighSpeed.c
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
#include <xDriver_MCU/SSI/Driver/Control/xHeader/SSI_HighSpeed.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vSetHighSpeed(SSI_nMODULE enModule, SSI_nHIGHSPEED enHighSpeedArg)
{
    SSI__vWriteRegister(enModule, SSI_CR1_OFFSET,
    (uint32_t) enHighSpeedArg, SSI_CR1_HSCLKEN_MASK, SSI_CR1_R_HSCLKEN_BIT);
}

SSI_nHIGHSPEED SSI__enGetHighSpeed(SSI_nMODULE enModule)
{
    SSI_nHIGHSPEED enHighSpeedReg = SSI_enHIGHSPEED_DIS;
    enHighSpeedReg = (SSI_nHIGHSPEED) SSI__u32ReadRegister(enModule,
                       SSI_CR1_OFFSET, SSI_CR1_HSCLKEN_MASK, SSI_CR1_R_HSCLKEN_BIT);
    return (enHighSpeedReg);
}
