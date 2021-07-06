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
    uint32_t u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) SYSCTL_enINT_SOURCE_ALL;
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_IMC_OFFSET, u32SourceInt, u32SourceInt, 0UL);
}

void SYSCTL__vDisInterruptSource(SYSCTL_nINT_SOURCE enSourceInt)
{
    uint32_t u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) SYSCTL_enINT_SOURCE_ALL;
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_IMC_OFFSET, 0UL, u32SourceInt, 0UL);
}

void SYSCTL__vClearInterruptSource(SYSCTL_nINT_SOURCE enSourceInt)
{
    uint32_t u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) SYSCTL_enINT_SOURCE_ALL;
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_MISC_OFFSET, u32SourceInt, 0xFFFFFFFFUL, 0UL);
}

SYSCTL_nINT_STATUS SYSCTL__enStatusInterruptSource(SYSCTL_nINT_SOURCE enSourceInt)
{
    SYSCTL_nINT_STATUS enInterruptReg = SYSCTL_enINT_STATUS_UNDEF;
    uint32_t u32SourceInt = (uint32_t) enSourceInt ;
    uint32_t u32Register= 0UL;

    u32SourceInt &= (uint32_t) SYSCTL_enINT_SOURCE_ALL;
    u32Register = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RIS_OFFSET, u32SourceInt, 0UL);

    if(0UL != u32Register)
    {
        enInterruptReg = SYSCTL_enINT_OCCUR;
    }
    else
    {
        enInterruptReg = SYSCTL_enINT_NOOCCUR;
    }

    return (enInterruptReg);
}
