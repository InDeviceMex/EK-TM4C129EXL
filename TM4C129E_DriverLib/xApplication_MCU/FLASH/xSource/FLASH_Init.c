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

FLASH_nERROR FLASH__enInit (void)
{
    /*
     * Process Status
     */
    FLASH_nERROR enReturn = FLASH_enERROR_OK;
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    pfIrqVectorHandler = FLASH__pvfGetIRQVectorHandler();
    FLASH__vRegisterIRQVectorHandler( pfIrqVectorHandler);
    /*
     * To return the final Function status,
     * if FLASH__enWait ends correctly all the process is OK
     */
    return (enReturn);

}

void FLASH__vDeInit (void)
{
    FLASH__vDisInterruptSource(FLASH_enINT_ALL);
    FLASH__vDisInterruptVector();
}
