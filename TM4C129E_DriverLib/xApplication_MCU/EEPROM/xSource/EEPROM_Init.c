/**
 *
 * @file EEPROM_Init.c
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
#include <xApplication_MCU/EEPROM/xHeader/EEPROM_Init.h>

#include <xApplication_MCU/EEPROM/Intrinsics/EEPROM_Intrinsics.h>
#include <xApplication_MCU/EEPROM/Interrupt/EEPROM_Interrupt.h>

/**
 *
 * @section Global Functions
 */
EEPROM_nERROR EEPROM__enInit (EEPROM_nMODULE enModuleArg)
{
    /*
     * Process Status
     */
    EEPROM_nERROR enErrorReg;
    EEPROM_pvfIRQSourceHandler_t pfIrqVectorHandler;

    enErrorReg = (EEPROM_nERROR) MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) EEPROM_enMODULE_MAX);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        /*
         * To Reinitialize Peripheral Clock
         */
        EEPROM__vSetReady();
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        pfIrqVectorHandler = EEPROM__pvfGetIRQVectorHandler(enModuleArg);
        enErrorReg = EEPROM__enRegisterIRQVectorHandler(enModuleArg, pfIrqVectorHandler);
    }

    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enWait(enModuleArg, EEPROM_TIMEOUT_MAX);
    }

    return (enErrorReg);

}

EEPROM_nERROR EEPROM__enDeInit (EEPROM_nMODULE enModuleArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enDisableInterruptVector(enModuleArg);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        EEPROM__vClearReady();
    }
    return (enErrorReg);
}
