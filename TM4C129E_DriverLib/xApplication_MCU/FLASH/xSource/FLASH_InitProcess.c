/**
 *
 * @file FLASH_InitProcess.c
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
 * @verbatim 14 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/FLASH/xHeader/FLASH_InitProcess.h>

#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Dependencies.h>

FLASH_nERROR FLASH__enInitProcess (uint32_t u32FMC, uint32_t u32Feature)
{
    FLASH_nERROR enReturn = FLASH_enERROR_UNDEF;
    uint32_t u32Key = 0UL;

    u32Key = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_BOOTCFG_OFFSET,
                                  SYSCTL_BOOTCFG_KEY_MASK, SYSCTL_BOOTCFG_R_KEY_BIT);
    switch(u32Key)
    {
    case SYSCTL_BOOTCFG_KEY_71D5:
        MCU__vWriteRegister(FLASH_BASE, u32FMC,
                            (FLASH_FMC_R_WRKEY_KEY2 | u32Feature),
                            (FLASH_FMC_R_WRKEY_MASK | u32Feature),
                            0UL);
        enReturn = FLASH__enWait(u32FMC, u32Feature);
        break;
    case SYSCTL_BOOTCFG_KEY_A442:
        MCU__vWriteRegister(FLASH_BASE, u32FMC,
                            (FLASH_FMC_R_WRKEY_KEY1 | u32Feature),
                            (FLASH_FMC_R_WRKEY_MASK | u32Feature), 0UL);
        enReturn = FLASH__enWait(u32FMC, u32Feature);
        break;
    default:
        break;
    }
    return (enReturn);
}
