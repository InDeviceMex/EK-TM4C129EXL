/**
 *
 * @file FLASH_Init.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/FLASH/xHeader/FLASH_Init.h>

#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Dependencies.h>
#include <xApplication_MCU/FLASH/Interrupt/FLASH_Interrupt.h>

FLASH_nERROR FLASH__enInit (FLASH_nMODULE enModuleArg)
{
    FLASH_nERROR enErrorReg;
    FLASH_pvfIRQVectorHandler_t pfIrqVectorHandler;

    enErrorReg = (FLASH_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) FLASH_enMODULE_MAX);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        pfIrqVectorHandler = FLASH__pvfGetIRQVectorHandler(enModuleArg);
        enErrorReg = FLASH__enRegisterIRQVectorHandler(enModuleArg, pfIrqVectorHandler);
    }
    return (enErrorReg);

}

FLASH_nERROR FLASH__enDeInit (FLASH_nMODULE enModuleArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = FLASH__enDisableInterruptSourceByMask(enModuleArg, FLASH_enINTMASK_ALL);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        FLASH__enDisableInterruptVector(enModuleArg);
    }
    return (enErrorReg);
}
