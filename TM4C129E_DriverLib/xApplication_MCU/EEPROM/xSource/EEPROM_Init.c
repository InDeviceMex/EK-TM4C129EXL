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
    void (*pfIrqVectorHandler) (void);

    pfIrqVectorHandler = EEPROM__pvfGetIRQVectorHandler();

    /*
     * To Reinitialize Peripheral Clock
     */
    EEPROM__vSetReady();
    EEPROM__vRegisterIRQVectorHandler(pfIrqVectorHandler);

    /*NVIC__enEnableVector(NVIC_enVECTOR_FLASH, NVIC_enPRI7);*/


    /*
     * To wait until EEPROM peripheral is ready
     */
    enErrorReg = EEPROM__enWait(enModuleArg, EEPROM_TIMEOUT_MAX);

    /*
     * To return the final Function status,
     * if EEPROM__enWait ends correctly all the process is OK
     */
    return (enErrorReg);

}

void EEPROM__vDeInit (void)
{
    EEPROM__vClearReady();
    EEPROM__vDisInterruptVector();
}
