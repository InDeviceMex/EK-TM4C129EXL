/**
 *
 * @file FLASH_key.c
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
 * @verbatim 19 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_key.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/FLASH/Driver/Intrinsics/FLASH_Intrinsics.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>

FLASH_nERROR FLASH__enGetCustomKey(FLASH_nMODULE enModuleArg, UBase_t* puxKeyArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxKeyArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        FLASH_Register_t stRegister;
        stRegister.uxShift = FLASH_PEKEY_R_PEKEY_BIT;
        stRegister.uxMask = FLASH_PEKEY_PEKEY_MASK;
        stRegister.uptrAddress = FLASH_PEKEY_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            *puxKeyArg = stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
