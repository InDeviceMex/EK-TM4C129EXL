/**
 *
 * @file FLASH_Init.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/FLASH/App/xHeader/FLASH_Init.h>
#include <xDriver_MCU/FLASH/Driver/FLASH_Driver.h>

FLASH_nSTATUS FLASH__enInit (void)
{
    /*
     * Process Status
     */
    FLASH_nSTATUS enReturn = FLASH_enOK;
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    pfIrqVectorHandler = FLASH__pvfGetIRQVectorHandler();
    FLASH__vRegisterIRQVectorHandler( pfIrqVectorHandler);
    /*
     * To return the final Function status,
     * if FLASH__enWait ends correctly all the process is OK
     */
    return enReturn;

}

void FLASH__vDeInit (void)
{
    FLASH__vDisInterruptSource(FLASH_enINT_ALL);
    FLASH__vDisInterruptVector();
}
