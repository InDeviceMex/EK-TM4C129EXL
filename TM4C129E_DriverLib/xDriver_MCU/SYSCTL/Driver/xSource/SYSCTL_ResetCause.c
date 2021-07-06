/**
 *
 * @file SYSCTL_ResetCause.c
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_ResetCause.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nRESET SYSCTL__enGetResetCause(void)
{
    uint32_t u32Reg = 0UL;
    u32Reg = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_RESC_OFFSET, 0xFFFFFFFFUL, 0UL);
    u32Reg &= (uint32_t) SYSCTL_enRESET_ALL;
    return ((SYSCTL_nRESET) u32Reg);
}

void SYSCTL__vClearResetCause(SYSCTL_nRESET enReset)
{
    uint32_t u32Reg = (uint32_t) SYSCTL_enRESET_ALL;
    u32Reg &= ~(uint32_t) enReset;
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_RESC_OFFSET, u32Reg, 0xFFFFFFFFUL, 0UL);
}
