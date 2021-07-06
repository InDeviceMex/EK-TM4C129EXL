/**
 * @section Include Files
 */
#include <xDriver_MCU/EEPROM/App/xHeader/EEPROM_Init.h>

#include <xDriver_MCU/EEPROM/Driver/EEPROM_Driver.h>

/**
 *
 * @section Global Functions
 */
EEPROM_nSTATUS EEPROM__enInit (void)
{
    /*
     * Process Status
     */
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    pfIrqVectorHandler = EEPROM__pvfGetIRQVectorHandler();

    /*
     * To Reinitialize Peripheral Clock
     */
    EEPROM__vSetReady();
    EEPROM__vRegisterIRQVectorHandler(pfIrqVectorHandler);

    /*NVIC__vSetEnableIRQ(NVIC_enSTIR_FLASH, NVIC_enPRI7);*/


    /*
     * To wait until EEPROM peripheral is ready
     */
    enReturn = EEPROM__enWait();


    /*
     * To obtain the EEPROM Max Block and Max World allowed
     */
    EEPROM__vInitWorldCount();
    EEPROM__vInitBlockCount();
    /*
     * To return the final Function status,
     * if EEPROM__enWait ends correctly all the process is OK
     */
    return enReturn;

}

void EEPROM__vDeInit (void)
{
    EEPROM__vClearReady();
    EEPROM__vDisInterruptVector();
}

/*End File*/
