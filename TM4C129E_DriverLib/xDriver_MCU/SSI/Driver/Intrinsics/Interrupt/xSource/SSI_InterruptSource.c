/**
 *
 * @file SSI_InterruptSource.c
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
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/xHeader/SSI_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vEnInterruptSource(SSI_nMODULE enModule, SSI_nINT_SOURCE enSourceInt)
{
    UBase_t uxSourceInt = 0UL;
    uxSourceInt = (UBase_t) enSourceInt;
    uxSourceInt &= (UBase_t) SSI_enINT_SOURCE_ALL;
    SSI__vWriteRegister(enModule , SSI_IM_OFFSET, uxSourceInt, uxSourceInt, 0UL);
}

void SSI__vDisInterruptSource(SSI_nMODULE enModule, SSI_nINT_SOURCE enSourceInt)
{
    UBase_t uxSourceInt = 0UL;
    uxSourceInt = (UBase_t) enSourceInt;
    uxSourceInt &= (UBase_t) SSI_enINT_SOURCE_ALL;
    SSI__vWriteRegister(enModule , SSI_IM_OFFSET, 0UL, uxSourceInt, 0UL);
}

void SSI__vClearInterruptSource(SSI_nMODULE enModule, SSI_nINT_SOURCE enSourceInt)
{
    UBase_t uxSourceInt = 0UL;
    uxSourceInt = (UBase_t) enSourceInt;
    uxSourceInt &= (UBase_t) SSI_enINT_SOURCE_ALL;
    SSI__vWriteRegister(enModule , SSI_ICR_OFFSET, uxSourceInt, 0xFFFFFFFFUL, 0UL);
}

SSI_nINT_SOURCE SSI__enStatusInterruptSource(SSI_nMODULE enModule, SSI_nINT_SOURCE enSourceInt)
{
    SSI_nINT_SOURCE enInterruptReg = SSI_enINT_SOURCE_NONE;
    UBase_t uxSourceInt = 0UL;
    UBase_t uxRegister= 0UL;
    uxSourceInt = (UBase_t) enSourceInt;
    uxSourceInt &= (UBase_t) SSI_enINT_SOURCE_ALL;
    uxRegister = SSI__uxReadRegister(enModule , SSI_RIS_OFFSET, (UBase_t) uxSourceInt, 0UL);
    enInterruptReg = (SSI_nINT_SOURCE) uxRegister;

    return (enInterruptReg);
}
