/**
 *
 * @file EEPROM_WriteRegister.c
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
 * @verbatim 5 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Primitives/xHeader/EEPROM_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nERROR EEPROM__enWriteRegister(EEPROM_nMODULE enModuleArg, EEPROM_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    EEPROM_nERROR enErrorReg;
    if(0UL != (uint32_t) pstRegisterDataArg)
    {
        enErrorReg = (EEPROM_nERROR) MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) EEPROM_enMODULE_MAX);
        if(EEPROM_enERROR_OK == enErrorReg)
        {
            uptrModuleBase = EEPROM__uptrBlockBaseAddress(enModuleArg);
            pstRegisterDataArg->uptrAddress += uptrModuleBase;
            enErrorReg = (EEPROM_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
        }
    }
    else
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }

    return (enErrorReg);
}
