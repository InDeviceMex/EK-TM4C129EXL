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

FLASH_nERROR FLASH__enInitProcessAndWait(FLASH_nMODULE enModuleArg, FLASH_nPROCESS enProcessArg)
{
    FLASH_nERROR enErrorReg;
    uint32_t u32KeySelectReg;
    uint32_t u32KeyReg;

    u32KeySelectReg = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_BOOTCFG_OFFSET,
                                  SYSCTL_BOOTCFG_KEY_MASK, SYSCTL_BOOTCFG_R_KEY_BIT);
    switch(u32KeySelectReg)
    {
    case SYSCTL_BOOTCFG_KEY_71D5:
        u32KeyReg = 0UL;
        enErrorReg =FLASH__enGetCustomKey(enModuleArg, &u32KeyReg);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            enErrorReg = FLASH__enInitProcess(enModuleArg, u32KeyReg, enProcessArg);
        }
        if(FLASH_enERROR_OK == enErrorReg)
        {
            enErrorReg = FLASH__enWait(enModuleArg, enProcessArg, FLASH_TIMEOUT_MAX);
        }
        break;
    case SYSCTL_BOOTCFG_KEY_A442:
        enErrorReg = FLASH__enInitProcess(enModuleArg, FLASH_CTL_WRKEY_KEY1, enProcessArg);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            enErrorReg = FLASH__enWait(enModuleArg, enProcessArg, FLASH_TIMEOUT_MAX);
        }
        break;
    default:
        enErrorReg = FLASH_enERROR_VALUE;
        break;
    }
    return (enErrorReg);
}
