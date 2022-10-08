/**
 *
 * @file SYSCTL_InterruptSource.c
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
 * @verbatim 16 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/Interrupt/xHeader/SYSCTL_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vEnInterruptSource(SYSCTL_nINT_SOURCE enSourceInt)
{
    UBase_t uxSourceInt = (UBase_t) enSourceInt;
    uxSourceInt &= (UBase_t) SYSCTL_enINT_SOURCE_ALL;
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_IMC_OFFSET, uxSourceInt, uxSourceInt, 0UL);
}

void SYSCTL__vDisInterruptSource(SYSCTL_nINT_SOURCE enSourceInt)
{
    UBase_t uxSourceInt = (UBase_t) enSourceInt;
    uxSourceInt &= (UBase_t) SYSCTL_enINT_SOURCE_ALL;
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_IMC_OFFSET, 0UL, uxSourceInt, 0UL);
}

void SYSCTL__vClearInterruptSource(SYSCTL_nINT_SOURCE enSourceInt)
{
    UBase_t uxSourceInt = (UBase_t) enSourceInt;
    uxSourceInt &= (UBase_t) SYSCTL_enINT_SOURCE_ALL;
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_MISC_OFFSET, uxSourceInt, 0xFFFFFFFFUL, 0UL);
}

SYSCTL_nINT_SOURCE SYSCTL__enStatusInterruptSource(SYSCTL_nINT_SOURCE enSourceInt)
{
    SYSCTL_nINT_SOURCE enInterruptReg = SYSCTL_enINT_SOURCE_NONE;
    UBase_t uxSourceInt = (UBase_t) enSourceInt ;
    UBase_t uxRegister= 0UL;

    uxSourceInt &= (UBase_t) SYSCTL_enINT_SOURCE_ALL;
    uxRegister = MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_RIS_OFFSET, uxSourceInt, 0UL);
    enInterruptReg = (SYSCTL_nINT_SOURCE) uxRegister;

    return (enInterruptReg);
}
