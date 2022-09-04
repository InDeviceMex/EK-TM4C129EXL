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

    /*NVIC__enEnableVector(NVIC_enVECTOR_FLASH, NVIC_enPRI7);*/


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
    return (enReturn);

}

void EEPROM__vDeInit (void)
{
    EEPROM__vClearReady();
    EEPROM__vDisInterruptVector();
}
