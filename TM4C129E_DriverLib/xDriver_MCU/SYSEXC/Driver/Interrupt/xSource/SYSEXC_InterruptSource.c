/**
 *
 * @file SYSEXC_InterruptSource.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSEXC/Driver/Interrupt/xHeader/SYSEXC_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSEXC/Peripheral/SYSEXC_Peripheral.h>

void SYSEXC__vEnInterruptSource(SYSEXC_nINT_SOURCE enInterruptParam)
{
    UBase_t uxInterruptParam = (UBase_t) enInterruptParam;
    uxInterruptParam &= (UBase_t) SYSEXC_enINT_SOURCE_ALL;
    MCU__vWriteRegister(SYSEXC_BASE, SYSEXC_IM_OFFSET,
                        uxInterruptParam, uxInterruptParam, 0UL);
}

void SYSEXC__vDisInterruptSource(SYSEXC_nINT_SOURCE enInterruptParam)
{
    UBase_t uxInterruptParam = (UBase_t) enInterruptParam;
    uxInterruptParam &= (UBase_t) SYSEXC_enINT_SOURCE_ALL;
    MCU__vWriteRegister(SYSEXC_BASE, SYSEXC_IM_OFFSET,
                        0UL, uxInterruptParam, 0UL);
}

void SYSEXC__vClearInterruptSource(SYSEXC_nINT_SOURCE enInterruptParam)
{
    UBase_t uxInterruptParam = (UBase_t) enInterruptParam;
    uxInterruptParam &= (UBase_t) SYSEXC_enINT_SOURCE_ALL;
    MCU__vWriteRegister(SYSEXC_BASE, SYSEXC_IC_OFFSET,
                        uxInterruptParam, uxInterruptParam, 0UL);
}

SYSEXC_nINT_SOURCE SYSEXC__enStatusInterruptSource(SYSEXC_nINT_SOURCE enInterruptParam)
{
    SYSEXC_nINT_SOURCE enStatus = SYSEXC_enINT_SOURCE_NONE;
    UBase_t uxInterruptParam = (UBase_t) enInterruptParam;
    UBase_t uxReg = 0UL;

    uxInterruptParam &= (UBase_t) SYSEXC_enINT_SOURCE_ALL;
    uxReg = MCU__uxReadRegister(SYSEXC_BASE, SYSEXC_RIS_OFFSET, uxInterruptParam, 0UL);
    enStatus = (SYSEXC_nINT_SOURCE) uxReg;

    return (enStatus);
}
