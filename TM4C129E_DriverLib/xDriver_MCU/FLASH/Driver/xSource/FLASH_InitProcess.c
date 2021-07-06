/**
 *
 * @file FLASH_InitProcess.c
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
 * @verbatim 28 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_InitProcess.h>

#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Wait.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>

FLASH_nSTATUS FLASH__enInitProcess (uint32_t u32FMC, uint32_t u32Feature)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t u32Key = 0UL;

    u32Key = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_BOOTCFG_OFFSET, SYSCTL_BOOTCFG_KEY_MASK, SYSCTL_BOOTCFG_R_KEY_BIT);
    switch(u32Key)
    {
    case SYSCTL_BOOTCFG_KEY_71D5:
        MCU__vWriteRegister(FLASH_BASE, u32FMC, (FLASH_FMC_R_WRKEY_KEY2 | u32Feature), (FLASH_FMC_R_WRKEY_MASK | u32Feature), 0UL);
        enReturn = FLASH__enWait(u32FMC, u32Feature);
        break;
    case SYSCTL_BOOTCFG_KEY_A442:
        MCU__vWriteRegister(FLASH_BASE, u32FMC, (FLASH_FMC_R_WRKEY_KEY1 | u32Feature), (FLASH_FMC_R_WRKEY_MASK | u32Feature), 0UL);
        enReturn = FLASH__enWait(u32FMC, u32Feature);
        break;
    default:
        break;
    }
    return enReturn;
}
