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
    uint32_t u32InterruptParam = (uint32_t) enInterruptParam;
    u32InterruptParam &= (uint32_t) SYSEXC_enINT_SOURCE_ALL;
    MCU__vWriteRegister(SYSEXC_BASE, SYSEXC_IM_OFFSET, u32InterruptParam, u32InterruptParam, 0UL);
}

void SYSEXC__vDisInterruptSource(SYSEXC_nINT_SOURCE enInterruptParam)
{
    uint32_t u32InterruptParam = (uint32_t) enInterruptParam;
    u32InterruptParam &= (uint32_t) SYSEXC_enINT_SOURCE_ALL;
    MCU__vWriteRegister(SYSEXC_BASE, SYSEXC_IM_OFFSET, 0UL, u32InterruptParam, 0UL);
}

void SYSEXC__vClearInterruptSource(SYSEXC_nINT_SOURCE enInterruptParam)
{
    uint32_t u32InterruptParam = (uint32_t) enInterruptParam;
    u32InterruptParam &= (uint32_t) SYSEXC_enINT_SOURCE_ALL;
    MCU__vWriteRegister(SYSEXC_BASE, SYSEXC_IC_OFFSET, u32InterruptParam, u32InterruptParam, 0UL);
}

SYSEXC_nINT_STATUS SYSEXC__enStatusInterruptSource(SYSEXC_nINT_SOURCE enInterruptParam)
{
    SYSEXC_nINT_STATUS enStatus = SYSEXC_enINT_STATUS_UNDEF;
    uint32_t u32InterruptParam = (uint32_t) enInterruptParam;
    uint32_t u32Reg = 0UL;

    u32InterruptParam &= (uint32_t) SYSEXC_enINT_SOURCE_ALL;
    u32Reg = MCU__u32ReadRegister(SYSEXC_BASE, SYSEXC_RIS_OFFSET, u32InterruptParam, 0UL);

    if(0UL != u32Reg)
    {
        enStatus = SYSEXC_enINT_OCCUR;
    }
    else
    {
        enStatus = SYSEXC_enINT_NOOCCUR;
    }

    return (enStatus);
}
